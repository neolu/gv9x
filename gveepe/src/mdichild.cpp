/****************************************************************************
**
** Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial Usage
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Nokia.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights.  These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
** If you have questions regarding the use of this file, please contact
** Nokia at qt-info@nokia.com.
** $QT_END_LICENSE$
**
****************************************************************************/

#include <QtGui>

#include "mdichild.h"
#include "pers.h"
#include "modeledit.h"
#include "generaledit.h"
#include "avroutputdialog.h"
#include "burnconfigdialog.h"
#include "simulatordialog.h"
#include "printdialog.h"


MdiChild::MdiChild()
{
    setAttribute(Qt::WA_DeleteOnClose);
    //setWindowFlags(Qt::WindowTitleHint | Qt::WindowSystemMenuHint);

    fNotes.clear();
    for(int i=0; i<MAX_MODELS; i++)
        fNotes.append(QStringList("")); //make sure the list isn't empty.

    this->setFont(QFont("Courier New",12));
    refreshList();
    if(!(this->isMaximized() || this->isMinimized())) this->adjustSize();
    isUntitled = true;

    connect(this, SIGNAL(itemActivated(QListWidgetItem*)), this, SLOT(OpenEditWindow()));
    connect(this, SIGNAL(customContextMenuRequested(const QPoint&)),this, SLOT(ShowContextMenu(const QPoint&)));
    connect(this,SIGNAL(currentRowChanged(int)), this,SLOT(viableModelSelected(int)));

    setContextMenuPolicy(Qt::CustomContextMenu);
    setSelectionMode(QAbstractItemView::ExtendedSelection);
    setDragEnabled(true);
    setAcceptDrops(true);
    setDropIndicatorShown(true);

}

void MdiChild::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
        dragStartPosition = event->pos();

    QListWidget::mousePressEvent(event);
}

void MdiChild::mouseMoveEvent(QMouseEvent *event)
{
    if (!(event->buttons() & Qt::LeftButton))
        return;
    if ((event->pos() - dragStartPosition).manhattanLength()
         < QApplication::startDragDistance())
        return;

    QDrag *drag = new QDrag(this);

    QByteArray gmData;
    doCopy(&gmData);

    QMimeData *mimeData = new QMimeData;
    mimeData->setData("application/x-eepe", gmData);

    drag->setMimeData(mimeData);

    //Qt::DropAction dropAction =
            drag->exec(Qt::CopyAction);// | Qt::MoveAction);

    //if(dropAction==Qt::MoveAction)

    QListWidget::mouseMoveEvent(event);
}

void MdiChild::dragEnterEvent(QDragEnterEvent *event)
{
    if (event->mimeData()->hasFormat("application/x-eepe"))
    {
         event->acceptProposedAction();
         clearSelection();
         itemAt(event->pos())->setSelected(true);
    }
}

void MdiChild::dragMoveEvent(QDragMoveEvent *event)
{
    if (event->mimeData()->hasFormat("application/x-eepe"))
    {
         event->acceptProposedAction();
         clearSelection();
         itemAt(event->pos())->setSelected(true);
    }
}

void MdiChild::dropEvent(QDropEvent *event)
{
    int i = this->indexAt(event->pos()).row();
    //QMessageBox::warning(this, tr("eePe"),tr("Index :%1").arg(i));
    if(event->mimeData()->hasFormat("application/x-eepe"))
    {
        QByteArray gmData = event->mimeData()->data("application/x-eepe");
        doPaste(&gmData,i);
    }
    event->acceptProposedAction();
}

void MdiChild::refreshList()
{
    clear();
    char buf[20];

    eeFile.eeLoadOwnerName(buf,sizeof(buf));
    QString str = QString(buf).trimmed();
    if(!str.isEmpty())
        str.prepend(" - ");
    addItem(tr("General Settings") + str);

    for(uint8_t i=0; i<MAX_MODELS; i++)
    {
        eeFile.eeLoadModelName(i,buf,sizeof(buf));
        addItem(QString::fromAscii(buf,MODEL_NAME_LEN+4));
    }

}

int getValueFromLine(const QString &line, int pos, int len=2)
{
    bool ok;
    int hex = line.mid(pos,len).toInt(&ok, 16);
    return ok ? hex : -1;
}


void MdiChild::cut()
{
    copy();
    deleteSelected(false);
}

void MdiChild::deleteSelected(bool ask=true)
{
    QMessageBox::StandardButton ret = QMessageBox::No;

    if(ask)
        ret = QMessageBox::warning(this, "eePe",
                 tr("Delete Selected Models?"),
                 QMessageBox::Yes | QMessageBox::No);


    if ((ret == QMessageBox::Yes) || (!ask))
    {
           foreach(QModelIndex index, this->selectionModel()->selectedIndexes())
           {
               if(index.row()>0)eeFile.DeleteModel(index.row());
           }
           setModified();
    }
}


void MdiChild::doCopy(QByteArray *gmData)
{
    foreach(QModelIndex index, this->selectionModel()->selectedIndexes())
    {
        if(!index.row())
        {
            EEGeneral tgen;
            if(eeFile.getGeneralSettings(&tgen))
            {
                gmData->append('G');
                gmData->append((char*)&tgen,sizeof(tgen));
            }
        }
        else
        {
            ModelData tmod;
            if(eeFile.getModel(&tmod,index.row()-1))
            {
                gmData->append('M');
                gmData->append((char*)&tmod,sizeof(tmod));
            }
        }
    }
}

void MdiChild::copy()
{
    QByteArray gmData;
    doCopy(&gmData);

    QMimeData *mimeData = new QMimeData;
    mimeData->setData("application/x-eepe", gmData);

    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setMimeData(mimeData,QClipboard::Clipboard);
}

void MdiChild::doPaste(QByteArray *gmData, int index)
{
    //QByteArray gmData = mimeD->data("application/x-eepe");
    char *gData = gmData->data();//new char[gmData.size() + 1];
    int i = 0;
    int id = index;
    if(!id) id++;

    while((i<gmData->size()) && (id<=MAX_MODELS))
    {
        char c = *gData;
        i++;
        gData++;
        if(c=='G')  //general settings
        {
            if(!eeFile.putGeneralSettings((EEGeneral*)gData))
            {
                QMessageBox::critical(this, tr("Error"),tr("Unable set data!"));
                break;
            }
            gData += sizeof(EEGeneral);
            i     += sizeof(EEGeneral);
        }
        else //model data
        {
            if(!eeFile.putModel((ModelData*)gData,id-1))
            {
                QMessageBox::critical(this, tr("Error"),tr("Unable set model!"));
                break;
            }
            gData += sizeof(ModelData);
            i     += sizeof(ModelData);
            id++;
        }
    }
    setModified();
}

bool MdiChild::hasPasteData()
{
    const QClipboard *clipboard = QApplication::clipboard();
    const QMimeData *mimeData = clipboard->mimeData();

    return mimeData->hasFormat("application/x-eepe");
}

void MdiChild::paste()
{
    if(hasPasteData())
    {
        const QClipboard *clipboard = QApplication::clipboard();
        const QMimeData *mimeData = clipboard->mimeData();

        QByteArray gmData = mimeData->data("application/x-eepe");
        doPaste(&gmData,this->currentRow());
    }

}

QString iHEXLine(quint8 * data, quint16 addr, quint8 len)
{
    QString str = QString(":%1%2000").arg(len,2,16,QChar('0')).arg(addr,4,16,QChar('0')); //write start, bytecount (32), address and record type
    quint8 chkSum = 0;
    chkSum = -len; //-bytecount; recordtype is zero
    chkSum -= addr & 0xFF;
    chkSum -= addr >> 8;
    for(int j=0; j<len; j++)
    {
        str += QString("%1").arg(data[addr+j],2,16,QChar('0'));
        chkSum -= data[addr+j];
    }

    str += QString("%1").arg(chkSum,2,16,QChar('0'));
    return str.toUpper(); // output to file and lf;
}

bool MdiChild::loadiHEX(QString fileName, quint8 * data, int datalen, QString header)
{
    //load from intel hex type file
    QFile file(fileName);

    if(!file.exists())
    {
        QMessageBox::critical(this, tr("Error"),tr("Unable to find file %1!").arg(fileName));
        return false;
    }

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {  //reading HEX TEXT file
        QMessageBox::critical(this, tr("Error"),
                              tr("Error opening file %1:\n%2.")
                              .arg(fileName)
                              .arg(file.errorString()));
        return false;
    }

    memset(data,0,datalen);

    QTextStream in(&file);

    if(!header.isEmpty())
    {
        QString hline = in.readLine();

        if(hline!=header)
        {
            QMessageBox::critical(this, tr("Error"),
                                  tr("Invalid EEPE File Format %1")
                                  .arg(fileName));
            file.close();
            return false;
        }
    }

    while (!in.atEnd())
    {
        QString line = in.readLine();

        if(line.left(1)!=":") continue;

        int byteCount = getValueFromLine(line,1);
        int address = getValueFromLine(line,3,4);
        int recType = getValueFromLine(line,7);

        if(byteCount<0 || address<0 || recType<0)
        {
            QMessageBox::critical(this, tr("Error"),tr("Error reading file %1!").arg(fileName));
            file.close();
            return false;
        }

        QByteArray ba;
        ba.clear();

        quint8 chkSum = 0;
        chkSum -= byteCount;
        chkSum -= recType;
        chkSum -= address & 0xFF;
        chkSum -= address >> 8;
        for(int i=0; i<byteCount; i++)
        {
            quint8 v = getValueFromLine(line,(i*2)+9) & 0xFF;
            chkSum -= v;
            ba.append(v);
        }


        quint8 retV = getValueFromLine(line,(byteCount*2)+9) & 0xFF;
        if(chkSum!=retV) {
            QMessageBox::critical(this, tr("Error"),tr("Checksum Error reading file %1!").arg(fileName));
            file.close();
            return false;
        }

        if((recType == 0x00) && ((address+byteCount)<=datalen)) //data record - ba holds record
            memcpy(&data[address],ba.data(),byteCount);

    }

    file.close();
    return true;
}

bool MdiChild::saveiHEX(QString fileName, quint8 * data, int datalen, QString header, int notesIndex)
{
    QFile file(fileName);


    //open file
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, tr("Error"),
                             tr("Cannot write file %1:\n%2.")
                             .arg(fileName)
                             .arg(file.errorString()));
        return false;
    }

    QTextStream out(&file);

    //write file header in Intel HEX format
    if(!header.isEmpty())
    {
        out << header << "\n";
    }

    int addr = 0;

    while (addr<datalen)
    {
        int llen = 32;
        if((datalen-addr)<llen)
            llen = datalen-addr;

        out << iHEXLine(data, addr, llen) << "\n";

        addr += llen;
    }

    out << ":00000001FF";  // write EOF

//    if(notesIndex==NOTES_ALL)
//    {
//        out << "\n" << QString("%1 LISTS").arg(fNotes.size()) << "\n";

//        int idx = 0;
//        foreach(QStringList qsl, fNotes)
//        {
//            out << QString("%1 ITEM#").arg(idx) << "\n";
//            out << QString("%1 ITEM SIZE").arg(qsl.size()) << "\n";
//            foreach(QString nt, qsl)
//            {
//                out << nt << "\n";
//            }
//            idx++;
//        }
//    }
//    else if(notesIndex>NOTES_NONE)
//    {
//        out << "\n";
//        out << QString("1 LISTS") << "\n";
//        out << QString("0 ITEM#") << "\n";
//        out << QString("%1 ITEM SIZE").arg(fNotes[notesIndex].size()) << "\n";
//        foreach(QString nt, fNotes[notesIndex])
//        {
//            out << nt << "\n";
//        }
//    }

    file.close();

    return true;
}

bool MdiChild::loadModelFromFile(QString fn)
{
    int cmod = currentRow()-1;
    bool genfile = currentRow()==0;

    QString fileName;
    QSettings settings("er9x-eePe", "eePe");


    if(!fn.isEmpty())
    {
        if(!QFileInfo(fn).exists())
        {
            QMessageBox::critical(this, tr("Error"),
                                  tr("Coulden't find %1")
                                  .arg(fn));
            return false;
        }

        fileName = fn;
    }
    else if(genfile)
    {
        char buf[sizeof(EEGeneral().ownerName)+1];

        eeFile.eeLoadOwnerName(buf,sizeof(buf));
        QString str = QString(buf).trimmed();
        if(!str.isEmpty())
        {
            int ret = QMessageBox::warning(this, "eePe",
                                           tr("Overwrite Current Settings?"),
                                           QMessageBox::Yes | QMessageBox::No);
            if(ret != QMessageBox::Yes)
                return false;
        }

        //get file to load
        fileName = QFileDialog::getOpenFileName(this,tr("Open"),settings.value("lastDir").toString(),tr(EEPG_FILES_FILTER));
    }
    else
    {
        //if slot is used - confirm overwrite
        if(eeFile.eeModelExists(cmod))
        {
            char buf[sizeof(ModelData().name)+1];
            eeFile.getModelName(cmod,(char*)&buf);
            QString cmodelName = QString(buf).trimmed();
            int ret = QMessageBox::warning(this, "eePe",
                                           tr("Overwrite %1?").arg(cmodelName),
                                           QMessageBox::Yes | QMessageBox::No);
            if(ret != QMessageBox::Yes)
                return false;
        }

        //get file to load
        fileName = QFileDialog::getOpenFileName(this,tr("Open"),settings.value("lastDir").toString(),tr(EEPM_FILES_FILTER));
    }

    if (fileName.isEmpty())
        return false;

    settings.setValue("lastDir",QFileInfo(fileName).dir().absolutePath());

    quint8 temp[WRITESIZE];

    if(genfile)
    {
        if(!loadiHEX(fileName, (quint8*)&temp, sizeof(EEGeneral), EEPE_GENERAL_FILE_HEADER))
            return false;

        if(!eeFile.putGeneralSettings((EEGeneral*)&temp))
        {
            QMessageBox::critical(this, tr("Error"),
                                  tr("Error writing to container"));
            return false;
        }
    }
    else
    {
        if(!loadiHEX(fileName, (quint8*)&temp, sizeof(ModelData), EEPE_MODEL_FILE_HEADER))
            return false;

        if(!eeFile.putModel((ModelData*)&temp,cmod))
        {
            QMessageBox::critical(this, tr("Error"),
                                  tr("Error writing to container"));
            return false;
        }
    }

    refreshList();
    setModified();

    return true;
}

void MdiChild::saveModelToFile()
{
    int cmod = currentRow()-1;
    bool genfile = currentRow()==0;

    ModelData tmod;
    EEGeneral tgen;
    QString fileName;
    QSettings settings("er9x-eePe", "eePe");


    if(genfile)
    {
        if(!eeFile.getGeneralSettings(&tgen))
        {
            QMessageBox::critical(this, tr("Error"),tr("Error Getting General Settings Data"));
            return;
        }

        QString ownerName = QString::fromAscii(tgen.ownerName,sizeof(tgen.ownerName)).trimmed() + ".eepg";

        fileName = QFileDialog::getSaveFileName(this, tr("Save Settings As"),settings.value("lastDir").toString() + "/" +ownerName,tr(EEPG_FILES_FILTER));
    }
    else
    {
        if(!eeFile.eeModelExists(cmod))
        {
            //            QMessageBox::critical(this, tr("Error"),tr("Error Getting Model #%1").arg(cmod+1));
            return;
        }

        if(!eeFile.getModel(&tmod,cmod))
        {
            QMessageBox::critical(this, tr("Error"),tr("Error Getting Model #%1").arg(cmod+1));
            return;
        }

        QString modelName = QString::fromAscii(tmod.name,sizeof(tmod.name)).trimmed() + ".eepm";

        fileName = QFileDialog::getSaveFileName(this, tr("Save Model As"),settings.value("lastDir").toString() + "/" +modelName,tr(EEPM_FILES_FILTER));
    }

    if (fileName.isEmpty())
        return;

    settings.setValue("lastDir",QFileInfo(fileName).dir().absolutePath());

    if(genfile)
        saveiHEX(fileName, (quint8*)&tgen, sizeof(tgen), EEPE_GENERAL_FILE_HEADER);
    else
        saveiHEX(fileName, (quint8*)&tmod, sizeof(tmod), EEPE_MODEL_FILE_HEADER, cmod);
}

void MdiChild::duplicate()
{
    int i = this->currentRow();
    if(i && i<MAX_MODELS)
    {
        ModelData gmodel;
        if(eeFile.getModel(&gmodel,--i))
        {
            int j = i+1;
            while(j<MAX_MODELS && eeFile.eeModelExists(j)) j++;
            if(j<MAX_MODELS) eeFile.putModel(&gmodel,j);
        }
        setModified();
    }
}

bool MdiChild::hasSelection()
{
    return (this->selectionModel()->hasSelection());
}

void MdiChild::keyPressEvent(QKeyEvent *event)
{


    if(event->matches(QKeySequence::Delete))
    {
        deleteSelected();
        return;
    }

    if(event->matches(QKeySequence::Cut))
    {
        cut();
        return;
    }

    if(event->matches(QKeySequence::Copy))
    {
        copy();
        return;
    }

    if(event->matches(QKeySequence::Paste))
    {
        paste();
        return;
    }

    if(event->matches(QKeySequence::Underline))
    {
        duplicate();
        return;
    }



    QListWidget::keyPressEvent(event);//run the standard event in case we didn't catch an action
}


void MdiChild::OpenEditWindow()
{
    int i = this->currentRow();

    if(i)
    {
        //TODO error checking
        bool isNew = false;

        if(!eeFile.eeModelExists((uint8_t)i-1))
        {
            eeFile.modelDefault(i-1);
            isNew = true;//modeledit - clear mixes, apply first template
            setModified();
        }

        char buf[sizeof(ModelData().name)+1];
        eeFile.getModelName((i-1),(char*)&buf);
        ModelEdit *t = new ModelEdit(&eeFile,(i-1),this);
        if(isNew) t->applyBaseTemplate();
        t->setWindowTitle(tr("Editing model %1: ").arg(i) + QString(buf));
        connect(t,SIGNAL(modelValuesChanged()),this,SLOT(setModified()));
        //t->exec();
        t->show();
    }
    else
    {
        //TODO error checking
        if(eeFile.eeLoadGeneral())
        {
            //setModified();
            GeneralEdit *t = new GeneralEdit(&eeFile, this);
            connect(t,SIGNAL(modelValuesChanged()),this,SLOT(setModified()));
            t->show();
        }
        else
            QMessageBox::critical(this, tr("Error"),tr("Unable to read settings!"));
    }

}

void MdiChild::newFile()
{
    static int sequenceNumber = 1;

    isUntitled = true;
    curFile = tr("document%1.eepe").arg(sequenceNumber++);
    setWindowTitle(curFile + "[*]");

}

bool MdiChild::loadFile(const QString &fileName, bool resetCurrentFile)
{
    if(!QFileInfo(fileName).exists())
    {
        QMessageBox::critical(this, tr("Error"),tr("Unable to find file %1!").arg(fileName));
        return false;
    }


    int fileType = getFileType(fileName);

    if(fileType==FILE_TYPE_EEPM || fileType==FILE_TYPE_EEPG)
    {
        //load new file and paste in
        newFile();

        setCurrentRow(fileType==FILE_TYPE_EEPG ? 0 : 1);
        if(!loadModelFromFile(fileName))
        {
            QMessageBox::critical(this, tr("Error"),
                                 tr("Error loading file %1:\n"
                                    "File may be corrupted, old or from a different system.")
                                 .arg(fileName));
            return false;
        }

        refreshList();
        if(resetCurrentFile) setCurrentFile(fileName);

        return true;
    }

    if(fileType==FILE_TYPE_HEX || fileType==FILE_TYPE_EEPE) //read HEX file
    {
        if((QFileInfo(fileName).size()>(6*1024)) || (QFileInfo(fileName).size()<(4*1024)))  //if filesize> 6k and <4kb
        {
            QMessageBox::critical(this, tr("Error"),tr("Error reading file:\n"
                                                       "File wrong size - %1\n"
                                                       "This might be a FW file. You might want to try burning it to the TX.\n"
                                                       "(Burn->Write Flash Memory)").arg(fileName));
            return false;
        }

        quint8 temp[EESIZE];

        QString header ="";
        if(fileType==FILE_TYPE_EEPE)   // read EEPE file header
            header=EEPE_EEPROM_FILE_HEADER;

        if(!loadiHEX(fileName, (quint8*)&temp, EESIZE, header))
            return false;


        if(!eeFile.loadFile(&temp))
        {
            QMessageBox::critical(this, tr("Error"),
                                 tr("Error loading file %1:\n"
                                    "File may be corrupted, old or from a different system.")
                                 .arg(fileName));
            return false;
        }
        refreshList();
        if(resetCurrentFile) setCurrentFile(fileName);

        return true;
    }


    if(fileType==FILE_TYPE_BIN) //read binary
    {
        QFile file(fileName);

        if(file.size()!=EESIZE)
        {
            QMessageBox::critical(this, tr("Error"),tr("Error reading file:\n"
                                                       "File wrong size - %1").arg(fileName));
            return false;
        }

        if (!file.open(QFile::ReadOnly)) {  //reading binary file   - TODO HEX support
            QMessageBox::critical(this, tr("Error"),
                                 tr("Error opening file %1:\n%2.")
                                 .arg(fileName)
                                 .arg(file.errorString()));
            return false;
        }

        uint8_t temp[EESIZE];
        long result = file.read((char*)&temp,EESIZE);
        file.close();

        if (result!=EESIZE)
        {
            QMessageBox::critical(this, tr("Error"),
                                 tr("Error reading file %1:\n%2.")
                                 .arg(fileName)
                                 .arg(file.errorString()));

            return false;
        }

        if(!eeFile.loadFile(&temp))
        {
            QMessageBox::critical(this, tr("Error"),
                                 tr("Error loading file %1:\n"
                                    "File may be corrupted, old or from a different system.")
                                 .arg(fileName));
            return false;
        }
        refreshList();
        if(resetCurrentFile) setCurrentFile(fileName);

        return true;
    }

    return false;
}

bool MdiChild::save()
{
    if (isUntitled) {
        return saveAs();
    } else {
        return saveFile(curFile);
    }
}

bool MdiChild::saveAs()
{
    QSettings settings("er9x-eePe", "eePe");
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save As"),settings.value("lastDir").toString() + "/" +curFile,tr(EEPROM_FILES_FILTER));
    if (fileName.isEmpty())
        return false;

    settings.setValue("lastDir",QFileInfo(fileName).dir().absolutePath());
    return saveFile(fileName);
}

bool MdiChild::saveFile(const QString &fileName, bool setCurrent)
{
    QFile file(fileName);

    int fileType = getFileType(fileName);

    if(fileType==FILE_TYPE_HEX || fileType==FILE_TYPE_EEPE) //write hex
    {
        quint8 temp[EESIZE];
        eeFile.saveFile(&temp);
        QString header = "";
        if(fileType==FILE_TYPE_EEPE)
            header = EEPE_EEPROM_FILE_HEADER;
        saveiHEX(fileName, (quint8*)&temp, EESIZE, header, NOTES_ALL);


        if(setCurrent) setCurrentFile(fileName);
        return true;
    }

    if(fileType==FILE_TYPE_BIN) //write binary
    {
        if (!file.open(QFile::WriteOnly)) {
            QMessageBox::warning(this, tr("Error"),
                                 tr("Cannot write file %1:\n%2.")
                                 .arg(fileName)
                                 .arg(file.errorString()));
            return false;
        }

        uint8_t temp[EESIZE];
        eeFile.saveFile(&temp);

        long result = file.write((char*)&temp,EESIZE);
        if(result!=EESIZE)
        {
            QMessageBox::warning(this, tr("Error"),
                                 tr("Error writing file %1:\n%2.")
                                 .arg(fileName)
                                 .arg(file.errorString()));
            return false;
        }

        if(setCurrent) setCurrentFile(fileName);
        return true;
    }

    return false;
}

QString MdiChild::userFriendlyCurrentFile()
{
    return strippedName(curFile);
}

void MdiChild::closeEvent(QCloseEvent *event)
{
    if (maybeSave()) {
        event->accept();
    } else {
        event->ignore();
    }
}

void MdiChild::documentWasModified()
{
    setWindowModified(eeFile.Changed());
}

bool MdiChild::maybeSave()
{
    if (eeFile.Changed()) {
        QMessageBox::StandardButton ret;
        ret = QMessageBox::warning(this, tr("eePe"),
                     tr("'%1' has been modified.\n"
                        "Do you want to save your changes?")
                     .arg(userFriendlyCurrentFile()),
                     QMessageBox::Save | QMessageBox::Discard
                     | QMessageBox::Cancel);
        if (ret == QMessageBox::Save)
            return save();
        else if (ret == QMessageBox::Cancel)
            return false;
    }
    return true;

}

void MdiChild::setCurrentFile(const QString &fileName)
{
    curFile = QFileInfo(fileName).canonicalFilePath();
    isUntitled = false;
    eeFile.setChanged(false);
    setWindowModified(false);
    setWindowTitle(userFriendlyCurrentFile() + "[*]");
}

QString MdiChild::strippedName(const QString &fullFileName)
{
    return QFileInfo(fullFileName).fileName();
}

int MdiChild::getFileType(const QString &fullFileName)
{
    if(QFileInfo(fullFileName).suffix().toUpper()=="HEX")  return FILE_TYPE_HEX;
    if(QFileInfo(fullFileName).suffix().toUpper()=="BIN")  return FILE_TYPE_BIN;
    if(QFileInfo(fullFileName).suffix().toUpper()=="EEPM") return FILE_TYPE_EEPM;
    if(QFileInfo(fullFileName).suffix().toUpper()=="EEPG") return FILE_TYPE_EEPG;
    if(QFileInfo(fullFileName).suffix().toUpper()=="EEPE") return FILE_TYPE_EEPE;
    return 0;
}

void MdiChild::burnTo()  // write to Tx
{

    QMessageBox::StandardButton ret = QMessageBox::question(this, tr("eePe"),
                 tr("Write %1 to EEPROM memory?").arg(strippedName(curFile)),
                 QMessageBox::Yes | QMessageBox::No);


    if (ret == QMessageBox::Yes)
    {
        burnConfigDialog bcd;
        QString avrdudeLoc = bcd.getAVRDUDE();
        QString tempDir    = QDir::tempPath();
        QString programmer = bcd.getProgrammer();
        QStringList args   = bcd.getAVRArgs();
        if(!bcd.getPort().isEmpty()) args << "-P" << bcd.getPort();

        QString tempFile = tempDir + "/temp.hex";
        saveFile(tempFile, false);
        if(!QFileInfo(tempFile).exists())
        {
            QMessageBox::critical(this,tr("Error"), tr("Cannot write temporary file!"));
            return;
        }
        QString str = "eeprom:w:" + tempFile + ":i"; // writing eeprom -> MEM:OPR:FILE:FTYPE"

        QStringList arguments;
        arguments << "-c" << programmer << "-p" << "m64" << args << "-U" << str;

        avrOutputDialog *ad = new avrOutputDialog(this, avrdudeLoc, arguments, "Write EEPROM To Tx", AVR_DIALOG_SHOW_DONE);
        ad->setWindowIcon(QIcon(":/images/write_eeprom.png"));
        ad->show();
    }
}

bool MdiChild::saveToFileEnabled()
{
    int crow = currentRow();
    if(crow==0)
        return true;

    return eeFile.eeModelExists(crow-1);
}

void MdiChild::ShowContextMenu(const QPoint& pos)
{
    QPoint globalPos = this->mapToGlobal(pos);

    const QClipboard *clipboard = QApplication::clipboard();
    const QMimeData *mimeData = clipboard->mimeData();
    bool hasData = mimeData->hasFormat("application/x-eepe");

    QMenu contextMenu;
    contextMenu.addAction(QIcon(":/images/edit.png"), tr("&Edit"),this,SLOT(OpenEditWindow()));
    contextMenu.addSeparator();
    contextMenu.addAction(QIcon(":/images/clear.png"), tr("&Delete"),this,SLOT(deleteSelected(bool)),tr("Delete"));
    contextMenu.addAction(QIcon(":/images/copy.png"), tr("&Copy"),this,SLOT(copy()),tr("Ctrl+C"));
    contextMenu.addAction(QIcon(":/images/cut.png"), tr("&Cut"),this,SLOT(cut()),tr("Ctrl+X"));
    contextMenu.addAction(QIcon(":/images/paste.png"), tr("&Paste"),this,SLOT(paste()),tr("Ctrl+V"))->setEnabled(hasData);
    contextMenu.addAction(QIcon(":/images/duplicate.png"), tr("D&uplicate"),this,SLOT(duplicate()),tr("Ctrl+U"));
    contextMenu.addSeparator();
    contextMenu.addAction(QIcon(":/images/load_model.png"), tr("&Load Model/Settings"),this,SLOT(loadModelFromFile()),tr("Ctrl+L"));
    contextMenu.addAction(QIcon(":/images/save_model.png"), tr("&Save Model/Settings"),this,SLOT(saveModelToFile()),tr("Ctrl+S"))->setEnabled(saveToFileEnabled());
    contextMenu.addSeparator();
    contextMenu.addAction(QIcon(":/images/simulate.png"), tr("Simulate"),this,SLOT(simulate()),tr("Alt+S"));
    contextMenu.addSeparator();
    contextMenu.addAction(QIcon(":/images/write_eeprom.png"), tr("&Write To Tx"),this,SLOT(burnTo()),tr("Ctrl+Alt+W"));

    contextMenu.exec(globalPos);
}

void MdiChild::setModified()
{
    refreshList();
    eeFile.setChanged(true);
    documentWasModified();
}

void MdiChild::simulate()
{
    if(currentRow()<1) return;

    EEGeneral gg;
    if(!eeFile.getGeneralSettings(&gg)) return;

    ModelData gm;
    if(!eeFile.getModel(&gm,currentRow()-1)) return;

    simulatorDialog *sd = new simulatorDialog(this);
    sd->loadParams(gg,gm);
    sd->show();
}

void MdiChild::print()
{
    if(currentRow()<1) return;

    EEGeneral gg;
    if(!eeFile.getGeneralSettings(&gg)) return;

    ModelData gm;
    if(!eeFile.getModel(&gm,currentRow()-1)) return;

    printDialog *pd = new printDialog(this, &gg, &gm);
    pd->show();
}

void MdiChild::viableModelSelected(int idx)
{
    if(!isVisible())
        emit copyAvailable(false);
    else if(idx<1)
        emit copyAvailable(false);
    else
        emit copyAvailable(eeFile.eeModelExists(currentRow()-1));

    emit saveModelToFileAvailable(saveToFileEnabled());
}




