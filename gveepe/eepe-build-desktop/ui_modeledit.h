/********************************************************************************
** Form generated from reading UI file 'modeledit.ui'
**
** Created: Sat 17. Mar 22:36:08 2012
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODELEDIT_H
#define UI_MODELEDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTimeEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModelEdit
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QTabWidget *tabWidget;
    QWidget *tabModelSetup;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *modelNameLE;
    QLabel *label_2;
    QComboBox *timerModeCB;
    QLabel *label_3;
    QComboBox *timerDirCB;
    QLabel *label_4;
    QTimeEdit *timerValTE;
    QLabel *label_10;
    QComboBox *trimIncCB;
    QLabel *label_7;
    QCheckBox *thrTrimChkB;
    QLabel *label_8;
    QCheckBox *thrExpoChkB;
    QLabel *label_11;
    QComboBox *trimSWCB;
    QLabel *label_12;
    QGridLayout *gridLayout_2;
    QCheckBox *bcRUDChkB;
    QCheckBox *bcELEChkB;
    QCheckBox *bcTHRChkB;
    QCheckBox *bcAILChkB;
    QCheckBox *bcP1ChkB;
    QCheckBox *bcP2ChkB;
    QCheckBox *bcP3ChkB;
    QLabel *label_13;
    QComboBox *pulsePolCB;
    QLabel *label_55;
    QCheckBox *extendedLimitsChkB;
    QLabel *label_5;
    QComboBox *protocolCB;
    QLabel *label_6;
    QSpinBox *numChannelsSB;
    QLabel *label_9;
    QSpinBox *ppmDelaySB;
    QDoubleSpinBox *ppmFrameLengthDSB;
    QLabel *label_113;
    QLabel *label_114;
    QLabel *label_115;
    QCheckBox *TrainerChkB;
    QCheckBox *T2ThrTrgChkB;
    QWidget *tabHeli;
    QFormLayout *formLayout_2;
    QLabel *label_103;
    QComboBox *swashTypeCB;
    QLabel *label_106;
    QComboBox *swashCollectiveCB;
    QLabel *label_107;
    QSpinBox *swashRingValSB;
    QLabel *label_108;
    QGridLayout *gridLayout_20;
    QCheckBox *swashInvertELE;
    QCheckBox *swashInvertAIL;
    QCheckBox *swashInvertCOL;
    QSpacerItem *horizontalSpacer_7;
    QWidget *tabExpo;
    QGridLayout *gridLayout_17;
    QFrame *RUD_Frame;
    QGridLayout *gridLayout_10;
    QComboBox *RUD_edrSw1;
    QComboBox *RUD_edrSw2;
    QGridLayout *gridLayout_9;
    QLabel *label_37;
    QSpinBox *RUD_ExpoLHi;
    QSpinBox *RUD_DrLHi;
    QSpinBox *RUD_DrRHi;
    QSpinBox *RUD_ExpoRHi;
    QLabel *label_38;
    QSpinBox *RUD_ExpoLMid;
    QSpinBox *RUD_DrLMid;
    QSpinBox *RUD_DrRMid;
    QSpinBox *RUD_ExpoRMid;
    QLabel *label_39;
    QSpinBox *RUD_ExpoLLow;
    QSpinBox *RUD_DrLLow;
    QSpinBox *RUD_DrRLow;
    QSpinBox *RUD_ExpoRLow;
    QLabel *label_64;
    QLabel *label_65;
    QLabel *label_69;
    QLabel *label_77;
    QLabel *label_42;
    QLabel *label_43;
    QPushButton *pushButton_1;
    QFrame *AIL_Frame;
    QGridLayout *gridLayout_11;
    QComboBox *AIL_edrSw1;
    QComboBox *AIL_edrSw2;
    QGridLayout *gridLayout_12;
    QLabel *label_51;
    QSpinBox *AIL_ExpoLHi;
    QSpinBox *AIL_DrLHi;
    QSpinBox *AIL_DrRHi;
    QSpinBox *AIL_ExpoRHi;
    QLabel *label_52;
    QSpinBox *AIL_ExpoLMid;
    QSpinBox *AIL_DrLMid;
    QSpinBox *AIL_DrRMid;
    QSpinBox *AIL_ExpoRMid;
    QLabel *label_53;
    QSpinBox *AIL_ExpoLLow;
    QSpinBox *AIL_DrLLow;
    QSpinBox *AIL_DrRLow;
    QSpinBox *AIL_ExpoRLow;
    QLabel *label_67;
    QLabel *label_70;
    QLabel *label_75;
    QLabel *label_78;
    QLabel *label_44;
    QLabel *label_48;
    QPushButton *pushButton_4;
    QFrame *THR_Frame;
    QGridLayout *gridLayout_13;
    QComboBox *THR_edrSw1;
    QComboBox *THR_edrSw2;
    QGridLayout *gridLayout_14;
    QLabel *label_58;
    QLabel *label_59;
    QLabel *label_60;
    QLabel *label_61;
    QSpinBox *THR_ExpoLHi;
    QSpinBox *THR_DrLHi;
    QSpinBox *THR_DrRHi;
    QSpinBox *THR_ExpoRHi;
    QLabel *label_62;
    QSpinBox *THR_ExpoLMid;
    QSpinBox *THR_DrLMid;
    QSpinBox *THR_DrRMid;
    QSpinBox *THR_ExpoRMid;
    QLabel *label_63;
    QSpinBox *THR_ExpoLLow;
    QSpinBox *THR_DrLLow;
    QSpinBox *THR_DrRLow;
    QSpinBox *THR_ExpoRLow;
    QLabel *label_57;
    QLabel *label_40;
    QLabel *label_41;
    QPushButton *pushButton_2;
    QFrame *ELE_Frame;
    QGridLayout *gridLayout_15;
    QComboBox *ELE_edrSw1;
    QComboBox *ELE_edrSw2;
    QGridLayout *gridLayout_16;
    QLabel *label_71;
    QSpinBox *ELE_ExpoLHi;
    QSpinBox *ELE_DrLHi;
    QSpinBox *ELE_DrRHi;
    QSpinBox *ELE_ExpoRHi;
    QLabel *label_72;
    QSpinBox *ELE_ExpoLMid;
    QSpinBox *ELE_DrLMid;
    QSpinBox *ELE_DrRMid;
    QSpinBox *ELE_ExpoRMid;
    QLabel *label_73;
    QSpinBox *ELE_ExpoLLow;
    QSpinBox *ELE_DrLLow;
    QSpinBox *ELE_DrRLow;
    QSpinBox *ELE_ExpoRLow;
    QLabel *label_68;
    QLabel *label_74;
    QLabel *label_76;
    QLabel *label_79;
    QLabel *label_45;
    QLabel *label_47;
    QPushButton *pushButton_3;
    QWidget *tabMix;
    QGridLayout *gridLayout_18;
    QGridLayout *mixersLayout;
    QWidget *tabLimit;
    QGridLayout *gridLayout_6;
    QLabel *label_14;
    QDoubleSpinBox *offsetDSB_1;
    QSpinBox *minSB_1;
    QSpinBox *maxSB_1;
    QComboBox *chInvCB_1;
    QLabel *label_15;
    QDoubleSpinBox *offsetDSB_2;
    QSpinBox *minSB_2;
    QSpinBox *maxSB_2;
    QComboBox *chInvCB_2;
    QLabel *label_16;
    QDoubleSpinBox *offsetDSB_3;
    QSpinBox *minSB_3;
    QSpinBox *maxSB_3;
    QComboBox *chInvCB_3;
    QLabel *label_17;
    QDoubleSpinBox *offsetDSB_4;
    QSpinBox *minSB_4;
    QSpinBox *maxSB_4;
    QComboBox *chInvCB_4;
    QLabel *label_18;
    QDoubleSpinBox *offsetDSB_5;
    QSpinBox *minSB_5;
    QSpinBox *maxSB_5;
    QComboBox *chInvCB_5;
    QLabel *label_19;
    QDoubleSpinBox *offsetDSB_6;
    QSpinBox *minSB_6;
    QSpinBox *maxSB_6;
    QComboBox *chInvCB_6;
    QLabel *label_20;
    QDoubleSpinBox *offsetDSB_7;
    QSpinBox *minSB_7;
    QSpinBox *maxSB_7;
    QComboBox *chInvCB_7;
    QLabel *label_21;
    QDoubleSpinBox *offsetDSB_8;
    QSpinBox *minSB_8;
    QSpinBox *maxSB_8;
    QComboBox *chInvCB_8;
    QLabel *label_22;
    QDoubleSpinBox *offsetDSB_9;
    QSpinBox *minSB_9;
    QSpinBox *maxSB_9;
    QComboBox *chInvCB_9;
    QLabel *label_23;
    QDoubleSpinBox *offsetDSB_10;
    QSpinBox *minSB_10;
    QSpinBox *maxSB_10;
    QComboBox *chInvCB_10;
    QLabel *label_24;
    QDoubleSpinBox *offsetDSB_11;
    QSpinBox *minSB_11;
    QSpinBox *maxSB_11;
    QComboBox *chInvCB_11;
    QLabel *label_25;
    QDoubleSpinBox *offsetDSB_12;
    QSpinBox *minSB_12;
    QSpinBox *maxSB_12;
    QComboBox *chInvCB_12;
    QLabel *label_26;
    QDoubleSpinBox *offsetDSB_13;
    QSpinBox *minSB_13;
    QSpinBox *maxSB_13;
    QComboBox *chInvCB_13;
    QLabel *label_27;
    QDoubleSpinBox *offsetDSB_14;
    QSpinBox *minSB_14;
    QSpinBox *maxSB_14;
    QComboBox *chInvCB_14;
    QLabel *label_28;
    QDoubleSpinBox *offsetDSB_15;
    QSpinBox *minSB_15;
    QSpinBox *maxSB_15;
    QComboBox *chInvCB_15;
    QLabel *label_29;
    QDoubleSpinBox *offsetDSB_16;
    QSpinBox *minSB_16;
    QSpinBox *maxSB_16;
    QComboBox *chInvCB_16;
    QLabel *label_36;
    QLabel *label_46;
    QLabel *label_49;
    QLabel *label_50;
    QLabel *label_54;
    QWidget *tabCurve;
    QGridLayout *gridLayout_7;
    QPushButton *curveEdit_1;
    QSpinBox *curvePt1_1;
    QSpinBox *curvePt2_1;
    QSpinBox *curvePt3_1;
    QSpinBox *curvePt4_1;
    QSpinBox *curvePt5_1;
    QGraphicsView *curvePreview;
    QPushButton *curveEdit_2;
    QSpinBox *curvePt1_2;
    QSpinBox *curvePt2_2;
    QSpinBox *curvePt3_2;
    QSpinBox *curvePt4_2;
    QSpinBox *curvePt5_2;
    QPushButton *curveEdit_3;
    QSpinBox *curvePt1_3;
    QSpinBox *curvePt2_3;
    QSpinBox *curvePt3_3;
    QSpinBox *curvePt4_3;
    QSpinBox *curvePt5_3;
    QPushButton *curveEdit_4;
    QSpinBox *curvePt1_4;
    QSpinBox *curvePt2_4;
    QSpinBox *curvePt3_4;
    QSpinBox *curvePt4_4;
    QSpinBox *curvePt5_4;
    QPushButton *curveEdit_5;
    QSpinBox *curvePt1_5;
    QSpinBox *curvePt2_5;
    QSpinBox *curvePt3_5;
    QSpinBox *curvePt4_5;
    QSpinBox *curvePt5_5;
    QPushButton *curveEdit_6;
    QSpinBox *curvePt1_6;
    QSpinBox *curvePt2_6;
    QSpinBox *curvePt3_6;
    QSpinBox *curvePt4_6;
    QSpinBox *curvePt5_6;
    QPushButton *curveEdit_7;
    QSpinBox *curvePt1_7;
    QSpinBox *curvePt2_7;
    QSpinBox *curvePt3_7;
    QSpinBox *curvePt4_7;
    QSpinBox *curvePt5_7;
    QPushButton *curveEdit_8;
    QSpinBox *curvePt1_8;
    QSpinBox *curvePt2_8;
    QSpinBox *curvePt3_8;
    QSpinBox *curvePt4_8;
    QSpinBox *curvePt5_8;
    QPushButton *curveEdit_9;
    QSpinBox *curvePt1_9;
    QSpinBox *curvePt2_9;
    QSpinBox *curvePt3_9;
    QSpinBox *curvePt4_9;
    QSpinBox *curvePt5_9;
    QSpinBox *curvePt6_9;
    QSpinBox *curvePt7_9;
    QSpinBox *curvePt8_9;
    QSpinBox *curvePt9_9;
    QPushButton *curveEdit_10;
    QSpinBox *curvePt1_10;
    QSpinBox *curvePt2_10;
    QSpinBox *curvePt3_10;
    QSpinBox *curvePt4_10;
    QSpinBox *curvePt5_10;
    QSpinBox *curvePt6_10;
    QSpinBox *curvePt7_10;
    QSpinBox *curvePt8_10;
    QSpinBox *curvePt9_10;
    QPushButton *curveEdit_11;
    QSpinBox *curvePt1_11;
    QSpinBox *curvePt2_11;
    QSpinBox *curvePt3_11;
    QSpinBox *curvePt4_11;
    QSpinBox *curvePt5_11;
    QSpinBox *curvePt6_11;
    QSpinBox *curvePt7_11;
    QSpinBox *curvePt8_11;
    QSpinBox *curvePt9_11;
    QPushButton *curveEdit_12;
    QSpinBox *curvePt1_12;
    QSpinBox *curvePt2_12;
    QSpinBox *curvePt3_12;
    QSpinBox *curvePt4_12;
    QSpinBox *curvePt5_12;
    QSpinBox *curvePt6_12;
    QSpinBox *curvePt7_12;
    QSpinBox *curvePt8_12;
    QSpinBox *curvePt9_12;
    QPushButton *curveEdit_13;
    QSpinBox *curvePt1_13;
    QSpinBox *curvePt2_13;
    QSpinBox *curvePt3_13;
    QSpinBox *curvePt4_13;
    QSpinBox *curvePt5_13;
    QSpinBox *curvePt6_13;
    QSpinBox *curvePt7_13;
    QSpinBox *curvePt8_13;
    QSpinBox *curvePt9_13;
    QPushButton *curveEdit_14;
    QSpinBox *curvePt1_14;
    QSpinBox *curvePt2_14;
    QSpinBox *curvePt3_14;
    QSpinBox *curvePt4_14;
    QSpinBox *curvePt5_14;
    QSpinBox *curvePt6_14;
    QSpinBox *curvePt7_14;
    QSpinBox *curvePt8_14;
    QSpinBox *curvePt9_14;
    QPushButton *curveEdit_15;
    QSpinBox *curvePt1_15;
    QSpinBox *curvePt2_15;
    QSpinBox *curvePt3_15;
    QSpinBox *curvePt4_15;
    QSpinBox *curvePt5_15;
    QSpinBox *curvePt6_15;
    QSpinBox *curvePt7_15;
    QSpinBox *curvePt8_15;
    QSpinBox *curvePt9_15;
    QPushButton *curveEdit_16;
    QSpinBox *curvePt1_16;
    QSpinBox *curvePt2_16;
    QSpinBox *curvePt3_16;
    QSpinBox *curvePt4_16;
    QSpinBox *curvePt5_16;
    QSpinBox *curvePt6_16;
    QSpinBox *curvePt7_16;
    QSpinBox *curvePt8_16;
    QSpinBox *curvePt9_16;
    QPushButton *resetCurve_1;
    QPushButton *resetCurve_2;
    QPushButton *resetCurve_3;
    QPushButton *resetCurve_4;
    QPushButton *resetCurve_5;
    QPushButton *resetCurve_6;
    QPushButton *resetCurve_7;
    QPushButton *resetCurve_8;
    QPushButton *resetCurve_9;
    QPushButton *resetCurve_10;
    QPushButton *resetCurve_11;
    QPushButton *resetCurve_12;
    QPushButton *resetCurve_13;
    QPushButton *resetCurve_14;
    QPushButton *resetCurve_15;
    QPushButton *resetCurve_16;
    QPushButton *clearMixesPB;
    QWidget *tabSwitch;
    QGridLayout *gridLayout_8;
    QLabel *label_30;
    QComboBox *cswitchFunc_1;
    QLabel *label_31;
    QComboBox *cswitchFunc_2;
    QLabel *label_32;
    QComboBox *cswitchFunc_3;
    QLabel *label_33;
    QComboBox *cswitchFunc_4;
    QLabel *label_34;
    QComboBox *cswitchFunc_5;
    QComboBox *cswitchFunc_6;
    QLabel *cswFuncLabel;
    QLabel *cswCol1;
    QLabel *cswCol2;
    QLabel *label_35;
    QLabel *label_81;
    QLabel *label_82;
    QLabel *label_99;
    QLabel *label_100;
    QLabel *label_101;
    QLabel *label_102;
    QSpacerItem *verticalSpacer;
    QComboBox *cswitchFunc_7;
    QComboBox *cswitchFunc_8;
    QComboBox *cswitchFunc_9;
    QComboBox *cswitchFunc_10;
    QComboBox *cswitchFunc_11;
    QComboBox *cswitchFunc_12;
    QWidget *tabSafetySwitches;
    QGridLayout *grid_tabSafetySwitches;
    QLabel *label_56;
    QLabel *label_66;
    QLabel *label_80;
    QLabel *label_97;
    QLabel *label_88;
    QLabel *label_85;
    QLabel *label_84;
    QLabel *label_89;
    QLabel *label_90;
    QLabel *label_86;
    QLabel *label_98;
    QLabel *label_91;
    QLabel *label_92;
    QLabel *label_83;
    QLabel *label_93;
    QLabel *label_94;
    QLabel *label_95;
    QLabel *label_87;
    QLabel *label_96;
    QWidget *tabRotarySwitches;
    QGridLayout *grid_tabRotarySwitches;
    QLabel *rota_label_104;
    QLabel *rota_label_119;
    QLabel *rota_label_109;
    QLabel *rota_label_110;
    QLabel *rota_label_111;
    QLabel *rota_label_112;
    QLabel *rota_label_113;
    QLabel *rota_label_114;
    QLabel *rota_label_115;
    QLabel *rota_label_116;
    QLabel *rota_label_105;
    QLabel *rota_label_117;
    QLabel *rota_label_118;
    QWidget *tabTrims;
    QGridLayout *gridLayout_5;
    QSlider *slider_S2;
    QGridLayout *gridLayout_3;
    QSpinBox *spinBox_S2;
    QSpinBox *spinBox_S1;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *Label_S1;
    QLabel *Label_S2;
    QGridLayout *gridLayout_4;
    QSpinBox *spinBox_S3;
    QSpinBox *spinBox_S4;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QLabel *Label_S4;
    QLabel *Label_S3;
    QSlider *slider_S3;
    QSlider *slider_S1;
    QSlider *slider_S4;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_22;
    QLabel *label_104;
    QComboBox *frsky_type_0;
    QGridLayout *gridLayout_21;
    QLabel *label_105;
    QComboBox *frsky_level_0_0;
    QComboBox *frsky_gr_0_0;
    QLabel *label_109;
    QComboBox *frsky_level_0_1;
    QComboBox *frsky_gr_0_1;
    QSpinBox *frsky_val_0_1;
    QSpinBox *frsky_val_0_0;
    QSpinBox *frsky_ratio_0;
    QGridLayout *gridLayout_23;
    QLabel *label_110;
    QComboBox *frsky_type_1;
    QGridLayout *gridLayout_24;
    QLabel *label_111;
    QComboBox *frsky_level_1_0;
    QComboBox *frsky_gr_1_0;
    QLabel *label_112;
    QComboBox *frsky_level_1_1;
    QComboBox *frsky_gr_1_1;
    QSpinBox *frsky_val_1_1;
    QSpinBox *frsky_val_1_0;
    QSpinBox *frsky_ratio_1;
    QSpacerItem *verticalSpacer_2;
    QWidget *tabTemplates;
    QGridLayout *gridLayout_19;
    QListWidget *templateList;

    void setupUi(QDialog *ModelEdit)
    {
        if (ModelEdit->objectName().isEmpty())
            ModelEdit->setObjectName(QString::fromUtf8("ModelEdit"));
        ModelEdit->resize(700, 784);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        ModelEdit->setWindowIcon(icon);
        ModelEdit->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(ModelEdit);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(ModelEdit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/simulate.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);

        gridLayout->addWidget(pushButton, 5, 1, 1, 1);

        tabWidget = new QTabWidget(ModelEdit);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabModelSetup = new QWidget();
        tabModelSetup->setObjectName(QString::fromUtf8("tabModelSetup"));
        formLayout = new QFormLayout(tabModelSetup);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(tabModelSetup);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        modelNameLE = new QLineEdit(tabModelSetup);
        modelNameLE->setObjectName(QString::fromUtf8("modelNameLE"));
        modelNameLE->setMaxLength(10);

        formLayout->setWidget(0, QFormLayout::FieldRole, modelNameLE);

        label_2 = new QLabel(tabModelSetup);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        timerModeCB = new QComboBox(tabModelSetup);
        timerModeCB->setObjectName(QString::fromUtf8("timerModeCB"));

        formLayout->setWidget(1, QFormLayout::FieldRole, timerModeCB);

        label_3 = new QLabel(tabModelSetup);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        timerDirCB = new QComboBox(tabModelSetup);
        timerDirCB->setObjectName(QString::fromUtf8("timerDirCB"));

        formLayout->setWidget(2, QFormLayout::FieldRole, timerDirCB);

        label_4 = new QLabel(tabModelSetup);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        timerValTE = new QTimeEdit(tabModelSetup);
        timerValTE->setObjectName(QString::fromUtf8("timerValTE"));
        timerValTE->setAccelerated(true);
        timerValTE->setCurrentSection(QDateTimeEdit::MinuteSection);

        formLayout->setWidget(3, QFormLayout::FieldRole, timerValTE);

        label_10 = new QLabel(tabModelSetup);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_10);

        trimIncCB = new QComboBox(tabModelSetup);
        trimIncCB->setObjectName(QString::fromUtf8("trimIncCB"));

        formLayout->setWidget(4, QFormLayout::FieldRole, trimIncCB);

        label_7 = new QLabel(tabModelSetup);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        thrTrimChkB = new QCheckBox(tabModelSetup);
        thrTrimChkB->setObjectName(QString::fromUtf8("thrTrimChkB"));

        formLayout->setWidget(5, QFormLayout::FieldRole, thrTrimChkB);

        label_8 = new QLabel(tabModelSetup);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_8);

        thrExpoChkB = new QCheckBox(tabModelSetup);
        thrExpoChkB->setObjectName(QString::fromUtf8("thrExpoChkB"));

        formLayout->setWidget(6, QFormLayout::FieldRole, thrExpoChkB);

        label_11 = new QLabel(tabModelSetup);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_11);

        trimSWCB = new QComboBox(tabModelSetup);
        trimSWCB->setObjectName(QString::fromUtf8("trimSWCB"));

        formLayout->setWidget(7, QFormLayout::FieldRole, trimSWCB);

        label_12 = new QLabel(tabModelSetup);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_12);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        bcRUDChkB = new QCheckBox(tabModelSetup);
        bcRUDChkB->setObjectName(QString::fromUtf8("bcRUDChkB"));

        gridLayout_2->addWidget(bcRUDChkB, 0, 0, 1, 1);

        bcELEChkB = new QCheckBox(tabModelSetup);
        bcELEChkB->setObjectName(QString::fromUtf8("bcELEChkB"));

        gridLayout_2->addWidget(bcELEChkB, 0, 1, 1, 1);

        bcTHRChkB = new QCheckBox(tabModelSetup);
        bcTHRChkB->setObjectName(QString::fromUtf8("bcTHRChkB"));

        gridLayout_2->addWidget(bcTHRChkB, 0, 2, 1, 1);

        bcAILChkB = new QCheckBox(tabModelSetup);
        bcAILChkB->setObjectName(QString::fromUtf8("bcAILChkB"));

        gridLayout_2->addWidget(bcAILChkB, 0, 3, 1, 1);

        bcP1ChkB = new QCheckBox(tabModelSetup);
        bcP1ChkB->setObjectName(QString::fromUtf8("bcP1ChkB"));

        gridLayout_2->addWidget(bcP1ChkB, 0, 4, 1, 1);

        bcP2ChkB = new QCheckBox(tabModelSetup);
        bcP2ChkB->setObjectName(QString::fromUtf8("bcP2ChkB"));

        gridLayout_2->addWidget(bcP2ChkB, 0, 5, 1, 1);

        bcP3ChkB = new QCheckBox(tabModelSetup);
        bcP3ChkB->setObjectName(QString::fromUtf8("bcP3ChkB"));

        gridLayout_2->addWidget(bcP3ChkB, 0, 6, 1, 1);


        formLayout->setLayout(8, QFormLayout::FieldRole, gridLayout_2);

        label_13 = new QLabel(tabModelSetup);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_13);

        pulsePolCB = new QComboBox(tabModelSetup);
        pulsePolCB->setObjectName(QString::fromUtf8("pulsePolCB"));

        formLayout->setWidget(9, QFormLayout::FieldRole, pulsePolCB);

        label_55 = new QLabel(tabModelSetup);
        label_55->setObjectName(QString::fromUtf8("label_55"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_55);

        extendedLimitsChkB = new QCheckBox(tabModelSetup);
        extendedLimitsChkB->setObjectName(QString::fromUtf8("extendedLimitsChkB"));

        formLayout->setWidget(10, QFormLayout::FieldRole, extendedLimitsChkB);

        label_5 = new QLabel(tabModelSetup);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(11, QFormLayout::LabelRole, label_5);

        protocolCB = new QComboBox(tabModelSetup);
        protocolCB->insertItems(0, QStringList()
         << QString::fromUtf8("PPM")
         << QString::fromUtf8("Silver A")
         << QString::fromUtf8("Silver B")
         << QString::fromUtf8("Silver C")
         << QString::fromUtf8("Trac 09")
        );
        protocolCB->setObjectName(QString::fromUtf8("protocolCB"));

        formLayout->setWidget(11, QFormLayout::FieldRole, protocolCB);

        label_6 = new QLabel(tabModelSetup);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(13, QFormLayout::LabelRole, label_6);

        numChannelsSB = new QSpinBox(tabModelSetup);
        numChannelsSB->setObjectName(QString::fromUtf8("numChannelsSB"));
        numChannelsSB->setMinimum(4);
        numChannelsSB->setMaximum(16);
        numChannelsSB->setSingleStep(2);
        numChannelsSB->setValue(8);

        formLayout->setWidget(13, QFormLayout::FieldRole, numChannelsSB);

        label_9 = new QLabel(tabModelSetup);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(14, QFormLayout::LabelRole, label_9);

        ppmDelaySB = new QSpinBox(tabModelSetup);
        ppmDelaySB->setObjectName(QString::fromUtf8("ppmDelaySB"));
        ppmDelaySB->setMinimum(100);
        ppmDelaySB->setMaximum(800);
        ppmDelaySB->setSingleStep(50);
        ppmDelaySB->setValue(300);

        formLayout->setWidget(14, QFormLayout::FieldRole, ppmDelaySB);

        ppmFrameLengthDSB = new QDoubleSpinBox(tabModelSetup);
        ppmFrameLengthDSB->setObjectName(QString::fromUtf8("ppmFrameLengthDSB"));
        ppmFrameLengthDSB->setDecimals(1);
        ppmFrameLengthDSB->setMinimum(12.5);
        ppmFrameLengthDSB->setMaximum(32.5);
        ppmFrameLengthDSB->setSingleStep(0.5);
        ppmFrameLengthDSB->setValue(22.5);

        formLayout->setWidget(12, QFormLayout::FieldRole, ppmFrameLengthDSB);

        label_113 = new QLabel(tabModelSetup);
        label_113->setObjectName(QString::fromUtf8("label_113"));

        formLayout->setWidget(12, QFormLayout::LabelRole, label_113);

        label_114 = new QLabel(tabModelSetup);
        label_114->setObjectName(QString::fromUtf8("label_114"));

        formLayout->setWidget(15, QFormLayout::LabelRole, label_114);

        label_115 = new QLabel(tabModelSetup);
        label_115->setObjectName(QString::fromUtf8("label_115"));

        formLayout->setWidget(16, QFormLayout::LabelRole, label_115);

        TrainerChkB = new QCheckBox(tabModelSetup);
        TrainerChkB->setObjectName(QString::fromUtf8("TrainerChkB"));

        formLayout->setWidget(15, QFormLayout::FieldRole, TrainerChkB);

        T2ThrTrgChkB = new QCheckBox(tabModelSetup);
        T2ThrTrgChkB->setObjectName(QString::fromUtf8("T2ThrTrgChkB"));

        formLayout->setWidget(16, QFormLayout::FieldRole, T2ThrTrgChkB);

        tabWidget->addTab(tabModelSetup, QString());
        tabHeli = new QWidget();
        tabHeli->setObjectName(QString::fromUtf8("tabHeli"));
        formLayout_2 = new QFormLayout(tabHeli);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_103 = new QLabel(tabHeli);
        label_103->setObjectName(QString::fromUtf8("label_103"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_103);

        swashTypeCB = new QComboBox(tabHeli);
        swashTypeCB->setObjectName(QString::fromUtf8("swashTypeCB"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, swashTypeCB);

        label_106 = new QLabel(tabHeli);
        label_106->setObjectName(QString::fromUtf8("label_106"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_106);

        swashCollectiveCB = new QComboBox(tabHeli);
        swashCollectiveCB->setObjectName(QString::fromUtf8("swashCollectiveCB"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, swashCollectiveCB);

        label_107 = new QLabel(tabHeli);
        label_107->setObjectName(QString::fromUtf8("label_107"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_107);

        swashRingValSB = new QSpinBox(tabHeli);
        swashRingValSB->setObjectName(QString::fromUtf8("swashRingValSB"));
        swashRingValSB->setMinimum(0);
        swashRingValSB->setMaximum(100);
        swashRingValSB->setSingleStep(1);
        swashRingValSB->setValue(0);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, swashRingValSB);

        label_108 = new QLabel(tabHeli);
        label_108->setObjectName(QString::fromUtf8("label_108"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_108);

        gridLayout_20 = new QGridLayout();
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        swashInvertELE = new QCheckBox(tabHeli);
        swashInvertELE->setObjectName(QString::fromUtf8("swashInvertELE"));

        gridLayout_20->addWidget(swashInvertELE, 0, 0, 1, 1);

        swashInvertAIL = new QCheckBox(tabHeli);
        swashInvertAIL->setObjectName(QString::fromUtf8("swashInvertAIL"));

        gridLayout_20->addWidget(swashInvertAIL, 0, 1, 1, 1);

        swashInvertCOL = new QCheckBox(tabHeli);
        swashInvertCOL->setObjectName(QString::fromUtf8("swashInvertCOL"));

        gridLayout_20->addWidget(swashInvertCOL, 0, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_20->addItem(horizontalSpacer_7, 0, 3, 1, 1);


        formLayout_2->setLayout(3, QFormLayout::FieldRole, gridLayout_20);

        tabWidget->addTab(tabHeli, QString());
        tabExpo = new QWidget();
        tabExpo->setObjectName(QString::fromUtf8("tabExpo"));
        gridLayout_17 = new QGridLayout(tabExpo);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        RUD_Frame = new QFrame(tabExpo);
        RUD_Frame->setObjectName(QString::fromUtf8("RUD_Frame"));
        RUD_Frame->setFrameShape(QFrame::Panel);
        RUD_Frame->setFrameShadow(QFrame::Plain);
        gridLayout_10 = new QGridLayout(RUD_Frame);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        RUD_edrSw1 = new QComboBox(RUD_Frame);
        RUD_edrSw1->setObjectName(QString::fromUtf8("RUD_edrSw1"));

        gridLayout_10->addWidget(RUD_edrSw1, 2, 0, 1, 2);

        RUD_edrSw2 = new QComboBox(RUD_Frame);
        RUD_edrSw2->setObjectName(QString::fromUtf8("RUD_edrSw2"));

        gridLayout_10->addWidget(RUD_edrSw2, 2, 2, 1, 2);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_37 = new QLabel(RUD_Frame);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_37, 1, 0, 1, 1);

        RUD_ExpoLHi = new QSpinBox(RUD_Frame);
        RUD_ExpoLHi->setObjectName(QString::fromUtf8("RUD_ExpoLHi"));
        RUD_ExpoLHi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        RUD_ExpoLHi->setAccelerated(true);
        RUD_ExpoLHi->setMinimum(-100);
        RUD_ExpoLHi->setMaximum(100);

        gridLayout_9->addWidget(RUD_ExpoLHi, 1, 1, 1, 1);

        RUD_DrLHi = new QSpinBox(RUD_Frame);
        RUD_DrLHi->setObjectName(QString::fromUtf8("RUD_DrLHi"));
        RUD_DrLHi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        RUD_DrLHi->setAccelerated(true);
        RUD_DrLHi->setMinimum(-100);
        RUD_DrLHi->setMaximum(100);

        gridLayout_9->addWidget(RUD_DrLHi, 1, 2, 1, 1);

        RUD_DrRHi = new QSpinBox(RUD_Frame);
        RUD_DrRHi->setObjectName(QString::fromUtf8("RUD_DrRHi"));
        RUD_DrRHi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        RUD_DrRHi->setAccelerated(true);
        RUD_DrRHi->setMinimum(-100);
        RUD_DrRHi->setMaximum(100);

        gridLayout_9->addWidget(RUD_DrRHi, 1, 3, 1, 1);

        RUD_ExpoRHi = new QSpinBox(RUD_Frame);
        RUD_ExpoRHi->setObjectName(QString::fromUtf8("RUD_ExpoRHi"));
        RUD_ExpoRHi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        RUD_ExpoRHi->setAccelerated(true);
        RUD_ExpoRHi->setMinimum(-100);
        RUD_ExpoRHi->setMaximum(100);

        gridLayout_9->addWidget(RUD_ExpoRHi, 1, 4, 1, 1);

        label_38 = new QLabel(RUD_Frame);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_38, 2, 0, 1, 1);

        RUD_ExpoLMid = new QSpinBox(RUD_Frame);
        RUD_ExpoLMid->setObjectName(QString::fromUtf8("RUD_ExpoLMid"));
        RUD_ExpoLMid->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        RUD_ExpoLMid->setAccelerated(true);
        RUD_ExpoLMid->setMinimum(-100);
        RUD_ExpoLMid->setMaximum(100);

        gridLayout_9->addWidget(RUD_ExpoLMid, 2, 1, 1, 1);

        RUD_DrLMid = new QSpinBox(RUD_Frame);
        RUD_DrLMid->setObjectName(QString::fromUtf8("RUD_DrLMid"));
        RUD_DrLMid->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        RUD_DrLMid->setAccelerated(true);
        RUD_DrLMid->setMinimum(-100);
        RUD_DrLMid->setMaximum(100);

        gridLayout_9->addWidget(RUD_DrLMid, 2, 2, 1, 1);

        RUD_DrRMid = new QSpinBox(RUD_Frame);
        RUD_DrRMid->setObjectName(QString::fromUtf8("RUD_DrRMid"));
        RUD_DrRMid->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        RUD_DrRMid->setAccelerated(true);
        RUD_DrRMid->setMinimum(-100);
        RUD_DrRMid->setMaximum(100);

        gridLayout_9->addWidget(RUD_DrRMid, 2, 3, 1, 1);

        RUD_ExpoRMid = new QSpinBox(RUD_Frame);
        RUD_ExpoRMid->setObjectName(QString::fromUtf8("RUD_ExpoRMid"));
        RUD_ExpoRMid->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        RUD_ExpoRMid->setAccelerated(true);
        RUD_ExpoRMid->setMinimum(-100);
        RUD_ExpoRMid->setMaximum(100);

        gridLayout_9->addWidget(RUD_ExpoRMid, 2, 4, 1, 1);

        label_39 = new QLabel(RUD_Frame);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_39, 3, 0, 1, 1);

        RUD_ExpoLLow = new QSpinBox(RUD_Frame);
        RUD_ExpoLLow->setObjectName(QString::fromUtf8("RUD_ExpoLLow"));
        RUD_ExpoLLow->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        RUD_ExpoLLow->setAccelerated(true);
        RUD_ExpoLLow->setMinimum(-100);
        RUD_ExpoLLow->setMaximum(100);

        gridLayout_9->addWidget(RUD_ExpoLLow, 3, 1, 1, 1);

        RUD_DrLLow = new QSpinBox(RUD_Frame);
        RUD_DrLLow->setObjectName(QString::fromUtf8("RUD_DrLLow"));
        RUD_DrLLow->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        RUD_DrLLow->setAccelerated(true);
        RUD_DrLLow->setMinimum(-100);
        RUD_DrLLow->setMaximum(100);

        gridLayout_9->addWidget(RUD_DrLLow, 3, 2, 1, 1);

        RUD_DrRLow = new QSpinBox(RUD_Frame);
        RUD_DrRLow->setObjectName(QString::fromUtf8("RUD_DrRLow"));
        RUD_DrRLow->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        RUD_DrRLow->setAccelerated(true);
        RUD_DrRLow->setMinimum(-100);
        RUD_DrRLow->setMaximum(100);

        gridLayout_9->addWidget(RUD_DrRLow, 3, 3, 1, 1);

        RUD_ExpoRLow = new QSpinBox(RUD_Frame);
        RUD_ExpoRLow->setObjectName(QString::fromUtf8("RUD_ExpoRLow"));
        RUD_ExpoRLow->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        RUD_ExpoRLow->setAccelerated(true);
        RUD_ExpoRLow->setMinimum(-100);
        RUD_ExpoRLow->setMaximum(100);

        gridLayout_9->addWidget(RUD_ExpoRLow, 3, 4, 1, 1);

        label_64 = new QLabel(RUD_Frame);
        label_64->setObjectName(QString::fromUtf8("label_64"));
        label_64->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_64, 0, 1, 1, 1);

        label_65 = new QLabel(RUD_Frame);
        label_65->setObjectName(QString::fromUtf8("label_65"));
        label_65->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_65, 0, 2, 1, 1);

        label_69 = new QLabel(RUD_Frame);
        label_69->setObjectName(QString::fromUtf8("label_69"));
        label_69->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_69, 0, 3, 1, 1);

        label_77 = new QLabel(RUD_Frame);
        label_77->setObjectName(QString::fromUtf8("label_77"));
        label_77->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_77, 0, 4, 1, 1);


        gridLayout_10->addLayout(gridLayout_9, 3, 0, 1, 4);

        label_42 = new QLabel(RUD_Frame);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_42, 1, 0, 1, 2);

        label_43 = new QLabel(RUD_Frame);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_43, 1, 2, 1, 2);

        pushButton_1 = new QPushButton(RUD_Frame);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        QFont font;
        font.setPointSize(14);
        pushButton_1->setFont(font);

        gridLayout_10->addWidget(pushButton_1, 0, 1, 1, 2);


        gridLayout_17->addWidget(RUD_Frame, 0, 0, 1, 1);

        AIL_Frame = new QFrame(tabExpo);
        AIL_Frame->setObjectName(QString::fromUtf8("AIL_Frame"));
        AIL_Frame->setFrameShape(QFrame::Panel);
        AIL_Frame->setFrameShadow(QFrame::Plain);
        gridLayout_11 = new QGridLayout(AIL_Frame);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        AIL_edrSw1 = new QComboBox(AIL_Frame);
        AIL_edrSw1->setObjectName(QString::fromUtf8("AIL_edrSw1"));

        gridLayout_11->addWidget(AIL_edrSw1, 2, 0, 1, 2);

        AIL_edrSw2 = new QComboBox(AIL_Frame);
        AIL_edrSw2->setObjectName(QString::fromUtf8("AIL_edrSw2"));

        gridLayout_11->addWidget(AIL_edrSw2, 2, 2, 1, 2);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        label_51 = new QLabel(AIL_Frame);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_51, 1, 0, 1, 1);

        AIL_ExpoLHi = new QSpinBox(AIL_Frame);
        AIL_ExpoLHi->setObjectName(QString::fromUtf8("AIL_ExpoLHi"));
        AIL_ExpoLHi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AIL_ExpoLHi->setAccelerated(true);
        AIL_ExpoLHi->setMinimum(-100);
        AIL_ExpoLHi->setMaximum(100);

        gridLayout_12->addWidget(AIL_ExpoLHi, 1, 1, 1, 1);

        AIL_DrLHi = new QSpinBox(AIL_Frame);
        AIL_DrLHi->setObjectName(QString::fromUtf8("AIL_DrLHi"));
        AIL_DrLHi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AIL_DrLHi->setAccelerated(true);
        AIL_DrLHi->setMinimum(-100);
        AIL_DrLHi->setMaximum(100);

        gridLayout_12->addWidget(AIL_DrLHi, 1, 2, 1, 1);

        AIL_DrRHi = new QSpinBox(AIL_Frame);
        AIL_DrRHi->setObjectName(QString::fromUtf8("AIL_DrRHi"));
        AIL_DrRHi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AIL_DrRHi->setAccelerated(true);
        AIL_DrRHi->setMinimum(-100);
        AIL_DrRHi->setMaximum(100);

        gridLayout_12->addWidget(AIL_DrRHi, 1, 3, 1, 1);

        AIL_ExpoRHi = new QSpinBox(AIL_Frame);
        AIL_ExpoRHi->setObjectName(QString::fromUtf8("AIL_ExpoRHi"));
        AIL_ExpoRHi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AIL_ExpoRHi->setAccelerated(true);
        AIL_ExpoRHi->setMinimum(-100);
        AIL_ExpoRHi->setMaximum(100);

        gridLayout_12->addWidget(AIL_ExpoRHi, 1, 4, 1, 1);

        label_52 = new QLabel(AIL_Frame);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_52, 2, 0, 1, 1);

        AIL_ExpoLMid = new QSpinBox(AIL_Frame);
        AIL_ExpoLMid->setObjectName(QString::fromUtf8("AIL_ExpoLMid"));
        AIL_ExpoLMid->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AIL_ExpoLMid->setAccelerated(true);
        AIL_ExpoLMid->setMinimum(-100);
        AIL_ExpoLMid->setMaximum(100);

        gridLayout_12->addWidget(AIL_ExpoLMid, 2, 1, 1, 1);

        AIL_DrLMid = new QSpinBox(AIL_Frame);
        AIL_DrLMid->setObjectName(QString::fromUtf8("AIL_DrLMid"));
        AIL_DrLMid->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AIL_DrLMid->setAccelerated(true);
        AIL_DrLMid->setMinimum(-100);
        AIL_DrLMid->setMaximum(100);

        gridLayout_12->addWidget(AIL_DrLMid, 2, 2, 1, 1);

        AIL_DrRMid = new QSpinBox(AIL_Frame);
        AIL_DrRMid->setObjectName(QString::fromUtf8("AIL_DrRMid"));
        AIL_DrRMid->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AIL_DrRMid->setAccelerated(true);
        AIL_DrRMid->setMinimum(-100);
        AIL_DrRMid->setMaximum(100);

        gridLayout_12->addWidget(AIL_DrRMid, 2, 3, 1, 1);

        AIL_ExpoRMid = new QSpinBox(AIL_Frame);
        AIL_ExpoRMid->setObjectName(QString::fromUtf8("AIL_ExpoRMid"));
        AIL_ExpoRMid->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AIL_ExpoRMid->setAccelerated(true);
        AIL_ExpoRMid->setMinimum(-100);
        AIL_ExpoRMid->setMaximum(100);

        gridLayout_12->addWidget(AIL_ExpoRMid, 2, 4, 1, 1);

        label_53 = new QLabel(AIL_Frame);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_53, 3, 0, 1, 1);

        AIL_ExpoLLow = new QSpinBox(AIL_Frame);
        AIL_ExpoLLow->setObjectName(QString::fromUtf8("AIL_ExpoLLow"));
        AIL_ExpoLLow->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AIL_ExpoLLow->setAccelerated(true);
        AIL_ExpoLLow->setMinimum(-100);
        AIL_ExpoLLow->setMaximum(100);

        gridLayout_12->addWidget(AIL_ExpoLLow, 3, 1, 1, 1);

        AIL_DrLLow = new QSpinBox(AIL_Frame);
        AIL_DrLLow->setObjectName(QString::fromUtf8("AIL_DrLLow"));
        AIL_DrLLow->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AIL_DrLLow->setAccelerated(true);
        AIL_DrLLow->setMinimum(-100);
        AIL_DrLLow->setMaximum(100);

        gridLayout_12->addWidget(AIL_DrLLow, 3, 2, 1, 1);

        AIL_DrRLow = new QSpinBox(AIL_Frame);
        AIL_DrRLow->setObjectName(QString::fromUtf8("AIL_DrRLow"));
        AIL_DrRLow->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AIL_DrRLow->setAccelerated(true);
        AIL_DrRLow->setMinimum(-100);
        AIL_DrRLow->setMaximum(100);

        gridLayout_12->addWidget(AIL_DrRLow, 3, 3, 1, 1);

        AIL_ExpoRLow = new QSpinBox(AIL_Frame);
        AIL_ExpoRLow->setObjectName(QString::fromUtf8("AIL_ExpoRLow"));
        AIL_ExpoRLow->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AIL_ExpoRLow->setAccelerated(true);
        AIL_ExpoRLow->setMinimum(-100);
        AIL_ExpoRLow->setMaximum(100);

        gridLayout_12->addWidget(AIL_ExpoRLow, 3, 4, 1, 1);

        label_67 = new QLabel(AIL_Frame);
        label_67->setObjectName(QString::fromUtf8("label_67"));
        label_67->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_67, 0, 1, 1, 1);

        label_70 = new QLabel(AIL_Frame);
        label_70->setObjectName(QString::fromUtf8("label_70"));
        label_70->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_70, 0, 3, 1, 1);

        label_75 = new QLabel(AIL_Frame);
        label_75->setObjectName(QString::fromUtf8("label_75"));
        label_75->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_75, 0, 2, 1, 1);

        label_78 = new QLabel(AIL_Frame);
        label_78->setObjectName(QString::fromUtf8("label_78"));
        label_78->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_78, 0, 4, 1, 1);


        gridLayout_11->addLayout(gridLayout_12, 3, 0, 1, 4);

        label_44 = new QLabel(AIL_Frame);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_44, 1, 2, 1, 2);

        label_48 = new QLabel(AIL_Frame);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_48, 1, 0, 1, 2);

        pushButton_4 = new QPushButton(AIL_Frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font);

        gridLayout_11->addWidget(pushButton_4, 0, 1, 1, 2);


        gridLayout_17->addWidget(AIL_Frame, 0, 1, 1, 1);

        THR_Frame = new QFrame(tabExpo);
        THR_Frame->setObjectName(QString::fromUtf8("THR_Frame"));
        THR_Frame->setFrameShape(QFrame::Panel);
        THR_Frame->setFrameShadow(QFrame::Plain);
        gridLayout_13 = new QGridLayout(THR_Frame);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        THR_edrSw1 = new QComboBox(THR_Frame);
        THR_edrSw1->setObjectName(QString::fromUtf8("THR_edrSw1"));

        gridLayout_13->addWidget(THR_edrSw1, 3, 0, 1, 2);

        THR_edrSw2 = new QComboBox(THR_Frame);
        THR_edrSw2->setObjectName(QString::fromUtf8("THR_edrSw2"));

        gridLayout_13->addWidget(THR_edrSw2, 3, 2, 1, 2);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        label_58 = new QLabel(THR_Frame);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(label_58, 0, 2, 1, 1);

        label_59 = new QLabel(THR_Frame);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(label_59, 0, 3, 1, 1);

        label_60 = new QLabel(THR_Frame);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        label_60->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(label_60, 0, 4, 1, 1);

        label_61 = new QLabel(THR_Frame);
        label_61->setObjectName(QString::fromUtf8("label_61"));
        label_61->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(label_61, 1, 0, 1, 1);

        THR_ExpoLHi = new QSpinBox(THR_Frame);
        THR_ExpoLHi->setObjectName(QString::fromUtf8("THR_ExpoLHi"));
        THR_ExpoLHi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        THR_ExpoLHi->setAccelerated(true);
        THR_ExpoLHi->setMinimum(-100);
        THR_ExpoLHi->setMaximum(100);

        gridLayout_14->addWidget(THR_ExpoLHi, 1, 1, 1, 1);

        THR_DrLHi = new QSpinBox(THR_Frame);
        THR_DrLHi->setObjectName(QString::fromUtf8("THR_DrLHi"));
        THR_DrLHi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        THR_DrLHi->setAccelerated(true);
        THR_DrLHi->setMinimum(-100);
        THR_DrLHi->setMaximum(100);

        gridLayout_14->addWidget(THR_DrLHi, 1, 2, 1, 1);

        THR_DrRHi = new QSpinBox(THR_Frame);
        THR_DrRHi->setObjectName(QString::fromUtf8("THR_DrRHi"));
        THR_DrRHi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        THR_DrRHi->setAccelerated(true);
        THR_DrRHi->setMinimum(-100);
        THR_DrRHi->setMaximum(100);

        gridLayout_14->addWidget(THR_DrRHi, 1, 3, 1, 1);

        THR_ExpoRHi = new QSpinBox(THR_Frame);
        THR_ExpoRHi->setObjectName(QString::fromUtf8("THR_ExpoRHi"));
        THR_ExpoRHi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        THR_ExpoRHi->setAccelerated(true);
        THR_ExpoRHi->setMinimum(-100);
        THR_ExpoRHi->setMaximum(100);

        gridLayout_14->addWidget(THR_ExpoRHi, 1, 4, 1, 1);

        label_62 = new QLabel(THR_Frame);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        label_62->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(label_62, 2, 0, 1, 1);

        THR_ExpoLMid = new QSpinBox(THR_Frame);
        THR_ExpoLMid->setObjectName(QString::fromUtf8("THR_ExpoLMid"));
        THR_ExpoLMid->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        THR_ExpoLMid->setAccelerated(true);
        THR_ExpoLMid->setMinimum(-100);
        THR_ExpoLMid->setMaximum(100);

        gridLayout_14->addWidget(THR_ExpoLMid, 2, 1, 1, 1);

        THR_DrLMid = new QSpinBox(THR_Frame);
        THR_DrLMid->setObjectName(QString::fromUtf8("THR_DrLMid"));
        THR_DrLMid->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        THR_DrLMid->setAccelerated(true);
        THR_DrLMid->setMinimum(-100);
        THR_DrLMid->setMaximum(100);

        gridLayout_14->addWidget(THR_DrLMid, 2, 2, 1, 1);

        THR_DrRMid = new QSpinBox(THR_Frame);
        THR_DrRMid->setObjectName(QString::fromUtf8("THR_DrRMid"));
        THR_DrRMid->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        THR_DrRMid->setAccelerated(true);
        THR_DrRMid->setMinimum(-100);
        THR_DrRMid->setMaximum(100);

        gridLayout_14->addWidget(THR_DrRMid, 2, 3, 1, 1);

        THR_ExpoRMid = new QSpinBox(THR_Frame);
        THR_ExpoRMid->setObjectName(QString::fromUtf8("THR_ExpoRMid"));
        THR_ExpoRMid->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        THR_ExpoRMid->setAccelerated(true);
        THR_ExpoRMid->setMinimum(-100);
        THR_ExpoRMid->setMaximum(100);

        gridLayout_14->addWidget(THR_ExpoRMid, 2, 4, 1, 1);

        label_63 = new QLabel(THR_Frame);
        label_63->setObjectName(QString::fromUtf8("label_63"));
        label_63->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(label_63, 3, 0, 1, 1);

        THR_ExpoLLow = new QSpinBox(THR_Frame);
        THR_ExpoLLow->setObjectName(QString::fromUtf8("THR_ExpoLLow"));
        THR_ExpoLLow->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        THR_ExpoLLow->setAccelerated(true);
        THR_ExpoLLow->setMinimum(-100);
        THR_ExpoLLow->setMaximum(100);

        gridLayout_14->addWidget(THR_ExpoLLow, 3, 1, 1, 1);

        THR_DrLLow = new QSpinBox(THR_Frame);
        THR_DrLLow->setObjectName(QString::fromUtf8("THR_DrLLow"));
        THR_DrLLow->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        THR_DrLLow->setAccelerated(true);
        THR_DrLLow->setMinimum(-100);
        THR_DrLLow->setMaximum(100);

        gridLayout_14->addWidget(THR_DrLLow, 3, 2, 1, 1);

        THR_DrRLow = new QSpinBox(THR_Frame);
        THR_DrRLow->setObjectName(QString::fromUtf8("THR_DrRLow"));
        THR_DrRLow->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        THR_DrRLow->setAccelerated(true);
        THR_DrRLow->setMinimum(-100);
        THR_DrRLow->setMaximum(100);

        gridLayout_14->addWidget(THR_DrRLow, 3, 3, 1, 1);

        THR_ExpoRLow = new QSpinBox(THR_Frame);
        THR_ExpoRLow->setObjectName(QString::fromUtf8("THR_ExpoRLow"));
        THR_ExpoRLow->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        THR_ExpoRLow->setAccelerated(true);
        THR_ExpoRLow->setMinimum(-100);
        THR_ExpoRLow->setMaximum(100);

        gridLayout_14->addWidget(THR_ExpoRLow, 3, 4, 1, 1);

        label_57 = new QLabel(THR_Frame);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(label_57, 0, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_14, 4, 0, 1, 4);

        label_40 = new QLabel(THR_Frame);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(label_40, 2, 0, 1, 2);

        label_41 = new QLabel(THR_Frame);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(label_41, 2, 2, 1, 2);

        pushButton_2 = new QPushButton(THR_Frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);

        gridLayout_13->addWidget(pushButton_2, 0, 1, 1, 2);


        gridLayout_17->addWidget(THR_Frame, 1, 0, 1, 1);

        ELE_Frame = new QFrame(tabExpo);
        ELE_Frame->setObjectName(QString::fromUtf8("ELE_Frame"));
        ELE_Frame->setFrameShape(QFrame::Panel);
        ELE_Frame->setFrameShadow(QFrame::Plain);
        gridLayout_15 = new QGridLayout(ELE_Frame);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        ELE_edrSw1 = new QComboBox(ELE_Frame);
        ELE_edrSw1->setObjectName(QString::fromUtf8("ELE_edrSw1"));

        gridLayout_15->addWidget(ELE_edrSw1, 2, 0, 1, 2);

        ELE_edrSw2 = new QComboBox(ELE_Frame);
        ELE_edrSw2->setObjectName(QString::fromUtf8("ELE_edrSw2"));

        gridLayout_15->addWidget(ELE_edrSw2, 2, 2, 1, 2);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        label_71 = new QLabel(ELE_Frame);
        label_71->setObjectName(QString::fromUtf8("label_71"));
        label_71->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_71, 1, 0, 1, 1);

        ELE_ExpoLHi = new QSpinBox(ELE_Frame);
        ELE_ExpoLHi->setObjectName(QString::fromUtf8("ELE_ExpoLHi"));
        ELE_ExpoLHi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ELE_ExpoLHi->setAccelerated(true);
        ELE_ExpoLHi->setMinimum(-100);
        ELE_ExpoLHi->setMaximum(100);

        gridLayout_16->addWidget(ELE_ExpoLHi, 1, 1, 1, 1);

        ELE_DrLHi = new QSpinBox(ELE_Frame);
        ELE_DrLHi->setObjectName(QString::fromUtf8("ELE_DrLHi"));
        ELE_DrLHi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ELE_DrLHi->setAccelerated(true);
        ELE_DrLHi->setMinimum(-100);
        ELE_DrLHi->setMaximum(100);

        gridLayout_16->addWidget(ELE_DrLHi, 1, 2, 1, 1);

        ELE_DrRHi = new QSpinBox(ELE_Frame);
        ELE_DrRHi->setObjectName(QString::fromUtf8("ELE_DrRHi"));
        ELE_DrRHi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ELE_DrRHi->setAccelerated(true);
        ELE_DrRHi->setMinimum(-100);
        ELE_DrRHi->setMaximum(100);

        gridLayout_16->addWidget(ELE_DrRHi, 1, 3, 1, 1);

        ELE_ExpoRHi = new QSpinBox(ELE_Frame);
        ELE_ExpoRHi->setObjectName(QString::fromUtf8("ELE_ExpoRHi"));
        ELE_ExpoRHi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ELE_ExpoRHi->setAccelerated(true);
        ELE_ExpoRHi->setMinimum(-100);
        ELE_ExpoRHi->setMaximum(100);

        gridLayout_16->addWidget(ELE_ExpoRHi, 1, 4, 1, 1);

        label_72 = new QLabel(ELE_Frame);
        label_72->setObjectName(QString::fromUtf8("label_72"));
        label_72->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_72, 2, 0, 1, 1);

        ELE_ExpoLMid = new QSpinBox(ELE_Frame);
        ELE_ExpoLMid->setObjectName(QString::fromUtf8("ELE_ExpoLMid"));
        ELE_ExpoLMid->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ELE_ExpoLMid->setAccelerated(true);
        ELE_ExpoLMid->setMinimum(-100);
        ELE_ExpoLMid->setMaximum(100);

        gridLayout_16->addWidget(ELE_ExpoLMid, 2, 1, 1, 1);

        ELE_DrLMid = new QSpinBox(ELE_Frame);
        ELE_DrLMid->setObjectName(QString::fromUtf8("ELE_DrLMid"));
        ELE_DrLMid->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ELE_DrLMid->setAccelerated(true);
        ELE_DrLMid->setMinimum(-100);
        ELE_DrLMid->setMaximum(100);

        gridLayout_16->addWidget(ELE_DrLMid, 2, 2, 1, 1);

        ELE_DrRMid = new QSpinBox(ELE_Frame);
        ELE_DrRMid->setObjectName(QString::fromUtf8("ELE_DrRMid"));
        ELE_DrRMid->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ELE_DrRMid->setAccelerated(true);
        ELE_DrRMid->setMinimum(-100);
        ELE_DrRMid->setMaximum(100);

        gridLayout_16->addWidget(ELE_DrRMid, 2, 3, 1, 1);

        ELE_ExpoRMid = new QSpinBox(ELE_Frame);
        ELE_ExpoRMid->setObjectName(QString::fromUtf8("ELE_ExpoRMid"));
        ELE_ExpoRMid->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ELE_ExpoRMid->setAccelerated(true);
        ELE_ExpoRMid->setMinimum(-100);
        ELE_ExpoRMid->setMaximum(100);

        gridLayout_16->addWidget(ELE_ExpoRMid, 2, 4, 1, 1);

        label_73 = new QLabel(ELE_Frame);
        label_73->setObjectName(QString::fromUtf8("label_73"));
        label_73->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_73, 3, 0, 1, 1);

        ELE_ExpoLLow = new QSpinBox(ELE_Frame);
        ELE_ExpoLLow->setObjectName(QString::fromUtf8("ELE_ExpoLLow"));
        ELE_ExpoLLow->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ELE_ExpoLLow->setAccelerated(true);
        ELE_ExpoLLow->setMinimum(-100);
        ELE_ExpoLLow->setMaximum(100);

        gridLayout_16->addWidget(ELE_ExpoLLow, 3, 1, 1, 1);

        ELE_DrLLow = new QSpinBox(ELE_Frame);
        ELE_DrLLow->setObjectName(QString::fromUtf8("ELE_DrLLow"));
        ELE_DrLLow->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ELE_DrLLow->setAccelerated(true);
        ELE_DrLLow->setMinimum(-100);
        ELE_DrLLow->setMaximum(100);

        gridLayout_16->addWidget(ELE_DrLLow, 3, 2, 1, 1);

        ELE_DrRLow = new QSpinBox(ELE_Frame);
        ELE_DrRLow->setObjectName(QString::fromUtf8("ELE_DrRLow"));
        ELE_DrRLow->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ELE_DrRLow->setAccelerated(true);
        ELE_DrRLow->setMinimum(-100);
        ELE_DrRLow->setMaximum(100);

        gridLayout_16->addWidget(ELE_DrRLow, 3, 3, 1, 1);

        ELE_ExpoRLow = new QSpinBox(ELE_Frame);
        ELE_ExpoRLow->setObjectName(QString::fromUtf8("ELE_ExpoRLow"));
        ELE_ExpoRLow->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ELE_ExpoRLow->setAccelerated(true);
        ELE_ExpoRLow->setMinimum(-100);
        ELE_ExpoRLow->setMaximum(100);

        gridLayout_16->addWidget(ELE_ExpoRLow, 3, 4, 1, 1);

        label_68 = new QLabel(ELE_Frame);
        label_68->setObjectName(QString::fromUtf8("label_68"));
        label_68->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_68, 0, 1, 1, 1);

        label_74 = new QLabel(ELE_Frame);
        label_74->setObjectName(QString::fromUtf8("label_74"));
        label_74->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_74, 0, 3, 1, 1);

        label_76 = new QLabel(ELE_Frame);
        label_76->setObjectName(QString::fromUtf8("label_76"));
        label_76->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_76, 0, 2, 1, 1);

        label_79 = new QLabel(ELE_Frame);
        label_79->setObjectName(QString::fromUtf8("label_79"));
        label_79->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_79, 0, 4, 1, 1);


        gridLayout_15->addLayout(gridLayout_16, 3, 0, 1, 4);

        label_45 = new QLabel(ELE_Frame);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(label_45, 1, 2, 1, 2);

        label_47 = new QLabel(ELE_Frame);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(label_47, 1, 0, 1, 2);

        pushButton_3 = new QPushButton(ELE_Frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font);

        gridLayout_15->addWidget(pushButton_3, 0, 1, 1, 2);


        gridLayout_17->addWidget(ELE_Frame, 1, 1, 1, 1);

        tabWidget->addTab(tabExpo, QString());
        tabMix = new QWidget();
        tabMix->setObjectName(QString::fromUtf8("tabMix"));
        gridLayout_18 = new QGridLayout(tabMix);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        mixersLayout = new QGridLayout();
        mixersLayout->setObjectName(QString::fromUtf8("mixersLayout"));

        gridLayout_18->addLayout(mixersLayout, 0, 0, 1, 1);

        tabWidget->addTab(tabMix, QString());
        tabLimit = new QWidget();
        tabLimit->setObjectName(QString::fromUtf8("tabLimit"));
        gridLayout_6 = new QGridLayout(tabLimit);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_14 = new QLabel(tabLimit);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setText(QString::fromUtf8("CH1"));

        gridLayout_6->addWidget(label_14, 1, 0, 1, 1);

        offsetDSB_1 = new QDoubleSpinBox(tabLimit);
        offsetDSB_1->setObjectName(QString::fromUtf8("offsetDSB_1"));
        offsetDSB_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        offsetDSB_1->setAccelerated(true);
        offsetDSB_1->setDecimals(1);
        offsetDSB_1->setMinimum(-100);

        gridLayout_6->addWidget(offsetDSB_1, 1, 1, 1, 1);

        minSB_1 = new QSpinBox(tabLimit);
        minSB_1->setObjectName(QString::fromUtf8("minSB_1"));
        minSB_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        minSB_1->setAccelerated(true);
        minSB_1->setMinimum(-100);
        minSB_1->setMaximum(100);

        gridLayout_6->addWidget(minSB_1, 1, 2, 1, 1);

        maxSB_1 = new QSpinBox(tabLimit);
        maxSB_1->setObjectName(QString::fromUtf8("maxSB_1"));
        maxSB_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        maxSB_1->setAccelerated(true);
        maxSB_1->setMinimum(-100);
        maxSB_1->setMaximum(100);

        gridLayout_6->addWidget(maxSB_1, 1, 3, 1, 1);

        chInvCB_1 = new QComboBox(tabLimit);
        chInvCB_1->setObjectName(QString::fromUtf8("chInvCB_1"));

        gridLayout_6->addWidget(chInvCB_1, 1, 4, 1, 1);

        label_15 = new QLabel(tabLimit);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setText(QString::fromUtf8("CH2"));

        gridLayout_6->addWidget(label_15, 2, 0, 1, 1);

        offsetDSB_2 = new QDoubleSpinBox(tabLimit);
        offsetDSB_2->setObjectName(QString::fromUtf8("offsetDSB_2"));
        offsetDSB_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        offsetDSB_2->setAccelerated(true);
        offsetDSB_2->setDecimals(1);
        offsetDSB_2->setMinimum(-100);

        gridLayout_6->addWidget(offsetDSB_2, 2, 1, 1, 1);

        minSB_2 = new QSpinBox(tabLimit);
        minSB_2->setObjectName(QString::fromUtf8("minSB_2"));
        minSB_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        minSB_2->setAccelerated(true);
        minSB_2->setMinimum(-100);
        minSB_2->setMaximum(100);

        gridLayout_6->addWidget(minSB_2, 2, 2, 1, 1);

        maxSB_2 = new QSpinBox(tabLimit);
        maxSB_2->setObjectName(QString::fromUtf8("maxSB_2"));
        maxSB_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        maxSB_2->setAccelerated(true);
        maxSB_2->setMinimum(-100);
        maxSB_2->setMaximum(100);

        gridLayout_6->addWidget(maxSB_2, 2, 3, 1, 1);

        chInvCB_2 = new QComboBox(tabLimit);
        chInvCB_2->setObjectName(QString::fromUtf8("chInvCB_2"));

        gridLayout_6->addWidget(chInvCB_2, 2, 4, 1, 1);

        label_16 = new QLabel(tabLimit);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setText(QString::fromUtf8("CH3"));

        gridLayout_6->addWidget(label_16, 3, 0, 1, 1);

        offsetDSB_3 = new QDoubleSpinBox(tabLimit);
        offsetDSB_3->setObjectName(QString::fromUtf8("offsetDSB_3"));
        offsetDSB_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        offsetDSB_3->setAccelerated(true);
        offsetDSB_3->setDecimals(1);
        offsetDSB_3->setMinimum(-100);

        gridLayout_6->addWidget(offsetDSB_3, 3, 1, 1, 1);

        minSB_3 = new QSpinBox(tabLimit);
        minSB_3->setObjectName(QString::fromUtf8("minSB_3"));
        minSB_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        minSB_3->setAccelerated(true);
        minSB_3->setMinimum(-100);
        minSB_3->setMaximum(100);

        gridLayout_6->addWidget(minSB_3, 3, 2, 1, 1);

        maxSB_3 = new QSpinBox(tabLimit);
        maxSB_3->setObjectName(QString::fromUtf8("maxSB_3"));
        maxSB_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        maxSB_3->setAccelerated(true);
        maxSB_3->setMinimum(-100);
        maxSB_3->setMaximum(100);

        gridLayout_6->addWidget(maxSB_3, 3, 3, 1, 1);

        chInvCB_3 = new QComboBox(tabLimit);
        chInvCB_3->setObjectName(QString::fromUtf8("chInvCB_3"));

        gridLayout_6->addWidget(chInvCB_3, 3, 4, 1, 1);

        label_17 = new QLabel(tabLimit);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setText(QString::fromUtf8("CH4"));

        gridLayout_6->addWidget(label_17, 4, 0, 1, 1);

        offsetDSB_4 = new QDoubleSpinBox(tabLimit);
        offsetDSB_4->setObjectName(QString::fromUtf8("offsetDSB_4"));
        offsetDSB_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        offsetDSB_4->setAccelerated(true);
        offsetDSB_4->setDecimals(1);
        offsetDSB_4->setMinimum(-100);

        gridLayout_6->addWidget(offsetDSB_4, 4, 1, 1, 1);

        minSB_4 = new QSpinBox(tabLimit);
        minSB_4->setObjectName(QString::fromUtf8("minSB_4"));
        minSB_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        minSB_4->setAccelerated(true);
        minSB_4->setMinimum(-100);
        minSB_4->setMaximum(100);

        gridLayout_6->addWidget(minSB_4, 4, 2, 1, 1);

        maxSB_4 = new QSpinBox(tabLimit);
        maxSB_4->setObjectName(QString::fromUtf8("maxSB_4"));
        maxSB_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        maxSB_4->setAccelerated(true);
        maxSB_4->setMinimum(-100);
        maxSB_4->setMaximum(100);

        gridLayout_6->addWidget(maxSB_4, 4, 3, 1, 1);

        chInvCB_4 = new QComboBox(tabLimit);
        chInvCB_4->setObjectName(QString::fromUtf8("chInvCB_4"));

        gridLayout_6->addWidget(chInvCB_4, 4, 4, 1, 1);

        label_18 = new QLabel(tabLimit);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setText(QString::fromUtf8("CH5"));

        gridLayout_6->addWidget(label_18, 5, 0, 1, 1);

        offsetDSB_5 = new QDoubleSpinBox(tabLimit);
        offsetDSB_5->setObjectName(QString::fromUtf8("offsetDSB_5"));
        offsetDSB_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        offsetDSB_5->setAccelerated(true);
        offsetDSB_5->setDecimals(1);
        offsetDSB_5->setMinimum(-100);

        gridLayout_6->addWidget(offsetDSB_5, 5, 1, 1, 1);

        minSB_5 = new QSpinBox(tabLimit);
        minSB_5->setObjectName(QString::fromUtf8("minSB_5"));
        minSB_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        minSB_5->setAccelerated(true);
        minSB_5->setMinimum(-100);
        minSB_5->setMaximum(100);

        gridLayout_6->addWidget(minSB_5, 5, 2, 1, 1);

        maxSB_5 = new QSpinBox(tabLimit);
        maxSB_5->setObjectName(QString::fromUtf8("maxSB_5"));
        maxSB_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        maxSB_5->setAccelerated(true);
        maxSB_5->setMinimum(-100);
        maxSB_5->setMaximum(100);

        gridLayout_6->addWidget(maxSB_5, 5, 3, 1, 1);

        chInvCB_5 = new QComboBox(tabLimit);
        chInvCB_5->setObjectName(QString::fromUtf8("chInvCB_5"));

        gridLayout_6->addWidget(chInvCB_5, 5, 4, 1, 1);

        label_19 = new QLabel(tabLimit);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setText(QString::fromUtf8("CH6"));

        gridLayout_6->addWidget(label_19, 6, 0, 1, 1);

        offsetDSB_6 = new QDoubleSpinBox(tabLimit);
        offsetDSB_6->setObjectName(QString::fromUtf8("offsetDSB_6"));
        offsetDSB_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        offsetDSB_6->setAccelerated(true);
        offsetDSB_6->setDecimals(1);
        offsetDSB_6->setMinimum(-100);

        gridLayout_6->addWidget(offsetDSB_6, 6, 1, 1, 1);

        minSB_6 = new QSpinBox(tabLimit);
        minSB_6->setObjectName(QString::fromUtf8("minSB_6"));
        minSB_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        minSB_6->setAccelerated(true);
        minSB_6->setMinimum(-100);
        minSB_6->setMaximum(100);

        gridLayout_6->addWidget(minSB_6, 6, 2, 1, 1);

        maxSB_6 = new QSpinBox(tabLimit);
        maxSB_6->setObjectName(QString::fromUtf8("maxSB_6"));
        maxSB_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        maxSB_6->setAccelerated(true);
        maxSB_6->setMinimum(-100);
        maxSB_6->setMaximum(100);

        gridLayout_6->addWidget(maxSB_6, 6, 3, 1, 1);

        chInvCB_6 = new QComboBox(tabLimit);
        chInvCB_6->setObjectName(QString::fromUtf8("chInvCB_6"));

        gridLayout_6->addWidget(chInvCB_6, 6, 4, 1, 1);

        label_20 = new QLabel(tabLimit);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setText(QString::fromUtf8("CH7"));

        gridLayout_6->addWidget(label_20, 7, 0, 1, 1);

        offsetDSB_7 = new QDoubleSpinBox(tabLimit);
        offsetDSB_7->setObjectName(QString::fromUtf8("offsetDSB_7"));
        offsetDSB_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        offsetDSB_7->setAccelerated(true);
        offsetDSB_7->setDecimals(1);
        offsetDSB_7->setMinimum(-100);

        gridLayout_6->addWidget(offsetDSB_7, 7, 1, 1, 1);

        minSB_7 = new QSpinBox(tabLimit);
        minSB_7->setObjectName(QString::fromUtf8("minSB_7"));
        minSB_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        minSB_7->setAccelerated(true);
        minSB_7->setMinimum(-100);
        minSB_7->setMaximum(100);

        gridLayout_6->addWidget(minSB_7, 7, 2, 1, 1);

        maxSB_7 = new QSpinBox(tabLimit);
        maxSB_7->setObjectName(QString::fromUtf8("maxSB_7"));
        maxSB_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        maxSB_7->setAccelerated(true);
        maxSB_7->setMinimum(-100);
        maxSB_7->setMaximum(100);

        gridLayout_6->addWidget(maxSB_7, 7, 3, 1, 1);

        chInvCB_7 = new QComboBox(tabLimit);
        chInvCB_7->setObjectName(QString::fromUtf8("chInvCB_7"));

        gridLayout_6->addWidget(chInvCB_7, 7, 4, 1, 1);

        label_21 = new QLabel(tabLimit);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setText(QString::fromUtf8("CH8"));

        gridLayout_6->addWidget(label_21, 8, 0, 1, 1);

        offsetDSB_8 = new QDoubleSpinBox(tabLimit);
        offsetDSB_8->setObjectName(QString::fromUtf8("offsetDSB_8"));
        offsetDSB_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        offsetDSB_8->setAccelerated(true);
        offsetDSB_8->setDecimals(1);
        offsetDSB_8->setMinimum(-100);

        gridLayout_6->addWidget(offsetDSB_8, 8, 1, 1, 1);

        minSB_8 = new QSpinBox(tabLimit);
        minSB_8->setObjectName(QString::fromUtf8("minSB_8"));
        minSB_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        minSB_8->setAccelerated(true);
        minSB_8->setMinimum(-100);
        minSB_8->setMaximum(100);

        gridLayout_6->addWidget(minSB_8, 8, 2, 1, 1);

        maxSB_8 = new QSpinBox(tabLimit);
        maxSB_8->setObjectName(QString::fromUtf8("maxSB_8"));
        maxSB_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        maxSB_8->setAccelerated(true);
        maxSB_8->setMinimum(-100);
        maxSB_8->setMaximum(100);

        gridLayout_6->addWidget(maxSB_8, 8, 3, 1, 1);

        chInvCB_8 = new QComboBox(tabLimit);
        chInvCB_8->setObjectName(QString::fromUtf8("chInvCB_8"));

        gridLayout_6->addWidget(chInvCB_8, 8, 4, 1, 1);

        label_22 = new QLabel(tabLimit);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setText(QString::fromUtf8("CH9"));

        gridLayout_6->addWidget(label_22, 9, 0, 1, 1);

        offsetDSB_9 = new QDoubleSpinBox(tabLimit);
        offsetDSB_9->setObjectName(QString::fromUtf8("offsetDSB_9"));
        offsetDSB_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        offsetDSB_9->setAccelerated(true);
        offsetDSB_9->setDecimals(1);
        offsetDSB_9->setMinimum(-100);

        gridLayout_6->addWidget(offsetDSB_9, 9, 1, 1, 1);

        minSB_9 = new QSpinBox(tabLimit);
        minSB_9->setObjectName(QString::fromUtf8("minSB_9"));
        minSB_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        minSB_9->setAccelerated(true);
        minSB_9->setMinimum(-100);
        minSB_9->setMaximum(100);

        gridLayout_6->addWidget(minSB_9, 9, 2, 1, 1);

        maxSB_9 = new QSpinBox(tabLimit);
        maxSB_9->setObjectName(QString::fromUtf8("maxSB_9"));
        maxSB_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        maxSB_9->setAccelerated(true);
        maxSB_9->setMinimum(-100);
        maxSB_9->setMaximum(100);

        gridLayout_6->addWidget(maxSB_9, 9, 3, 1, 1);

        chInvCB_9 = new QComboBox(tabLimit);
        chInvCB_9->setObjectName(QString::fromUtf8("chInvCB_9"));

        gridLayout_6->addWidget(chInvCB_9, 9, 4, 1, 1);

        label_23 = new QLabel(tabLimit);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setText(QString::fromUtf8("CH10"));

        gridLayout_6->addWidget(label_23, 10, 0, 1, 1);

        offsetDSB_10 = new QDoubleSpinBox(tabLimit);
        offsetDSB_10->setObjectName(QString::fromUtf8("offsetDSB_10"));
        offsetDSB_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        offsetDSB_10->setAccelerated(true);
        offsetDSB_10->setDecimals(1);
        offsetDSB_10->setMinimum(-100);

        gridLayout_6->addWidget(offsetDSB_10, 10, 1, 1, 1);

        minSB_10 = new QSpinBox(tabLimit);
        minSB_10->setObjectName(QString::fromUtf8("minSB_10"));
        minSB_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        minSB_10->setAccelerated(true);
        minSB_10->setMinimum(-100);
        minSB_10->setMaximum(100);

        gridLayout_6->addWidget(minSB_10, 10, 2, 1, 1);

        maxSB_10 = new QSpinBox(tabLimit);
        maxSB_10->setObjectName(QString::fromUtf8("maxSB_10"));
        maxSB_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        maxSB_10->setAccelerated(true);
        maxSB_10->setMinimum(-100);
        maxSB_10->setMaximum(100);

        gridLayout_6->addWidget(maxSB_10, 10, 3, 1, 1);

        chInvCB_10 = new QComboBox(tabLimit);
        chInvCB_10->setObjectName(QString::fromUtf8("chInvCB_10"));

        gridLayout_6->addWidget(chInvCB_10, 10, 4, 1, 1);

        label_24 = new QLabel(tabLimit);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setText(QString::fromUtf8("CH11"));

        gridLayout_6->addWidget(label_24, 11, 0, 1, 1);

        offsetDSB_11 = new QDoubleSpinBox(tabLimit);
        offsetDSB_11->setObjectName(QString::fromUtf8("offsetDSB_11"));
        offsetDSB_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        offsetDSB_11->setAccelerated(true);
        offsetDSB_11->setDecimals(1);
        offsetDSB_11->setMinimum(-100);

        gridLayout_6->addWidget(offsetDSB_11, 11, 1, 1, 1);

        minSB_11 = new QSpinBox(tabLimit);
        minSB_11->setObjectName(QString::fromUtf8("minSB_11"));
        minSB_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        minSB_11->setAccelerated(true);
        minSB_11->setMinimum(-100);
        minSB_11->setMaximum(100);

        gridLayout_6->addWidget(minSB_11, 11, 2, 1, 1);

        maxSB_11 = new QSpinBox(tabLimit);
        maxSB_11->setObjectName(QString::fromUtf8("maxSB_11"));
        maxSB_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        maxSB_11->setAccelerated(true);
        maxSB_11->setMinimum(-100);
        maxSB_11->setMaximum(100);

        gridLayout_6->addWidget(maxSB_11, 11, 3, 1, 1);

        chInvCB_11 = new QComboBox(tabLimit);
        chInvCB_11->setObjectName(QString::fromUtf8("chInvCB_11"));

        gridLayout_6->addWidget(chInvCB_11, 11, 4, 1, 1);

        label_25 = new QLabel(tabLimit);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setText(QString::fromUtf8("CH12"));

        gridLayout_6->addWidget(label_25, 12, 0, 1, 1);

        offsetDSB_12 = new QDoubleSpinBox(tabLimit);
        offsetDSB_12->setObjectName(QString::fromUtf8("offsetDSB_12"));
        offsetDSB_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        offsetDSB_12->setAccelerated(true);
        offsetDSB_12->setDecimals(1);
        offsetDSB_12->setMinimum(-100);

        gridLayout_6->addWidget(offsetDSB_12, 12, 1, 1, 1);

        minSB_12 = new QSpinBox(tabLimit);
        minSB_12->setObjectName(QString::fromUtf8("minSB_12"));
        minSB_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        minSB_12->setAccelerated(true);
        minSB_12->setMinimum(-100);
        minSB_12->setMaximum(100);

        gridLayout_6->addWidget(minSB_12, 12, 2, 1, 1);

        maxSB_12 = new QSpinBox(tabLimit);
        maxSB_12->setObjectName(QString::fromUtf8("maxSB_12"));
        maxSB_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        maxSB_12->setAccelerated(true);
        maxSB_12->setMinimum(-100);
        maxSB_12->setMaximum(100);

        gridLayout_6->addWidget(maxSB_12, 12, 3, 1, 1);

        chInvCB_12 = new QComboBox(tabLimit);
        chInvCB_12->setObjectName(QString::fromUtf8("chInvCB_12"));

        gridLayout_6->addWidget(chInvCB_12, 12, 4, 1, 1);

        label_26 = new QLabel(tabLimit);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setText(QString::fromUtf8("CH13"));

        gridLayout_6->addWidget(label_26, 13, 0, 1, 1);

        offsetDSB_13 = new QDoubleSpinBox(tabLimit);
        offsetDSB_13->setObjectName(QString::fromUtf8("offsetDSB_13"));
        offsetDSB_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        offsetDSB_13->setAccelerated(true);
        offsetDSB_13->setDecimals(1);
        offsetDSB_13->setMinimum(-100);

        gridLayout_6->addWidget(offsetDSB_13, 13, 1, 1, 1);

        minSB_13 = new QSpinBox(tabLimit);
        minSB_13->setObjectName(QString::fromUtf8("minSB_13"));
        minSB_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        minSB_13->setAccelerated(true);
        minSB_13->setMinimum(-100);
        minSB_13->setMaximum(100);

        gridLayout_6->addWidget(minSB_13, 13, 2, 1, 1);

        maxSB_13 = new QSpinBox(tabLimit);
        maxSB_13->setObjectName(QString::fromUtf8("maxSB_13"));
        maxSB_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        maxSB_13->setAccelerated(true);
        maxSB_13->setMinimum(-100);
        maxSB_13->setMaximum(100);

        gridLayout_6->addWidget(maxSB_13, 13, 3, 1, 1);

        chInvCB_13 = new QComboBox(tabLimit);
        chInvCB_13->setObjectName(QString::fromUtf8("chInvCB_13"));

        gridLayout_6->addWidget(chInvCB_13, 13, 4, 1, 1);

        label_27 = new QLabel(tabLimit);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setText(QString::fromUtf8("CH14"));

        gridLayout_6->addWidget(label_27, 14, 0, 1, 1);

        offsetDSB_14 = new QDoubleSpinBox(tabLimit);
        offsetDSB_14->setObjectName(QString::fromUtf8("offsetDSB_14"));
        offsetDSB_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        offsetDSB_14->setAccelerated(true);
        offsetDSB_14->setDecimals(1);
        offsetDSB_14->setMinimum(-100);

        gridLayout_6->addWidget(offsetDSB_14, 14, 1, 1, 1);

        minSB_14 = new QSpinBox(tabLimit);
        minSB_14->setObjectName(QString::fromUtf8("minSB_14"));
        minSB_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        minSB_14->setAccelerated(true);
        minSB_14->setMinimum(-100);
        minSB_14->setMaximum(100);

        gridLayout_6->addWidget(minSB_14, 14, 2, 1, 1);

        maxSB_14 = new QSpinBox(tabLimit);
        maxSB_14->setObjectName(QString::fromUtf8("maxSB_14"));
        maxSB_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        maxSB_14->setAccelerated(true);
        maxSB_14->setMinimum(-100);
        maxSB_14->setMaximum(100);

        gridLayout_6->addWidget(maxSB_14, 14, 3, 1, 1);

        chInvCB_14 = new QComboBox(tabLimit);
        chInvCB_14->setObjectName(QString::fromUtf8("chInvCB_14"));

        gridLayout_6->addWidget(chInvCB_14, 14, 4, 1, 1);

        label_28 = new QLabel(tabLimit);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setText(QString::fromUtf8("CH15"));

        gridLayout_6->addWidget(label_28, 15, 0, 1, 1);

        offsetDSB_15 = new QDoubleSpinBox(tabLimit);
        offsetDSB_15->setObjectName(QString::fromUtf8("offsetDSB_15"));
        offsetDSB_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        offsetDSB_15->setAccelerated(true);
        offsetDSB_15->setDecimals(1);
        offsetDSB_15->setMinimum(-100);

        gridLayout_6->addWidget(offsetDSB_15, 15, 1, 1, 1);

        minSB_15 = new QSpinBox(tabLimit);
        minSB_15->setObjectName(QString::fromUtf8("minSB_15"));
        minSB_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        minSB_15->setAccelerated(true);
        minSB_15->setMinimum(-100);
        minSB_15->setMaximum(100);

        gridLayout_6->addWidget(minSB_15, 15, 2, 1, 1);

        maxSB_15 = new QSpinBox(tabLimit);
        maxSB_15->setObjectName(QString::fromUtf8("maxSB_15"));
        maxSB_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        maxSB_15->setAccelerated(true);
        maxSB_15->setMinimum(-100);
        maxSB_15->setMaximum(100);

        gridLayout_6->addWidget(maxSB_15, 15, 3, 1, 1);

        chInvCB_15 = new QComboBox(tabLimit);
        chInvCB_15->setObjectName(QString::fromUtf8("chInvCB_15"));

        gridLayout_6->addWidget(chInvCB_15, 15, 4, 1, 1);

        label_29 = new QLabel(tabLimit);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setText(QString::fromUtf8("CH16"));

        gridLayout_6->addWidget(label_29, 16, 0, 1, 1);

        offsetDSB_16 = new QDoubleSpinBox(tabLimit);
        offsetDSB_16->setObjectName(QString::fromUtf8("offsetDSB_16"));
        offsetDSB_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        offsetDSB_16->setAccelerated(true);
        offsetDSB_16->setDecimals(1);
        offsetDSB_16->setMinimum(-100);

        gridLayout_6->addWidget(offsetDSB_16, 16, 1, 1, 1);

        minSB_16 = new QSpinBox(tabLimit);
        minSB_16->setObjectName(QString::fromUtf8("minSB_16"));
        minSB_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        minSB_16->setAccelerated(true);
        minSB_16->setMinimum(-100);
        minSB_16->setMaximum(100);

        gridLayout_6->addWidget(minSB_16, 16, 2, 1, 1);

        maxSB_16 = new QSpinBox(tabLimit);
        maxSB_16->setObjectName(QString::fromUtf8("maxSB_16"));
        maxSB_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        maxSB_16->setAccelerated(true);
        maxSB_16->setMinimum(-100);
        maxSB_16->setMaximum(100);

        gridLayout_6->addWidget(maxSB_16, 16, 3, 1, 1);

        chInvCB_16 = new QComboBox(tabLimit);
        chInvCB_16->setObjectName(QString::fromUtf8("chInvCB_16"));

        gridLayout_6->addWidget(chInvCB_16, 16, 4, 1, 1);

        label_36 = new QLabel(tabLimit);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setFrameShape(QFrame::Panel);
        label_36->setFrameShadow(QFrame::Raised);
        label_36->setMidLineWidth(0);
        label_36->setAlignment(Qt::AlignCenter);
        label_36->setMargin(3);

        gridLayout_6->addWidget(label_36, 0, 0, 1, 1);

        label_46 = new QLabel(tabLimit);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setFrameShape(QFrame::Panel);
        label_46->setFrameShadow(QFrame::Raised);
        label_46->setMidLineWidth(0);
        label_46->setAlignment(Qt::AlignCenter);
        label_46->setMargin(3);

        gridLayout_6->addWidget(label_46, 0, 1, 1, 1);

        label_49 = new QLabel(tabLimit);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setFrameShape(QFrame::Panel);
        label_49->setFrameShadow(QFrame::Raised);
        label_49->setMidLineWidth(0);
        label_49->setAlignment(Qt::AlignCenter);
        label_49->setMargin(3);

        gridLayout_6->addWidget(label_49, 0, 2, 1, 1);

        label_50 = new QLabel(tabLimit);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setFrameShape(QFrame::Panel);
        label_50->setFrameShadow(QFrame::Raised);
        label_50->setMidLineWidth(0);
        label_50->setAlignment(Qt::AlignCenter);
        label_50->setMargin(3);

        gridLayout_6->addWidget(label_50, 0, 3, 1, 1);

        label_54 = new QLabel(tabLimit);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setFrameShape(QFrame::Panel);
        label_54->setFrameShadow(QFrame::Raised);
        label_54->setMidLineWidth(0);
        label_54->setAlignment(Qt::AlignCenter);
        label_54->setMargin(3);

        gridLayout_6->addWidget(label_54, 0, 4, 1, 1);

        gridLayout_6->setRowStretch(1, 1);
        gridLayout_6->setRowStretch(2, 1);
        gridLayout_6->setRowStretch(3, 1);
        gridLayout_6->setRowStretch(4, 1);
        gridLayout_6->setRowStretch(5, 1);
        gridLayout_6->setRowStretch(6, 1);
        gridLayout_6->setRowStretch(7, 1);
        gridLayout_6->setRowStretch(8, 1);
        gridLayout_6->setRowStretch(9, 1);
        gridLayout_6->setRowStretch(10, 1);
        gridLayout_6->setRowStretch(11, 1);
        gridLayout_6->setRowStretch(12, 1);
        gridLayout_6->setRowStretch(13, 1);
        gridLayout_6->setRowStretch(14, 1);
        gridLayout_6->setRowStretch(15, 1);
        gridLayout_6->setRowStretch(16, 1);
        gridLayout_6->setColumnStretch(1, 1);
        gridLayout_6->setColumnStretch(2, 1);
        gridLayout_6->setColumnStretch(3, 1);
        gridLayout_6->setColumnStretch(4, 1);
        tabWidget->addTab(tabLimit, QString());
        tabCurve = new QWidget();
        tabCurve->setObjectName(QString::fromUtf8("tabCurve"));
        gridLayout_7 = new QGridLayout(tabCurve);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        curveEdit_1 = new QPushButton(tabCurve);
        curveEdit_1->setObjectName(QString::fromUtf8("curveEdit_1"));

        gridLayout_7->addWidget(curveEdit_1, 0, 0, 1, 1);

        curvePt1_1 = new QSpinBox(tabCurve);
        curvePt1_1->setObjectName(QString::fromUtf8("curvePt1_1"));
        curvePt1_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt1_1->setAccelerated(true);
        curvePt1_1->setMinimum(-100);
        curvePt1_1->setMaximum(100);

        gridLayout_7->addWidget(curvePt1_1, 0, 1, 1, 1);

        curvePt2_1 = new QSpinBox(tabCurve);
        curvePt2_1->setObjectName(QString::fromUtf8("curvePt2_1"));
        curvePt2_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt2_1->setAccelerated(true);
        curvePt2_1->setMinimum(-100);
        curvePt2_1->setMaximum(100);

        gridLayout_7->addWidget(curvePt2_1, 0, 2, 1, 1);

        curvePt3_1 = new QSpinBox(tabCurve);
        curvePt3_1->setObjectName(QString::fromUtf8("curvePt3_1"));
        curvePt3_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt3_1->setAccelerated(true);
        curvePt3_1->setMinimum(-100);
        curvePt3_1->setMaximum(100);

        gridLayout_7->addWidget(curvePt3_1, 0, 3, 1, 1);

        curvePt4_1 = new QSpinBox(tabCurve);
        curvePt4_1->setObjectName(QString::fromUtf8("curvePt4_1"));
        curvePt4_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt4_1->setAccelerated(true);
        curvePt4_1->setMinimum(-100);
        curvePt4_1->setMaximum(100);

        gridLayout_7->addWidget(curvePt4_1, 0, 4, 1, 1);

        curvePt5_1 = new QSpinBox(tabCurve);
        curvePt5_1->setObjectName(QString::fromUtf8("curvePt5_1"));
        curvePt5_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt5_1->setAccelerated(true);
        curvePt5_1->setMinimum(-100);
        curvePt5_1->setMaximum(100);

        gridLayout_7->addWidget(curvePt5_1, 0, 5, 1, 1);

        curvePreview = new QGraphicsView(tabCurve);
        curvePreview->setObjectName(QString::fromUtf8("curvePreview"));

        gridLayout_7->addWidget(curvePreview, 0, 6, 8, 4);

        curveEdit_2 = new QPushButton(tabCurve);
        curveEdit_2->setObjectName(QString::fromUtf8("curveEdit_2"));

        gridLayout_7->addWidget(curveEdit_2, 1, 0, 1, 1);

        curvePt1_2 = new QSpinBox(tabCurve);
        curvePt1_2->setObjectName(QString::fromUtf8("curvePt1_2"));
        curvePt1_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt1_2->setAccelerated(true);
        curvePt1_2->setMinimum(-100);
        curvePt1_2->setMaximum(100);

        gridLayout_7->addWidget(curvePt1_2, 1, 1, 1, 1);

        curvePt2_2 = new QSpinBox(tabCurve);
        curvePt2_2->setObjectName(QString::fromUtf8("curvePt2_2"));
        curvePt2_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt2_2->setAccelerated(true);
        curvePt2_2->setMinimum(-100);
        curvePt2_2->setMaximum(100);

        gridLayout_7->addWidget(curvePt2_2, 1, 2, 1, 1);

        curvePt3_2 = new QSpinBox(tabCurve);
        curvePt3_2->setObjectName(QString::fromUtf8("curvePt3_2"));
        curvePt3_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt3_2->setAccelerated(true);
        curvePt3_2->setMinimum(-100);
        curvePt3_2->setMaximum(100);

        gridLayout_7->addWidget(curvePt3_2, 1, 3, 1, 1);

        curvePt4_2 = new QSpinBox(tabCurve);
        curvePt4_2->setObjectName(QString::fromUtf8("curvePt4_2"));
        curvePt4_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt4_2->setAccelerated(true);
        curvePt4_2->setMinimum(-100);
        curvePt4_2->setMaximum(100);

        gridLayout_7->addWidget(curvePt4_2, 1, 4, 1, 1);

        curvePt5_2 = new QSpinBox(tabCurve);
        curvePt5_2->setObjectName(QString::fromUtf8("curvePt5_2"));
        curvePt5_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt5_2->setAccelerated(true);
        curvePt5_2->setMinimum(-100);
        curvePt5_2->setMaximum(100);

        gridLayout_7->addWidget(curvePt5_2, 1, 5, 1, 1);

        curveEdit_3 = new QPushButton(tabCurve);
        curveEdit_3->setObjectName(QString::fromUtf8("curveEdit_3"));

        gridLayout_7->addWidget(curveEdit_3, 2, 0, 1, 1);

        curvePt1_3 = new QSpinBox(tabCurve);
        curvePt1_3->setObjectName(QString::fromUtf8("curvePt1_3"));
        curvePt1_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt1_3->setAccelerated(true);
        curvePt1_3->setMinimum(-100);
        curvePt1_3->setMaximum(100);

        gridLayout_7->addWidget(curvePt1_3, 2, 1, 1, 1);

        curvePt2_3 = new QSpinBox(tabCurve);
        curvePt2_3->setObjectName(QString::fromUtf8("curvePt2_3"));
        curvePt2_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt2_3->setAccelerated(true);
        curvePt2_3->setMinimum(-100);
        curvePt2_3->setMaximum(100);

        gridLayout_7->addWidget(curvePt2_3, 2, 2, 1, 1);

        curvePt3_3 = new QSpinBox(tabCurve);
        curvePt3_3->setObjectName(QString::fromUtf8("curvePt3_3"));
        curvePt3_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt3_3->setAccelerated(true);
        curvePt3_3->setMinimum(-100);
        curvePt3_3->setMaximum(100);

        gridLayout_7->addWidget(curvePt3_3, 2, 3, 1, 1);

        curvePt4_3 = new QSpinBox(tabCurve);
        curvePt4_3->setObjectName(QString::fromUtf8("curvePt4_3"));
        curvePt4_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt4_3->setAccelerated(true);
        curvePt4_3->setMinimum(-100);
        curvePt4_3->setMaximum(100);

        gridLayout_7->addWidget(curvePt4_3, 2, 4, 1, 1);

        curvePt5_3 = new QSpinBox(tabCurve);
        curvePt5_3->setObjectName(QString::fromUtf8("curvePt5_3"));
        curvePt5_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt5_3->setAccelerated(true);
        curvePt5_3->setMinimum(-100);
        curvePt5_3->setMaximum(100);

        gridLayout_7->addWidget(curvePt5_3, 2, 5, 1, 1);

        curveEdit_4 = new QPushButton(tabCurve);
        curveEdit_4->setObjectName(QString::fromUtf8("curveEdit_4"));

        gridLayout_7->addWidget(curveEdit_4, 3, 0, 1, 1);

        curvePt1_4 = new QSpinBox(tabCurve);
        curvePt1_4->setObjectName(QString::fromUtf8("curvePt1_4"));
        curvePt1_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt1_4->setAccelerated(true);
        curvePt1_4->setMinimum(-100);
        curvePt1_4->setMaximum(100);

        gridLayout_7->addWidget(curvePt1_4, 3, 1, 1, 1);

        curvePt2_4 = new QSpinBox(tabCurve);
        curvePt2_4->setObjectName(QString::fromUtf8("curvePt2_4"));
        curvePt2_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt2_4->setAccelerated(true);
        curvePt2_4->setMinimum(-100);
        curvePt2_4->setMaximum(100);

        gridLayout_7->addWidget(curvePt2_4, 3, 2, 1, 1);

        curvePt3_4 = new QSpinBox(tabCurve);
        curvePt3_4->setObjectName(QString::fromUtf8("curvePt3_4"));
        curvePt3_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt3_4->setAccelerated(true);
        curvePt3_4->setMinimum(-100);
        curvePt3_4->setMaximum(100);

        gridLayout_7->addWidget(curvePt3_4, 3, 3, 1, 1);

        curvePt4_4 = new QSpinBox(tabCurve);
        curvePt4_4->setObjectName(QString::fromUtf8("curvePt4_4"));
        curvePt4_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt4_4->setAccelerated(true);
        curvePt4_4->setMinimum(-100);
        curvePt4_4->setMaximum(100);

        gridLayout_7->addWidget(curvePt4_4, 3, 4, 1, 1);

        curvePt5_4 = new QSpinBox(tabCurve);
        curvePt5_4->setObjectName(QString::fromUtf8("curvePt5_4"));
        curvePt5_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt5_4->setAccelerated(true);
        curvePt5_4->setMinimum(-100);
        curvePt5_4->setMaximum(100);

        gridLayout_7->addWidget(curvePt5_4, 3, 5, 1, 1);

        curveEdit_5 = new QPushButton(tabCurve);
        curveEdit_5->setObjectName(QString::fromUtf8("curveEdit_5"));

        gridLayout_7->addWidget(curveEdit_5, 4, 0, 1, 1);

        curvePt1_5 = new QSpinBox(tabCurve);
        curvePt1_5->setObjectName(QString::fromUtf8("curvePt1_5"));
        curvePt1_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt1_5->setAccelerated(true);
        curvePt1_5->setMinimum(-100);
        curvePt1_5->setMaximum(100);

        gridLayout_7->addWidget(curvePt1_5, 4, 1, 1, 1);

        curvePt2_5 = new QSpinBox(tabCurve);
        curvePt2_5->setObjectName(QString::fromUtf8("curvePt2_5"));
        curvePt2_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt2_5->setAccelerated(true);
        curvePt2_5->setMinimum(-100);
        curvePt2_5->setMaximum(100);

        gridLayout_7->addWidget(curvePt2_5, 4, 2, 1, 1);

        curvePt3_5 = new QSpinBox(tabCurve);
        curvePt3_5->setObjectName(QString::fromUtf8("curvePt3_5"));
        curvePt3_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt3_5->setAccelerated(true);
        curvePt3_5->setMinimum(-100);
        curvePt3_5->setMaximum(100);

        gridLayout_7->addWidget(curvePt3_5, 4, 3, 1, 1);

        curvePt4_5 = new QSpinBox(tabCurve);
        curvePt4_5->setObjectName(QString::fromUtf8("curvePt4_5"));
        curvePt4_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt4_5->setAccelerated(true);
        curvePt4_5->setMinimum(-100);
        curvePt4_5->setMaximum(100);

        gridLayout_7->addWidget(curvePt4_5, 4, 4, 1, 1);

        curvePt5_5 = new QSpinBox(tabCurve);
        curvePt5_5->setObjectName(QString::fromUtf8("curvePt5_5"));
        curvePt5_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt5_5->setAccelerated(true);
        curvePt5_5->setMinimum(-100);
        curvePt5_5->setMaximum(100);

        gridLayout_7->addWidget(curvePt5_5, 4, 5, 1, 1);

        curveEdit_6 = new QPushButton(tabCurve);
        curveEdit_6->setObjectName(QString::fromUtf8("curveEdit_6"));

        gridLayout_7->addWidget(curveEdit_6, 5, 0, 1, 1);

        curvePt1_6 = new QSpinBox(tabCurve);
        curvePt1_6->setObjectName(QString::fromUtf8("curvePt1_6"));
        curvePt1_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt1_6->setAccelerated(true);
        curvePt1_6->setMinimum(-100);
        curvePt1_6->setMaximum(100);

        gridLayout_7->addWidget(curvePt1_6, 5, 1, 1, 1);

        curvePt2_6 = new QSpinBox(tabCurve);
        curvePt2_6->setObjectName(QString::fromUtf8("curvePt2_6"));
        curvePt2_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt2_6->setAccelerated(true);
        curvePt2_6->setMinimum(-100);
        curvePt2_6->setMaximum(100);

        gridLayout_7->addWidget(curvePt2_6, 5, 2, 1, 1);

        curvePt3_6 = new QSpinBox(tabCurve);
        curvePt3_6->setObjectName(QString::fromUtf8("curvePt3_6"));
        curvePt3_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt3_6->setAccelerated(true);
        curvePt3_6->setMinimum(-100);
        curvePt3_6->setMaximum(100);

        gridLayout_7->addWidget(curvePt3_6, 5, 3, 1, 1);

        curvePt4_6 = new QSpinBox(tabCurve);
        curvePt4_6->setObjectName(QString::fromUtf8("curvePt4_6"));
        curvePt4_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt4_6->setAccelerated(true);
        curvePt4_6->setMinimum(-100);
        curvePt4_6->setMaximum(100);

        gridLayout_7->addWidget(curvePt4_6, 5, 4, 1, 1);

        curvePt5_6 = new QSpinBox(tabCurve);
        curvePt5_6->setObjectName(QString::fromUtf8("curvePt5_6"));
        curvePt5_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt5_6->setAccelerated(true);
        curvePt5_6->setMinimum(-100);
        curvePt5_6->setMaximum(100);

        gridLayout_7->addWidget(curvePt5_6, 5, 5, 1, 1);

        curveEdit_7 = new QPushButton(tabCurve);
        curveEdit_7->setObjectName(QString::fromUtf8("curveEdit_7"));

        gridLayout_7->addWidget(curveEdit_7, 6, 0, 1, 1);

        curvePt1_7 = new QSpinBox(tabCurve);
        curvePt1_7->setObjectName(QString::fromUtf8("curvePt1_7"));
        curvePt1_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt1_7->setAccelerated(true);
        curvePt1_7->setMinimum(-100);
        curvePt1_7->setMaximum(100);

        gridLayout_7->addWidget(curvePt1_7, 6, 1, 1, 1);

        curvePt2_7 = new QSpinBox(tabCurve);
        curvePt2_7->setObjectName(QString::fromUtf8("curvePt2_7"));
        curvePt2_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt2_7->setAccelerated(true);
        curvePt2_7->setMinimum(-100);
        curvePt2_7->setMaximum(100);

        gridLayout_7->addWidget(curvePt2_7, 6, 2, 1, 1);

        curvePt3_7 = new QSpinBox(tabCurve);
        curvePt3_7->setObjectName(QString::fromUtf8("curvePt3_7"));
        curvePt3_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt3_7->setAccelerated(true);
        curvePt3_7->setMinimum(-100);
        curvePt3_7->setMaximum(100);

        gridLayout_7->addWidget(curvePt3_7, 6, 3, 1, 1);

        curvePt4_7 = new QSpinBox(tabCurve);
        curvePt4_7->setObjectName(QString::fromUtf8("curvePt4_7"));
        curvePt4_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt4_7->setAccelerated(true);
        curvePt4_7->setMinimum(-100);
        curvePt4_7->setMaximum(100);

        gridLayout_7->addWidget(curvePt4_7, 6, 4, 1, 1);

        curvePt5_7 = new QSpinBox(tabCurve);
        curvePt5_7->setObjectName(QString::fromUtf8("curvePt5_7"));
        curvePt5_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt5_7->setAccelerated(true);
        curvePt5_7->setMinimum(-100);
        curvePt5_7->setMaximum(100);

        gridLayout_7->addWidget(curvePt5_7, 6, 5, 1, 1);

        curveEdit_8 = new QPushButton(tabCurve);
        curveEdit_8->setObjectName(QString::fromUtf8("curveEdit_8"));

        gridLayout_7->addWidget(curveEdit_8, 7, 0, 1, 1);

        curvePt1_8 = new QSpinBox(tabCurve);
        curvePt1_8->setObjectName(QString::fromUtf8("curvePt1_8"));
        curvePt1_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt1_8->setAccelerated(true);
        curvePt1_8->setMinimum(-100);
        curvePt1_8->setMaximum(100);

        gridLayout_7->addWidget(curvePt1_8, 7, 1, 1, 1);

        curvePt2_8 = new QSpinBox(tabCurve);
        curvePt2_8->setObjectName(QString::fromUtf8("curvePt2_8"));
        curvePt2_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt2_8->setAccelerated(true);
        curvePt2_8->setMinimum(-100);
        curvePt2_8->setMaximum(100);

        gridLayout_7->addWidget(curvePt2_8, 7, 2, 1, 1);

        curvePt3_8 = new QSpinBox(tabCurve);
        curvePt3_8->setObjectName(QString::fromUtf8("curvePt3_8"));
        curvePt3_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt3_8->setAccelerated(true);
        curvePt3_8->setMinimum(-100);
        curvePt3_8->setMaximum(100);

        gridLayout_7->addWidget(curvePt3_8, 7, 3, 1, 1);

        curvePt4_8 = new QSpinBox(tabCurve);
        curvePt4_8->setObjectName(QString::fromUtf8("curvePt4_8"));
        curvePt4_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt4_8->setAccelerated(true);
        curvePt4_8->setMinimum(-100);
        curvePt4_8->setMaximum(100);

        gridLayout_7->addWidget(curvePt4_8, 7, 4, 1, 1);

        curvePt5_8 = new QSpinBox(tabCurve);
        curvePt5_8->setObjectName(QString::fromUtf8("curvePt5_8"));
        curvePt5_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt5_8->setAccelerated(true);
        curvePt5_8->setMinimum(-100);
        curvePt5_8->setMaximum(100);

        gridLayout_7->addWidget(curvePt5_8, 7, 5, 1, 1);

        curveEdit_9 = new QPushButton(tabCurve);
        curveEdit_9->setObjectName(QString::fromUtf8("curveEdit_9"));

        gridLayout_7->addWidget(curveEdit_9, 8, 0, 1, 1);

        curvePt1_9 = new QSpinBox(tabCurve);
        curvePt1_9->setObjectName(QString::fromUtf8("curvePt1_9"));
        curvePt1_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt1_9->setAccelerated(true);
        curvePt1_9->setMinimum(-100);
        curvePt1_9->setMaximum(100);

        gridLayout_7->addWidget(curvePt1_9, 8, 1, 1, 1);

        curvePt2_9 = new QSpinBox(tabCurve);
        curvePt2_9->setObjectName(QString::fromUtf8("curvePt2_9"));
        curvePt2_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt2_9->setAccelerated(true);
        curvePt2_9->setMinimum(-100);
        curvePt2_9->setMaximum(100);

        gridLayout_7->addWidget(curvePt2_9, 8, 2, 1, 1);

        curvePt3_9 = new QSpinBox(tabCurve);
        curvePt3_9->setObjectName(QString::fromUtf8("curvePt3_9"));
        curvePt3_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt3_9->setAccelerated(true);
        curvePt3_9->setMinimum(-100);
        curvePt3_9->setMaximum(100);

        gridLayout_7->addWidget(curvePt3_9, 8, 3, 1, 1);

        curvePt4_9 = new QSpinBox(tabCurve);
        curvePt4_9->setObjectName(QString::fromUtf8("curvePt4_9"));
        curvePt4_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt4_9->setAccelerated(true);
        curvePt4_9->setMinimum(-100);
        curvePt4_9->setMaximum(100);

        gridLayout_7->addWidget(curvePt4_9, 8, 4, 1, 1);

        curvePt5_9 = new QSpinBox(tabCurve);
        curvePt5_9->setObjectName(QString::fromUtf8("curvePt5_9"));
        curvePt5_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt5_9->setAccelerated(true);
        curvePt5_9->setMinimum(-100);
        curvePt5_9->setMaximum(100);

        gridLayout_7->addWidget(curvePt5_9, 8, 5, 1, 1);

        curvePt6_9 = new QSpinBox(tabCurve);
        curvePt6_9->setObjectName(QString::fromUtf8("curvePt6_9"));
        curvePt6_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt6_9->setAccelerated(true);
        curvePt6_9->setMinimum(-100);
        curvePt6_9->setMaximum(100);

        gridLayout_7->addWidget(curvePt6_9, 8, 6, 1, 1);

        curvePt7_9 = new QSpinBox(tabCurve);
        curvePt7_9->setObjectName(QString::fromUtf8("curvePt7_9"));
        curvePt7_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt7_9->setAccelerated(true);
        curvePt7_9->setMinimum(-100);
        curvePt7_9->setMaximum(100);

        gridLayout_7->addWidget(curvePt7_9, 8, 7, 1, 1);

        curvePt8_9 = new QSpinBox(tabCurve);
        curvePt8_9->setObjectName(QString::fromUtf8("curvePt8_9"));
        curvePt8_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt8_9->setAccelerated(true);
        curvePt8_9->setMinimum(-100);
        curvePt8_9->setMaximum(100);

        gridLayout_7->addWidget(curvePt8_9, 8, 8, 1, 1);

        curvePt9_9 = new QSpinBox(tabCurve);
        curvePt9_9->setObjectName(QString::fromUtf8("curvePt9_9"));
        curvePt9_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt9_9->setAccelerated(true);
        curvePt9_9->setMinimum(-100);
        curvePt9_9->setMaximum(100);

        gridLayout_7->addWidget(curvePt9_9, 8, 9, 1, 1);

        curveEdit_10 = new QPushButton(tabCurve);
        curveEdit_10->setObjectName(QString::fromUtf8("curveEdit_10"));

        gridLayout_7->addWidget(curveEdit_10, 9, 0, 1, 1);

        curvePt1_10 = new QSpinBox(tabCurve);
        curvePt1_10->setObjectName(QString::fromUtf8("curvePt1_10"));
        curvePt1_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt1_10->setAccelerated(true);
        curvePt1_10->setMinimum(-100);
        curvePt1_10->setMaximum(100);

        gridLayout_7->addWidget(curvePt1_10, 9, 1, 1, 1);

        curvePt2_10 = new QSpinBox(tabCurve);
        curvePt2_10->setObjectName(QString::fromUtf8("curvePt2_10"));
        curvePt2_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt2_10->setAccelerated(true);
        curvePt2_10->setMinimum(-100);
        curvePt2_10->setMaximum(100);

        gridLayout_7->addWidget(curvePt2_10, 9, 2, 1, 1);

        curvePt3_10 = new QSpinBox(tabCurve);
        curvePt3_10->setObjectName(QString::fromUtf8("curvePt3_10"));
        curvePt3_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt3_10->setAccelerated(true);
        curvePt3_10->setMinimum(-100);
        curvePt3_10->setMaximum(100);

        gridLayout_7->addWidget(curvePt3_10, 9, 3, 1, 1);

        curvePt4_10 = new QSpinBox(tabCurve);
        curvePt4_10->setObjectName(QString::fromUtf8("curvePt4_10"));
        curvePt4_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt4_10->setAccelerated(true);
        curvePt4_10->setMinimum(-100);
        curvePt4_10->setMaximum(100);

        gridLayout_7->addWidget(curvePt4_10, 9, 4, 1, 1);

        curvePt5_10 = new QSpinBox(tabCurve);
        curvePt5_10->setObjectName(QString::fromUtf8("curvePt5_10"));
        curvePt5_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt5_10->setAccelerated(true);
        curvePt5_10->setMinimum(-100);
        curvePt5_10->setMaximum(100);

        gridLayout_7->addWidget(curvePt5_10, 9, 5, 1, 1);

        curvePt6_10 = new QSpinBox(tabCurve);
        curvePt6_10->setObjectName(QString::fromUtf8("curvePt6_10"));
        curvePt6_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt6_10->setAccelerated(true);
        curvePt6_10->setMinimum(-100);
        curvePt6_10->setMaximum(100);

        gridLayout_7->addWidget(curvePt6_10, 9, 6, 1, 1);

        curvePt7_10 = new QSpinBox(tabCurve);
        curvePt7_10->setObjectName(QString::fromUtf8("curvePt7_10"));
        curvePt7_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt7_10->setAccelerated(true);
        curvePt7_10->setMinimum(-100);
        curvePt7_10->setMaximum(100);

        gridLayout_7->addWidget(curvePt7_10, 9, 7, 1, 1);

        curvePt8_10 = new QSpinBox(tabCurve);
        curvePt8_10->setObjectName(QString::fromUtf8("curvePt8_10"));
        curvePt8_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt8_10->setAccelerated(true);
        curvePt8_10->setMinimum(-100);
        curvePt8_10->setMaximum(100);

        gridLayout_7->addWidget(curvePt8_10, 9, 8, 1, 1);

        curvePt9_10 = new QSpinBox(tabCurve);
        curvePt9_10->setObjectName(QString::fromUtf8("curvePt9_10"));
        curvePt9_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt9_10->setAccelerated(true);
        curvePt9_10->setMinimum(-100);
        curvePt9_10->setMaximum(100);

        gridLayout_7->addWidget(curvePt9_10, 9, 9, 1, 1);

        curveEdit_11 = new QPushButton(tabCurve);
        curveEdit_11->setObjectName(QString::fromUtf8("curveEdit_11"));

        gridLayout_7->addWidget(curveEdit_11, 10, 0, 1, 1);

        curvePt1_11 = new QSpinBox(tabCurve);
        curvePt1_11->setObjectName(QString::fromUtf8("curvePt1_11"));
        curvePt1_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt1_11->setAccelerated(true);
        curvePt1_11->setMinimum(-100);
        curvePt1_11->setMaximum(100);

        gridLayout_7->addWidget(curvePt1_11, 10, 1, 1, 1);

        curvePt2_11 = new QSpinBox(tabCurve);
        curvePt2_11->setObjectName(QString::fromUtf8("curvePt2_11"));
        curvePt2_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt2_11->setAccelerated(true);
        curvePt2_11->setMinimum(-100);
        curvePt2_11->setMaximum(100);

        gridLayout_7->addWidget(curvePt2_11, 10, 2, 1, 1);

        curvePt3_11 = new QSpinBox(tabCurve);
        curvePt3_11->setObjectName(QString::fromUtf8("curvePt3_11"));
        curvePt3_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt3_11->setAccelerated(true);
        curvePt3_11->setMinimum(-100);
        curvePt3_11->setMaximum(100);

        gridLayout_7->addWidget(curvePt3_11, 10, 3, 1, 1);

        curvePt4_11 = new QSpinBox(tabCurve);
        curvePt4_11->setObjectName(QString::fromUtf8("curvePt4_11"));
        curvePt4_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt4_11->setAccelerated(true);
        curvePt4_11->setMinimum(-100);
        curvePt4_11->setMaximum(100);

        gridLayout_7->addWidget(curvePt4_11, 10, 4, 1, 1);

        curvePt5_11 = new QSpinBox(tabCurve);
        curvePt5_11->setObjectName(QString::fromUtf8("curvePt5_11"));
        curvePt5_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt5_11->setAccelerated(true);
        curvePt5_11->setMinimum(-100);
        curvePt5_11->setMaximum(100);

        gridLayout_7->addWidget(curvePt5_11, 10, 5, 1, 1);

        curvePt6_11 = new QSpinBox(tabCurve);
        curvePt6_11->setObjectName(QString::fromUtf8("curvePt6_11"));
        curvePt6_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt6_11->setAccelerated(true);
        curvePt6_11->setMinimum(-100);
        curvePt6_11->setMaximum(100);

        gridLayout_7->addWidget(curvePt6_11, 10, 6, 1, 1);

        curvePt7_11 = new QSpinBox(tabCurve);
        curvePt7_11->setObjectName(QString::fromUtf8("curvePt7_11"));
        curvePt7_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt7_11->setAccelerated(true);
        curvePt7_11->setMinimum(-100);
        curvePt7_11->setMaximum(100);

        gridLayout_7->addWidget(curvePt7_11, 10, 7, 1, 1);

        curvePt8_11 = new QSpinBox(tabCurve);
        curvePt8_11->setObjectName(QString::fromUtf8("curvePt8_11"));
        curvePt8_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt8_11->setAccelerated(true);
        curvePt8_11->setMinimum(-100);
        curvePt8_11->setMaximum(100);

        gridLayout_7->addWidget(curvePt8_11, 10, 8, 1, 1);

        curvePt9_11 = new QSpinBox(tabCurve);
        curvePt9_11->setObjectName(QString::fromUtf8("curvePt9_11"));
        curvePt9_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt9_11->setAccelerated(true);
        curvePt9_11->setMinimum(-100);
        curvePt9_11->setMaximum(100);

        gridLayout_7->addWidget(curvePt9_11, 10, 9, 1, 1);

        curveEdit_12 = new QPushButton(tabCurve);
        curveEdit_12->setObjectName(QString::fromUtf8("curveEdit_12"));

        gridLayout_7->addWidget(curveEdit_12, 11, 0, 1, 1);

        curvePt1_12 = new QSpinBox(tabCurve);
        curvePt1_12->setObjectName(QString::fromUtf8("curvePt1_12"));
        curvePt1_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt1_12->setAccelerated(true);
        curvePt1_12->setMinimum(-100);
        curvePt1_12->setMaximum(100);

        gridLayout_7->addWidget(curvePt1_12, 11, 1, 1, 1);

        curvePt2_12 = new QSpinBox(tabCurve);
        curvePt2_12->setObjectName(QString::fromUtf8("curvePt2_12"));
        curvePt2_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt2_12->setAccelerated(true);
        curvePt2_12->setMinimum(-100);
        curvePt2_12->setMaximum(100);

        gridLayout_7->addWidget(curvePt2_12, 11, 2, 1, 1);

        curvePt3_12 = new QSpinBox(tabCurve);
        curvePt3_12->setObjectName(QString::fromUtf8("curvePt3_12"));
        curvePt3_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt3_12->setAccelerated(true);
        curvePt3_12->setMinimum(-100);
        curvePt3_12->setMaximum(100);

        gridLayout_7->addWidget(curvePt3_12, 11, 3, 1, 1);

        curvePt4_12 = new QSpinBox(tabCurve);
        curvePt4_12->setObjectName(QString::fromUtf8("curvePt4_12"));
        curvePt4_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt4_12->setAccelerated(true);
        curvePt4_12->setMinimum(-100);
        curvePt4_12->setMaximum(100);

        gridLayout_7->addWidget(curvePt4_12, 11, 4, 1, 1);

        curvePt5_12 = new QSpinBox(tabCurve);
        curvePt5_12->setObjectName(QString::fromUtf8("curvePt5_12"));
        curvePt5_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt5_12->setAccelerated(true);
        curvePt5_12->setMinimum(-100);
        curvePt5_12->setMaximum(100);

        gridLayout_7->addWidget(curvePt5_12, 11, 5, 1, 1);

        curvePt6_12 = new QSpinBox(tabCurve);
        curvePt6_12->setObjectName(QString::fromUtf8("curvePt6_12"));
        curvePt6_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt6_12->setAccelerated(true);
        curvePt6_12->setMinimum(-100);
        curvePt6_12->setMaximum(100);

        gridLayout_7->addWidget(curvePt6_12, 11, 6, 1, 1);

        curvePt7_12 = new QSpinBox(tabCurve);
        curvePt7_12->setObjectName(QString::fromUtf8("curvePt7_12"));
        curvePt7_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt7_12->setAccelerated(true);
        curvePt7_12->setMinimum(-100);
        curvePt7_12->setMaximum(100);

        gridLayout_7->addWidget(curvePt7_12, 11, 7, 1, 1);

        curvePt8_12 = new QSpinBox(tabCurve);
        curvePt8_12->setObjectName(QString::fromUtf8("curvePt8_12"));
        curvePt8_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt8_12->setAccelerated(true);
        curvePt8_12->setMinimum(-100);
        curvePt8_12->setMaximum(100);

        gridLayout_7->addWidget(curvePt8_12, 11, 8, 1, 1);

        curvePt9_12 = new QSpinBox(tabCurve);
        curvePt9_12->setObjectName(QString::fromUtf8("curvePt9_12"));
        curvePt9_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt9_12->setAccelerated(true);
        curvePt9_12->setMinimum(-100);
        curvePt9_12->setMaximum(100);

        gridLayout_7->addWidget(curvePt9_12, 11, 9, 1, 1);

        curveEdit_13 = new QPushButton(tabCurve);
        curveEdit_13->setObjectName(QString::fromUtf8("curveEdit_13"));

        gridLayout_7->addWidget(curveEdit_13, 12, 0, 1, 1);

        curvePt1_13 = new QSpinBox(tabCurve);
        curvePt1_13->setObjectName(QString::fromUtf8("curvePt1_13"));
        curvePt1_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt1_13->setAccelerated(true);
        curvePt1_13->setMinimum(-100);
        curvePt1_13->setMaximum(100);

        gridLayout_7->addWidget(curvePt1_13, 12, 1, 1, 1);

        curvePt2_13 = new QSpinBox(tabCurve);
        curvePt2_13->setObjectName(QString::fromUtf8("curvePt2_13"));
        curvePt2_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt2_13->setAccelerated(true);
        curvePt2_13->setMinimum(-100);
        curvePt2_13->setMaximum(100);

        gridLayout_7->addWidget(curvePt2_13, 12, 2, 1, 1);

        curvePt3_13 = new QSpinBox(tabCurve);
        curvePt3_13->setObjectName(QString::fromUtf8("curvePt3_13"));
        curvePt3_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt3_13->setAccelerated(true);
        curvePt3_13->setMinimum(-100);
        curvePt3_13->setMaximum(100);

        gridLayout_7->addWidget(curvePt3_13, 12, 3, 1, 1);

        curvePt4_13 = new QSpinBox(tabCurve);
        curvePt4_13->setObjectName(QString::fromUtf8("curvePt4_13"));
        curvePt4_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt4_13->setAccelerated(true);
        curvePt4_13->setMinimum(-100);
        curvePt4_13->setMaximum(100);

        gridLayout_7->addWidget(curvePt4_13, 12, 4, 1, 1);

        curvePt5_13 = new QSpinBox(tabCurve);
        curvePt5_13->setObjectName(QString::fromUtf8("curvePt5_13"));
        curvePt5_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt5_13->setAccelerated(true);
        curvePt5_13->setMinimum(-100);
        curvePt5_13->setMaximum(100);

        gridLayout_7->addWidget(curvePt5_13, 12, 5, 1, 1);

        curvePt6_13 = new QSpinBox(tabCurve);
        curvePt6_13->setObjectName(QString::fromUtf8("curvePt6_13"));
        curvePt6_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt6_13->setAccelerated(true);
        curvePt6_13->setMinimum(-100);
        curvePt6_13->setMaximum(100);

        gridLayout_7->addWidget(curvePt6_13, 12, 6, 1, 1);

        curvePt7_13 = new QSpinBox(tabCurve);
        curvePt7_13->setObjectName(QString::fromUtf8("curvePt7_13"));
        curvePt7_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt7_13->setAccelerated(true);
        curvePt7_13->setMinimum(-100);
        curvePt7_13->setMaximum(100);

        gridLayout_7->addWidget(curvePt7_13, 12, 7, 1, 1);

        curvePt8_13 = new QSpinBox(tabCurve);
        curvePt8_13->setObjectName(QString::fromUtf8("curvePt8_13"));
        curvePt8_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt8_13->setAccelerated(true);
        curvePt8_13->setMinimum(-100);
        curvePt8_13->setMaximum(100);

        gridLayout_7->addWidget(curvePt8_13, 12, 8, 1, 1);

        curvePt9_13 = new QSpinBox(tabCurve);
        curvePt9_13->setObjectName(QString::fromUtf8("curvePt9_13"));
        curvePt9_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt9_13->setAccelerated(true);
        curvePt9_13->setMinimum(-100);
        curvePt9_13->setMaximum(100);

        gridLayout_7->addWidget(curvePt9_13, 12, 9, 1, 1);

        curveEdit_14 = new QPushButton(tabCurve);
        curveEdit_14->setObjectName(QString::fromUtf8("curveEdit_14"));

        gridLayout_7->addWidget(curveEdit_14, 13, 0, 1, 1);

        curvePt1_14 = new QSpinBox(tabCurve);
        curvePt1_14->setObjectName(QString::fromUtf8("curvePt1_14"));
        curvePt1_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt1_14->setAccelerated(true);
        curvePt1_14->setMinimum(-100);
        curvePt1_14->setMaximum(100);

        gridLayout_7->addWidget(curvePt1_14, 13, 1, 1, 1);

        curvePt2_14 = new QSpinBox(tabCurve);
        curvePt2_14->setObjectName(QString::fromUtf8("curvePt2_14"));
        curvePt2_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt2_14->setAccelerated(true);
        curvePt2_14->setMinimum(-100);
        curvePt2_14->setMaximum(100);

        gridLayout_7->addWidget(curvePt2_14, 13, 2, 1, 1);

        curvePt3_14 = new QSpinBox(tabCurve);
        curvePt3_14->setObjectName(QString::fromUtf8("curvePt3_14"));
        curvePt3_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt3_14->setAccelerated(true);
        curvePt3_14->setMinimum(-100);
        curvePt3_14->setMaximum(100);

        gridLayout_7->addWidget(curvePt3_14, 13, 3, 1, 1);

        curvePt4_14 = new QSpinBox(tabCurve);
        curvePt4_14->setObjectName(QString::fromUtf8("curvePt4_14"));
        curvePt4_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt4_14->setAccelerated(true);
        curvePt4_14->setMinimum(-100);
        curvePt4_14->setMaximum(100);

        gridLayout_7->addWidget(curvePt4_14, 13, 4, 1, 1);

        curvePt5_14 = new QSpinBox(tabCurve);
        curvePt5_14->setObjectName(QString::fromUtf8("curvePt5_14"));
        curvePt5_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt5_14->setAccelerated(true);
        curvePt5_14->setMinimum(-100);
        curvePt5_14->setMaximum(100);

        gridLayout_7->addWidget(curvePt5_14, 13, 5, 1, 1);

        curvePt6_14 = new QSpinBox(tabCurve);
        curvePt6_14->setObjectName(QString::fromUtf8("curvePt6_14"));
        curvePt6_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt6_14->setAccelerated(true);
        curvePt6_14->setMinimum(-100);
        curvePt6_14->setMaximum(100);

        gridLayout_7->addWidget(curvePt6_14, 13, 6, 1, 1);

        curvePt7_14 = new QSpinBox(tabCurve);
        curvePt7_14->setObjectName(QString::fromUtf8("curvePt7_14"));
        curvePt7_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt7_14->setAccelerated(true);
        curvePt7_14->setMinimum(-100);
        curvePt7_14->setMaximum(100);

        gridLayout_7->addWidget(curvePt7_14, 13, 7, 1, 1);

        curvePt8_14 = new QSpinBox(tabCurve);
        curvePt8_14->setObjectName(QString::fromUtf8("curvePt8_14"));
        curvePt8_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt8_14->setAccelerated(true);
        curvePt8_14->setMinimum(-100);
        curvePt8_14->setMaximum(100);

        gridLayout_7->addWidget(curvePt8_14, 13, 8, 1, 1);

        curvePt9_14 = new QSpinBox(tabCurve);
        curvePt9_14->setObjectName(QString::fromUtf8("curvePt9_14"));
        curvePt9_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt9_14->setAccelerated(true);
        curvePt9_14->setMinimum(-100);
        curvePt9_14->setMaximum(100);

        gridLayout_7->addWidget(curvePt9_14, 13, 9, 1, 1);

        curveEdit_15 = new QPushButton(tabCurve);
        curveEdit_15->setObjectName(QString::fromUtf8("curveEdit_15"));

        gridLayout_7->addWidget(curveEdit_15, 14, 0, 1, 1);

        curvePt1_15 = new QSpinBox(tabCurve);
        curvePt1_15->setObjectName(QString::fromUtf8("curvePt1_15"));
        curvePt1_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt1_15->setAccelerated(true);
        curvePt1_15->setMinimum(-100);
        curvePt1_15->setMaximum(100);

        gridLayout_7->addWidget(curvePt1_15, 14, 1, 1, 1);

        curvePt2_15 = new QSpinBox(tabCurve);
        curvePt2_15->setObjectName(QString::fromUtf8("curvePt2_15"));
        curvePt2_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt2_15->setAccelerated(true);
        curvePt2_15->setMinimum(-100);
        curvePt2_15->setMaximum(100);

        gridLayout_7->addWidget(curvePt2_15, 14, 2, 1, 1);

        curvePt3_15 = new QSpinBox(tabCurve);
        curvePt3_15->setObjectName(QString::fromUtf8("curvePt3_15"));
        curvePt3_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt3_15->setAccelerated(true);
        curvePt3_15->setMinimum(-100);
        curvePt3_15->setMaximum(100);

        gridLayout_7->addWidget(curvePt3_15, 14, 3, 1, 1);

        curvePt4_15 = new QSpinBox(tabCurve);
        curvePt4_15->setObjectName(QString::fromUtf8("curvePt4_15"));
        curvePt4_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt4_15->setAccelerated(true);
        curvePt4_15->setMinimum(-100);
        curvePt4_15->setMaximum(100);

        gridLayout_7->addWidget(curvePt4_15, 14, 4, 1, 1);

        curvePt5_15 = new QSpinBox(tabCurve);
        curvePt5_15->setObjectName(QString::fromUtf8("curvePt5_15"));
        curvePt5_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt5_15->setAccelerated(true);
        curvePt5_15->setMinimum(-100);
        curvePt5_15->setMaximum(100);

        gridLayout_7->addWidget(curvePt5_15, 14, 5, 1, 1);

        curvePt6_15 = new QSpinBox(tabCurve);
        curvePt6_15->setObjectName(QString::fromUtf8("curvePt6_15"));
        curvePt6_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt6_15->setAccelerated(true);
        curvePt6_15->setMinimum(-100);
        curvePt6_15->setMaximum(100);

        gridLayout_7->addWidget(curvePt6_15, 14, 6, 1, 1);

        curvePt7_15 = new QSpinBox(tabCurve);
        curvePt7_15->setObjectName(QString::fromUtf8("curvePt7_15"));
        curvePt7_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt7_15->setAccelerated(true);
        curvePt7_15->setMinimum(-100);
        curvePt7_15->setMaximum(100);

        gridLayout_7->addWidget(curvePt7_15, 14, 7, 1, 1);

        curvePt8_15 = new QSpinBox(tabCurve);
        curvePt8_15->setObjectName(QString::fromUtf8("curvePt8_15"));
        curvePt8_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt8_15->setAccelerated(true);
        curvePt8_15->setMinimum(-100);
        curvePt8_15->setMaximum(100);

        gridLayout_7->addWidget(curvePt8_15, 14, 8, 1, 1);

        curvePt9_15 = new QSpinBox(tabCurve);
        curvePt9_15->setObjectName(QString::fromUtf8("curvePt9_15"));
        curvePt9_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt9_15->setAccelerated(true);
        curvePt9_15->setMinimum(-100);
        curvePt9_15->setMaximum(100);

        gridLayout_7->addWidget(curvePt9_15, 14, 9, 1, 1);

        curveEdit_16 = new QPushButton(tabCurve);
        curveEdit_16->setObjectName(QString::fromUtf8("curveEdit_16"));

        gridLayout_7->addWidget(curveEdit_16, 15, 0, 1, 1);

        curvePt1_16 = new QSpinBox(tabCurve);
        curvePt1_16->setObjectName(QString::fromUtf8("curvePt1_16"));
        curvePt1_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt1_16->setAccelerated(true);
        curvePt1_16->setMinimum(-100);
        curvePt1_16->setMaximum(100);

        gridLayout_7->addWidget(curvePt1_16, 15, 1, 1, 1);

        curvePt2_16 = new QSpinBox(tabCurve);
        curvePt2_16->setObjectName(QString::fromUtf8("curvePt2_16"));
        curvePt2_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt2_16->setAccelerated(true);
        curvePt2_16->setMinimum(-100);
        curvePt2_16->setMaximum(100);

        gridLayout_7->addWidget(curvePt2_16, 15, 2, 1, 1);

        curvePt3_16 = new QSpinBox(tabCurve);
        curvePt3_16->setObjectName(QString::fromUtf8("curvePt3_16"));
        curvePt3_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt3_16->setAccelerated(true);
        curvePt3_16->setMinimum(-100);
        curvePt3_16->setMaximum(100);

        gridLayout_7->addWidget(curvePt3_16, 15, 3, 1, 1);

        curvePt4_16 = new QSpinBox(tabCurve);
        curvePt4_16->setObjectName(QString::fromUtf8("curvePt4_16"));
        curvePt4_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt4_16->setAccelerated(true);
        curvePt4_16->setMinimum(-100);
        curvePt4_16->setMaximum(100);

        gridLayout_7->addWidget(curvePt4_16, 15, 4, 1, 1);

        curvePt5_16 = new QSpinBox(tabCurve);
        curvePt5_16->setObjectName(QString::fromUtf8("curvePt5_16"));
        curvePt5_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt5_16->setAccelerated(true);
        curvePt5_16->setMinimum(-100);
        curvePt5_16->setMaximum(100);

        gridLayout_7->addWidget(curvePt5_16, 15, 5, 1, 1);

        curvePt6_16 = new QSpinBox(tabCurve);
        curvePt6_16->setObjectName(QString::fromUtf8("curvePt6_16"));
        curvePt6_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt6_16->setAccelerated(true);
        curvePt6_16->setMinimum(-100);
        curvePt6_16->setMaximum(100);

        gridLayout_7->addWidget(curvePt6_16, 15, 6, 1, 1);

        curvePt7_16 = new QSpinBox(tabCurve);
        curvePt7_16->setObjectName(QString::fromUtf8("curvePt7_16"));
        curvePt7_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt7_16->setAccelerated(true);
        curvePt7_16->setMinimum(-100);
        curvePt7_16->setMaximum(100);

        gridLayout_7->addWidget(curvePt7_16, 15, 7, 1, 1);

        curvePt8_16 = new QSpinBox(tabCurve);
        curvePt8_16->setObjectName(QString::fromUtf8("curvePt8_16"));
        curvePt8_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt8_16->setAccelerated(true);
        curvePt8_16->setMinimum(-100);
        curvePt8_16->setMaximum(100);

        gridLayout_7->addWidget(curvePt8_16, 15, 8, 1, 1);

        curvePt9_16 = new QSpinBox(tabCurve);
        curvePt9_16->setObjectName(QString::fromUtf8("curvePt9_16"));
        curvePt9_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curvePt9_16->setAccelerated(true);
        curvePt9_16->setMinimum(-100);
        curvePt9_16->setMaximum(100);

        gridLayout_7->addWidget(curvePt9_16, 15, 9, 1, 1);

        resetCurve_1 = new QPushButton(tabCurve);
        resetCurve_1->setObjectName(QString::fromUtf8("resetCurve_1"));
        resetCurve_1->setMinimumSize(QSize(0, 0));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        resetCurve_1->setIcon(icon2);

        gridLayout_7->addWidget(resetCurve_1, 0, 10, 1, 1);

        resetCurve_2 = new QPushButton(tabCurve);
        resetCurve_2->setObjectName(QString::fromUtf8("resetCurve_2"));
        resetCurve_2->setMinimumSize(QSize(0, 0));
        resetCurve_2->setIcon(icon2);

        gridLayout_7->addWidget(resetCurve_2, 1, 10, 1, 1);

        resetCurve_3 = new QPushButton(tabCurve);
        resetCurve_3->setObjectName(QString::fromUtf8("resetCurve_3"));
        resetCurve_3->setMinimumSize(QSize(0, 0));
        resetCurve_3->setIcon(icon2);

        gridLayout_7->addWidget(resetCurve_3, 2, 10, 1, 1);

        resetCurve_4 = new QPushButton(tabCurve);
        resetCurve_4->setObjectName(QString::fromUtf8("resetCurve_4"));
        resetCurve_4->setMinimumSize(QSize(0, 0));
        resetCurve_4->setIcon(icon2);

        gridLayout_7->addWidget(resetCurve_4, 3, 10, 1, 1);

        resetCurve_5 = new QPushButton(tabCurve);
        resetCurve_5->setObjectName(QString::fromUtf8("resetCurve_5"));
        resetCurve_5->setMinimumSize(QSize(0, 0));
        resetCurve_5->setIcon(icon2);

        gridLayout_7->addWidget(resetCurve_5, 4, 10, 1, 1);

        resetCurve_6 = new QPushButton(tabCurve);
        resetCurve_6->setObjectName(QString::fromUtf8("resetCurve_6"));
        resetCurve_6->setMinimumSize(QSize(0, 0));
        resetCurve_6->setIcon(icon2);

        gridLayout_7->addWidget(resetCurve_6, 5, 10, 1, 1);

        resetCurve_7 = new QPushButton(tabCurve);
        resetCurve_7->setObjectName(QString::fromUtf8("resetCurve_7"));
        resetCurve_7->setMinimumSize(QSize(0, 0));
        resetCurve_7->setIcon(icon2);

        gridLayout_7->addWidget(resetCurve_7, 6, 10, 1, 1);

        resetCurve_8 = new QPushButton(tabCurve);
        resetCurve_8->setObjectName(QString::fromUtf8("resetCurve_8"));
        resetCurve_8->setMinimumSize(QSize(0, 0));
        resetCurve_8->setIcon(icon2);

        gridLayout_7->addWidget(resetCurve_8, 7, 10, 1, 1);

        resetCurve_9 = new QPushButton(tabCurve);
        resetCurve_9->setObjectName(QString::fromUtf8("resetCurve_9"));
        resetCurve_9->setMinimumSize(QSize(0, 0));
        resetCurve_9->setIcon(icon2);

        gridLayout_7->addWidget(resetCurve_9, 8, 10, 1, 1);

        resetCurve_10 = new QPushButton(tabCurve);
        resetCurve_10->setObjectName(QString::fromUtf8("resetCurve_10"));
        resetCurve_10->setMinimumSize(QSize(0, 0));
        resetCurve_10->setIcon(icon2);

        gridLayout_7->addWidget(resetCurve_10, 9, 10, 1, 1);

        resetCurve_11 = new QPushButton(tabCurve);
        resetCurve_11->setObjectName(QString::fromUtf8("resetCurve_11"));
        resetCurve_11->setMinimumSize(QSize(0, 0));
        resetCurve_11->setIcon(icon2);

        gridLayout_7->addWidget(resetCurve_11, 10, 10, 1, 1);

        resetCurve_12 = new QPushButton(tabCurve);
        resetCurve_12->setObjectName(QString::fromUtf8("resetCurve_12"));
        resetCurve_12->setMinimumSize(QSize(0, 0));
        resetCurve_12->setIcon(icon2);

        gridLayout_7->addWidget(resetCurve_12, 11, 10, 1, 1);

        resetCurve_13 = new QPushButton(tabCurve);
        resetCurve_13->setObjectName(QString::fromUtf8("resetCurve_13"));
        resetCurve_13->setMinimumSize(QSize(0, 0));
        resetCurve_13->setIcon(icon2);

        gridLayout_7->addWidget(resetCurve_13, 12, 10, 1, 1);

        resetCurve_14 = new QPushButton(tabCurve);
        resetCurve_14->setObjectName(QString::fromUtf8("resetCurve_14"));
        resetCurve_14->setMinimumSize(QSize(0, 0));
        resetCurve_14->setIcon(icon2);

        gridLayout_7->addWidget(resetCurve_14, 13, 10, 1, 1);

        resetCurve_15 = new QPushButton(tabCurve);
        resetCurve_15->setObjectName(QString::fromUtf8("resetCurve_15"));
        resetCurve_15->setMinimumSize(QSize(0, 0));
        resetCurve_15->setIcon(icon2);

        gridLayout_7->addWidget(resetCurve_15, 14, 10, 1, 1);

        resetCurve_16 = new QPushButton(tabCurve);
        resetCurve_16->setObjectName(QString::fromUtf8("resetCurve_16"));
        resetCurve_16->setMinimumSize(QSize(0, 0));
        resetCurve_16->setIcon(icon2);

        gridLayout_7->addWidget(resetCurve_16, 15, 10, 1, 1);

        clearMixesPB = new QPushButton(tabCurve);
        clearMixesPB->setObjectName(QString::fromUtf8("clearMixesPB"));
        clearMixesPB->setIcon(icon2);

        gridLayout_7->addWidget(clearMixesPB, 16, 3, 1, 4);

        gridLayout_7->setColumnStretch(1, 10);
        gridLayout_7->setColumnStretch(2, 10);
        gridLayout_7->setColumnStretch(3, 10);
        gridLayout_7->setColumnStretch(4, 10);
        gridLayout_7->setColumnStretch(5, 10);
        gridLayout_7->setColumnStretch(6, 10);
        gridLayout_7->setColumnStretch(7, 10);
        gridLayout_7->setColumnStretch(8, 10);
        gridLayout_7->setColumnStretch(9, 10);
        tabWidget->addTab(tabCurve, QString());
        tabSwitch = new QWidget();
        tabSwitch->setObjectName(QString::fromUtf8("tabSwitch"));
        gridLayout_8 = new QGridLayout(tabSwitch);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_30 = new QLabel(tabSwitch);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setFrameShape(QFrame::Panel);
        label_30->setFrameShadow(QFrame::Raised);

        gridLayout_8->addWidget(label_30, 1, 0, 1, 1);

        cswitchFunc_1 = new QComboBox(tabSwitch);
        cswitchFunc_1->setObjectName(QString::fromUtf8("cswitchFunc_1"));

        gridLayout_8->addWidget(cswitchFunc_1, 1, 1, 1, 1);

        label_31 = new QLabel(tabSwitch);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setFrameShape(QFrame::Panel);
        label_31->setFrameShadow(QFrame::Raised);

        gridLayout_8->addWidget(label_31, 2, 0, 1, 1);

        cswitchFunc_2 = new QComboBox(tabSwitch);
        cswitchFunc_2->setObjectName(QString::fromUtf8("cswitchFunc_2"));

        gridLayout_8->addWidget(cswitchFunc_2, 2, 1, 1, 1);

        label_32 = new QLabel(tabSwitch);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setFrameShape(QFrame::Panel);
        label_32->setFrameShadow(QFrame::Raised);

        gridLayout_8->addWidget(label_32, 3, 0, 1, 1);

        cswitchFunc_3 = new QComboBox(tabSwitch);
        cswitchFunc_3->setObjectName(QString::fromUtf8("cswitchFunc_3"));

        gridLayout_8->addWidget(cswitchFunc_3, 3, 1, 1, 1);

        label_33 = new QLabel(tabSwitch);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setFrameShape(QFrame::Panel);
        label_33->setFrameShadow(QFrame::Raised);

        gridLayout_8->addWidget(label_33, 4, 0, 1, 1);

        cswitchFunc_4 = new QComboBox(tabSwitch);
        cswitchFunc_4->setObjectName(QString::fromUtf8("cswitchFunc_4"));

        gridLayout_8->addWidget(cswitchFunc_4, 4, 1, 1, 1);

        label_34 = new QLabel(tabSwitch);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setFrameShape(QFrame::Panel);
        label_34->setFrameShadow(QFrame::Raised);

        gridLayout_8->addWidget(label_34, 5, 0, 1, 1);

        cswitchFunc_5 = new QComboBox(tabSwitch);
        cswitchFunc_5->setObjectName(QString::fromUtf8("cswitchFunc_5"));

        gridLayout_8->addWidget(cswitchFunc_5, 5, 1, 1, 1);

        cswitchFunc_6 = new QComboBox(tabSwitch);
        cswitchFunc_6->setObjectName(QString::fromUtf8("cswitchFunc_6"));

        gridLayout_8->addWidget(cswitchFunc_6, 6, 1, 1, 1);

        cswFuncLabel = new QLabel(tabSwitch);
        cswFuncLabel->setObjectName(QString::fromUtf8("cswFuncLabel"));
        cswFuncLabel->setFrameShape(QFrame::Panel);
        cswFuncLabel->setFrameShadow(QFrame::Raised);

        gridLayout_8->addWidget(cswFuncLabel, 0, 1, 1, 1);

        cswCol1 = new QLabel(tabSwitch);
        cswCol1->setObjectName(QString::fromUtf8("cswCol1"));
        cswCol1->setFrameShape(QFrame::Panel);
        cswCol1->setFrameShadow(QFrame::Raised);

        gridLayout_8->addWidget(cswCol1, 0, 2, 1, 1);

        cswCol2 = new QLabel(tabSwitch);
        cswCol2->setObjectName(QString::fromUtf8("cswCol2"));
        cswCol2->setFrameShape(QFrame::Panel);
        cswCol2->setFrameShadow(QFrame::Raised);

        gridLayout_8->addWidget(cswCol2, 0, 3, 1, 1);

        label_35 = new QLabel(tabSwitch);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setFrameShape(QFrame::Panel);
        label_35->setFrameShadow(QFrame::Raised);

        gridLayout_8->addWidget(label_35, 6, 0, 1, 1);

        label_81 = new QLabel(tabSwitch);
        label_81->setObjectName(QString::fromUtf8("label_81"));
        label_81->setFrameShape(QFrame::Panel);
        label_81->setFrameShadow(QFrame::Raised);

        gridLayout_8->addWidget(label_81, 7, 0, 1, 1);

        label_82 = new QLabel(tabSwitch);
        label_82->setObjectName(QString::fromUtf8("label_82"));
        label_82->setFrameShape(QFrame::Panel);
        label_82->setFrameShadow(QFrame::Raised);

        gridLayout_8->addWidget(label_82, 8, 0, 1, 1);

        label_99 = new QLabel(tabSwitch);
        label_99->setObjectName(QString::fromUtf8("label_99"));
        label_99->setFrameShape(QFrame::Panel);
        label_99->setFrameShadow(QFrame::Raised);

        gridLayout_8->addWidget(label_99, 9, 0, 1, 1);

        label_100 = new QLabel(tabSwitch);
        label_100->setObjectName(QString::fromUtf8("label_100"));
        label_100->setFrameShape(QFrame::Panel);
        label_100->setFrameShadow(QFrame::Raised);

        gridLayout_8->addWidget(label_100, 10, 0, 1, 1);

        label_101 = new QLabel(tabSwitch);
        label_101->setObjectName(QString::fromUtf8("label_101"));
        label_101->setFrameShape(QFrame::Panel);
        label_101->setFrameShadow(QFrame::Raised);

        gridLayout_8->addWidget(label_101, 11, 0, 1, 1);

        label_102 = new QLabel(tabSwitch);
        label_102->setObjectName(QString::fromUtf8("label_102"));
        label_102->setFrameShape(QFrame::Panel);
        label_102->setFrameShadow(QFrame::Raised);

        gridLayout_8->addWidget(label_102, 12, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer, 13, 0, 1, 1);

        cswitchFunc_7 = new QComboBox(tabSwitch);
        cswitchFunc_7->setObjectName(QString::fromUtf8("cswitchFunc_7"));

        gridLayout_8->addWidget(cswitchFunc_7, 7, 1, 1, 1);

        cswitchFunc_8 = new QComboBox(tabSwitch);
        cswitchFunc_8->setObjectName(QString::fromUtf8("cswitchFunc_8"));

        gridLayout_8->addWidget(cswitchFunc_8, 8, 1, 1, 1);

        cswitchFunc_9 = new QComboBox(tabSwitch);
        cswitchFunc_9->setObjectName(QString::fromUtf8("cswitchFunc_9"));

        gridLayout_8->addWidget(cswitchFunc_9, 9, 1, 1, 1);

        cswitchFunc_10 = new QComboBox(tabSwitch);
        cswitchFunc_10->setObjectName(QString::fromUtf8("cswitchFunc_10"));

        gridLayout_8->addWidget(cswitchFunc_10, 10, 1, 1, 1);

        cswitchFunc_11 = new QComboBox(tabSwitch);
        cswitchFunc_11->setObjectName(QString::fromUtf8("cswitchFunc_11"));

        gridLayout_8->addWidget(cswitchFunc_11, 11, 1, 1, 1);

        cswitchFunc_12 = new QComboBox(tabSwitch);
        cswitchFunc_12->setObjectName(QString::fromUtf8("cswitchFunc_12"));

        gridLayout_8->addWidget(cswitchFunc_12, 12, 1, 1, 1);

        tabWidget->addTab(tabSwitch, QString());
        tabSafetySwitches = new QWidget();
        tabSafetySwitches->setObjectName(QString::fromUtf8("tabSafetySwitches"));
        grid_tabSafetySwitches = new QGridLayout(tabSafetySwitches);
        grid_tabSafetySwitches->setObjectName(QString::fromUtf8("grid_tabSafetySwitches"));
        label_56 = new QLabel(tabSafetySwitches);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setFrameShape(QFrame::Panel);
        label_56->setFrameShadow(QFrame::Raised);
        label_56->setMidLineWidth(0);
        label_56->setAlignment(Qt::AlignCenter);
        label_56->setMargin(3);

        grid_tabSafetySwitches->addWidget(label_56, 0, 0, 1, 1);

        label_66 = new QLabel(tabSafetySwitches);
        label_66->setObjectName(QString::fromUtf8("label_66"));
        label_66->setFrameShape(QFrame::Panel);
        label_66->setFrameShadow(QFrame::Raised);
        label_66->setMidLineWidth(0);
        label_66->setAlignment(Qt::AlignCenter);
        label_66->setMargin(3);

        grid_tabSafetySwitches->addWidget(label_66, 0, 1, 1, 1);

        label_80 = new QLabel(tabSafetySwitches);
        label_80->setObjectName(QString::fromUtf8("label_80"));
        label_80->setFrameShape(QFrame::Panel);
        label_80->setFrameShadow(QFrame::Raised);
        label_80->setMidLineWidth(0);
        label_80->setAlignment(Qt::AlignCenter);
        label_80->setMargin(3);

        grid_tabSafetySwitches->addWidget(label_80, 0, 2, 1, 1);

        label_97 = new QLabel(tabSafetySwitches);
        label_97->setObjectName(QString::fromUtf8("label_97"));
        label_97->setText(QString::fromUtf8("CH1"));

        grid_tabSafetySwitches->addWidget(label_97, 1, 0, 1, 1);

        label_88 = new QLabel(tabSafetySwitches);
        label_88->setObjectName(QString::fromUtf8("label_88"));
        label_88->setText(QString::fromUtf8("CH2"));

        grid_tabSafetySwitches->addWidget(label_88, 2, 0, 1, 1);

        label_85 = new QLabel(tabSafetySwitches);
        label_85->setObjectName(QString::fromUtf8("label_85"));
        label_85->setText(QString::fromUtf8("CH3"));

        grid_tabSafetySwitches->addWidget(label_85, 3, 0, 1, 1);

        label_84 = new QLabel(tabSafetySwitches);
        label_84->setObjectName(QString::fromUtf8("label_84"));
        label_84->setText(QString::fromUtf8("CH4"));

        grid_tabSafetySwitches->addWidget(label_84, 4, 0, 1, 1);

        label_89 = new QLabel(tabSafetySwitches);
        label_89->setObjectName(QString::fromUtf8("label_89"));
        label_89->setText(QString::fromUtf8("CH5"));

        grid_tabSafetySwitches->addWidget(label_89, 5, 0, 1, 1);

        label_90 = new QLabel(tabSafetySwitches);
        label_90->setObjectName(QString::fromUtf8("label_90"));
        label_90->setText(QString::fromUtf8("CH6"));

        grid_tabSafetySwitches->addWidget(label_90, 6, 0, 1, 1);

        label_86 = new QLabel(tabSafetySwitches);
        label_86->setObjectName(QString::fromUtf8("label_86"));
        label_86->setText(QString::fromUtf8("CH7"));

        grid_tabSafetySwitches->addWidget(label_86, 7, 0, 1, 1);

        label_98 = new QLabel(tabSafetySwitches);
        label_98->setObjectName(QString::fromUtf8("label_98"));
        label_98->setText(QString::fromUtf8("CH8"));

        grid_tabSafetySwitches->addWidget(label_98, 8, 0, 1, 1);

        label_91 = new QLabel(tabSafetySwitches);
        label_91->setObjectName(QString::fromUtf8("label_91"));
        label_91->setText(QString::fromUtf8("CH9"));

        grid_tabSafetySwitches->addWidget(label_91, 9, 0, 1, 1);

        label_92 = new QLabel(tabSafetySwitches);
        label_92->setObjectName(QString::fromUtf8("label_92"));
        label_92->setText(QString::fromUtf8("CH10"));

        grid_tabSafetySwitches->addWidget(label_92, 10, 0, 1, 1);

        label_83 = new QLabel(tabSafetySwitches);
        label_83->setObjectName(QString::fromUtf8("label_83"));
        label_83->setText(QString::fromUtf8("CH11"));

        grid_tabSafetySwitches->addWidget(label_83, 11, 0, 1, 1);

        label_93 = new QLabel(tabSafetySwitches);
        label_93->setObjectName(QString::fromUtf8("label_93"));
        label_93->setText(QString::fromUtf8("CH12"));

        grid_tabSafetySwitches->addWidget(label_93, 12, 0, 1, 1);

        label_94 = new QLabel(tabSafetySwitches);
        label_94->setObjectName(QString::fromUtf8("label_94"));
        label_94->setText(QString::fromUtf8("CH13"));

        grid_tabSafetySwitches->addWidget(label_94, 13, 0, 1, 1);

        label_95 = new QLabel(tabSafetySwitches);
        label_95->setObjectName(QString::fromUtf8("label_95"));
        label_95->setText(QString::fromUtf8("CH14"));

        grid_tabSafetySwitches->addWidget(label_95, 14, 0, 1, 1);

        label_87 = new QLabel(tabSafetySwitches);
        label_87->setObjectName(QString::fromUtf8("label_87"));
        label_87->setText(QString::fromUtf8("CH15"));

        grid_tabSafetySwitches->addWidget(label_87, 15, 0, 1, 1);

        label_96 = new QLabel(tabSafetySwitches);
        label_96->setObjectName(QString::fromUtf8("label_96"));
        label_96->setText(QString::fromUtf8("CH16"));

        grid_tabSafetySwitches->addWidget(label_96, 16, 0, 1, 1);

        grid_tabSafetySwitches->setRowStretch(1, 10);
        grid_tabSafetySwitches->setRowStretch(2, 10);
        grid_tabSafetySwitches->setRowStretch(3, 10);
        grid_tabSafetySwitches->setRowStretch(4, 10);
        grid_tabSafetySwitches->setRowStretch(5, 10);
        grid_tabSafetySwitches->setRowStretch(6, 10);
        grid_tabSafetySwitches->setRowStretch(7, 10);
        grid_tabSafetySwitches->setRowStretch(8, 10);
        grid_tabSafetySwitches->setRowStretch(9, 10);
        grid_tabSafetySwitches->setRowStretch(10, 10);
        grid_tabSafetySwitches->setRowStretch(11, 10);
        grid_tabSafetySwitches->setRowStretch(12, 10);
        grid_tabSafetySwitches->setRowStretch(13, 10);
        grid_tabSafetySwitches->setRowStretch(14, 10);
        grid_tabSafetySwitches->setRowStretch(15, 10);
        grid_tabSafetySwitches->setRowStretch(16, 10);
        grid_tabSafetySwitches->setColumnStretch(1, 10);
        grid_tabSafetySwitches->setColumnStretch(2, 10);
        tabWidget->addTab(tabSafetySwitches, QString());
        tabRotarySwitches = new QWidget();
        tabRotarySwitches->setObjectName(QString::fromUtf8("tabRotarySwitches"));
        grid_tabRotarySwitches = new QGridLayout(tabRotarySwitches);
        grid_tabRotarySwitches->setObjectName(QString::fromUtf8("grid_tabRotarySwitches"));
        rota_label_104 = new QLabel(tabRotarySwitches);
        rota_label_104->setObjectName(QString::fromUtf8("rota_label_104"));
        rota_label_104->setFrameShape(QFrame::Panel);
        rota_label_104->setFrameShadow(QFrame::Raised);
        rota_label_104->setMidLineWidth(0);
        rota_label_104->setAlignment(Qt::AlignCenter);
        rota_label_104->setMargin(3);

        grid_tabRotarySwitches->addWidget(rota_label_104, 0, 0, 1, 1);

        rota_label_119 = new QLabel(tabRotarySwitches);
        rota_label_119->setObjectName(QString::fromUtf8("rota_label_119"));
        rota_label_119->setFrameShape(QFrame::Panel);
        rota_label_119->setFrameShadow(QFrame::Raised);

        grid_tabRotarySwitches->addWidget(rota_label_119, 0, 1, 1, 1);

        rota_label_109 = new QLabel(tabRotarySwitches);
        rota_label_109->setObjectName(QString::fromUtf8("rota_label_109"));
        rota_label_109->setFrameShape(QFrame::Panel);
        rota_label_109->setFrameShadow(QFrame::Raised);
        rota_label_109->setMidLineWidth(0);
        rota_label_109->setAlignment(Qt::AlignCenter);
        rota_label_109->setMargin(3);

        grid_tabRotarySwitches->addWidget(rota_label_109, 0, 2, 1, 1);

        rota_label_110 = new QLabel(tabRotarySwitches);
        rota_label_110->setObjectName(QString::fromUtf8("rota_label_110"));
        rota_label_110->setFrameShape(QFrame::Panel);
        rota_label_110->setFrameShadow(QFrame::Raised);
        rota_label_110->setMidLineWidth(0);
        rota_label_110->setScaledContents(false);
        rota_label_110->setAlignment(Qt::AlignCenter);
        rota_label_110->setMargin(3);

        grid_tabRotarySwitches->addWidget(rota_label_110, 0, 3, 1, 1);

        rota_label_111 = new QLabel(tabRotarySwitches);
        rota_label_111->setObjectName(QString::fromUtf8("rota_label_111"));
        rota_label_111->setText(QString::fromUtf8("1"));

        grid_tabRotarySwitches->addWidget(rota_label_111, 1, 0, 1, 1);

        rota_label_112 = new QLabel(tabRotarySwitches);
        rota_label_112->setObjectName(QString::fromUtf8("rota_label_112"));
        rota_label_112->setText(QString::fromUtf8("2"));

        grid_tabRotarySwitches->addWidget(rota_label_112, 2, 0, 1, 1);

        rota_label_113 = new QLabel(tabRotarySwitches);
        rota_label_113->setObjectName(QString::fromUtf8("rota_label_113"));
        rota_label_113->setText(QString::fromUtf8("3"));

        grid_tabRotarySwitches->addWidget(rota_label_113, 3, 0, 1, 1);

        rota_label_114 = new QLabel(tabRotarySwitches);
        rota_label_114->setObjectName(QString::fromUtf8("rota_label_114"));

        grid_tabRotarySwitches->addWidget(rota_label_114, 4, 0, 1, 1);

        rota_label_115 = new QLabel(tabRotarySwitches);
        rota_label_115->setObjectName(QString::fromUtf8("rota_label_115"));

        grid_tabRotarySwitches->addWidget(rota_label_115, 5, 0, 1, 1);

        rota_label_116 = new QLabel(tabRotarySwitches);
        rota_label_116->setObjectName(QString::fromUtf8("rota_label_116"));

        grid_tabRotarySwitches->addWidget(rota_label_116, 6, 0, 1, 1);

        rota_label_105 = new QLabel(tabRotarySwitches);
        rota_label_105->setObjectName(QString::fromUtf8("rota_label_105"));

        grid_tabRotarySwitches->addWidget(rota_label_105, 7, 0, 1, 1);

        rota_label_117 = new QLabel(tabRotarySwitches);
        rota_label_117->setObjectName(QString::fromUtf8("rota_label_117"));

        grid_tabRotarySwitches->addWidget(rota_label_117, 8, 0, 1, 1);

        rota_label_118 = new QLabel(tabRotarySwitches);
        rota_label_118->setObjectName(QString::fromUtf8("rota_label_118"));

        grid_tabRotarySwitches->addWidget(rota_label_118, 9, 0, 1, 1);

        grid_tabRotarySwitches->setRowStretch(1, 10);
        grid_tabRotarySwitches->setRowStretch(2, 10);
        grid_tabRotarySwitches->setRowStretch(3, 10);
        grid_tabRotarySwitches->setRowStretch(4, 10);
        grid_tabRotarySwitches->setRowStretch(5, 10);
        grid_tabRotarySwitches->setRowStretch(6, 10);
        grid_tabRotarySwitches->setRowStretch(7, 10);
        grid_tabRotarySwitches->setRowStretch(8, 10);
        grid_tabRotarySwitches->setRowStretch(9, 40);
        grid_tabRotarySwitches->setColumnStretch(0, 5);
        grid_tabRotarySwitches->setColumnStretch(1, 5);
        grid_tabRotarySwitches->setColumnStretch(2, 40);
        grid_tabRotarySwitches->setColumnStretch(3, 40);
        tabWidget->addTab(tabRotarySwitches, QString());
        tabTrims = new QWidget();
        tabTrims->setObjectName(QString::fromUtf8("tabTrims"));
        gridLayout_5 = new QGridLayout(tabTrims);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        slider_S2 = new QSlider(tabTrims);
        slider_S2->setObjectName(QString::fromUtf8("slider_S2"));
        slider_S2->setMinimum(-127);
        slider_S2->setMaximum(127);
        slider_S2->setOrientation(Qt::Vertical);
        slider_S2->setInvertedAppearance(false);
        slider_S2->setInvertedControls(false);
        slider_S2->setTickPosition(QSlider::TicksBothSides);
        slider_S2->setTickInterval(32);

        gridLayout_5->addWidget(slider_S2, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        spinBox_S2 = new QSpinBox(tabTrims);
        spinBox_S2->setObjectName(QString::fromUtf8("spinBox_S2"));
        spinBox_S2->setAlignment(Qt::AlignCenter);
        spinBox_S2->setAccelerated(true);
        spinBox_S2->setMinimum(-127);
        spinBox_S2->setMaximum(127);

        gridLayout_3->addWidget(spinBox_S2, 2, 0, 1, 1);

        spinBox_S1 = new QSpinBox(tabTrims);
        spinBox_S1->setObjectName(QString::fromUtf8("spinBox_S1"));
        spinBox_S1->setAlignment(Qt::AlignCenter);
        spinBox_S1->setAccelerated(true);
        spinBox_S1->setMinimum(-127);
        spinBox_S1->setMaximum(127);

        gridLayout_3->addWidget(spinBox_S1, 5, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 6, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        Label_S1 = new QLabel(tabTrims);
        Label_S1->setObjectName(QString::fromUtf8("Label_S1"));
        Label_S1->setFont(font);
        Label_S1->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(Label_S1, 4, 0, 1, 1);

        Label_S2 = new QLabel(tabTrims);
        Label_S2->setObjectName(QString::fromUtf8("Label_S2"));
        Label_S2->setFont(font);
        Label_S2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(Label_S2, 1, 0, 1, 1);

        gridLayout_3->setRowStretch(0, 1);
        gridLayout_3->setRowStretch(3, 1);
        gridLayout_3->setRowStretch(6, 1);

        gridLayout_5->addLayout(gridLayout_3, 0, 1, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        spinBox_S3 = new QSpinBox(tabTrims);
        spinBox_S3->setObjectName(QString::fromUtf8("spinBox_S3"));
        spinBox_S3->setAlignment(Qt::AlignCenter);
        spinBox_S3->setAccelerated(true);
        spinBox_S3->setMinimum(-127);
        spinBox_S3->setMaximum(127);

        gridLayout_4->addWidget(spinBox_S3, 2, 0, 1, 1);

        spinBox_S4 = new QSpinBox(tabTrims);
        spinBox_S4->setObjectName(QString::fromUtf8("spinBox_S4"));
        spinBox_S4->setAlignment(Qt::AlignCenter);
        spinBox_S4->setAccelerated(true);
        spinBox_S4->setMinimum(-127);
        spinBox_S4->setMaximum(127);

        gridLayout_4->addWidget(spinBox_S4, 5, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 3, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 6, 0, 1, 1);

        Label_S4 = new QLabel(tabTrims);
        Label_S4->setObjectName(QString::fromUtf8("Label_S4"));
        Label_S4->setFont(font);
        Label_S4->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(Label_S4, 4, 0, 1, 1);

        Label_S3 = new QLabel(tabTrims);
        Label_S3->setObjectName(QString::fromUtf8("Label_S3"));
        Label_S3->setFont(font);
        Label_S3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(Label_S3, 1, 0, 1, 1);

        gridLayout_4->setRowStretch(0, 1);
        gridLayout_4->setRowStretch(3, 1);
        gridLayout_4->setRowStretch(6, 1);

        gridLayout_5->addLayout(gridLayout_4, 0, 2, 1, 1);

        slider_S3 = new QSlider(tabTrims);
        slider_S3->setObjectName(QString::fromUtf8("slider_S3"));
        slider_S3->setMinimum(-127);
        slider_S3->setMaximum(127);
        slider_S3->setOrientation(Qt::Vertical);
        slider_S3->setTickPosition(QSlider::TicksBothSides);
        slider_S3->setTickInterval(32);

        gridLayout_5->addWidget(slider_S3, 0, 3, 1, 1);

        slider_S1 = new QSlider(tabTrims);
        slider_S1->setObjectName(QString::fromUtf8("slider_S1"));
        slider_S1->setMinimum(-127);
        slider_S1->setMaximum(127);
        slider_S1->setOrientation(Qt::Horizontal);
        slider_S1->setTickPosition(QSlider::TicksBothSides);
        slider_S1->setTickInterval(32);

        gridLayout_5->addWidget(slider_S1, 1, 1, 1, 1);

        slider_S4 = new QSlider(tabTrims);
        slider_S4->setObjectName(QString::fromUtf8("slider_S4"));
        slider_S4->setMinimum(-127);
        slider_S4->setMaximum(127);
        slider_S4->setOrientation(Qt::Horizontal);
        slider_S4->setTickPosition(QSlider::TicksBothSides);
        slider_S4->setTickInterval(32);

        gridLayout_5->addWidget(slider_S4, 1, 2, 1, 1);

        tabWidget->addTab(tabTrims, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_22 = new QGridLayout();
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        label_104 = new QLabel(tab);
        label_104->setObjectName(QString::fromUtf8("label_104"));

        gridLayout_22->addWidget(label_104, 0, 0, 1, 1);

        frsky_type_0 = new QComboBox(tab);
        frsky_type_0->setObjectName(QString::fromUtf8("frsky_type_0"));

        gridLayout_22->addWidget(frsky_type_0, 0, 2, 1, 1);

        gridLayout_21 = new QGridLayout();
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        label_105 = new QLabel(tab);
        label_105->setObjectName(QString::fromUtf8("label_105"));

        gridLayout_21->addWidget(label_105, 0, 0, 1, 1);

        frsky_level_0_0 = new QComboBox(tab);
        frsky_level_0_0->setObjectName(QString::fromUtf8("frsky_level_0_0"));

        gridLayout_21->addWidget(frsky_level_0_0, 0, 1, 1, 1);

        frsky_gr_0_0 = new QComboBox(tab);
        frsky_gr_0_0->setObjectName(QString::fromUtf8("frsky_gr_0_0"));

        gridLayout_21->addWidget(frsky_gr_0_0, 0, 2, 1, 1);

        label_109 = new QLabel(tab);
        label_109->setObjectName(QString::fromUtf8("label_109"));

        gridLayout_21->addWidget(label_109, 1, 0, 1, 1);

        frsky_level_0_1 = new QComboBox(tab);
        frsky_level_0_1->setObjectName(QString::fromUtf8("frsky_level_0_1"));

        gridLayout_21->addWidget(frsky_level_0_1, 1, 1, 1, 1);

        frsky_gr_0_1 = new QComboBox(tab);
        frsky_gr_0_1->setObjectName(QString::fromUtf8("frsky_gr_0_1"));

        gridLayout_21->addWidget(frsky_gr_0_1, 1, 2, 1, 1);

        frsky_val_0_1 = new QSpinBox(tab);
        frsky_val_0_1->setObjectName(QString::fromUtf8("frsky_val_0_1"));
        frsky_val_0_1->setMaximum(255);

        gridLayout_21->addWidget(frsky_val_0_1, 1, 3, 1, 1);

        frsky_val_0_0 = new QSpinBox(tab);
        frsky_val_0_0->setObjectName(QString::fromUtf8("frsky_val_0_0"));
        frsky_val_0_0->setMaximum(255);

        gridLayout_21->addWidget(frsky_val_0_0, 0, 3, 1, 1);


        gridLayout_22->addLayout(gridLayout_21, 1, 1, 1, 2);

        frsky_ratio_0 = new QSpinBox(tab);
        frsky_ratio_0->setObjectName(QString::fromUtf8("frsky_ratio_0"));
        frsky_ratio_0->setMaximum(255);

        gridLayout_22->addWidget(frsky_ratio_0, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_22);

        gridLayout_23 = new QGridLayout();
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        label_110 = new QLabel(tab);
        label_110->setObjectName(QString::fromUtf8("label_110"));

        gridLayout_23->addWidget(label_110, 0, 0, 1, 1);

        frsky_type_1 = new QComboBox(tab);
        frsky_type_1->setObjectName(QString::fromUtf8("frsky_type_1"));

        gridLayout_23->addWidget(frsky_type_1, 0, 2, 1, 1);

        gridLayout_24 = new QGridLayout();
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        label_111 = new QLabel(tab);
        label_111->setObjectName(QString::fromUtf8("label_111"));

        gridLayout_24->addWidget(label_111, 0, 0, 1, 1);

        frsky_level_1_0 = new QComboBox(tab);
        frsky_level_1_0->setObjectName(QString::fromUtf8("frsky_level_1_0"));

        gridLayout_24->addWidget(frsky_level_1_0, 0, 1, 1, 1);

        frsky_gr_1_0 = new QComboBox(tab);
        frsky_gr_1_0->setObjectName(QString::fromUtf8("frsky_gr_1_0"));

        gridLayout_24->addWidget(frsky_gr_1_0, 0, 2, 1, 1);

        label_112 = new QLabel(tab);
        label_112->setObjectName(QString::fromUtf8("label_112"));

        gridLayout_24->addWidget(label_112, 1, 0, 1, 1);

        frsky_level_1_1 = new QComboBox(tab);
        frsky_level_1_1->setObjectName(QString::fromUtf8("frsky_level_1_1"));

        gridLayout_24->addWidget(frsky_level_1_1, 1, 1, 1, 1);

        frsky_gr_1_1 = new QComboBox(tab);
        frsky_gr_1_1->setObjectName(QString::fromUtf8("frsky_gr_1_1"));

        gridLayout_24->addWidget(frsky_gr_1_1, 1, 2, 1, 1);

        frsky_val_1_1 = new QSpinBox(tab);
        frsky_val_1_1->setObjectName(QString::fromUtf8("frsky_val_1_1"));
        frsky_val_1_1->setMaximum(255);

        gridLayout_24->addWidget(frsky_val_1_1, 1, 3, 1, 1);

        frsky_val_1_0 = new QSpinBox(tab);
        frsky_val_1_0->setObjectName(QString::fromUtf8("frsky_val_1_0"));
        frsky_val_1_0->setMaximum(255);

        gridLayout_24->addWidget(frsky_val_1_0, 0, 3, 1, 1);


        gridLayout_23->addLayout(gridLayout_24, 1, 1, 1, 2);

        frsky_ratio_1 = new QSpinBox(tab);
        frsky_ratio_1->setObjectName(QString::fromUtf8("frsky_ratio_1"));
        frsky_ratio_1->setMaximum(255);

        gridLayout_23->addWidget(frsky_ratio_1, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_23);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        tabWidget->addTab(tab, QString());
        tabTemplates = new QWidget();
        tabTemplates->setObjectName(QString::fromUtf8("tabTemplates"));
        gridLayout_19 = new QGridLayout(tabTemplates);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        templateList = new QListWidget(tabTemplates);
        templateList->setObjectName(QString::fromUtf8("templateList"));

        gridLayout_19->addWidget(templateList, 0, 0, 1, 1);

        tabWidget->addTab(tabTemplates, QString());

        gridLayout->addWidget(tabWidget, 4, 1, 1, 1);

        QWidget::setTabOrder(offsetDSB_1, minSB_1);
        QWidget::setTabOrder(minSB_1, maxSB_1);
        QWidget::setTabOrder(maxSB_1, chInvCB_1);
        QWidget::setTabOrder(chInvCB_1, offsetDSB_2);
        QWidget::setTabOrder(offsetDSB_2, minSB_2);
        QWidget::setTabOrder(minSB_2, maxSB_2);
        QWidget::setTabOrder(maxSB_2, chInvCB_2);
        QWidget::setTabOrder(chInvCB_2, offsetDSB_3);
        QWidget::setTabOrder(offsetDSB_3, minSB_3);
        QWidget::setTabOrder(minSB_3, maxSB_3);
        QWidget::setTabOrder(maxSB_3, chInvCB_3);
        QWidget::setTabOrder(chInvCB_3, offsetDSB_4);
        QWidget::setTabOrder(offsetDSB_4, minSB_4);
        QWidget::setTabOrder(minSB_4, maxSB_4);
        QWidget::setTabOrder(maxSB_4, chInvCB_4);
        QWidget::setTabOrder(chInvCB_4, offsetDSB_5);
        QWidget::setTabOrder(offsetDSB_5, minSB_5);
        QWidget::setTabOrder(minSB_5, maxSB_5);
        QWidget::setTabOrder(maxSB_5, chInvCB_5);
        QWidget::setTabOrder(chInvCB_5, offsetDSB_6);
        QWidget::setTabOrder(offsetDSB_6, minSB_6);
        QWidget::setTabOrder(minSB_6, maxSB_6);
        QWidget::setTabOrder(maxSB_6, chInvCB_6);
        QWidget::setTabOrder(chInvCB_6, offsetDSB_7);
        QWidget::setTabOrder(offsetDSB_7, minSB_7);
        QWidget::setTabOrder(minSB_7, maxSB_7);
        QWidget::setTabOrder(maxSB_7, chInvCB_7);
        QWidget::setTabOrder(chInvCB_7, offsetDSB_8);
        QWidget::setTabOrder(offsetDSB_8, minSB_8);
        QWidget::setTabOrder(minSB_8, maxSB_8);
        QWidget::setTabOrder(maxSB_8, chInvCB_8);
        QWidget::setTabOrder(chInvCB_8, offsetDSB_9);
        QWidget::setTabOrder(offsetDSB_9, minSB_9);
        QWidget::setTabOrder(minSB_9, maxSB_9);
        QWidget::setTabOrder(maxSB_9, chInvCB_9);
        QWidget::setTabOrder(chInvCB_9, offsetDSB_10);
        QWidget::setTabOrder(offsetDSB_10, minSB_10);
        QWidget::setTabOrder(minSB_10, maxSB_10);
        QWidget::setTabOrder(maxSB_10, chInvCB_10);
        QWidget::setTabOrder(chInvCB_10, offsetDSB_11);
        QWidget::setTabOrder(offsetDSB_11, minSB_11);
        QWidget::setTabOrder(minSB_11, maxSB_11);
        QWidget::setTabOrder(maxSB_11, chInvCB_11);
        QWidget::setTabOrder(chInvCB_11, offsetDSB_12);
        QWidget::setTabOrder(offsetDSB_12, minSB_12);
        QWidget::setTabOrder(minSB_12, maxSB_12);
        QWidget::setTabOrder(maxSB_12, chInvCB_12);
        QWidget::setTabOrder(chInvCB_12, offsetDSB_13);
        QWidget::setTabOrder(offsetDSB_13, minSB_13);
        QWidget::setTabOrder(minSB_13, maxSB_13);
        QWidget::setTabOrder(maxSB_13, chInvCB_13);
        QWidget::setTabOrder(chInvCB_13, offsetDSB_14);
        QWidget::setTabOrder(offsetDSB_14, minSB_14);
        QWidget::setTabOrder(minSB_14, maxSB_14);
        QWidget::setTabOrder(maxSB_14, chInvCB_14);
        QWidget::setTabOrder(chInvCB_14, offsetDSB_15);
        QWidget::setTabOrder(offsetDSB_15, minSB_15);
        QWidget::setTabOrder(minSB_15, maxSB_15);
        QWidget::setTabOrder(maxSB_15, chInvCB_15);
        QWidget::setTabOrder(chInvCB_15, offsetDSB_16);
        QWidget::setTabOrder(offsetDSB_16, minSB_16);
        QWidget::setTabOrder(minSB_16, maxSB_16);
        QWidget::setTabOrder(maxSB_16, chInvCB_16);
        QWidget::setTabOrder(chInvCB_16, curvePt6_10);
        QWidget::setTabOrder(curvePt6_10, curvePt7_10);
        QWidget::setTabOrder(curvePt7_10, curvePt8_10);
        QWidget::setTabOrder(curvePt8_10, curvePt9_10);
        QWidget::setTabOrder(curvePt9_10, curveEdit_11);
        QWidget::setTabOrder(curveEdit_11, curvePt1_11);
        QWidget::setTabOrder(curvePt1_11, curvePt2_11);
        QWidget::setTabOrder(curvePt2_11, curvePt3_11);
        QWidget::setTabOrder(curvePt3_11, curvePt4_11);
        QWidget::setTabOrder(curvePt4_11, curvePt5_11);
        QWidget::setTabOrder(curvePt5_11, curvePt6_11);
        QWidget::setTabOrder(curvePt6_11, curvePt7_11);
        QWidget::setTabOrder(curvePt7_11, curvePt8_11);
        QWidget::setTabOrder(curvePt8_11, curvePt9_11);
        QWidget::setTabOrder(curvePt9_11, curveEdit_12);
        QWidget::setTabOrder(curveEdit_12, curvePt1_12);
        QWidget::setTabOrder(curvePt1_12, curvePt2_12);
        QWidget::setTabOrder(curvePt2_12, curvePt3_12);
        QWidget::setTabOrder(curvePt3_12, curvePt4_12);
        QWidget::setTabOrder(curvePt4_12, curvePt5_12);
        QWidget::setTabOrder(curvePt5_12, curvePt6_12);
        QWidget::setTabOrder(curvePt6_12, curvePt7_12);
        QWidget::setTabOrder(curvePt7_12, curvePt8_12);
        QWidget::setTabOrder(curvePt8_12, curvePt9_12);
        QWidget::setTabOrder(curvePt9_12, curveEdit_13);
        QWidget::setTabOrder(curveEdit_13, curvePt1_13);
        QWidget::setTabOrder(curvePt1_13, curvePt2_13);
        QWidget::setTabOrder(curvePt2_13, curvePt3_13);
        QWidget::setTabOrder(curvePt3_13, curvePt4_13);
        QWidget::setTabOrder(curvePt4_13, curvePt5_13);
        QWidget::setTabOrder(curvePt5_13, curvePt6_13);
        QWidget::setTabOrder(curvePt6_13, curvePt7_13);
        QWidget::setTabOrder(curvePt7_13, curvePt8_13);
        QWidget::setTabOrder(curvePt8_13, curvePt9_13);
        QWidget::setTabOrder(curvePt9_13, curveEdit_14);
        QWidget::setTabOrder(curveEdit_14, curvePt1_14);
        QWidget::setTabOrder(curvePt1_14, curvePt2_14);
        QWidget::setTabOrder(curvePt2_14, curvePt3_14);
        QWidget::setTabOrder(curvePt3_14, curvePt4_14);
        QWidget::setTabOrder(curvePt4_14, curvePt5_14);
        QWidget::setTabOrder(curvePt5_14, curvePt6_14);
        QWidget::setTabOrder(curvePt6_14, curvePt7_14);
        QWidget::setTabOrder(curvePt7_14, curvePt8_14);
        QWidget::setTabOrder(curvePt8_14, curvePt9_14);
        QWidget::setTabOrder(curvePt9_14, curveEdit_15);
        QWidget::setTabOrder(curveEdit_15, curvePt1_15);
        QWidget::setTabOrder(curvePt1_15, curvePt2_15);
        QWidget::setTabOrder(curvePt2_15, curvePt3_15);
        QWidget::setTabOrder(curvePt3_15, curvePt4_15);
        QWidget::setTabOrder(curvePt4_15, curvePt5_15);
        QWidget::setTabOrder(curvePt5_15, curvePt6_15);
        QWidget::setTabOrder(curvePt6_15, curvePt7_15);
        QWidget::setTabOrder(curvePt7_15, curvePt8_15);
        QWidget::setTabOrder(curvePt8_15, curvePt9_15);
        QWidget::setTabOrder(curvePt9_15, curveEdit_16);
        QWidget::setTabOrder(curveEdit_16, curvePt1_16);
        QWidget::setTabOrder(curvePt1_16, curvePt2_16);
        QWidget::setTabOrder(curvePt2_16, curvePt3_16);
        QWidget::setTabOrder(curvePt3_16, curvePt4_16);
        QWidget::setTabOrder(curvePt4_16, curvePt5_16);
        QWidget::setTabOrder(curvePt5_16, curvePt6_16);
        QWidget::setTabOrder(curvePt6_16, curvePt7_16);
        QWidget::setTabOrder(curvePt7_16, curvePt8_16);
        QWidget::setTabOrder(curvePt8_16, curvePt9_16);
        QWidget::setTabOrder(curvePt9_16, curvePreview);
        QWidget::setTabOrder(curvePreview, curvePt1_9);
        QWidget::setTabOrder(curvePt1_9, curvePt2_9);
        QWidget::setTabOrder(curvePt2_9, curvePt3_9);
        QWidget::setTabOrder(curvePt3_9, curvePt4_9);
        QWidget::setTabOrder(curvePt4_9, curvePt5_9);
        QWidget::setTabOrder(curvePt5_9, curvePt6_9);
        QWidget::setTabOrder(curvePt6_9, curvePt7_9);
        QWidget::setTabOrder(curvePt7_9, curvePt8_9);
        QWidget::setTabOrder(curvePt8_9, curvePt9_9);
        QWidget::setTabOrder(curvePt9_9, curveEdit_10);
        QWidget::setTabOrder(curveEdit_10, curvePt1_10);
        QWidget::setTabOrder(curvePt1_10, curvePt2_10);
        QWidget::setTabOrder(curvePt2_10, curvePt3_10);
        QWidget::setTabOrder(curvePt3_10, curvePt4_10);
        QWidget::setTabOrder(curvePt4_10, curvePt5_10);
        QWidget::setTabOrder(curvePt5_10, modelNameLE);
        QWidget::setTabOrder(modelNameLE, timerModeCB);
        QWidget::setTabOrder(timerModeCB, timerDirCB);
        QWidget::setTabOrder(timerDirCB, timerValTE);
        QWidget::setTabOrder(timerValTE, trimIncCB);
        QWidget::setTabOrder(trimIncCB, thrTrimChkB);
        QWidget::setTabOrder(thrTrimChkB, thrExpoChkB);
        QWidget::setTabOrder(thrExpoChkB, trimSWCB);
        QWidget::setTabOrder(trimSWCB, bcRUDChkB);
        QWidget::setTabOrder(bcRUDChkB, bcELEChkB);
        QWidget::setTabOrder(bcELEChkB, bcTHRChkB);
        QWidget::setTabOrder(bcTHRChkB, bcAILChkB);
        QWidget::setTabOrder(bcAILChkB, bcP1ChkB);
        QWidget::setTabOrder(bcP1ChkB, bcP2ChkB);
        QWidget::setTabOrder(bcP2ChkB, bcP3ChkB);
        QWidget::setTabOrder(bcP3ChkB, pulsePolCB);
        QWidget::setTabOrder(pulsePolCB, protocolCB);
        QWidget::setTabOrder(protocolCB, numChannelsSB);
        QWidget::setTabOrder(numChannelsSB, ppmDelaySB);
        QWidget::setTabOrder(ppmDelaySB, RUD_edrSw1);
        QWidget::setTabOrder(RUD_edrSw1, RUD_edrSw2);
        QWidget::setTabOrder(RUD_edrSw2, RUD_ExpoLHi);
        QWidget::setTabOrder(RUD_ExpoLHi, RUD_DrLHi);
        QWidget::setTabOrder(RUD_DrLHi, RUD_DrRHi);
        QWidget::setTabOrder(RUD_DrRHi, RUD_ExpoRHi);
        QWidget::setTabOrder(RUD_ExpoRHi, RUD_ExpoLMid);
        QWidget::setTabOrder(RUD_ExpoLMid, RUD_DrLMid);
        QWidget::setTabOrder(RUD_DrLMid, RUD_DrRMid);
        QWidget::setTabOrder(RUD_DrRMid, RUD_ExpoRMid);
        QWidget::setTabOrder(RUD_ExpoRMid, RUD_ExpoLLow);
        QWidget::setTabOrder(RUD_ExpoLLow, RUD_DrLLow);
        QWidget::setTabOrder(RUD_DrLLow, RUD_DrRLow);
        QWidget::setTabOrder(RUD_DrRLow, RUD_ExpoRLow);
        QWidget::setTabOrder(RUD_ExpoRLow, pushButton_1);
        QWidget::setTabOrder(pushButton_1, AIL_edrSw1);
        QWidget::setTabOrder(AIL_edrSw1, AIL_edrSw2);
        QWidget::setTabOrder(AIL_edrSw2, AIL_ExpoLHi);
        QWidget::setTabOrder(AIL_ExpoLHi, AIL_DrLHi);
        QWidget::setTabOrder(AIL_DrLHi, AIL_DrRHi);
        QWidget::setTabOrder(AIL_DrRHi, AIL_ExpoRHi);
        QWidget::setTabOrder(AIL_ExpoRHi, AIL_ExpoLMid);
        QWidget::setTabOrder(AIL_ExpoLMid, AIL_DrLMid);
        QWidget::setTabOrder(AIL_DrLMid, AIL_DrRMid);
        QWidget::setTabOrder(AIL_DrRMid, AIL_ExpoRMid);
        QWidget::setTabOrder(AIL_ExpoRMid, AIL_ExpoLLow);
        QWidget::setTabOrder(AIL_ExpoLLow, AIL_DrLLow);
        QWidget::setTabOrder(AIL_DrLLow, AIL_DrRLow);
        QWidget::setTabOrder(AIL_DrRLow, AIL_ExpoRLow);
        QWidget::setTabOrder(AIL_ExpoRLow, pushButton_4);
        QWidget::setTabOrder(pushButton_4, THR_edrSw1);
        QWidget::setTabOrder(THR_edrSw1, THR_edrSw2);
        QWidget::setTabOrder(THR_edrSw2, THR_ExpoLHi);
        QWidget::setTabOrder(THR_ExpoLHi, THR_DrLHi);
        QWidget::setTabOrder(THR_DrLHi, THR_DrRHi);
        QWidget::setTabOrder(THR_DrRHi, THR_ExpoRHi);
        QWidget::setTabOrder(THR_ExpoRHi, THR_ExpoLMid);
        QWidget::setTabOrder(THR_ExpoLMid, THR_DrLMid);
        QWidget::setTabOrder(THR_DrLMid, THR_DrRMid);
        QWidget::setTabOrder(THR_DrRMid, THR_ExpoRMid);
        QWidget::setTabOrder(THR_ExpoRMid, THR_ExpoLLow);
        QWidget::setTabOrder(THR_ExpoLLow, THR_DrLLow);
        QWidget::setTabOrder(THR_DrLLow, THR_DrRLow);
        QWidget::setTabOrder(THR_DrRLow, THR_ExpoRLow);
        QWidget::setTabOrder(THR_ExpoRLow, pushButton_2);
        QWidget::setTabOrder(pushButton_2, ELE_edrSw1);
        QWidget::setTabOrder(ELE_edrSw1, ELE_edrSw2);
        QWidget::setTabOrder(ELE_edrSw2, ELE_ExpoLHi);
        QWidget::setTabOrder(ELE_ExpoLHi, ELE_DrLHi);
        QWidget::setTabOrder(ELE_DrLHi, ELE_DrRHi);
        QWidget::setTabOrder(ELE_DrRHi, ELE_ExpoRHi);
        QWidget::setTabOrder(ELE_ExpoRHi, ELE_ExpoLMid);
        QWidget::setTabOrder(ELE_ExpoLMid, ELE_DrLMid);
        QWidget::setTabOrder(ELE_DrLMid, ELE_DrRMid);
        QWidget::setTabOrder(ELE_DrRMid, ELE_ExpoRMid);
        QWidget::setTabOrder(ELE_ExpoRMid, ELE_ExpoLLow);
        QWidget::setTabOrder(ELE_ExpoLLow, ELE_DrLLow);
        QWidget::setTabOrder(ELE_DrLLow, ELE_DrRLow);
        QWidget::setTabOrder(ELE_DrRLow, ELE_ExpoRLow);
        QWidget::setTabOrder(ELE_ExpoRLow, pushButton_3);
        QWidget::setTabOrder(pushButton_3, curveEdit_1);
        QWidget::setTabOrder(curveEdit_1, curvePt1_1);
        QWidget::setTabOrder(curvePt1_1, curvePt2_1);
        QWidget::setTabOrder(curvePt2_1, curvePt3_1);
        QWidget::setTabOrder(curvePt3_1, curvePt4_1);
        QWidget::setTabOrder(curvePt4_1, curvePt5_1);
        QWidget::setTabOrder(curvePt5_1, curveEdit_2);
        QWidget::setTabOrder(curveEdit_2, curvePt1_2);
        QWidget::setTabOrder(curvePt1_2, curvePt2_2);
        QWidget::setTabOrder(curvePt2_2, curvePt3_2);
        QWidget::setTabOrder(curvePt3_2, curvePt4_2);
        QWidget::setTabOrder(curvePt4_2, curvePt5_2);
        QWidget::setTabOrder(curvePt5_2, curveEdit_3);
        QWidget::setTabOrder(curveEdit_3, curvePt1_3);
        QWidget::setTabOrder(curvePt1_3, curvePt2_3);
        QWidget::setTabOrder(curvePt2_3, curvePt3_3);
        QWidget::setTabOrder(curvePt3_3, curvePt4_3);
        QWidget::setTabOrder(curvePt4_3, curvePt5_3);
        QWidget::setTabOrder(curvePt5_3, curveEdit_4);
        QWidget::setTabOrder(curveEdit_4, curvePt1_4);
        QWidget::setTabOrder(curvePt1_4, curvePt2_4);
        QWidget::setTabOrder(curvePt2_4, curvePt3_4);
        QWidget::setTabOrder(curvePt3_4, curvePt4_4);
        QWidget::setTabOrder(curvePt4_4, curvePt5_4);
        QWidget::setTabOrder(curvePt5_4, curveEdit_5);
        QWidget::setTabOrder(curveEdit_5, curvePt1_5);
        QWidget::setTabOrder(curvePt1_5, curvePt2_5);
        QWidget::setTabOrder(curvePt2_5, curvePt3_5);
        QWidget::setTabOrder(curvePt3_5, curvePt4_5);
        QWidget::setTabOrder(curvePt4_5, curvePt5_5);
        QWidget::setTabOrder(curvePt5_5, curveEdit_6);
        QWidget::setTabOrder(curveEdit_6, curvePt1_6);
        QWidget::setTabOrder(curvePt1_6, curvePt2_6);
        QWidget::setTabOrder(curvePt2_6, curvePt3_6);
        QWidget::setTabOrder(curvePt3_6, curvePt4_6);
        QWidget::setTabOrder(curvePt4_6, curvePt5_6);
        QWidget::setTabOrder(curvePt5_6, curveEdit_7);
        QWidget::setTabOrder(curveEdit_7, curvePt1_7);
        QWidget::setTabOrder(curvePt1_7, curvePt2_7);
        QWidget::setTabOrder(curvePt2_7, curvePt3_7);
        QWidget::setTabOrder(curvePt3_7, curvePt4_7);
        QWidget::setTabOrder(curvePt4_7, curvePt5_7);
        QWidget::setTabOrder(curvePt5_7, curveEdit_8);
        QWidget::setTabOrder(curveEdit_8, curvePt1_8);
        QWidget::setTabOrder(curvePt1_8, curvePt2_8);
        QWidget::setTabOrder(curvePt2_8, curvePt3_8);
        QWidget::setTabOrder(curvePt3_8, curvePt4_8);
        QWidget::setTabOrder(curvePt4_8, curvePt5_8);
        QWidget::setTabOrder(curvePt5_8, curveEdit_9);
        QWidget::setTabOrder(curveEdit_9, cswitchFunc_1);
        QWidget::setTabOrder(cswitchFunc_1, cswitchFunc_2);
        QWidget::setTabOrder(cswitchFunc_2, cswitchFunc_3);
        QWidget::setTabOrder(cswitchFunc_3, cswitchFunc_4);
        QWidget::setTabOrder(cswitchFunc_4, cswitchFunc_5);
        QWidget::setTabOrder(cswitchFunc_5, cswitchFunc_6);
        QWidget::setTabOrder(cswitchFunc_6, slider_S2);
        QWidget::setTabOrder(slider_S2, spinBox_S2);
        QWidget::setTabOrder(spinBox_S2, spinBox_S1);
        QWidget::setTabOrder(spinBox_S1, spinBox_S3);
        QWidget::setTabOrder(spinBox_S3, spinBox_S4);
        QWidget::setTabOrder(spinBox_S4, slider_S3);
        QWidget::setTabOrder(slider_S3, slider_S1);
        QWidget::setTabOrder(slider_S1, slider_S4);

        retranslateUi(ModelEdit);
        QObject::connect(slider_S3, SIGNAL(sliderMoved(int)), spinBox_S3, SLOT(setValue(int)));
        QObject::connect(slider_S4, SIGNAL(sliderMoved(int)), spinBox_S4, SLOT(setValue(int)));
        QObject::connect(slider_S1, SIGNAL(sliderMoved(int)), spinBox_S1, SLOT(setValue(int)));
        QObject::connect(slider_S2, SIGNAL(sliderMoved(int)), spinBox_S2, SLOT(setValue(int)));
        QObject::connect(spinBox_S2, SIGNAL(valueChanged(int)), slider_S2, SLOT(setValue(int)));
        QObject::connect(spinBox_S3, SIGNAL(valueChanged(int)), slider_S3, SLOT(setValue(int)));
        QObject::connect(spinBox_S4, SIGNAL(valueChanged(int)), slider_S4, SLOT(setValue(int)));
        QObject::connect(spinBox_S1, SIGNAL(valueChanged(int)), slider_S1, SLOT(setValue(int)));

        tabWidget->setCurrentIndex(8);


        QMetaObject::connectSlotsByName(ModelEdit);
    } // setupUi

    void retranslateUi(QDialog *ModelEdit)
    {
        ModelEdit->setWindowTitle(QApplication::translate("ModelEdit", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ModelEdit", "Simulate", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ModelEdit", "Model Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ModelEdit", "Timer Mode", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ModelEdit", "Timer Direction", 0, QApplication::UnicodeUTF8));
        timerDirCB->clear();
        timerDirCB->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "Count Down", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "Count Up", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("ModelEdit", "Timer Value", 0, QApplication::UnicodeUTF8));
        timerValTE->setDisplayFormat(QApplication::translate("ModelEdit", "mm:ss", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ModelEdit", "Trim Increment", 0, QApplication::UnicodeUTF8));
        trimIncCB->clear();
        trimIncCB->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "Exponential", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "Extra Fine", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "Fine", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "Medium", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "Coarse", 0, QApplication::UnicodeUTF8)
        );
        label_7->setText(QApplication::translate("ModelEdit", "Throttle Trim", 0, QApplication::UnicodeUTF8));
        thrTrimChkB->setText(QString());
        label_8->setText(QApplication::translate("ModelEdit", "Throttle Expo", 0, QApplication::UnicodeUTF8));
        thrExpoChkB->setText(QString());
        label_11->setText(QApplication::translate("ModelEdit", "instaTrim Switch", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("ModelEdit", "Center beep", 0, QApplication::UnicodeUTF8));
        bcRUDChkB->setText(QApplication::translate("ModelEdit", "RUD", 0, QApplication::UnicodeUTF8));
        bcELEChkB->setText(QApplication::translate("ModelEdit", "ELE", 0, QApplication::UnicodeUTF8));
        bcTHRChkB->setText(QApplication::translate("ModelEdit", "THR", 0, QApplication::UnicodeUTF8));
        bcAILChkB->setText(QApplication::translate("ModelEdit", "AIL", 0, QApplication::UnicodeUTF8));
        bcP1ChkB->setText(QApplication::translate("ModelEdit", "P1", 0, QApplication::UnicodeUTF8));
        bcP2ChkB->setText(QApplication::translate("ModelEdit", "P2", 0, QApplication::UnicodeUTF8));
        bcP3ChkB->setText(QApplication::translate("ModelEdit", "P3", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("ModelEdit", "Pulse Shift (polarity)", 0, QApplication::UnicodeUTF8));
        pulsePolCB->clear();
        pulsePolCB->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "Positive", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "Negative", 0, QApplication::UnicodeUTF8)
        );
        label_55->setText(QApplication::translate("ModelEdit", "Extended Limits", 0, QApplication::UnicodeUTF8));
        extendedLimitsChkB->setText(QString());
        label_5->setText(QApplication::translate("ModelEdit", "Protocol", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ModelEdit", "Channels", 0, QApplication::UnicodeUTF8));
        numChannelsSB->setSuffix(QApplication::translate("ModelEdit", "ch", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ModelEdit", "ppm Delay", 0, QApplication::UnicodeUTF8));
        ppmDelaySB->setSuffix(QApplication::translate("ModelEdit", " uSec", 0, QApplication::UnicodeUTF8));
        ppmFrameLengthDSB->setSuffix(QApplication::translate("ModelEdit", " mSec", 0, QApplication::UnicodeUTF8));
        label_113->setText(QApplication::translate("ModelEdit", "PPM Frame Length", 0, QApplication::UnicodeUTF8));
        label_114->setText(QApplication::translate("ModelEdit", "Trainer", 0, QApplication::UnicodeUTF8));
        label_115->setText(QApplication::translate("ModelEdit", "T2throttleTrig", 0, QApplication::UnicodeUTF8));
        TrainerChkB->setText(QString());
        T2ThrTrgChkB->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabModelSetup), QApplication::translate("ModelEdit", "Setup", 0, QApplication::UnicodeUTF8));
        label_103->setText(QApplication::translate("ModelEdit", "Swash Type", 0, QApplication::UnicodeUTF8));
        swashTypeCB->clear();
        swashTypeCB->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "Off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "120", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "120X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "140", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "90", 0, QApplication::UnicodeUTF8)
        );
        label_106->setText(QApplication::translate("ModelEdit", "Collective", 0, QApplication::UnicodeUTF8));
        label_107->setText(QApplication::translate("ModelEdit", "Swash Ring", 0, QApplication::UnicodeUTF8));
        swashRingValSB->setSuffix(QString());
        label_108->setText(QApplication::translate("ModelEdit", "Invert", 0, QApplication::UnicodeUTF8));
        swashInvertELE->setText(QApplication::translate("ModelEdit", "Invert Elevator", 0, QApplication::UnicodeUTF8));
        swashInvertAIL->setText(QApplication::translate("ModelEdit", "Invert Aileron", 0, QApplication::UnicodeUTF8));
        swashInvertCOL->setText(QApplication::translate("ModelEdit", "Invert Collective", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabHeli), QApplication::translate("ModelEdit", "Heli Setup", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("ModelEdit", "HIGH", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("ModelEdit", "MID", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("ModelEdit", "LOW", 0, QApplication::UnicodeUTF8));
        label_64->setText(QApplication::translate("ModelEdit", "Expo\n"
"Left", 0, QApplication::UnicodeUTF8));
        label_65->setText(QApplication::translate("ModelEdit", "D/R\n"
"Left", 0, QApplication::UnicodeUTF8));
        label_69->setText(QApplication::translate("ModelEdit", "D/R\n"
"Right", 0, QApplication::UnicodeUTF8));
        label_77->setText(QApplication::translate("ModelEdit", "Expo\n"
"Right", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("ModelEdit", "Switch1", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("ModelEdit", "Switch2", 0, QApplication::UnicodeUTF8));
        pushButton_1->setText(QApplication::translate("ModelEdit", "Rudder", 0, QApplication::UnicodeUTF8));
        label_51->setText(QApplication::translate("ModelEdit", "HIGH", 0, QApplication::UnicodeUTF8));
        label_52->setText(QApplication::translate("ModelEdit", "MID", 0, QApplication::UnicodeUTF8));
        label_53->setText(QApplication::translate("ModelEdit", "LOW", 0, QApplication::UnicodeUTF8));
        label_67->setText(QApplication::translate("ModelEdit", "Expo\n"
"Left", 0, QApplication::UnicodeUTF8));
        label_70->setText(QApplication::translate("ModelEdit", "D/R\n"
"Right", 0, QApplication::UnicodeUTF8));
        label_75->setText(QApplication::translate("ModelEdit", "D/R\n"
"Left", 0, QApplication::UnicodeUTF8));
        label_78->setText(QApplication::translate("ModelEdit", "Expo\n"
"Right", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("ModelEdit", "Switch2", 0, QApplication::UnicodeUTF8));
        label_48->setText(QApplication::translate("ModelEdit", "Switch1", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("ModelEdit", "Aileron", 0, QApplication::UnicodeUTF8));
        label_58->setText(QApplication::translate("ModelEdit", "D/R\n"
"Left", 0, QApplication::UnicodeUTF8));
        label_59->setText(QApplication::translate("ModelEdit", "D/R\n"
"Right", 0, QApplication::UnicodeUTF8));
        label_60->setText(QApplication::translate("ModelEdit", "Expo\n"
"Right", 0, QApplication::UnicodeUTF8));
        label_61->setText(QApplication::translate("ModelEdit", "HIGH", 0, QApplication::UnicodeUTF8));
        label_62->setText(QApplication::translate("ModelEdit", "MID", 0, QApplication::UnicodeUTF8));
        label_63->setText(QApplication::translate("ModelEdit", "LOW", 0, QApplication::UnicodeUTF8));
        label_57->setText(QApplication::translate("ModelEdit", "Expo\n"
"Left", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("ModelEdit", "Switch1", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("ModelEdit", "Switch2", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ModelEdit", "Throttle", 0, QApplication::UnicodeUTF8));
        label_71->setText(QApplication::translate("ModelEdit", "HIGH", 0, QApplication::UnicodeUTF8));
        label_72->setText(QApplication::translate("ModelEdit", "MID", 0, QApplication::UnicodeUTF8));
        label_73->setText(QApplication::translate("ModelEdit", "LOW", 0, QApplication::UnicodeUTF8));
        label_68->setText(QApplication::translate("ModelEdit", "Expo\n"
"Left", 0, QApplication::UnicodeUTF8));
        label_74->setText(QApplication::translate("ModelEdit", "D/R\n"
"Right", 0, QApplication::UnicodeUTF8));
        label_76->setText(QApplication::translate("ModelEdit", "D/R\n"
"Left", 0, QApplication::UnicodeUTF8));
        label_79->setText(QApplication::translate("ModelEdit", "Expo\n"
"Right", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("ModelEdit", "Switch2", 0, QApplication::UnicodeUTF8));
        label_47->setText(QApplication::translate("ModelEdit", "Switch1", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ModelEdit", "Elevator", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabExpo), QApplication::translate("ModelEdit", "Expo/Dr", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabMix), QApplication::translate("ModelEdit", "Mixes", 0, QApplication::UnicodeUTF8));
        chInvCB_1->clear();
        chInvCB_1->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "NOR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "INV", 0, QApplication::UnicodeUTF8)
        );
        chInvCB_2->clear();
        chInvCB_2->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "NOR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "INV", 0, QApplication::UnicodeUTF8)
        );
        chInvCB_3->clear();
        chInvCB_3->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "NOR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "INV", 0, QApplication::UnicodeUTF8)
        );
        chInvCB_4->clear();
        chInvCB_4->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "NOR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "INV", 0, QApplication::UnicodeUTF8)
        );
        chInvCB_5->clear();
        chInvCB_5->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "NOR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "INV", 0, QApplication::UnicodeUTF8)
        );
        chInvCB_6->clear();
        chInvCB_6->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "NOR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "INV", 0, QApplication::UnicodeUTF8)
        );
        chInvCB_7->clear();
        chInvCB_7->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "NOR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "INV", 0, QApplication::UnicodeUTF8)
        );
        chInvCB_8->clear();
        chInvCB_8->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "NOR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "INV", 0, QApplication::UnicodeUTF8)
        );
        chInvCB_9->clear();
        chInvCB_9->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "NOR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "INV", 0, QApplication::UnicodeUTF8)
        );
        chInvCB_10->clear();
        chInvCB_10->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "NOR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "INV", 0, QApplication::UnicodeUTF8)
        );
        chInvCB_11->clear();
        chInvCB_11->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "NOR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "INV", 0, QApplication::UnicodeUTF8)
        );
        chInvCB_12->clear();
        chInvCB_12->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "NOR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "INV", 0, QApplication::UnicodeUTF8)
        );
        chInvCB_13->clear();
        chInvCB_13->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "NOR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "INV", 0, QApplication::UnicodeUTF8)
        );
        chInvCB_14->clear();
        chInvCB_14->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "NOR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "INV", 0, QApplication::UnicodeUTF8)
        );
        chInvCB_15->clear();
        chInvCB_15->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "NOR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "INV", 0, QApplication::UnicodeUTF8)
        );
        chInvCB_16->clear();
        chInvCB_16->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "NOR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "INV", 0, QApplication::UnicodeUTF8)
        );
        label_36->setText(QApplication::translate("ModelEdit", "Channel", 0, QApplication::UnicodeUTF8));
        label_46->setText(QApplication::translate("ModelEdit", "Offset", 0, QApplication::UnicodeUTF8));
        label_49->setText(QApplication::translate("ModelEdit", "Min", 0, QApplication::UnicodeUTF8));
        label_50->setText(QApplication::translate("ModelEdit", "Max", 0, QApplication::UnicodeUTF8));
        label_54->setText(QApplication::translate("ModelEdit", "Invert", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabLimit), QApplication::translate("ModelEdit", "Limits", 0, QApplication::UnicodeUTF8));
        curveEdit_1->setText(QApplication::translate("ModelEdit", "Curve 1", 0, QApplication::UnicodeUTF8));
        curveEdit_2->setText(QApplication::translate("ModelEdit", "Curve 2", 0, QApplication::UnicodeUTF8));
        curveEdit_3->setText(QApplication::translate("ModelEdit", "Curve 3", 0, QApplication::UnicodeUTF8));
        curveEdit_4->setText(QApplication::translate("ModelEdit", "Curve 4", 0, QApplication::UnicodeUTF8));
        curveEdit_5->setText(QApplication::translate("ModelEdit", "Curve 5", 0, QApplication::UnicodeUTF8));
        curveEdit_6->setText(QApplication::translate("ModelEdit", "Curve 6", 0, QApplication::UnicodeUTF8));
        curveEdit_7->setText(QApplication::translate("ModelEdit", "Curve 7", 0, QApplication::UnicodeUTF8));
        curveEdit_8->setText(QApplication::translate("ModelEdit", "Curve 8", 0, QApplication::UnicodeUTF8));
        curveEdit_9->setText(QApplication::translate("ModelEdit", "Curve 9", 0, QApplication::UnicodeUTF8));
        curveEdit_10->setText(QApplication::translate("ModelEdit", "Curve 10", 0, QApplication::UnicodeUTF8));
        curveEdit_11->setText(QApplication::translate("ModelEdit", "Curve 11", 0, QApplication::UnicodeUTF8));
        curveEdit_12->setText(QApplication::translate("ModelEdit", "Curve 12", 0, QApplication::UnicodeUTF8));
        curveEdit_13->setText(QApplication::translate("ModelEdit", "Curve 13", 0, QApplication::UnicodeUTF8));
        curveEdit_14->setText(QApplication::translate("ModelEdit", "Curve 14", 0, QApplication::UnicodeUTF8));
        curveEdit_15->setText(QApplication::translate("ModelEdit", "Curve 15", 0, QApplication::UnicodeUTF8));
        curveEdit_16->setText(QApplication::translate("ModelEdit", "Curve 16", 0, QApplication::UnicodeUTF8));
        resetCurve_1->setText(QString());
        resetCurve_2->setText(QString());
        resetCurve_3->setText(QString());
        resetCurve_4->setText(QString());
        resetCurve_5->setText(QString());
        resetCurve_6->setText(QString());
        resetCurve_7->setText(QString());
        resetCurve_8->setText(QString());
        resetCurve_9->setText(QString());
        resetCurve_10->setText(QString());
        resetCurve_11->setText(QString());
        resetCurve_12->setText(QString());
        resetCurve_13->setText(QString());
        resetCurve_14->setText(QString());
        resetCurve_15->setText(QString());
        resetCurve_16->setText(QString());
        clearMixesPB->setText(QApplication::translate("ModelEdit", "Clear All Curves", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabCurve), QApplication::translate("ModelEdit", "Curves", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("ModelEdit", "CSwitch1", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("ModelEdit", "CSwitch2", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("ModelEdit", "CSwitch3", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("ModelEdit", "CSwitch4", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("ModelEdit", "CSwitch5", 0, QApplication::UnicodeUTF8));
        cswFuncLabel->setText(QApplication::translate("ModelEdit", "Function", 0, QApplication::UnicodeUTF8));
        cswCol1->setText(QApplication::translate("ModelEdit", "V1", 0, QApplication::UnicodeUTF8));
        cswCol2->setText(QApplication::translate("ModelEdit", "V2", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("ModelEdit", "CSwitch6", 0, QApplication::UnicodeUTF8));
        label_81->setText(QApplication::translate("ModelEdit", "CSwitch7", 0, QApplication::UnicodeUTF8));
        label_82->setText(QApplication::translate("ModelEdit", "CSwitch8", 0, QApplication::UnicodeUTF8));
        label_99->setText(QApplication::translate("ModelEdit", "CSwitch9", 0, QApplication::UnicodeUTF8));
        label_100->setText(QApplication::translate("ModelEdit", "CSwitchA", 0, QApplication::UnicodeUTF8));
        label_101->setText(QApplication::translate("ModelEdit", "CSwitchB", 0, QApplication::UnicodeUTF8));
        label_102->setText(QApplication::translate("ModelEdit", "CSwitchC", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabSwitch), QApplication::translate("ModelEdit", "Switches", 0, QApplication::UnicodeUTF8));
        label_56->setText(QApplication::translate("ModelEdit", "Channel", 0, QApplication::UnicodeUTF8));
        label_66->setText(QApplication::translate("ModelEdit", "Switch", 0, QApplication::UnicodeUTF8));
        label_80->setText(QApplication::translate("ModelEdit", "Value", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabSafetySwitches), QApplication::translate("ModelEdit", "Safety Switches", 0, QApplication::UnicodeUTF8));
        rota_label_104->setText(QApplication::translate("ModelEdit", "Pos", 0, QApplication::UnicodeUTF8));
        rota_label_119->setText(QApplication::translate("ModelEdit", "Type", 0, QApplication::UnicodeUTF8));
        rota_label_109->setText(QApplication::translate("ModelEdit", "Name", 0, QApplication::UnicodeUTF8));
        rota_label_110->setText(QApplication::translate("ModelEdit", "Value", 0, QApplication::UnicodeUTF8));
        rota_label_114->setText(QApplication::translate("ModelEdit", "4", 0, QApplication::UnicodeUTF8));
        rota_label_115->setText(QApplication::translate("ModelEdit", "5", 0, QApplication::UnicodeUTF8));
        rota_label_116->setText(QApplication::translate("ModelEdit", "6", 0, QApplication::UnicodeUTF8));
        rota_label_105->setText(QApplication::translate("ModelEdit", "7", 0, QApplication::UnicodeUTF8));
        rota_label_117->setText(QApplication::translate("ModelEdit", "8", 0, QApplication::UnicodeUTF8));
        rota_label_118->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabRotarySwitches), QApplication::translate("ModelEdit", "Rotary Switches", 0, QApplication::UnicodeUTF8));
        Label_S1->setText(QApplication::translate("ModelEdit", "STICK 1", 0, QApplication::UnicodeUTF8));
        Label_S2->setText(QApplication::translate("ModelEdit", "STICK 2", 0, QApplication::UnicodeUTF8));
        Label_S4->setText(QApplication::translate("ModelEdit", "STICK 4", 0, QApplication::UnicodeUTF8));
        Label_S3->setText(QApplication::translate("ModelEdit", "STICK 3", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabTrims), QApplication::translate("ModelEdit", "Trims", 0, QApplication::UnicodeUTF8));
        label_104->setText(QApplication::translate("ModelEdit", "Channel 1", 0, QApplication::UnicodeUTF8));
        frsky_type_0->clear();
        frsky_type_0->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "V", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "---", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "---", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "---", 0, QApplication::UnicodeUTF8)
        );
        label_105->setText(QApplication::translate("ModelEdit", "Alarm 1", 0, QApplication::UnicodeUTF8));
        frsky_level_0_0->clear();
        frsky_level_0_0->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "---", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "Yellow", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "Orange", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "Red", 0, QApplication::UnicodeUTF8)
        );
        frsky_gr_0_0->clear();
        frsky_gr_0_0->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "<", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", ">", 0, QApplication::UnicodeUTF8)
        );
        label_109->setText(QApplication::translate("ModelEdit", "Alarm 2", 0, QApplication::UnicodeUTF8));
        frsky_level_0_1->clear();
        frsky_level_0_1->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "---", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "Yellow", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "Orange", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "Red", 0, QApplication::UnicodeUTF8)
        );
        frsky_gr_0_1->clear();
        frsky_gr_0_1->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "<", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", ">", 0, QApplication::UnicodeUTF8)
        );
        label_110->setText(QApplication::translate("ModelEdit", "Channel 2", 0, QApplication::UnicodeUTF8));
        frsky_type_1->clear();
        frsky_type_1->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "V", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "---", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "---", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "---", 0, QApplication::UnicodeUTF8)
        );
        label_111->setText(QApplication::translate("ModelEdit", "Alarm 1", 0, QApplication::UnicodeUTF8));
        frsky_level_1_0->clear();
        frsky_level_1_0->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "---", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "Yellow", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "Orange", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "Red", 0, QApplication::UnicodeUTF8)
        );
        frsky_gr_1_0->clear();
        frsky_gr_1_0->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "<", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", ">", 0, QApplication::UnicodeUTF8)
        );
        label_112->setText(QApplication::translate("ModelEdit", "Alarm 2", 0, QApplication::UnicodeUTF8));
        frsky_level_1_1->clear();
        frsky_level_1_1->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "---", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "Yellow", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "Orange", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", "Red", 0, QApplication::UnicodeUTF8)
        );
        frsky_gr_1_1->clear();
        frsky_gr_1_1->insertItems(0, QStringList()
         << QApplication::translate("ModelEdit", "<", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelEdit", ">", 0, QApplication::UnicodeUTF8)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ModelEdit", "FrSky", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabTemplates), QApplication::translate("ModelEdit", "Templates", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ModelEdit: public Ui_ModelEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELEDIT_H
