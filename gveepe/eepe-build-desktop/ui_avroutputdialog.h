/********************************************************************************
** Form generated from reading UI file 'avroutputdialog.ui'
**
** Created: Fri 2. Sep 20:55:12 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AVROUTPUTDIALOG_H
#define UI_AVROUTPUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_avrOutputDialog
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *avrOutputDialog)
    {
        if (avrOutputDialog->objectName().isEmpty())
            avrOutputDialog->setObjectName(QString::fromUtf8("avrOutputDialog"));
        avrOutputDialog->resize(926, 333);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        avrOutputDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(avrOutputDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        plainTextEdit = new QPlainTextEdit(avrOutputDialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setLineWrapMode(QPlainTextEdit::NoWrap);
        plainTextEdit->setReadOnly(true);
        plainTextEdit->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(plainTextEdit, 0, 0, 1, 1);


        retranslateUi(avrOutputDialog);

        QMetaObject::connectSlotsByName(avrOutputDialog);
    } // setupUi

    void retranslateUi(QDialog *avrOutputDialog)
    {
        avrOutputDialog->setWindowTitle(QApplication::translate("avrOutputDialog", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class avrOutputDialog: public Ui_avrOutputDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AVROUTPUTDIALOG_H
