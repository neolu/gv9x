/********************************************************************************
** Form generated from reading UI file 'printdialog.ui'
**
** Created: Fri 2. Sep 20:55:12 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTDIALOG_H
#define UI_PRINTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_printDialog
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;
    QPushButton *printButton;

    void setupUi(QDialog *printDialog)
    {
        if (printDialog->objectName().isEmpty())
            printDialog->setObjectName(QString::fromUtf8("printDialog"));
        printDialog->resize(867, 651);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        printDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(printDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(printDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setReadOnly(true);

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeButton = new QPushButton(printDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        horizontalLayout->addWidget(closeButton);

        printButton = new QPushButton(printDialog);
        printButton->setObjectName(QString::fromUtf8("printButton"));

        horizontalLayout->addWidget(printButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(printDialog);
        QObject::connect(closeButton, SIGNAL(clicked()), printDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(printDialog);
    } // setupUi

    void retranslateUi(QDialog *printDialog)
    {
        printDialog->setWindowTitle(QApplication::translate("printDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("printDialog", "Close", 0, QApplication::UnicodeUTF8));
        printButton->setText(QApplication::translate("printDialog", "Print", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class printDialog: public Ui_printDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTDIALOG_H
