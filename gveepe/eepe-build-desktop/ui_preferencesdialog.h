/********************************************************************************
** Form generated from reading UI file 'preferencesdialog.ui'
**
** Created: Fri 2. Sep 20:55:12 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCESDIALOG_H
#define UI_PREFERENCESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_preferencesDialog
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *locale_QB;
    QLabel *label_2;
    QGridLayout *gridLayout;
    QCheckBox *startupCheck_er9x;
    QCheckBox *startupCheck_eepe;
    QLabel *label_4;
    QCheckBox *showSplash;
    QLabel *label_3;
    QComboBox *downloadVerCB;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QLabel *label_13;
    QComboBox *channelorderCB;
    QLabel *label_14;
    QComboBox *stickmodeCB;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_3;
    QPushButton *er9x_dnld;
    QLabel *er9x_ver_label;
    QPushButton *er9x_dnld_2;
    QLabel *label_5;

    void setupUi(QDialog *preferencesDialog)
    {
        if (preferencesDialog->objectName().isEmpty())
            preferencesDialog->setObjectName(QString::fromUtf8("preferencesDialog"));
        preferencesDialog->resize(610, 388);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/preferences.png"), QSize(), QIcon::Normal, QIcon::Off);
        preferencesDialog->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(preferencesDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(preferencesDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        locale_QB = new QComboBox(preferencesDialog);
        locale_QB->setObjectName(QString::fromUtf8("locale_QB"));

        gridLayout_2->addWidget(locale_QB, 0, 1, 1, 1);

        label_2 = new QLabel(preferencesDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 4, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        startupCheck_er9x = new QCheckBox(preferencesDialog);
        startupCheck_er9x->setObjectName(QString::fromUtf8("startupCheck_er9x"));
        startupCheck_er9x->setChecked(true);

        gridLayout->addWidget(startupCheck_er9x, 0, 0, 1, 1);

        startupCheck_eepe = new QCheckBox(preferencesDialog);
        startupCheck_eepe->setObjectName(QString::fromUtf8("startupCheck_eepe"));
        startupCheck_eepe->setChecked(true);

        gridLayout->addWidget(startupCheck_eepe, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 4, 1, 1, 1);

        label_4 = new QLabel(preferencesDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 5, 0, 1, 1);

        showSplash = new QCheckBox(preferencesDialog);
        showSplash->setObjectName(QString::fromUtf8("showSplash"));
        showSplash->setChecked(true);

        gridLayout_2->addWidget(showSplash, 5, 1, 1, 1);

        label_3 = new QLabel(preferencesDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 6, 0, 1, 1);

        downloadVerCB = new QComboBox(preferencesDialog);
        downloadVerCB->setObjectName(QString::fromUtf8("downloadVerCB"));

        gridLayout_2->addWidget(downloadVerCB, 6, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 8, 1, 1, 1);

        buttonBox = new QDialogButtonBox(preferencesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 9, 1, 1, 1);

        label_13 = new QLabel(preferencesDialog);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 1, 0, 1, 1);

        channelorderCB = new QComboBox(preferencesDialog);
        channelorderCB->insertItems(0, QStringList()
         << QString::fromUtf8("R E T A")
         << QString::fromUtf8("R E A T")
         << QString::fromUtf8("R T E A")
         << QString::fromUtf8("R T A E")
         << QString::fromUtf8("R A E T")
         << QString::fromUtf8("R A T E")
         << QString::fromUtf8("E R T A")
         << QString::fromUtf8("E R A T")
         << QString::fromUtf8("E T R A")
         << QString::fromUtf8("E T A R")
         << QString::fromUtf8("E A R T")
         << QString::fromUtf8("E A T R")
         << QString::fromUtf8("T R E A")
         << QString::fromUtf8("T R A E")
         << QString::fromUtf8("T E R A")
         << QString::fromUtf8("T E A R")
         << QString::fromUtf8("T A R E")
         << QString::fromUtf8("T A E R")
         << QString::fromUtf8("A R E T")
         << QString::fromUtf8("A R T E")
         << QString::fromUtf8("A E R T")
         << QString::fromUtf8("A E T R")
         << QString::fromUtf8("A T R E")
         << QString::fromUtf8("A T E R")
        );
        channelorderCB->setObjectName(QString::fromUtf8("channelorderCB"));

        gridLayout_2->addWidget(channelorderCB, 1, 1, 1, 1);

        label_14 = new QLabel(preferencesDialog);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 2, 0, 1, 1);

        stickmodeCB = new QComboBox(preferencesDialog);
        stickmodeCB->setObjectName(QString::fromUtf8("stickmodeCB"));

        gridLayout_2->addWidget(stickmodeCB, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 3, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        er9x_dnld = new QPushButton(preferencesDialog);
        er9x_dnld->setObjectName(QString::fromUtf8("er9x_dnld"));

        gridLayout_3->addWidget(er9x_dnld, 0, 2, 1, 1);

        er9x_ver_label = new QLabel(preferencesDialog);
        er9x_ver_label->setObjectName(QString::fromUtf8("er9x_ver_label"));

        gridLayout_3->addWidget(er9x_ver_label, 0, 0, 1, 1);

        er9x_dnld_2 = new QPushButton(preferencesDialog);
        er9x_dnld_2->setObjectName(QString::fromUtf8("er9x_dnld_2"));

        gridLayout_3->addWidget(er9x_dnld_2, 0, 1, 1, 1);

        gridLayout_3->setColumnStretch(1, 10);
        gridLayout_3->setColumnStretch(2, 10);

        gridLayout_2->addLayout(gridLayout_3, 7, 1, 1, 1);

        label_5 = new QLabel(preferencesDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 7, 0, 1, 1);


        retranslateUi(preferencesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), preferencesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), preferencesDialog, SLOT(reject()));

        channelorderCB->setCurrentIndex(0);
        stickmodeCB->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(preferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *preferencesDialog)
    {
        preferencesDialog->setWindowTitle(QApplication::translate("preferencesDialog", "Preferences", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("preferencesDialog", "Language (requires restart)", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("preferencesDialog", "Check for updates on startup", 0, QApplication::UnicodeUTF8));
        startupCheck_er9x->setText(QApplication::translate("preferencesDialog", "er9x", 0, QApplication::UnicodeUTF8));
        startupCheck_eepe->setText(QApplication::translate("preferencesDialog", "eePe", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("preferencesDialog", "Show Splash Screen", 0, QApplication::UnicodeUTF8));
        showSplash->setText(QString());
        label_3->setText(QApplication::translate("preferencesDialog", "Version to download", 0, QApplication::UnicodeUTF8));
        downloadVerCB->clear();
        downloadVerCB->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "er9x", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "er9x - JETI", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "er9x - FrSky", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "er9x - Ardupilot", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "er9x - FrSky NOHT", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "er9x - NOHT", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "er9x - SPKR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "er9x - NOHT, SPKR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "er9x - FrSky, SPKR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "er9x - FrSky, NOHT, SPKR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "er9x - NMEA", 0, QApplication::UnicodeUTF8)
        );
        label_13->setText(QApplication::translate("preferencesDialog", "Default Channel Order", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        channelorderCB->setWhatsThis(QApplication::translate("preferencesDialog", "Channel order\n"
"\n"
"This is used by the templated to determine which channel goes to what number output.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_14->setText(QApplication::translate("preferencesDialog", "Default Stick Mode", 0, QApplication::UnicodeUTF8));
        stickmodeCB->clear();
        stickmodeCB->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "Mode 1 (RUD ELE THR AIL)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Mode 2 (RUD THR ELE AIL)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Mode 3 (AIL ELE THR RUD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Mode 4 (AIL THR ELE RUD)", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        stickmodeCB->setWhatsThis(QApplication::translate("preferencesDialog", "Mode selection:\n"
"\n"
"Mode 1:\n"
"  Left stick:  Elevator, Rudder\n"
"  Right stick:  Throttle, Aileron\n"
"\n"
"Mode 2:\n"
"  Left stick:  Throttle, Rudder\n"
"  Right stick:  Elevator, Aileron\n"
"\n"
"Mode 3:\n"
"  Left stick:  Elevator, Aileron\n"
"  Right stick:  Throttle, Rudder\n"
"\n"
"Mode 4:\n"
"  Left stick:  Throttle, Aileron\n"
"  Right stick:  Elevator, Rudder\n"
"\n"
"", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        er9x_dnld->setText(QApplication::translate("preferencesDialog", "Download", 0, QApplication::UnicodeUTF8));
        er9x_ver_label->setText(QApplication::translate("preferencesDialog", "r111", 0, QApplication::UnicodeUTF8));
        er9x_dnld_2->setText(QApplication::translate("preferencesDialog", "Check", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("preferencesDialog", "Current Version - er9x", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class preferencesDialog: public Ui_preferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESDIALOG_H
