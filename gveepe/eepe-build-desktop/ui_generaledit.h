/********************************************************************************
** Form generated from reading UI file 'generaledit.ui'
**
** Created: Sun 12. Feb 17:25:43 2012
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERALEDIT_H
#define UI_GENERALEDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GeneralEdit
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tabSetup;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QSpinBox *contrastSB;
    QLabel *label_2;
    QDoubleSpinBox *battwarningDSB;
    QLabel *label_3;
    QDoubleSpinBox *battcalibDSB;
    QLabel *label_4;
    QComboBox *backlightswCB;
    QLabel *label_5;
    QSpinBox *backlightautoSB;
    QLabel *label_6;
    QSpinBox *inactimerSB;
    QLabel *label_28;
    QHBoxLayout *horizontalLayout;
    QCheckBox *beepMinuteChkB;
    QCheckBox *beepCountDownChkB;
    QCheckBox *beepFlashChkB;
    QLabel *label_7;
    QCheckBox *thrrevChkB;
    QLabel *label_29;
    QCheckBox *splashScreenChkB;
    QLabel *label_9;
    QCheckBox *thrwarnChkB;
    QLabel *label_10;
    QCheckBox *switchwarnChkB;
    QLabel *label_11;
    QCheckBox *memwarnChkB;
    QLabel *label_27;
    QCheckBox *alarmwarnChkB;
    QLabel *label_13;
    QComboBox *channelorderCB;
    QLabel *label_14;
    QComboBox *stickmodeCB;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_12;
    QComboBox *beeperCB;
    QLabel *label_8;
    QComboBox *inputfilterCB;
    QLabel *label_31;
    QLineEdit *ownerNameLE;
    QLabel *label_32;
    QSpinBox *speakerPitchSB;
    QLabel *label_23;
    QComboBox *baudRateCB;
    QSpinBox *mavTargetSystemSB;
    QLabel *label_30;
    QWidget *tab;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_4;
    QLabel *chnLabel_1;
    QComboBox *modeCB_1;
    QSpinBox *weightSB_1;
    QComboBox *sourceCB_1;
    QComboBox *swtchCB_1;
    QLabel *chnLabel_2;
    QComboBox *modeCB_2;
    QSpinBox *weightSB_2;
    QComboBox *sourceCB_2;
    QComboBox *swtchCB_2;
    QLabel *chnLabel_3;
    QComboBox *modeCB_3;
    QSpinBox *weightSB_3;
    QComboBox *sourceCB_3;
    QComboBox *swtchCB_3;
    QLabel *chnLabel_4;
    QComboBox *modeCB_4;
    QSpinBox *weightSB_4;
    QComboBox *sourceCB_4;
    QComboBox *swtchCB_4;
    QLabel *label_33;
    QDoubleSpinBox *PPM_MultiplierDSB;
    QLabel *label_34;
    QGridLayout *gridLayout_5;
    QSpinBox *trainerCalib_1;
    QSpinBox *trainerCalib_2;
    QSpinBox *trainerCalib_3;
    QSpinBox *trainerCalib_4;
    QSpacerItem *verticalSpacer_3;
    QWidget *tabCalibration;
    QGridLayout *gridLayout_2;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_15;
    QSpinBox *ana1Neg;
    QSpinBox *ana1Mid;
    QSpinBox *ana1Pos;
    QLabel *label_16;
    QSpinBox *ana2Neg;
    QSpinBox *ana2Mid;
    QSpinBox *ana2Pos;
    QLabel *label_17;
    QSpinBox *ana3Neg;
    QSpinBox *ana3Mid;
    QSpinBox *ana3Pos;
    QLabel *label_18;
    QSpinBox *ana4Neg;
    QSpinBox *ana4Mid;
    QSpinBox *ana4Pos;
    QLabel *label_19;
    QSpinBox *ana5Neg;
    QSpinBox *ana5Mid;
    QSpinBox *ana5Pos;
    QLabel *label_20;
    QSpinBox *ana6Neg;
    QSpinBox *ana6Mid;
    QSpinBox *ana6Pos;
    QLabel *label_21;
    QSpinBox *ana7Neg;
    QSpinBox *ana7Mid;
    QSpinBox *ana7Pos;
    QLabel *label_22;
    QDoubleSpinBox *battCalib;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *GeneralEdit)
    {
        if (GeneralEdit->objectName().isEmpty())
            GeneralEdit->setObjectName(QString::fromUtf8("GeneralEdit"));
        GeneralEdit->resize(662, 632);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        GeneralEdit->setWindowIcon(icon);
        GeneralEdit->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(GeneralEdit);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(GeneralEdit);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabSetup = new QWidget();
        tabSetup->setObjectName(QString::fromUtf8("tabSetup"));
        gridLayout_3 = new QGridLayout(tabSetup);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(tabSetup);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 3, 0, 1, 1);

        contrastSB = new QSpinBox(tabSetup);
        contrastSB->setObjectName(QString::fromUtf8("contrastSB"));
        contrastSB->setMinimum(10);
        contrastSB->setMaximum(45);
        contrastSB->setValue(25);

        gridLayout_3->addWidget(contrastSB, 3, 2, 1, 1);

        label_2 = new QLabel(tabSetup);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 5, 0, 1, 1);

        battwarningDSB = new QDoubleSpinBox(tabSetup);
        battwarningDSB->setObjectName(QString::fromUtf8("battwarningDSB"));
        battwarningDSB->setPrefix(QString::fromUtf8(""));
        battwarningDSB->setSuffix(QString::fromUtf8("v"));
        battwarningDSB->setDecimals(1);
        battwarningDSB->setMinimum(4);
        battwarningDSB->setMaximum(12);
        battwarningDSB->setSingleStep(0.1);
        battwarningDSB->setValue(9.6);

        gridLayout_3->addWidget(battwarningDSB, 5, 2, 1, 1);

        label_3 = new QLabel(tabSetup);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 6, 0, 1, 1);

        battcalibDSB = new QDoubleSpinBox(tabSetup);
        battcalibDSB->setObjectName(QString::fromUtf8("battcalibDSB"));
        battcalibDSB->setPrefix(QString::fromUtf8(""));
        battcalibDSB->setSuffix(QString::fromUtf8("v"));
        battcalibDSB->setDecimals(1);
        battcalibDSB->setMinimum(-9.9);
        battcalibDSB->setMaximum(9.9);
        battcalibDSB->setSingleStep(0.1);

        gridLayout_3->addWidget(battcalibDSB, 6, 2, 1, 1);

        label_4 = new QLabel(tabSetup);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 7, 0, 1, 1);

        backlightswCB = new QComboBox(tabSetup);
        backlightswCB->setObjectName(QString::fromUtf8("backlightswCB"));

        gridLayout_3->addWidget(backlightswCB, 7, 2, 1, 1);

        label_5 = new QLabel(tabSetup);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 8, 0, 1, 1);

        backlightautoSB = new QSpinBox(tabSetup);
        backlightautoSB->setObjectName(QString::fromUtf8("backlightautoSB"));
        backlightautoSB->setMaximum(600);
        backlightautoSB->setSingleStep(5);

        gridLayout_3->addWidget(backlightautoSB, 8, 2, 1, 1);

        label_6 = new QLabel(tabSetup);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 9, 0, 1, 1);

        inactimerSB = new QSpinBox(tabSetup);
        inactimerSB->setObjectName(QString::fromUtf8("inactimerSB"));
        inactimerSB->setMaximum(120);

        gridLayout_3->addWidget(inactimerSB, 9, 2, 1, 1);

        label_28 = new QLabel(tabSetup);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_3->addWidget(label_28, 11, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        beepMinuteChkB = new QCheckBox(tabSetup);
        beepMinuteChkB->setObjectName(QString::fromUtf8("beepMinuteChkB"));

        horizontalLayout->addWidget(beepMinuteChkB);

        beepCountDownChkB = new QCheckBox(tabSetup);
        beepCountDownChkB->setObjectName(QString::fromUtf8("beepCountDownChkB"));

        horizontalLayout->addWidget(beepCountDownChkB);

        beepFlashChkB = new QCheckBox(tabSetup);
        beepFlashChkB->setObjectName(QString::fromUtf8("beepFlashChkB"));

        horizontalLayout->addWidget(beepFlashChkB);


        gridLayout_3->addLayout(horizontalLayout, 11, 2, 1, 1);

        label_7 = new QLabel(tabSetup);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 12, 0, 1, 1);

        thrrevChkB = new QCheckBox(tabSetup);
        thrrevChkB->setObjectName(QString::fromUtf8("thrrevChkB"));

        gridLayout_3->addWidget(thrrevChkB, 12, 2, 1, 1);

        label_29 = new QLabel(tabSetup);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_3->addWidget(label_29, 13, 0, 1, 1);

        splashScreenChkB = new QCheckBox(tabSetup);
        splashScreenChkB->setObjectName(QString::fromUtf8("splashScreenChkB"));

        gridLayout_3->addWidget(splashScreenChkB, 13, 2, 1, 1);

        label_9 = new QLabel(tabSetup);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 14, 0, 1, 1);

        thrwarnChkB = new QCheckBox(tabSetup);
        thrwarnChkB->setObjectName(QString::fromUtf8("thrwarnChkB"));
        thrwarnChkB->setChecked(true);
        thrwarnChkB->setTristate(false);

        gridLayout_3->addWidget(thrwarnChkB, 14, 2, 1, 1);

        label_10 = new QLabel(tabSetup);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_3->addWidget(label_10, 15, 0, 1, 1);

        switchwarnChkB = new QCheckBox(tabSetup);
        switchwarnChkB->setObjectName(QString::fromUtf8("switchwarnChkB"));
        switchwarnChkB->setChecked(true);

        gridLayout_3->addWidget(switchwarnChkB, 15, 2, 1, 1);

        label_11 = new QLabel(tabSetup);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 16, 0, 1, 1);

        memwarnChkB = new QCheckBox(tabSetup);
        memwarnChkB->setObjectName(QString::fromUtf8("memwarnChkB"));
        memwarnChkB->setChecked(true);

        gridLayout_3->addWidget(memwarnChkB, 16, 2, 1, 1);

        label_27 = new QLabel(tabSetup);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_3->addWidget(label_27, 17, 0, 1, 1);

        alarmwarnChkB = new QCheckBox(tabSetup);
        alarmwarnChkB->setObjectName(QString::fromUtf8("alarmwarnChkB"));
        alarmwarnChkB->setChecked(true);

        gridLayout_3->addWidget(alarmwarnChkB, 17, 2, 1, 1);

        label_13 = new QLabel(tabSetup);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 19, 0, 1, 1);

        channelorderCB = new QComboBox(tabSetup);
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

        gridLayout_3->addWidget(channelorderCB, 19, 2, 1, 1);

        label_14 = new QLabel(tabSetup);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_3->addWidget(label_14, 20, 0, 1, 1);

        stickmodeCB = new QComboBox(tabSetup);
        stickmodeCB->setObjectName(QString::fromUtf8("stickmodeCB"));

        gridLayout_3->addWidget(stickmodeCB, 20, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 23, 2, 1, 1);

        label_12 = new QLabel(tabSetup);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 1, 0, 1, 1);

        beeperCB = new QComboBox(tabSetup);
        beeperCB->setObjectName(QString::fromUtf8("beeperCB"));

        gridLayout_3->addWidget(beeperCB, 1, 2, 1, 1);

        label_8 = new QLabel(tabSetup);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 4, 0, 1, 1);

        inputfilterCB = new QComboBox(tabSetup);
        inputfilterCB->setObjectName(QString::fromUtf8("inputfilterCB"));

        gridLayout_3->addWidget(inputfilterCB, 4, 2, 1, 1);

        label_31 = new QLabel(tabSetup);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_3->addWidget(label_31, 0, 0, 1, 1);

        ownerNameLE = new QLineEdit(tabSetup);
        ownerNameLE->setObjectName(QString::fromUtf8("ownerNameLE"));
        ownerNameLE->setMaxLength(10);

        gridLayout_3->addWidget(ownerNameLE, 0, 2, 1, 1);

        label_32 = new QLabel(tabSetup);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_3->addWidget(label_32, 2, 0, 1, 1);

        speakerPitchSB = new QSpinBox(tabSetup);
        speakerPitchSB->setObjectName(QString::fromUtf8("speakerPitchSB"));
        speakerPitchSB->setMinimum(1);
        speakerPitchSB->setMaximum(100);
        speakerPitchSB->setValue(1);

        gridLayout_3->addWidget(speakerPitchSB, 2, 2, 1, 1);

        label_23 = new QLabel(tabSetup);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_3->addWidget(label_23, 21, 0, 1, 1);

        baudRateCB = new QComboBox(tabSetup);
        baudRateCB->setObjectName(QString::fromUtf8("baudRateCB"));

        gridLayout_3->addWidget(baudRateCB, 21, 2, 1, 1);

        mavTargetSystemSB = new QSpinBox(tabSetup);
        mavTargetSystemSB->setObjectName(QString::fromUtf8("mavTargetSystemSB"));

        gridLayout_3->addWidget(mavTargetSystemSB, 22, 2, 1, 1);

        label_30 = new QLabel(tabSetup);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_3->addWidget(label_30, 22, 0, 1, 1);

        tabWidget->addTab(tabSetup, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_6 = new QGridLayout(tab);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        chnLabel_1 = new QLabel(tab);
        chnLabel_1->setObjectName(QString::fromUtf8("chnLabel_1"));

        gridLayout_4->addWidget(chnLabel_1, 0, 0, 1, 1);

        modeCB_1 = new QComboBox(tab);
        modeCB_1->setObjectName(QString::fromUtf8("modeCB_1"));

        gridLayout_4->addWidget(modeCB_1, 0, 1, 1, 1);

        weightSB_1 = new QSpinBox(tab);
        weightSB_1->setObjectName(QString::fromUtf8("weightSB_1"));
        weightSB_1->setMinimum(-102);
        weightSB_1->setMaximum(102);
        weightSB_1->setSingleStep(4);

        gridLayout_4->addWidget(weightSB_1, 0, 2, 1, 1);

        sourceCB_1 = new QComboBox(tab);
        sourceCB_1->setObjectName(QString::fromUtf8("sourceCB_1"));

        gridLayout_4->addWidget(sourceCB_1, 0, 3, 1, 1);

        swtchCB_1 = new QComboBox(tab);
        swtchCB_1->setObjectName(QString::fromUtf8("swtchCB_1"));

        gridLayout_4->addWidget(swtchCB_1, 0, 4, 1, 1);

        chnLabel_2 = new QLabel(tab);
        chnLabel_2->setObjectName(QString::fromUtf8("chnLabel_2"));

        gridLayout_4->addWidget(chnLabel_2, 1, 0, 1, 1);

        modeCB_2 = new QComboBox(tab);
        modeCB_2->setObjectName(QString::fromUtf8("modeCB_2"));

        gridLayout_4->addWidget(modeCB_2, 1, 1, 1, 1);

        weightSB_2 = new QSpinBox(tab);
        weightSB_2->setObjectName(QString::fromUtf8("weightSB_2"));
        weightSB_2->setMinimum(-102);
        weightSB_2->setMaximum(102);
        weightSB_2->setSingleStep(4);

        gridLayout_4->addWidget(weightSB_2, 1, 2, 1, 1);

        sourceCB_2 = new QComboBox(tab);
        sourceCB_2->setObjectName(QString::fromUtf8("sourceCB_2"));

        gridLayout_4->addWidget(sourceCB_2, 1, 3, 1, 1);

        swtchCB_2 = new QComboBox(tab);
        swtchCB_2->setObjectName(QString::fromUtf8("swtchCB_2"));

        gridLayout_4->addWidget(swtchCB_2, 1, 4, 1, 1);

        chnLabel_3 = new QLabel(tab);
        chnLabel_3->setObjectName(QString::fromUtf8("chnLabel_3"));

        gridLayout_4->addWidget(chnLabel_3, 2, 0, 1, 1);

        modeCB_3 = new QComboBox(tab);
        modeCB_3->setObjectName(QString::fromUtf8("modeCB_3"));

        gridLayout_4->addWidget(modeCB_3, 2, 1, 1, 1);

        weightSB_3 = new QSpinBox(tab);
        weightSB_3->setObjectName(QString::fromUtf8("weightSB_3"));
        weightSB_3->setMinimum(-102);
        weightSB_3->setMaximum(102);
        weightSB_3->setSingleStep(4);

        gridLayout_4->addWidget(weightSB_3, 2, 2, 1, 1);

        sourceCB_3 = new QComboBox(tab);
        sourceCB_3->setObjectName(QString::fromUtf8("sourceCB_3"));

        gridLayout_4->addWidget(sourceCB_3, 2, 3, 1, 1);

        swtchCB_3 = new QComboBox(tab);
        swtchCB_3->setObjectName(QString::fromUtf8("swtchCB_3"));

        gridLayout_4->addWidget(swtchCB_3, 2, 4, 1, 1);

        chnLabel_4 = new QLabel(tab);
        chnLabel_4->setObjectName(QString::fromUtf8("chnLabel_4"));

        gridLayout_4->addWidget(chnLabel_4, 3, 0, 1, 1);

        modeCB_4 = new QComboBox(tab);
        modeCB_4->setObjectName(QString::fromUtf8("modeCB_4"));

        gridLayout_4->addWidget(modeCB_4, 3, 1, 1, 1);

        weightSB_4 = new QSpinBox(tab);
        weightSB_4->setObjectName(QString::fromUtf8("weightSB_4"));
        weightSB_4->setMinimum(-102);
        weightSB_4->setMaximum(102);
        weightSB_4->setSingleStep(4);

        gridLayout_4->addWidget(weightSB_4, 3, 2, 1, 1);

        sourceCB_4 = new QComboBox(tab);
        sourceCB_4->setObjectName(QString::fromUtf8("sourceCB_4"));

        gridLayout_4->addWidget(sourceCB_4, 3, 3, 1, 1);

        swtchCB_4 = new QComboBox(tab);
        swtchCB_4->setObjectName(QString::fromUtf8("swtchCB_4"));

        gridLayout_4->addWidget(swtchCB_4, 3, 4, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 0, 0, 1, 2);

        label_33 = new QLabel(tab);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        gridLayout_6->addWidget(label_33, 1, 0, 1, 1);

        PPM_MultiplierDSB = new QDoubleSpinBox(tab);
        PPM_MultiplierDSB->setObjectName(QString::fromUtf8("PPM_MultiplierDSB"));
        PPM_MultiplierDSB->setDecimals(1);
        PPM_MultiplierDSB->setMaximum(5);
        PPM_MultiplierDSB->setValue(1);

        gridLayout_6->addWidget(PPM_MultiplierDSB, 1, 1, 1, 1);

        label_34 = new QLabel(tab);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        gridLayout_6->addWidget(label_34, 2, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        trainerCalib_1 = new QSpinBox(tab);
        trainerCalib_1->setObjectName(QString::fromUtf8("trainerCalib_1"));
        trainerCalib_1->setMinimum(-2050);
        trainerCalib_1->setMaximum(2050);

        gridLayout_5->addWidget(trainerCalib_1, 0, 0, 1, 1);

        trainerCalib_2 = new QSpinBox(tab);
        trainerCalib_2->setObjectName(QString::fromUtf8("trainerCalib_2"));
        trainerCalib_2->setMinimum(-2050);
        trainerCalib_2->setMaximum(2050);

        gridLayout_5->addWidget(trainerCalib_2, 0, 1, 1, 1);

        trainerCalib_3 = new QSpinBox(tab);
        trainerCalib_3->setObjectName(QString::fromUtf8("trainerCalib_3"));
        trainerCalib_3->setMinimum(-2050);
        trainerCalib_3->setMaximum(2050);

        gridLayout_5->addWidget(trainerCalib_3, 0, 2, 1, 1);

        trainerCalib_4 = new QSpinBox(tab);
        trainerCalib_4->setObjectName(QString::fromUtf8("trainerCalib_4"));
        trainerCalib_4->setMinimum(-2050);
        trainerCalib_4->setMaximum(2050);

        gridLayout_5->addWidget(trainerCalib_4, 0, 3, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 3, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_3, 4, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tabCalibration = new QWidget();
        tabCalibration->setObjectName(QString::fromUtf8("tabCalibration"));
        gridLayout_2 = new QGridLayout(tabCalibration);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_24 = new QLabel(tabCalibration);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_2->addWidget(label_24, 0, 1, 1, 1);

        label_25 = new QLabel(tabCalibration);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_2->addWidget(label_25, 0, 2, 1, 1);

        label_26 = new QLabel(tabCalibration);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_2->addWidget(label_26, 0, 3, 1, 1);

        label_15 = new QLabel(tabCalibration);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 1, 0, 1, 1);

        ana1Neg = new QSpinBox(tabCalibration);
        ana1Neg->setObjectName(QString::fromUtf8("ana1Neg"));
        ana1Neg->setMinimum(-9999);
        ana1Neg->setMaximum(9999);

        gridLayout_2->addWidget(ana1Neg, 1, 1, 1, 1);

        ana1Mid = new QSpinBox(tabCalibration);
        ana1Mid->setObjectName(QString::fromUtf8("ana1Mid"));
        ana1Mid->setMinimum(-9999);
        ana1Mid->setMaximum(9999);
        ana1Mid->setValue(0);

        gridLayout_2->addWidget(ana1Mid, 1, 2, 1, 1);

        ana1Pos = new QSpinBox(tabCalibration);
        ana1Pos->setObjectName(QString::fromUtf8("ana1Pos"));
        ana1Pos->setMinimum(-9999);
        ana1Pos->setMaximum(9999);

        gridLayout_2->addWidget(ana1Pos, 1, 3, 1, 1);

        label_16 = new QLabel(tabCalibration);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_2->addWidget(label_16, 2, 0, 1, 1);

        ana2Neg = new QSpinBox(tabCalibration);
        ana2Neg->setObjectName(QString::fromUtf8("ana2Neg"));
        ana2Neg->setMinimum(-9999);
        ana2Neg->setMaximum(9999);

        gridLayout_2->addWidget(ana2Neg, 2, 1, 1, 1);

        ana2Mid = new QSpinBox(tabCalibration);
        ana2Mid->setObjectName(QString::fromUtf8("ana2Mid"));
        ana2Mid->setMinimum(-9999);
        ana2Mid->setMaximum(9999);

        gridLayout_2->addWidget(ana2Mid, 2, 2, 1, 1);

        ana2Pos = new QSpinBox(tabCalibration);
        ana2Pos->setObjectName(QString::fromUtf8("ana2Pos"));
        ana2Pos->setMinimum(-9999);
        ana2Pos->setMaximum(9999);

        gridLayout_2->addWidget(ana2Pos, 2, 3, 1, 1);

        label_17 = new QLabel(tabCalibration);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_2->addWidget(label_17, 3, 0, 1, 1);

        ana3Neg = new QSpinBox(tabCalibration);
        ana3Neg->setObjectName(QString::fromUtf8("ana3Neg"));
        ana3Neg->setMinimum(-9999);
        ana3Neg->setMaximum(9999);

        gridLayout_2->addWidget(ana3Neg, 3, 1, 1, 1);

        ana3Mid = new QSpinBox(tabCalibration);
        ana3Mid->setObjectName(QString::fromUtf8("ana3Mid"));
        ana3Mid->setMinimum(-9999);
        ana3Mid->setMaximum(9999);

        gridLayout_2->addWidget(ana3Mid, 3, 2, 1, 1);

        ana3Pos = new QSpinBox(tabCalibration);
        ana3Pos->setObjectName(QString::fromUtf8("ana3Pos"));
        ana3Pos->setMinimum(-9999);
        ana3Pos->setMaximum(9999);

        gridLayout_2->addWidget(ana3Pos, 3, 3, 1, 1);

        label_18 = new QLabel(tabCalibration);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_2->addWidget(label_18, 4, 0, 1, 1);

        ana4Neg = new QSpinBox(tabCalibration);
        ana4Neg->setObjectName(QString::fromUtf8("ana4Neg"));
        ana4Neg->setMinimum(-9999);
        ana4Neg->setMaximum(9999);
        ana4Neg->setValue(0);

        gridLayout_2->addWidget(ana4Neg, 4, 1, 1, 1);

        ana4Mid = new QSpinBox(tabCalibration);
        ana4Mid->setObjectName(QString::fromUtf8("ana4Mid"));
        ana4Mid->setMinimum(-9999);
        ana4Mid->setMaximum(9999);

        gridLayout_2->addWidget(ana4Mid, 4, 2, 1, 1);

        ana4Pos = new QSpinBox(tabCalibration);
        ana4Pos->setObjectName(QString::fromUtf8("ana4Pos"));
        ana4Pos->setMinimum(-9999);
        ana4Pos->setMaximum(9999);

        gridLayout_2->addWidget(ana4Pos, 4, 3, 1, 1);

        label_19 = new QLabel(tabCalibration);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_2->addWidget(label_19, 5, 0, 1, 1);

        ana5Neg = new QSpinBox(tabCalibration);
        ana5Neg->setObjectName(QString::fromUtf8("ana5Neg"));
        ana5Neg->setMinimum(-9999);
        ana5Neg->setMaximum(9999);

        gridLayout_2->addWidget(ana5Neg, 5, 1, 1, 1);

        ana5Mid = new QSpinBox(tabCalibration);
        ana5Mid->setObjectName(QString::fromUtf8("ana5Mid"));
        ana5Mid->setMinimum(-9999);
        ana5Mid->setMaximum(9999);

        gridLayout_2->addWidget(ana5Mid, 5, 2, 1, 1);

        ana5Pos = new QSpinBox(tabCalibration);
        ana5Pos->setObjectName(QString::fromUtf8("ana5Pos"));
        ana5Pos->setMinimum(-9999);
        ana5Pos->setMaximum(9999);

        gridLayout_2->addWidget(ana5Pos, 5, 3, 1, 1);

        label_20 = new QLabel(tabCalibration);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_2->addWidget(label_20, 6, 0, 1, 1);

        ana6Neg = new QSpinBox(tabCalibration);
        ana6Neg->setObjectName(QString::fromUtf8("ana6Neg"));
        ana6Neg->setMinimum(-9999);
        ana6Neg->setMaximum(9999);

        gridLayout_2->addWidget(ana6Neg, 6, 1, 1, 1);

        ana6Mid = new QSpinBox(tabCalibration);
        ana6Mid->setObjectName(QString::fromUtf8("ana6Mid"));
        ana6Mid->setMinimum(-9999);
        ana6Mid->setMaximum(9999);

        gridLayout_2->addWidget(ana6Mid, 6, 2, 1, 1);

        ana6Pos = new QSpinBox(tabCalibration);
        ana6Pos->setObjectName(QString::fromUtf8("ana6Pos"));
        ana6Pos->setMinimum(-9999);
        ana6Pos->setMaximum(9999);

        gridLayout_2->addWidget(ana6Pos, 6, 3, 1, 1);

        label_21 = new QLabel(tabCalibration);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_2->addWidget(label_21, 7, 0, 1, 1);

        ana7Neg = new QSpinBox(tabCalibration);
        ana7Neg->setObjectName(QString::fromUtf8("ana7Neg"));
        ana7Neg->setMinimum(-9999);
        ana7Neg->setMaximum(9999);

        gridLayout_2->addWidget(ana7Neg, 7, 1, 1, 1);

        ana7Mid = new QSpinBox(tabCalibration);
        ana7Mid->setObjectName(QString::fromUtf8("ana7Mid"));
        ana7Mid->setMinimum(-9999);
        ana7Mid->setMaximum(9999);

        gridLayout_2->addWidget(ana7Mid, 7, 2, 1, 1);

        ana7Pos = new QSpinBox(tabCalibration);
        ana7Pos->setObjectName(QString::fromUtf8("ana7Pos"));
        ana7Pos->setMinimum(-9999);
        ana7Pos->setMaximum(9999);

        gridLayout_2->addWidget(ana7Pos, 7, 3, 1, 1);

        label_22 = new QLabel(tabCalibration);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_2->addWidget(label_22, 8, 0, 1, 1);

        battCalib = new QDoubleSpinBox(tabCalibration);
        battCalib->setObjectName(QString::fromUtf8("battCalib"));
        battCalib->setDecimals(1);
        battCalib->setMinimum(-9.9);
        battCalib->setMaximum(9.9);
        battCalib->setSingleStep(0.1);

        gridLayout_2->addWidget(battCalib, 8, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 10, 1, 1, 1);

        tabWidget->addTab(tabCalibration, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(GeneralEdit);

        tabWidget->setCurrentIndex(0);
        backlightswCB->setCurrentIndex(-1);
        channelorderCB->setCurrentIndex(0);
        stickmodeCB->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(GeneralEdit);
    } // setupUi

    void retranslateUi(QDialog *GeneralEdit)
    {
        GeneralEdit->setWindowTitle(QApplication::translate("GeneralEdit", "General Edit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        tabWidget->setWhatsThis(QApplication::translate("GeneralEdit", "General settings used throught the transmitter.\n"
"These will be relevant for all models in the same EEPROM.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("GeneralEdit", "Contrast", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        contrastSB->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        contrastSB->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        contrastSB->setWhatsThis(QApplication::translate("GeneralEdit", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">LCD Screen Contrast</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Values can be 20-45</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("GeneralEdit", "Battery Warning", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        battwarningDSB->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        battwarningDSB->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        battwarningDSB->setWhatsThis(QApplication::translate("GeneralEdit", "Battery warning voltage.\n"
"This is the threashhold where the battery warning sounds.\n"
"\n"
"Acceptable values are 5v..10v", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_3->setText(QApplication::translate("GeneralEdit", "Battery Calibration", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        battcalibDSB->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        battcalibDSB->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        battcalibDSB->setWhatsThis(QApplication::translate("GeneralEdit", "Battery calibration:\n"
"This value will be added to the measured battery voltage.  Use this value to calibrate the meter with an external meter.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_4->setText(QApplication::translate("GeneralEdit", "Backlight Switch", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        backlightswCB->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        backlightswCB->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        backlightswCB->setWhatsThis(QApplication::translate("GeneralEdit", "This is the switch selectrion for turning on the backlight (if installed).\n"
"\n"
"", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_5->setText(QApplication::translate("GeneralEdit", "Backlight Auto On/OFF after", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        backlightautoSB->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        backlightautoSB->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        backlightautoSB->setWhatsThis(QApplication::translate("GeneralEdit", "If this value is not 0, any keypress will turn on the backlight and turn it off after the specified number of seconds.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        backlightautoSB->setSuffix(QApplication::translate("GeneralEdit", " sec", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("GeneralEdit", "Inactivity Timer", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        inactimerSB->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        inactimerSB->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        inactimerSB->setWhatsThis(QApplication::translate("GeneralEdit", "If not zero will sound beeps if the transmitter has been left without inputs for the specified number of minutes.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        inactimerSB->setSuffix(QApplication::translate("GeneralEdit", " min", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("GeneralEdit", "Timer Beeps", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        beepMinuteChkB->setWhatsThis(QApplication::translate("GeneralEdit", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Single Beep Every whole Minute</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        beepMinuteChkB->setText(QApplication::translate("GeneralEdit", "Every Minute", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        beepCountDownChkB->setWhatsThis(QApplication::translate("GeneralEdit", "Beeps at 30, 15, 10, and down from5 seconds", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        beepCountDownChkB->setText(QApplication::translate("GeneralEdit", "Count Down to Zero", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        beepFlashChkB->setWhatsThis(QApplication::translate("GeneralEdit", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Flash backlight on timer  beep</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        beepFlashChkB->setText(QApplication::translate("GeneralEdit", "Flash on beep", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("GeneralEdit", "Reverse Throttle Operation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        thrrevChkB->setWhatsThis(QApplication::translate("GeneralEdit", "Reverse throttle operation.\n"
"If this is checked the throttle will be reversed.  Idle will be forward, trim will also be reversed and the throttle warning will be reversed as well.\n"
"\n"
"", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        thrrevChkB->setText(QString());
        label_29->setText(QApplication::translate("GeneralEdit", "Show Splash Screen on Startup", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        splashScreenChkB->setToolTip(QApplication::translate("GeneralEdit", "Show splash screen on startup", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        splashScreenChkB->setWhatsThis(QApplication::translate("GeneralEdit", "Show splash screen on startup", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        splashScreenChkB->setText(QString());
        label_9->setText(QApplication::translate("GeneralEdit", "Throttle Startup Warning", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        thrwarnChkB->setWhatsThis(QApplication::translate("GeneralEdit", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" text-decoration: underline;\">Warnings</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">These will define startup warnings.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Throttle warning - will alert if the throttle is n"
                        "ot at idle during startup</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Switch warning - will alert if switches are not in their defaul position</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Memory warning - will alert if there's not a lot of memory left</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Silent mode warning - will alert you if the beeper is set to quiet (0)</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        thrwarnChkB->setText(QString());
        label_10->setText(QApplication::translate("GeneralEdit", "Switch Startup Warning", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        switchwarnChkB->setWhatsThis(QApplication::translate("GeneralEdit", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" text-decoration: underline;\">Warnings</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">These will define startup warnings.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Throttle warning - will alert if the throttle is n"
                        "ot at idle during startup</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Switch warning - will alert if switches are not in their defaul position</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Memory warning - will alert if there's not a lot of memory left</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Silent mode warning - will alert you if the beeper is set to quiet (0)</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        switchwarnChkB->setText(QString());
        label_11->setText(QApplication::translate("GeneralEdit", "Memory Startup Warning", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        memwarnChkB->setWhatsThis(QApplication::translate("GeneralEdit", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" text-decoration: underline;\">Warnings</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">These will define startup warnings.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Throttle warning - will alert if the throttle is n"
                        "ot at idle during startup</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Switch warning - will alert if switches are not in their defaul position</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Memory warning - will alert if there's not a lot of memory left</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Silent mode warning - will alert you if the beeper is set to quiet (0)</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        memwarnChkB->setText(QString());
        label_27->setText(QApplication::translate("GeneralEdit", "Alarm Warning", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        alarmwarnChkB->setWhatsThis(QApplication::translate("GeneralEdit", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" text-decoration: underline;\">Warnings</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">These will define startup warnings.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Throttle warning - will alert if the throttle is n"
                        "ot at idle during startup</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Switch warning - will alert if switches are not in their defaul position</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Memory warning - will alert if there's not a lot of memory left</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Silent mode warning - will alert you if the beeper is set to quiet (0)</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        alarmwarnChkB->setText(QString());
        label_13->setText(QApplication::translate("GeneralEdit", "Channel Order (For Templates)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        channelorderCB->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        channelorderCB->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        channelorderCB->setWhatsThis(QApplication::translate("GeneralEdit", "Channel order\n"
"\n"
"This is used by the templated to determine which channel goes to what number output.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_14->setText(QApplication::translate("GeneralEdit", "Stick Mode", 0, QApplication::UnicodeUTF8));
        stickmodeCB->clear();
        stickmodeCB->insertItems(0, QStringList()
         << QApplication::translate("GeneralEdit", "Mode 1 (RUD ELE THR AIL)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "Mode 2 (RUD THR ELE AIL)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "Mode 3 (AIL ELE THR RUD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "Mode 4 (AIL THR ELE RUD)", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        stickmodeCB->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        stickmodeCB->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        stickmodeCB->setWhatsThis(QApplication::translate("GeneralEdit", "Mode selection:\n"
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
        label_12->setText(QApplication::translate("GeneralEdit", "Beeper Mode", 0, QApplication::UnicodeUTF8));
        beeperCB->clear();
        beeperCB->insertItems(0, QStringList()
         << QApplication::translate("GeneralEdit", "Quiet", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "No Keys", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "Normal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "Long", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "Extra Long", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        beeperCB->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        beeperCB->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        beeperCB->setWhatsThis(QApplication::translate("GeneralEdit", "Beeper volume\n"
"\n"
"0 - Quiet.  No beeps at all.\n"
"1 - No Keys.  Normal beeps but menu keys do not beep.\n"
"2 - Normal.\n"
"3 - Loud.\n"
"4 - Extra loud.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_8->setText(QApplication::translate("GeneralEdit", "Input Filter", 0, QApplication::UnicodeUTF8));
        inputfilterCB->clear();
        inputfilterCB->insertItems(0, QStringList()
         << QApplication::translate("GeneralEdit", "Single", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "Oversample", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "Filter", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        label_31->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_31->setText(QApplication::translate("GeneralEdit", "Owner Name", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("GeneralEdit", "Speaker Pitch (spkr versions)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        speakerPitchSB->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        speakerPitchSB->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        speakerPitchSB->setWhatsThis(QApplication::translate("GeneralEdit", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">LCD Screen Contrast</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Values can be 20-45</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_23->setText(QApplication::translate("GeneralEdit", "Telemetry Baud rate", 0, QApplication::UnicodeUTF8));
        baudRateCB->clear();
        baudRateCB->insertItems(0, QStringList()
         << QApplication::translate("GeneralEdit", "19200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "38400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "57600", 0, QApplication::UnicodeUTF8)
        );
        label_30->setText(QApplication::translate("GeneralEdit", "Traget System Id", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabSetup), QApplication::translate("GeneralEdit", "Setup", 0, QApplication::UnicodeUTF8));
        chnLabel_1->setText(QApplication::translate("GeneralEdit", "CH1", 0, QApplication::UnicodeUTF8));
        modeCB_1->clear();
        modeCB_1->insertItems(0, QStringList()
         << QApplication::translate("GeneralEdit", "Off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "Add", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "Substitute", 0, QApplication::UnicodeUTF8)
        );
        sourceCB_1->clear();
        sourceCB_1->insertItems(0, QStringList()
         << QApplication::translate("GeneralEdit", "CH1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "CH2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "CH3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "CH4", 0, QApplication::UnicodeUTF8)
        );
        chnLabel_2->setText(QApplication::translate("GeneralEdit", "CH1", 0, QApplication::UnicodeUTF8));
        modeCB_2->clear();
        modeCB_2->insertItems(0, QStringList()
         << QApplication::translate("GeneralEdit", "Off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "Add", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "Substitute", 0, QApplication::UnicodeUTF8)
        );
        sourceCB_2->clear();
        sourceCB_2->insertItems(0, QStringList()
         << QApplication::translate("GeneralEdit", "CH1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "CH2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "CH3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "CH4", 0, QApplication::UnicodeUTF8)
        );
        chnLabel_3->setText(QApplication::translate("GeneralEdit", "CH1", 0, QApplication::UnicodeUTF8));
        modeCB_3->clear();
        modeCB_3->insertItems(0, QStringList()
         << QApplication::translate("GeneralEdit", "Off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "Add", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "Substitute", 0, QApplication::UnicodeUTF8)
        );
        sourceCB_3->clear();
        sourceCB_3->insertItems(0, QStringList()
         << QApplication::translate("GeneralEdit", "CH1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "CH2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "CH3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "CH4", 0, QApplication::UnicodeUTF8)
        );
        chnLabel_4->setText(QApplication::translate("GeneralEdit", "CH1", 0, QApplication::UnicodeUTF8));
        modeCB_4->clear();
        modeCB_4->insertItems(0, QStringList()
         << QApplication::translate("GeneralEdit", "Off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "Add", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "Substitute", 0, QApplication::UnicodeUTF8)
        );
        sourceCB_4->clear();
        sourceCB_4->insertItems(0, QStringList()
         << QApplication::translate("GeneralEdit", "CH1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "CH2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "CH3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GeneralEdit", "CH4", 0, QApplication::UnicodeUTF8)
        );
        label_33->setText(QApplication::translate("GeneralEdit", "PPM Multiplier", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("GeneralEdit", "Calibration", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("GeneralEdit", "Trainer", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("GeneralEdit", "Negative", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("GeneralEdit", "Mid", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("GeneralEdit", "Positive", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("GeneralEdit", "ANALOG 1", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        ana1Neg->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        ana1Mid->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        ana1Pos->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        label_16->setText(QApplication::translate("GeneralEdit", "ANALOG 2", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        ana2Neg->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        ana2Mid->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        ana2Pos->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        label_17->setText(QApplication::translate("GeneralEdit", "ANALOG 3", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        ana3Neg->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        ana3Mid->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        ana3Pos->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        label_18->setText(QApplication::translate("GeneralEdit", "ANALOG 4", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        ana4Neg->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        ana4Mid->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        ana4Pos->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        label_19->setText(QApplication::translate("GeneralEdit", "ANALOG 5", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        ana5Neg->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        ana5Mid->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        ana5Pos->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        label_20->setText(QApplication::translate("GeneralEdit", "ANALOG 6", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        ana6Neg->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        ana6Mid->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        ana6Pos->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        label_21->setText(QApplication::translate("GeneralEdit", "ANALOG 7", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        ana7Neg->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        ana7Mid->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        ana7Pos->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        label_22->setText(QApplication::translate("GeneralEdit", "Battery Calibration", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        battCalib->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        battCalib->setSuffix(QApplication::translate("GeneralEdit", "v", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabCalibration), QApplication::translate("GeneralEdit", "Calibration", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GeneralEdit: public Ui_GeneralEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERALEDIT_H
