/********************************************************************************
** Form generated from reading UI file 'donatorsdialog.ui'
**
** Created: Sun 12. Feb 17:25:44 2012
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DONATORSDIALOG_H
#define UI_DONATORSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_donatorsDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *donatorsDialog)
    {
        if (donatorsDialog->objectName().isEmpty())
            donatorsDialog->setObjectName(QString::fromUtf8("donatorsDialog"));
        donatorsDialog->resize(795, 536);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        donatorsDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(donatorsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(donatorsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(donatorsDialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setReadOnly(true);

        gridLayout->addWidget(plainTextEdit, 0, 0, 1, 1);


        retranslateUi(donatorsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), donatorsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), donatorsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(donatorsDialog);
    } // setupUi

    void retranslateUi(QDialog *donatorsDialog)
    {
        donatorsDialog->setWindowTitle(QApplication::translate("donatorsDialog", "List of Contributors", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class donatorsDialog: public Ui_donatorsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DONATORSDIALOG_H
