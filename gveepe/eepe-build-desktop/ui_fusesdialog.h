/********************************************************************************
** Form generated from reading UI file 'fusesdialog.ui'
**
** Created: Sun 12. Feb 17:25:44 2012
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUSESDIALOG_H
#define UI_FUSESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_fusesDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *readFuses;
    QPushButton *resetFuses_EEprotect;
    QPushButton *resetFuses_EEdelete;
    QLabel *label;

    void setupUi(QDialog *fusesDialog)
    {
        if (fusesDialog->objectName().isEmpty())
            fusesDialog->setObjectName(QString::fromUtf8("fusesDialog"));
        fusesDialog->resize(374, 207);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/fuses.png"), QSize(), QIcon::Normal, QIcon::Off);
        fusesDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(fusesDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        readFuses = new QPushButton(fusesDialog);
        readFuses->setObjectName(QString::fromUtf8("readFuses"));

        gridLayout->addWidget(readFuses, 1, 0, 1, 2);

        resetFuses_EEprotect = new QPushButton(fusesDialog);
        resetFuses_EEprotect->setObjectName(QString::fromUtf8("resetFuses_EEprotect"));

        gridLayout->addWidget(resetFuses_EEprotect, 2, 0, 1, 1);

        resetFuses_EEdelete = new QPushButton(fusesDialog);
        resetFuses_EEdelete->setObjectName(QString::fromUtf8("resetFuses_EEdelete"));

        gridLayout->addWidget(resetFuses_EEdelete, 2, 1, 1, 1);

        label = new QLabel(fusesDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFrameShape(QFrame::Panel);
        label->setFrameShadow(QFrame::Raised);
        label->setLineWidth(2);

        gridLayout->addWidget(label, 0, 0, 1, 2);


        retranslateUi(fusesDialog);

        QMetaObject::connectSlotsByName(fusesDialog);
    } // setupUi

    void retranslateUi(QDialog *fusesDialog)
    {
        fusesDialog->setWindowTitle(QApplication::translate("fusesDialog", "Fuses", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        readFuses->setWhatsThis(QApplication::translate("fusesDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Reads the current fuses in the AVR AtMega 64 controller.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Proper states:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; t"
                        "ext-indent:0px;\"><span style=\" font-size:8pt;\">EEPROM erase fuse not set: 0E, 81, FF</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">EEPROM erase fuse set: 0E, 89, FF</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        readFuses->setText(QApplication::translate("fusesDialog", "Read Fuses", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        resetFuses_EEprotect->setWhatsThis(QApplication::translate("fusesDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; text-decoration: underline;\">Reset Fuses</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Fuses in the AVR tell it how to behave.  Pressing this button sets the fuses to the default parameters needed in the er9x FW.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><"
                        "/p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">This button also sets the &quot;EEPROM protect&quot; Fuse.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">This prevents erasing of the EEPROM when the flash memory is written.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; text-decoration: underline;\">WARNING</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Setting "
                        "fuses can lead to problems and even a total lockout from your controller.  Do this only if you know what you are doing.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">When in doubt consult either the project's page or the forums @ RCG and RXModelreviews.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">If you do get locked out - go to the project's homepage and lookup &quot;dealing with Fuse Bricks&quot;.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        resetFuses_EEprotect->setText(QApplication::translate("fusesDialog", "Reset Fuses\n"
"EEPROM - PROTECT", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        resetFuses_EEdelete->setWhatsThis(QApplication::translate("fusesDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; text-decoration: underline;\">Reset Fuses</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Fuses in the AVR tell it how to behave.  Pressing this button sets the fuses to the default parameters needed in the er9x FW.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><"
                        "/p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">This button also clears the &quot;EEPROM protect&quot; Fuse.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">This causes erasing of the EEPROM when the flash memory is written.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; text-decoration: underline;\">WARNING</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Setting "
                        "fuses can lead to problems and even a total lockout from your controller.  Do this only if you know what you are doing.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">When in doubt consult either the project's page or the forums @ RCG and RXModelreviews.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">If you do get locked out - go to the project's homepage and lookup &quot;dealing with Fuse Bricks&quot;.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        resetFuses_EEdelete->setText(QApplication::translate("fusesDialog", "Reset Fuses\n"
"EEPROM - DELETE", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("fusesDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; text-decoration: underline;\">WARNING</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600; text-decoration: underline;\"></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Changing the fuses can mess up your radio.</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px"
                        "; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Proceed only if you know what you are doing.</p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class fusesDialog: public Ui_fusesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUSESDIALOG_H
