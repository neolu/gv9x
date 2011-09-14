/********************************************************************************
** Form generated from reading UI file 'burnconfigdialog.ui'
**
** Created: Fri 2. Sep 20:55:11 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BURNCONFIGDIALOG_H
#define UI_BURNCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_burnConfigDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *avrdude_location;
    QPushButton *pushButton;
    QLabel *label_2;
    QComboBox *avrdude_programmer;
    QPushButton *pushButton_3;
    QLineEdit *avrArgs;
    QLabel *label_3;
    QPushButton *pushButton_4;
    QComboBox *avrdude_port;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_4;
    QComboBox *avrdude_mcu;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *burnConfigDialog)
    {
        if (burnConfigDialog->objectName().isEmpty())
            burnConfigDialog->setObjectName(QString::fromUtf8("burnConfigDialog"));
        burnConfigDialog->resize(620, 257);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        burnConfigDialog->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(burnConfigDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        avrdude_location = new QLineEdit(burnConfigDialog);
        avrdude_location->setObjectName(QString::fromUtf8("avrdude_location"));
        avrdude_location->setText(QString::fromUtf8(""));

        gridLayout->addWidget(avrdude_location, 0, 2, 1, 1);

        pushButton = new QPushButton(burnConfigDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 4, 2, 1);

        label_2 = new QLabel(burnConfigDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        avrdude_programmer = new QComboBox(burnConfigDialog);
        avrdude_programmer->insertItems(0, QStringList()
         << QString::fromUtf8("c2n232i")
         << QString::fromUtf8("dasa3")
         << QString::fromUtf8("dasa")
         << QString::fromUtf8("siprog")
         << QString::fromUtf8("ponyser")
         << QString::fromUtf8("89isp")
         << QString::fromUtf8("frank-stk200")
         << QString::fromUtf8("blaster")
         << QString::fromUtf8("ere-isp-avr")
         << QString::fromUtf8("atisp")
         << QString::fromUtf8("dapa")
         << QString::fromUtf8("xil")
         << QString::fromUtf8("futurlec")
         << QString::fromUtf8("abcmini")
         << QString::fromUtf8("picoweb")
         << QString::fromUtf8("sp12")
         << QString::fromUtf8("alf")
         << QString::fromUtf8("bascom")
         << QString::fromUtf8("dt006")
         << QString::fromUtf8("pony-stk200")
         << QString::fromUtf8("stk200")
         << QString::fromUtf8("bsd")
         << QString::fromUtf8("pavr")
         << QString::fromUtf8("dragon_pdi")
         << QString::fromUtf8("dragon_dw")
         << QString::fromUtf8("dragon_hvsp")
         << QString::fromUtf8("dragon_pp")
         << QString::fromUtf8("dragon_isp")
         << QString::fromUtf8("dragon_jtag")
         << QString::fromUtf8("jtag2pdi")
         << QString::fromUtf8("jtag2avr32")
         << QString::fromUtf8("jtagmkII_avr32")
         << QString::fromUtf8("jtag2dw")
         << QString::fromUtf8("jtag2isp")
         << QString::fromUtf8("jtag2")
         << QString::fromUtf8("jtag2fast")
         << QString::fromUtf8("jtag2slow")
         << QString::fromUtf8("jtagmkII")
         << QString::fromUtf8("jtag1slow")
         << QString::fromUtf8("jtag1")
         << QString::fromUtf8("jtagmkI")
         << QString::fromUtf8("avr911")
         << QString::fromUtf8("avr109")
         << QString::fromUtf8("butterfly")
         << QString::fromUtf8("usbtiny")
         << QString::fromUtf8("usbasp")
         << QString::fromUtf8("avr910")
         << QString::fromUtf8("stk600hvsp")
         << QString::fromUtf8("stk600pp")
         << QString::fromUtf8("stk600")
         << QString::fromUtf8("stk500hvsp")
         << QString::fromUtf8("stk500pp")
         << QString::fromUtf8("stk500v2")
         << QString::fromUtf8("mib510")
         << QString::fromUtf8("stk500v1")
         << QString::fromUtf8("stk500")
         << QString::fromUtf8("buspirate")
         << QString::fromUtf8("avrisp2")
         << QString::fromUtf8("avrispmkII")
         << QString::fromUtf8("avrispv2")
         << QString::fromUtf8("avrisp")
         << QString::fromUtf8("arduino")
        );
        avrdude_programmer->setObjectName(QString::fromUtf8("avrdude_programmer"));
        avrdude_programmer->setInsertPolicy(QComboBox::InsertAlphabetically);

        gridLayout->addWidget(avrdude_programmer, 2, 2, 1, 1);

        pushButton_3 = new QPushButton(burnConfigDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 2, 4, 1, 1);

        avrArgs = new QLineEdit(burnConfigDialog);
        avrArgs->setObjectName(QString::fromUtf8("avrArgs"));
        avrArgs->setText(QString::fromUtf8(""));

        gridLayout->addWidget(avrArgs, 5, 2, 1, 1);

        label_3 = new QLabel(burnConfigDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        pushButton_4 = new QPushButton(burnConfigDialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 5, 4, 1, 1);

        avrdude_port = new QComboBox(burnConfigDialog);
        avrdude_port->addItem(QString::fromUtf8(""));
        avrdude_port->addItem(QString::fromUtf8("usb"));
        avrdude_port->addItem(QString::fromUtf8("com1"));
        avrdude_port->addItem(QString::fromUtf8("com2"));
        avrdude_port->addItem(QString::fromUtf8("com3"));
        avrdude_port->addItem(QString::fromUtf8("com4"));
        avrdude_port->addItem(QString::fromUtf8("lpt1"));
        avrdude_port->addItem(QString::fromUtf8("lpt2"));
        avrdude_port->addItem(QString::fromUtf8("lpt3"));
        avrdude_port->addItem(QString::fromUtf8("lpt4"));
        avrdude_port->addItem(QString());
        avrdude_port->setObjectName(QString::fromUtf8("avrdude_port"));

        gridLayout->addWidget(avrdude_port, 4, 2, 1, 1);

        label_5 = new QLabel(burnConfigDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label = new QLabel(burnConfigDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(burnConfigDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        avrdude_mcu = new QComboBox(burnConfigDialog);
        avrdude_mcu->setObjectName(QString::fromUtf8("avrdude_mcu"));
        avrdude_mcu->setInsertPolicy(QComboBox::InsertAlphabetically);

        gridLayout->addWidget(avrdude_mcu, 3, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(burnConfigDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(burnConfigDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), burnConfigDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), burnConfigDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(burnConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *burnConfigDialog)
    {
        burnConfigDialog->setWindowTitle(QApplication::translate("burnConfigDialog", "AVRDUDE Configuration", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        avrdude_location->setToolTip(QApplication::translate("burnConfigDialog", "Location of AVRDUDE executable", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        avrdude_location->setWhatsThis(QApplication::translate("burnConfigDialog", "The location of the AVRDUDE.EXE executable.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        pushButton->setWhatsThis(QApplication::translate("burnConfigDialog", "Use this button to browse and look for the AVRDUDE.EXE executable file.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pushButton->setText(QApplication::translate("burnConfigDialog", "Browse...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("burnConfigDialog", "Programmer", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        avrdude_programmer->setWhatsThis(QApplication::translate("burnConfigDialog", "Programmer used for communicating with the controller.\n"
"Please consult the programmer's documentation and the AVRDUDE documentation to select the appropriate programmer.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        pushButton_3->setWhatsThis(QApplication::translate("burnConfigDialog", "List all available programmers.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pushButton_3->setText(QApplication::translate("burnConfigDialog", "List Available", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        avrArgs->setToolTip(QApplication::translate("burnConfigDialog", "Extra arguments that will be passed to AVRDUDE on every call", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        avrArgs->setWhatsThis(QApplication::translate("burnConfigDialog", "Extra arguments used in AVRDUDE.\n"
"This can be used for providing extra information to AVRDUDE.\n"
"\n"
"Please only use this if you know what you are doing.  There are no error checks and you could cripple your controller.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_3->setText(QApplication::translate("burnConfigDialog", "Extra Arguments", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        pushButton_4->setWhatsThis(QApplication::translate("burnConfigDialog", "Show AVRDUDE help", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pushButton_4->setText(QApplication::translate("burnConfigDialog", "Show Help", 0, QApplication::UnicodeUTF8));
        avrdude_port->setItemText(10, QApplication::translate("burnConfigDialog", "avrdoper", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_WHATSTHIS
        avrdude_port->setWhatsThis(QApplication::translate("burnConfigDialog", "Communication port to the programmer.\n"
"", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_5->setText(QApplication::translate("burnConfigDialog", "Port", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("burnConfigDialog", "AVRDUDE Location", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("burnConfigDialog", "mcu", 0, QApplication::UnicodeUTF8));
        avrdude_mcu->clear();
        avrdude_mcu->insertItems(0, QStringList()
         << QApplication::translate("burnConfigDialog", "m64", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("burnConfigDialog", "m128", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("burnConfigDialog", "m328p", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        avrdude_mcu->setWhatsThis(QApplication::translate("burnConfigDialog", "Programmer used for communicating with the controller.\n"
"Please consult the programmer's documentation and the AVRDUDE documentation to select the appropriate programmer.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class burnConfigDialog: public Ui_burnConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BURNCONFIGDIALOG_H
