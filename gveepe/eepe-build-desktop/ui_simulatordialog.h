/********************************************************************************
** Form generated from reading UI file 'simulatordialog.ui'
**
** Created: Sun 12. Feb 17:25:44 2012
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMULATORDIALOG_H
#define UI_SIMULATORDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDial>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_simulatorDialog
{
public:
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_2;
    QDial *dialP_1;
    QDial *dialP_2;
    QDial *dialP_3;
    QFrame *controlFrame;
    QHBoxLayout *horizontalLayout_5;
    QGridLayout *gridLayout;
    QSlider *trimVLeft;
    QGraphicsView *leftStick;
    QVBoxLayout *verticalLayout;
    QPushButton *switchTHR;
    QPushButton *switchRUD;
    QPushButton *switchELE;
    QPushButton *switchAIL;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *holdLeftX;
    QPushButton *FixLeftX;
    QPushButton *FixLeftY;
    QPushButton *holdLeftY;
    QHBoxLayout *horizontalLayout_6;
    QLabel *leftXPerc;
    QLabel *leftYPerc;
    QSlider *trimHLeft;
    QGridLayout *gridLayout_2;
    QSlider *trimVRight;
    QGraphicsView *rightStick;
    QVBoxLayout *verticalLayout_2;
    QPushButton *switchTRN;
    QPushButton *switchGEA;
    QPushButton *switchID0;
    QPushButton *switchID1;
    QPushButton *switchID2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *holdRightX;
    QPushButton *FixRightX;
    QPushButton *FixRightY;
    QPushButton *holdRightY;
    QHBoxLayout *horizontalLayout_7;
    QLabel *rightXPerc;
    QLabel *rightYPerc;
    QSlider *trimHRight;
    QHBoxLayout *horizontalLayout;
    QFrame *cswitch_1;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelCSW_1;
    QFrame *cswitch_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelCSW_2;
    QFrame *cswitch_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelCSW_3;
    QFrame *cswitch_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelCSW_4;
    QFrame *cswitch_5;
    QVBoxLayout *verticalLayout_7;
    QLabel *labelCSW_5;
    QFrame *cswitch_6;
    QVBoxLayout *verticalLayout_8;
    QLabel *labelCSW_6;
    QFrame *beep_frame;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_beep;
    QFrame *cswitch_7;
    QVBoxLayout *verticalLayout_13;
    QLabel *labelCSW_7;
    QFrame *cswitch_8;
    QVBoxLayout *verticalLayout_14;
    QLabel *labelCSW_8;
    QFrame *cswitch_9;
    QVBoxLayout *verticalLayout_15;
    QLabel *labelCSW_9;
    QFrame *cswitch_10;
    QVBoxLayout *verticalLayout_17;
    QLabel *labelCSW_10;
    QFrame *cswitch_11;
    QVBoxLayout *verticalLayout_19;
    QLabel *labelCSW_11;
    QFrame *cswitch_12;
    QVBoxLayout *verticalLayout_20;
    QLabel *labelCSW_12;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QLabel *label_12;
    QLabel *label_5;
    QLabel *label_13;
    QLabel *label_6;
    QLabel *label_14;
    QLabel *label_7;
    QLabel *label_15;
    QLabel *label_8;
    QLabel *label_16;
    QLabel *label_9;
    QLabel *label_17;
    QLabel *label_10;
    QLabel *label_18;
    QLabel *label_11;
    QLabel *label_19;
    QSlider *chnout_1;
    QSlider *chnout_2;
    QSlider *chnout_3;
    QSlider *chnout_4;
    QSlider *chnout_5;
    QSlider *chnout_6;
    QSlider *chnout_7;
    QSlider *chnout_8;
    QSlider *chnout_9;
    QSlider *chnout_10;
    QSlider *chnout_11;
    QSlider *chnout_12;
    QSlider *chnout_13;
    QSlider *chnout_14;
    QSlider *chnout_15;
    QSlider *chnout_16;
    QLabel *chnoutV_1;
    QLabel *chnoutV_2;
    QLabel *chnoutV_3;
    QLabel *chnoutV_4;
    QLabel *chnoutV_5;
    QLabel *chnoutV_6;
    QLabel *chnoutV_7;
    QLabel *chnoutV_8;
    QLabel *chnoutV_9;
    QLabel *chnoutV_10;
    QLabel *chnoutV_11;
    QLabel *chnoutV_12;
    QLabel *chnoutV_13;
    QLabel *chnoutV_14;
    QLabel *chnoutV_15;
    QLabel *chnoutV_16;

    void setupUi(QDialog *simulatorDialog)
    {
        if (simulatorDialog->objectName().isEmpty())
            simulatorDialog->setObjectName(QString::fromUtf8("simulatorDialog"));
        simulatorDialog->resize(591, 642);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/simulate.png"), QSize(), QIcon::Normal, QIcon::Off);
        simulatorDialog->setWindowIcon(icon);
        verticalLayout_9 = new QVBoxLayout(simulatorDialog);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        dialP_1 = new QDial(simulatorDialog);
        dialP_1->setObjectName(QString::fromUtf8("dialP_1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dialP_1->sizePolicy().hasHeightForWidth());
        dialP_1->setSizePolicy(sizePolicy);
        dialP_1->setMinimum(-1024);
        dialP_1->setMaximum(1024);
        dialP_1->setPageStep(128);
        dialP_1->setNotchTarget(64);
        dialP_1->setNotchesVisible(true);

        horizontalLayout_2->addWidget(dialP_1);

        dialP_2 = new QDial(simulatorDialog);
        dialP_2->setObjectName(QString::fromUtf8("dialP_2"));
        sizePolicy.setHeightForWidth(dialP_2->sizePolicy().hasHeightForWidth());
        dialP_2->setSizePolicy(sizePolicy);
        dialP_2->setMinimum(-1024);
        dialP_2->setMaximum(1024);
        dialP_2->setPageStep(128);
        dialP_2->setInvertedAppearance(false);
        dialP_2->setNotchTarget(64);
        dialP_2->setNotchesVisible(true);

        horizontalLayout_2->addWidget(dialP_2);

        dialP_3 = new QDial(simulatorDialog);
        dialP_3->setObjectName(QString::fromUtf8("dialP_3"));
        sizePolicy.setHeightForWidth(dialP_3->sizePolicy().hasHeightForWidth());
        dialP_3->setSizePolicy(sizePolicy);
        dialP_3->setMinimum(-1024);
        dialP_3->setMaximum(1024);
        dialP_3->setPageStep(128);
        dialP_3->setNotchTarget(64);
        dialP_3->setNotchesVisible(true);

        horizontalLayout_2->addWidget(dialP_3);


        verticalLayout_9->addLayout(horizontalLayout_2);

        controlFrame = new QFrame(simulatorDialog);
        controlFrame->setObjectName(QString::fromUtf8("controlFrame"));
        controlFrame->setFrameShape(QFrame::Panel);
        controlFrame->setFrameShadow(QFrame::Raised);
        controlFrame->setLineWidth(2);
        horizontalLayout_5 = new QHBoxLayout(controlFrame);
        horizontalLayout_5->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        trimVLeft = new QSlider(controlFrame);
        trimVLeft->setObjectName(QString::fromUtf8("trimVLeft"));
        trimVLeft->setMinimum(-125);
        trimVLeft->setMaximum(125);
        trimVLeft->setOrientation(Qt::Vertical);

        gridLayout->addWidget(trimVLeft, 1, 2, 1, 1);

        leftStick = new QGraphicsView(controlFrame);
        leftStick->setObjectName(QString::fromUtf8("leftStick"));
        leftStick->setMinimumSize(QSize(200, 200));
        leftStick->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        leftStick->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout->addWidget(leftStick, 1, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        switchTHR = new QPushButton(controlFrame);
        switchTHR->setObjectName(QString::fromUtf8("switchTHR"));
        switchTHR->setAutoFillBackground(false);
        switchTHR->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #EEEEEE;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 4px;\n"
"     border-color: black;\n"
"     padding: 2px;\n"
" } \n"
"\n"
"QPushButton:checked {\n"
"     background-color: #4CC417;\n"
"     border-style: inset;\n"
" }"));
        switchTHR->setCheckable(true);

        verticalLayout->addWidget(switchTHR);

        switchRUD = new QPushButton(controlFrame);
        switchRUD->setObjectName(QString::fromUtf8("switchRUD"));
        switchRUD->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #EEEEEE;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 4px;\n"
"     border-color: black;\n"
"     padding: 2px;\n"
" } \n"
"\n"
"QPushButton:checked {\n"
"     background-color: #4CC417;\n"
"     border-style: inset;\n"
" }"));
        switchRUD->setCheckable(true);

        verticalLayout->addWidget(switchRUD);

        switchELE = new QPushButton(controlFrame);
        switchELE->setObjectName(QString::fromUtf8("switchELE"));
        switchELE->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #EEEEEE;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 4px;\n"
"     border-color: black;\n"
"     padding: 2px;\n"
" } \n"
"\n"
"QPushButton:checked {\n"
"     background-color: #4CC417;\n"
"     border-style: inset;\n"
" }"));
        switchELE->setCheckable(true);

        verticalLayout->addWidget(switchELE);

        switchAIL = new QPushButton(controlFrame);
        switchAIL->setObjectName(QString::fromUtf8("switchAIL"));
        switchAIL->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #EEEEEE;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 4px;\n"
"     border-color: black;\n"
"     padding: 2px;\n"
" } \n"
"\n"
"QPushButton:checked {\n"
"     background-color: #4CC417;\n"
"     border-style: inset;\n"
" }"));
        switchAIL->setCheckable(true);

        verticalLayout->addWidget(switchAIL);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        holdLeftX = new QPushButton(controlFrame);
        holdLeftX->setObjectName(QString::fromUtf8("holdLeftX"));
        holdLeftX->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #EEEEEE;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 4px;\n"
"     border-color: black;\n"
"     padding: 2px;\n"
" } \n"
"\n"
"QPushButton:checked {\n"
"     background-color: #4CC417;\n"
"     border-style: inset;\n"
" }"));
        holdLeftX->setCheckable(true);

        horizontalLayout_3->addWidget(holdLeftX);

        FixLeftX = new QPushButton(controlFrame);
        FixLeftX->setObjectName(QString::fromUtf8("FixLeftX"));
        FixLeftX->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #EEEEEE;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 4px;\n"
"     border-color: black;\n"
"     padding: 2px;\n"
" } \n"
"\n"
"QPushButton:checked {\n"
"     background-color: #4CC417;\n"
"     border-style: inset;\n"
" }"));
        FixLeftX->setCheckable(true);

        horizontalLayout_3->addWidget(FixLeftX);

        FixLeftY = new QPushButton(controlFrame);
        FixLeftY->setObjectName(QString::fromUtf8("FixLeftY"));
        FixLeftY->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #EEEEEE;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 4px;\n"
"     border-color: black;\n"
"     padding: 2px;\n"
" } \n"
"\n"
"QPushButton:checked {\n"
"     background-color: #4CC417;\n"
"     border-style: inset;\n"
" }"));
        FixLeftY->setCheckable(true);

        horizontalLayout_3->addWidget(FixLeftY);

        holdLeftY = new QPushButton(controlFrame);
        holdLeftY->setObjectName(QString::fromUtf8("holdLeftY"));
        holdLeftY->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #EEEEEE;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 4px;\n"
"     border-color: black;\n"
"     padding: 2px;\n"
" } \n"
"\n"
"QPushButton:checked {\n"
"     background-color: #4CC417;\n"
"     border-style: inset;\n"
" }"));
        holdLeftY->setCheckable(true);

        horizontalLayout_3->addWidget(holdLeftY);


        gridLayout->addLayout(horizontalLayout_3, 0, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(20, -1, 20, -1);
        leftXPerc = new QLabel(controlFrame);
        leftXPerc->setObjectName(QString::fromUtf8("leftXPerc"));
        leftXPerc->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(leftXPerc);

        leftYPerc = new QLabel(controlFrame);
        leftYPerc->setObjectName(QString::fromUtf8("leftYPerc"));
        leftYPerc->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(leftYPerc);


        gridLayout->addLayout(horizontalLayout_6, 7, 1, 1, 1);

        trimHLeft = new QSlider(controlFrame);
        trimHLeft->setObjectName(QString::fromUtf8("trimHLeft"));
        trimHLeft->setMinimum(-125);
        trimHLeft->setMaximum(125);
        trimHLeft->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(trimHLeft, 2, 1, 1, 1);


        horizontalLayout_5->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        trimVRight = new QSlider(controlFrame);
        trimVRight->setObjectName(QString::fromUtf8("trimVRight"));
        trimVRight->setMinimum(-125);
        trimVRight->setMaximum(125);
        trimVRight->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(trimVRight, 1, 0, 1, 1);

        rightStick = new QGraphicsView(controlFrame);
        rightStick->setObjectName(QString::fromUtf8("rightStick"));
        rightStick->setMinimumSize(QSize(200, 200));
        rightStick->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        rightStick->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_2->addWidget(rightStick, 1, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        switchTRN = new QPushButton(controlFrame);
        switchTRN->setObjectName(QString::fromUtf8("switchTRN"));
        switchTRN->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #EEEEEE;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 4px;\n"
"     border-color: black;\n"
"     padding: 2px;\n"
" } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: #4CC417;\n"
"     border-style: inset;\n"
" }"));

        verticalLayout_2->addWidget(switchTRN);

        switchGEA = new QPushButton(controlFrame);
        switchGEA->setObjectName(QString::fromUtf8("switchGEA"));
        switchGEA->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #EEEEEE;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 4px;\n"
"     border-color: black;\n"
"     padding: 2px;\n"
" } \n"
"\n"
"QPushButton:checked {\n"
"     background-color: #4CC417;\n"
"     border-style: inset;\n"
" }"));
        switchGEA->setCheckable(true);
        switchGEA->setChecked(false);

        verticalLayout_2->addWidget(switchGEA);

        switchID0 = new QPushButton(controlFrame);
        switchID0->setObjectName(QString::fromUtf8("switchID0"));
        switchID0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #EEEEEE;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 4px;\n"
"     border-color: black;\n"
"     padding: 2px;\n"
" } \n"
"\n"
"QPushButton:checked {\n"
"     background-color: #4CC417;\n"
"     border-style: inset;\n"
" }"));
        switchID0->setCheckable(true);
        switchID0->setChecked(true);
        switchID0->setAutoExclusive(true);

        verticalLayout_2->addWidget(switchID0);

        switchID1 = new QPushButton(controlFrame);
        switchID1->setObjectName(QString::fromUtf8("switchID1"));
        switchID1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #EEEEEE;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 4px;\n"
"     border-color: black;\n"
"     padding: 2px;\n"
" } \n"
"\n"
"QPushButton:checked {\n"
"     background-color: #4CC417;\n"
"     border-style: inset;\n"
" }"));
        switchID1->setCheckable(true);
        switchID1->setAutoExclusive(true);

        verticalLayout_2->addWidget(switchID1);

        switchID2 = new QPushButton(controlFrame);
        switchID2->setObjectName(QString::fromUtf8("switchID2"));
        switchID2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #EEEEEE;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 4px;\n"
"     border-color: black;\n"
"     padding: 2px;\n"
" } \n"
"\n"
"QPushButton:checked {\n"
"     background-color: #4CC417;\n"
"     border-style: inset;\n"
" }"));
        switchID2->setCheckable(true);
        switchID2->setAutoExclusive(true);

        verticalLayout_2->addWidget(switchID2);


        gridLayout_2->addLayout(verticalLayout_2, 1, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        holdRightX = new QPushButton(controlFrame);
        holdRightX->setObjectName(QString::fromUtf8("holdRightX"));
        holdRightX->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #EEEEEE;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 4px;\n"
"     border-color: black;\n"
"     padding: 2px;\n"
" } \n"
"\n"
"QPushButton:checked {\n"
"     background-color: #4CC417;\n"
"     border-style: inset;\n"
" }"));
        holdRightX->setCheckable(true);

        horizontalLayout_4->addWidget(holdRightX);

        FixRightX = new QPushButton(controlFrame);
        FixRightX->setObjectName(QString::fromUtf8("FixRightX"));
        FixRightX->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #EEEEEE;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 4px;\n"
"     border-color: black;\n"
"     padding: 2px;\n"
" } \n"
"\n"
"QPushButton:checked {\n"
"     background-color: #4CC417;\n"
"     border-style: inset;\n"
" }"));
        FixRightX->setCheckable(true);

        horizontalLayout_4->addWidget(FixRightX);

        FixRightY = new QPushButton(controlFrame);
        FixRightY->setObjectName(QString::fromUtf8("FixRightY"));
        FixRightY->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #EEEEEE;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 4px;\n"
"     border-color: black;\n"
"     padding: 2px;\n"
" } \n"
"\n"
"QPushButton:checked {\n"
"     background-color: #4CC417;\n"
"     border-style: inset;\n"
" }"));
        FixRightY->setCheckable(true);

        horizontalLayout_4->addWidget(FixRightY);

        holdRightY = new QPushButton(controlFrame);
        holdRightY->setObjectName(QString::fromUtf8("holdRightY"));
        holdRightY->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #EEEEEE;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 4px;\n"
"     border-color: black;\n"
"     padding: 2px;\n"
" } \n"
"\n"
"QPushButton:checked {\n"
"     background-color: #4CC417;\n"
"     border-style: inset;\n"
" }"));
        holdRightY->setCheckable(true);

        horizontalLayout_4->addWidget(holdRightY);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(20, -1, 20, -1);
        rightXPerc = new QLabel(controlFrame);
        rightXPerc->setObjectName(QString::fromUtf8("rightXPerc"));
        rightXPerc->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(rightXPerc);

        rightYPerc = new QLabel(controlFrame);
        rightYPerc->setObjectName(QString::fromUtf8("rightYPerc"));
        rightYPerc->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(rightYPerc);


        gridLayout_2->addLayout(horizontalLayout_7, 3, 1, 1, 1);

        trimHRight = new QSlider(controlFrame);
        trimHRight->setObjectName(QString::fromUtf8("trimHRight"));
        trimHRight->setMinimum(-125);
        trimHRight->setMaximum(125);
        trimHRight->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(trimHRight, 2, 1, 1, 1);


        horizontalLayout_5->addLayout(gridLayout_2);


        verticalLayout_9->addWidget(controlFrame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cswitch_1 = new QFrame(simulatorDialog);
        cswitch_1->setObjectName(QString::fromUtf8("cswitch_1"));
        cswitch_1->setAutoFillBackground(true);
        cswitch_1->setFrameShape(QFrame::Panel);
        cswitch_1->setFrameShadow(QFrame::Raised);
        cswitch_1->setLineWidth(2);
        verticalLayout_3 = new QVBoxLayout(cswitch_1);
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        labelCSW_1 = new QLabel(cswitch_1);
        labelCSW_1->setObjectName(QString::fromUtf8("labelCSW_1"));
        labelCSW_1->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(labelCSW_1);


        horizontalLayout->addWidget(cswitch_1);

        cswitch_2 = new QFrame(simulatorDialog);
        cswitch_2->setObjectName(QString::fromUtf8("cswitch_2"));
        cswitch_2->setAutoFillBackground(true);
        cswitch_2->setFrameShape(QFrame::Panel);
        cswitch_2->setFrameShadow(QFrame::Raised);
        cswitch_2->setLineWidth(2);
        verticalLayout_4 = new QVBoxLayout(cswitch_2);
        verticalLayout_4->setContentsMargins(2, 2, 2, 2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        labelCSW_2 = new QLabel(cswitch_2);
        labelCSW_2->setObjectName(QString::fromUtf8("labelCSW_2"));
        labelCSW_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(labelCSW_2);


        horizontalLayout->addWidget(cswitch_2);

        cswitch_3 = new QFrame(simulatorDialog);
        cswitch_3->setObjectName(QString::fromUtf8("cswitch_3"));
        cswitch_3->setAutoFillBackground(true);
        cswitch_3->setFrameShape(QFrame::Panel);
        cswitch_3->setFrameShadow(QFrame::Raised);
        cswitch_3->setLineWidth(2);
        verticalLayout_5 = new QVBoxLayout(cswitch_3);
        verticalLayout_5->setContentsMargins(2, 2, 2, 2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        labelCSW_3 = new QLabel(cswitch_3);
        labelCSW_3->setObjectName(QString::fromUtf8("labelCSW_3"));
        labelCSW_3->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(labelCSW_3);


        horizontalLayout->addWidget(cswitch_3);

        cswitch_4 = new QFrame(simulatorDialog);
        cswitch_4->setObjectName(QString::fromUtf8("cswitch_4"));
        cswitch_4->setAutoFillBackground(true);
        cswitch_4->setFrameShape(QFrame::Panel);
        cswitch_4->setFrameShadow(QFrame::Raised);
        cswitch_4->setLineWidth(2);
        verticalLayout_6 = new QVBoxLayout(cswitch_4);
        verticalLayout_6->setContentsMargins(2, 2, 2, 2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        labelCSW_4 = new QLabel(cswitch_4);
        labelCSW_4->setObjectName(QString::fromUtf8("labelCSW_4"));
        labelCSW_4->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(labelCSW_4);


        horizontalLayout->addWidget(cswitch_4);

        cswitch_5 = new QFrame(simulatorDialog);
        cswitch_5->setObjectName(QString::fromUtf8("cswitch_5"));
        cswitch_5->setAutoFillBackground(true);
        cswitch_5->setFrameShape(QFrame::Panel);
        cswitch_5->setFrameShadow(QFrame::Raised);
        cswitch_5->setLineWidth(2);
        verticalLayout_7 = new QVBoxLayout(cswitch_5);
        verticalLayout_7->setContentsMargins(2, 2, 2, 2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        labelCSW_5 = new QLabel(cswitch_5);
        labelCSW_5->setObjectName(QString::fromUtf8("labelCSW_5"));
        labelCSW_5->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(labelCSW_5);


        horizontalLayout->addWidget(cswitch_5);

        cswitch_6 = new QFrame(simulatorDialog);
        cswitch_6->setObjectName(QString::fromUtf8("cswitch_6"));
        cswitch_6->setAutoFillBackground(true);
        cswitch_6->setFrameShape(QFrame::Panel);
        cswitch_6->setFrameShadow(QFrame::Raised);
        cswitch_6->setLineWidth(2);
        verticalLayout_8 = new QVBoxLayout(cswitch_6);
        verticalLayout_8->setContentsMargins(2, 2, 2, 2);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        labelCSW_6 = new QLabel(cswitch_6);
        labelCSW_6->setObjectName(QString::fromUtf8("labelCSW_6"));
        labelCSW_6->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(labelCSW_6);


        horizontalLayout->addWidget(cswitch_6);

        beep_frame = new QFrame(simulatorDialog);
        beep_frame->setObjectName(QString::fromUtf8("beep_frame"));
        beep_frame->setAutoFillBackground(true);
        beep_frame->setFrameShape(QFrame::Panel);
        beep_frame->setFrameShadow(QFrame::Raised);
        beep_frame->setLineWidth(2);
        verticalLayout_10 = new QVBoxLayout(beep_frame);
        verticalLayout_10->setContentsMargins(2, 2, 2, 2);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_beep = new QLabel(beep_frame);
        label_beep->setObjectName(QString::fromUtf8("label_beep"));
        label_beep->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_beep);


        horizontalLayout->addWidget(beep_frame);

        cswitch_7 = new QFrame(simulatorDialog);
        cswitch_7->setObjectName(QString::fromUtf8("cswitch_7"));
        cswitch_7->setAutoFillBackground(true);
        cswitch_7->setFrameShape(QFrame::Panel);
        cswitch_7->setFrameShadow(QFrame::Raised);
        cswitch_7->setLineWidth(2);
        verticalLayout_13 = new QVBoxLayout(cswitch_7);
        verticalLayout_13->setContentsMargins(2, 2, 2, 2);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        labelCSW_7 = new QLabel(cswitch_7);
        labelCSW_7->setObjectName(QString::fromUtf8("labelCSW_7"));
        labelCSW_7->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(labelCSW_7);


        horizontalLayout->addWidget(cswitch_7);

        cswitch_8 = new QFrame(simulatorDialog);
        cswitch_8->setObjectName(QString::fromUtf8("cswitch_8"));
        cswitch_8->setAutoFillBackground(true);
        cswitch_8->setFrameShape(QFrame::Panel);
        cswitch_8->setFrameShadow(QFrame::Raised);
        cswitch_8->setLineWidth(2);
        verticalLayout_14 = new QVBoxLayout(cswitch_8);
        verticalLayout_14->setContentsMargins(2, 2, 2, 2);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        labelCSW_8 = new QLabel(cswitch_8);
        labelCSW_8->setObjectName(QString::fromUtf8("labelCSW_8"));
        labelCSW_8->setAlignment(Qt::AlignCenter);

        verticalLayout_14->addWidget(labelCSW_8);


        horizontalLayout->addWidget(cswitch_8);

        cswitch_9 = new QFrame(simulatorDialog);
        cswitch_9->setObjectName(QString::fromUtf8("cswitch_9"));
        cswitch_9->setAutoFillBackground(true);
        cswitch_9->setFrameShape(QFrame::Panel);
        cswitch_9->setFrameShadow(QFrame::Raised);
        cswitch_9->setLineWidth(2);
        verticalLayout_15 = new QVBoxLayout(cswitch_9);
        verticalLayout_15->setContentsMargins(2, 2, 2, 2);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        labelCSW_9 = new QLabel(cswitch_9);
        labelCSW_9->setObjectName(QString::fromUtf8("labelCSW_9"));
        labelCSW_9->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(labelCSW_9);


        horizontalLayout->addWidget(cswitch_9);

        cswitch_10 = new QFrame(simulatorDialog);
        cswitch_10->setObjectName(QString::fromUtf8("cswitch_10"));
        cswitch_10->setAutoFillBackground(true);
        cswitch_10->setFrameShape(QFrame::Panel);
        cswitch_10->setFrameShadow(QFrame::Raised);
        cswitch_10->setLineWidth(2);
        verticalLayout_17 = new QVBoxLayout(cswitch_10);
        verticalLayout_17->setContentsMargins(2, 2, 2, 2);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        labelCSW_10 = new QLabel(cswitch_10);
        labelCSW_10->setObjectName(QString::fromUtf8("labelCSW_10"));
        labelCSW_10->setAlignment(Qt::AlignCenter);

        verticalLayout_17->addWidget(labelCSW_10);


        horizontalLayout->addWidget(cswitch_10);

        cswitch_11 = new QFrame(simulatorDialog);
        cswitch_11->setObjectName(QString::fromUtf8("cswitch_11"));
        cswitch_11->setAutoFillBackground(true);
        cswitch_11->setFrameShape(QFrame::Panel);
        cswitch_11->setFrameShadow(QFrame::Raised);
        cswitch_11->setLineWidth(2);
        verticalLayout_19 = new QVBoxLayout(cswitch_11);
        verticalLayout_19->setContentsMargins(2, 2, 2, 2);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        labelCSW_11 = new QLabel(cswitch_11);
        labelCSW_11->setObjectName(QString::fromUtf8("labelCSW_11"));
        labelCSW_11->setAlignment(Qt::AlignCenter);

        verticalLayout_19->addWidget(labelCSW_11);


        horizontalLayout->addWidget(cswitch_11);

        cswitch_12 = new QFrame(simulatorDialog);
        cswitch_12->setObjectName(QString::fromUtf8("cswitch_12"));
        cswitch_12->setAutoFillBackground(true);
        cswitch_12->setFrameShape(QFrame::Panel);
        cswitch_12->setFrameShadow(QFrame::Raised);
        cswitch_12->setLineWidth(2);
        verticalLayout_20 = new QVBoxLayout(cswitch_12);
        verticalLayout_20->setContentsMargins(2, 2, 2, 2);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        labelCSW_12 = new QLabel(cswitch_12);
        labelCSW_12->setObjectName(QString::fromUtf8("labelCSW_12"));
        labelCSW_12->setAlignment(Qt::AlignCenter);

        verticalLayout_20->addWidget(labelCSW_12);


        horizontalLayout->addWidget(cswitch_12);


        verticalLayout_9->addLayout(horizontalLayout);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_4 = new QLabel(simulatorDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        label_12 = new QLabel(simulatorDialog);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_4->addWidget(label_12, 0, 5, 1, 1);

        label_5 = new QLabel(simulatorDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_4->addWidget(label_5, 1, 0, 1, 1);

        label_13 = new QLabel(simulatorDialog);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_4->addWidget(label_13, 1, 5, 1, 1);

        label_6 = new QLabel(simulatorDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_4->addWidget(label_6, 2, 0, 1, 1);

        label_14 = new QLabel(simulatorDialog);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_4->addWidget(label_14, 2, 5, 1, 1);

        label_7 = new QLabel(simulatorDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 3, 0, 1, 1);

        label_15 = new QLabel(simulatorDialog);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_4->addWidget(label_15, 3, 5, 1, 1);

        label_8 = new QLabel(simulatorDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 4, 0, 1, 1);

        label_16 = new QLabel(simulatorDialog);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_4->addWidget(label_16, 4, 5, 1, 1);

        label_9 = new QLabel(simulatorDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_4->addWidget(label_9, 5, 0, 1, 1);

        label_17 = new QLabel(simulatorDialog);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_4->addWidget(label_17, 5, 5, 1, 1);

        label_10 = new QLabel(simulatorDialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_4->addWidget(label_10, 6, 0, 1, 1);

        label_18 = new QLabel(simulatorDialog);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_4->addWidget(label_18, 6, 5, 1, 1);

        label_11 = new QLabel(simulatorDialog);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_4->addWidget(label_11, 7, 0, 1, 1);

        label_19 = new QLabel(simulatorDialog);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_4->addWidget(label_19, 7, 5, 1, 1);

        chnout_1 = new QSlider(simulatorDialog);
        chnout_1->setObjectName(QString::fromUtf8("chnout_1"));
        chnout_1->setEnabled(false);
        chnout_1->setStyleSheet(QString::fromUtf8("QSlider::sub-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: #0000CC;\n"
"border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}"));
        chnout_1->setMinimum(-1024);
        chnout_1->setMaximum(1024);
        chnout_1->setPageStep(128);
        chnout_1->setTracking(false);
        chnout_1->setOrientation(Qt::Horizontal);
        chnout_1->setInvertedAppearance(false);
        chnout_1->setTickPosition(QSlider::TicksBelow);

        gridLayout_4->addWidget(chnout_1, 0, 1, 1, 1);

        chnout_2 = new QSlider(simulatorDialog);
        chnout_2->setObjectName(QString::fromUtf8("chnout_2"));
        chnout_2->setEnabled(false);
        chnout_2->setStyleSheet(QString::fromUtf8("QSlider::sub-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: #0000CC;\n"
"border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}"));
        chnout_2->setMinimum(-1024);
        chnout_2->setMaximum(1024);
        chnout_2->setPageStep(128);
        chnout_2->setTracking(false);
        chnout_2->setOrientation(Qt::Horizontal);
        chnout_2->setInvertedAppearance(false);
        chnout_2->setTickPosition(QSlider::TicksBelow);

        gridLayout_4->addWidget(chnout_2, 1, 1, 1, 1);

        chnout_3 = new QSlider(simulatorDialog);
        chnout_3->setObjectName(QString::fromUtf8("chnout_3"));
        chnout_3->setEnabled(false);
        chnout_3->setStyleSheet(QString::fromUtf8("QSlider::sub-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: #0000CC;\n"
"border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}"));
        chnout_3->setMinimum(-1024);
        chnout_3->setMaximum(1024);
        chnout_3->setPageStep(128);
        chnout_3->setTracking(false);
        chnout_3->setOrientation(Qt::Horizontal);
        chnout_3->setInvertedAppearance(false);
        chnout_3->setTickPosition(QSlider::TicksBelow);

        gridLayout_4->addWidget(chnout_3, 2, 1, 1, 1);

        chnout_4 = new QSlider(simulatorDialog);
        chnout_4->setObjectName(QString::fromUtf8("chnout_4"));
        chnout_4->setEnabled(false);
        chnout_4->setStyleSheet(QString::fromUtf8("QSlider::sub-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: #0000CC;\n"
"border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}"));
        chnout_4->setMinimum(-1024);
        chnout_4->setMaximum(1024);
        chnout_4->setPageStep(128);
        chnout_4->setTracking(false);
        chnout_4->setOrientation(Qt::Horizontal);
        chnout_4->setInvertedAppearance(false);
        chnout_4->setTickPosition(QSlider::TicksBelow);

        gridLayout_4->addWidget(chnout_4, 3, 1, 1, 1);

        chnout_5 = new QSlider(simulatorDialog);
        chnout_5->setObjectName(QString::fromUtf8("chnout_5"));
        chnout_5->setEnabled(false);
        chnout_5->setStyleSheet(QString::fromUtf8("QSlider::sub-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: #0000CC;\n"
"border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}"));
        chnout_5->setMinimum(-1024);
        chnout_5->setMaximum(1024);
        chnout_5->setPageStep(128);
        chnout_5->setTracking(false);
        chnout_5->setOrientation(Qt::Horizontal);
        chnout_5->setInvertedAppearance(false);
        chnout_5->setTickPosition(QSlider::TicksBelow);

        gridLayout_4->addWidget(chnout_5, 4, 1, 1, 1);

        chnout_6 = new QSlider(simulatorDialog);
        chnout_6->setObjectName(QString::fromUtf8("chnout_6"));
        chnout_6->setEnabled(false);
        chnout_6->setStyleSheet(QString::fromUtf8("QSlider::sub-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: #0000CC;\n"
"border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}"));
        chnout_6->setMinimum(-1024);
        chnout_6->setMaximum(1024);
        chnout_6->setPageStep(128);
        chnout_6->setTracking(false);
        chnout_6->setOrientation(Qt::Horizontal);
        chnout_6->setInvertedAppearance(false);
        chnout_6->setTickPosition(QSlider::TicksBelow);

        gridLayout_4->addWidget(chnout_6, 5, 1, 1, 1);

        chnout_7 = new QSlider(simulatorDialog);
        chnout_7->setObjectName(QString::fromUtf8("chnout_7"));
        chnout_7->setEnabled(false);
        chnout_7->setStyleSheet(QString::fromUtf8("QSlider::sub-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: #0000CC;\n"
"border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}"));
        chnout_7->setMinimum(-1024);
        chnout_7->setMaximum(1024);
        chnout_7->setPageStep(128);
        chnout_7->setTracking(false);
        chnout_7->setOrientation(Qt::Horizontal);
        chnout_7->setInvertedAppearance(false);
        chnout_7->setTickPosition(QSlider::TicksBelow);

        gridLayout_4->addWidget(chnout_7, 6, 1, 1, 1);

        chnout_8 = new QSlider(simulatorDialog);
        chnout_8->setObjectName(QString::fromUtf8("chnout_8"));
        chnout_8->setEnabled(false);
        chnout_8->setStyleSheet(QString::fromUtf8("QSlider::sub-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: #0000CC;\n"
"border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}"));
        chnout_8->setMinimum(-1024);
        chnout_8->setMaximum(1024);
        chnout_8->setPageStep(128);
        chnout_8->setTracking(false);
        chnout_8->setOrientation(Qt::Horizontal);
        chnout_8->setInvertedAppearance(false);
        chnout_8->setTickPosition(QSlider::TicksBelow);

        gridLayout_4->addWidget(chnout_8, 7, 1, 1, 1);

        chnout_9 = new QSlider(simulatorDialog);
        chnout_9->setObjectName(QString::fromUtf8("chnout_9"));
        chnout_9->setEnabled(false);
        chnout_9->setStyleSheet(QString::fromUtf8("QSlider::sub-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: #0000CC;\n"
"border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}"));
        chnout_9->setMinimum(-1024);
        chnout_9->setMaximum(1024);
        chnout_9->setPageStep(128);
        chnout_9->setTracking(false);
        chnout_9->setOrientation(Qt::Horizontal);
        chnout_9->setInvertedAppearance(false);
        chnout_9->setTickPosition(QSlider::TicksBelow);

        gridLayout_4->addWidget(chnout_9, 0, 4, 1, 1);

        chnout_10 = new QSlider(simulatorDialog);
        chnout_10->setObjectName(QString::fromUtf8("chnout_10"));
        chnout_10->setEnabled(false);
        chnout_10->setStyleSheet(QString::fromUtf8("QSlider::sub-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: #0000CC;\n"
"border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}"));
        chnout_10->setMinimum(-1024);
        chnout_10->setMaximum(1024);
        chnout_10->setPageStep(128);
        chnout_10->setTracking(false);
        chnout_10->setOrientation(Qt::Horizontal);
        chnout_10->setInvertedAppearance(false);
        chnout_10->setTickPosition(QSlider::TicksBelow);

        gridLayout_4->addWidget(chnout_10, 1, 4, 1, 1);

        chnout_11 = new QSlider(simulatorDialog);
        chnout_11->setObjectName(QString::fromUtf8("chnout_11"));
        chnout_11->setEnabled(false);
        chnout_11->setStyleSheet(QString::fromUtf8("QSlider::sub-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: #0000CC;\n"
"border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}"));
        chnout_11->setMinimum(-1024);
        chnout_11->setMaximum(1024);
        chnout_11->setPageStep(128);
        chnout_11->setTracking(false);
        chnout_11->setOrientation(Qt::Horizontal);
        chnout_11->setInvertedAppearance(false);
        chnout_11->setTickPosition(QSlider::TicksBelow);

        gridLayout_4->addWidget(chnout_11, 2, 4, 1, 1);

        chnout_12 = new QSlider(simulatorDialog);
        chnout_12->setObjectName(QString::fromUtf8("chnout_12"));
        chnout_12->setEnabled(false);
        chnout_12->setStyleSheet(QString::fromUtf8("QSlider::sub-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: #0000CC;\n"
"border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}"));
        chnout_12->setMinimum(-1024);
        chnout_12->setMaximum(1024);
        chnout_12->setPageStep(128);
        chnout_12->setTracking(false);
        chnout_12->setOrientation(Qt::Horizontal);
        chnout_12->setInvertedAppearance(false);
        chnout_12->setTickPosition(QSlider::TicksBelow);

        gridLayout_4->addWidget(chnout_12, 3, 4, 1, 1);

        chnout_13 = new QSlider(simulatorDialog);
        chnout_13->setObjectName(QString::fromUtf8("chnout_13"));
        chnout_13->setEnabled(false);
        chnout_13->setStyleSheet(QString::fromUtf8("QSlider::sub-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: #0000CC;\n"
"border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}"));
        chnout_13->setMinimum(-1024);
        chnout_13->setMaximum(1024);
        chnout_13->setPageStep(128);
        chnout_13->setTracking(false);
        chnout_13->setOrientation(Qt::Horizontal);
        chnout_13->setInvertedAppearance(false);
        chnout_13->setTickPosition(QSlider::TicksBelow);

        gridLayout_4->addWidget(chnout_13, 4, 4, 1, 1);

        chnout_14 = new QSlider(simulatorDialog);
        chnout_14->setObjectName(QString::fromUtf8("chnout_14"));
        chnout_14->setEnabled(false);
        chnout_14->setStyleSheet(QString::fromUtf8("QSlider::sub-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: #0000CC;\n"
"border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}"));
        chnout_14->setMinimum(-1024);
        chnout_14->setMaximum(1024);
        chnout_14->setPageStep(128);
        chnout_14->setTracking(false);
        chnout_14->setOrientation(Qt::Horizontal);
        chnout_14->setInvertedAppearance(false);
        chnout_14->setTickPosition(QSlider::TicksBelow);

        gridLayout_4->addWidget(chnout_14, 5, 4, 1, 1);

        chnout_15 = new QSlider(simulatorDialog);
        chnout_15->setObjectName(QString::fromUtf8("chnout_15"));
        chnout_15->setEnabled(false);
        chnout_15->setStyleSheet(QString::fromUtf8("QSlider::sub-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: #0000CC;\n"
"border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}"));
        chnout_15->setMinimum(-1024);
        chnout_15->setMaximum(1024);
        chnout_15->setPageStep(128);
        chnout_15->setTracking(false);
        chnout_15->setOrientation(Qt::Horizontal);
        chnout_15->setInvertedAppearance(false);
        chnout_15->setTickPosition(QSlider::TicksBelow);

        gridLayout_4->addWidget(chnout_15, 6, 4, 1, 1);

        chnout_16 = new QSlider(simulatorDialog);
        chnout_16->setObjectName(QString::fromUtf8("chnout_16"));
        chnout_16->setEnabled(false);
        chnout_16->setStyleSheet(QString::fromUtf8("QSlider::sub-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: #0000CC;\n"
"border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}"));
        chnout_16->setMinimum(-1024);
        chnout_16->setMaximum(1024);
        chnout_16->setPageStep(128);
        chnout_16->setTracking(false);
        chnout_16->setOrientation(Qt::Horizontal);
        chnout_16->setInvertedAppearance(false);
        chnout_16->setTickPosition(QSlider::TicksBelow);

        gridLayout_4->addWidget(chnout_16, 7, 4, 1, 1);

        chnoutV_1 = new QLabel(simulatorDialog);
        chnoutV_1->setObjectName(QString::fromUtf8("chnoutV_1"));
        chnoutV_1->setMinimumSize(QSize(50, 0));
        chnoutV_1->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(chnoutV_1, 0, 2, 1, 1);

        chnoutV_2 = new QLabel(simulatorDialog);
        chnoutV_2->setObjectName(QString::fromUtf8("chnoutV_2"));
        chnoutV_2->setMinimumSize(QSize(50, 0));
        chnoutV_2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(chnoutV_2, 1, 2, 1, 1);

        chnoutV_3 = new QLabel(simulatorDialog);
        chnoutV_3->setObjectName(QString::fromUtf8("chnoutV_3"));
        chnoutV_3->setMinimumSize(QSize(50, 0));
        chnoutV_3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(chnoutV_3, 2, 2, 1, 1);

        chnoutV_4 = new QLabel(simulatorDialog);
        chnoutV_4->setObjectName(QString::fromUtf8("chnoutV_4"));
        chnoutV_4->setMinimumSize(QSize(50, 0));
        chnoutV_4->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(chnoutV_4, 3, 2, 1, 1);

        chnoutV_5 = new QLabel(simulatorDialog);
        chnoutV_5->setObjectName(QString::fromUtf8("chnoutV_5"));
        chnoutV_5->setMinimumSize(QSize(50, 0));
        chnoutV_5->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(chnoutV_5, 4, 2, 1, 1);

        chnoutV_6 = new QLabel(simulatorDialog);
        chnoutV_6->setObjectName(QString::fromUtf8("chnoutV_6"));
        chnoutV_6->setMinimumSize(QSize(50, 0));
        chnoutV_6->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(chnoutV_6, 5, 2, 1, 1);

        chnoutV_7 = new QLabel(simulatorDialog);
        chnoutV_7->setObjectName(QString::fromUtf8("chnoutV_7"));
        chnoutV_7->setMinimumSize(QSize(50, 0));
        chnoutV_7->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(chnoutV_7, 6, 2, 1, 1);

        chnoutV_8 = new QLabel(simulatorDialog);
        chnoutV_8->setObjectName(QString::fromUtf8("chnoutV_8"));
        chnoutV_8->setMinimumSize(QSize(50, 0));
        chnoutV_8->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(chnoutV_8, 7, 2, 1, 1);

        chnoutV_9 = new QLabel(simulatorDialog);
        chnoutV_9->setObjectName(QString::fromUtf8("chnoutV_9"));
        chnoutV_9->setMinimumSize(QSize(50, 0));
        chnoutV_9->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(chnoutV_9, 0, 3, 1, 1);

        chnoutV_10 = new QLabel(simulatorDialog);
        chnoutV_10->setObjectName(QString::fromUtf8("chnoutV_10"));
        chnoutV_10->setMinimumSize(QSize(50, 0));
        chnoutV_10->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(chnoutV_10, 1, 3, 1, 1);

        chnoutV_11 = new QLabel(simulatorDialog);
        chnoutV_11->setObjectName(QString::fromUtf8("chnoutV_11"));
        chnoutV_11->setMinimumSize(QSize(50, 0));
        chnoutV_11->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(chnoutV_11, 2, 3, 1, 1);

        chnoutV_12 = new QLabel(simulatorDialog);
        chnoutV_12->setObjectName(QString::fromUtf8("chnoutV_12"));
        chnoutV_12->setMinimumSize(QSize(50, 0));
        chnoutV_12->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(chnoutV_12, 3, 3, 1, 1);

        chnoutV_13 = new QLabel(simulatorDialog);
        chnoutV_13->setObjectName(QString::fromUtf8("chnoutV_13"));
        chnoutV_13->setMinimumSize(QSize(50, 0));
        chnoutV_13->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(chnoutV_13, 4, 3, 1, 1);

        chnoutV_14 = new QLabel(simulatorDialog);
        chnoutV_14->setObjectName(QString::fromUtf8("chnoutV_14"));
        chnoutV_14->setMinimumSize(QSize(50, 0));
        chnoutV_14->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(chnoutV_14, 5, 3, 1, 1);

        chnoutV_15 = new QLabel(simulatorDialog);
        chnoutV_15->setObjectName(QString::fromUtf8("chnoutV_15"));
        chnoutV_15->setMinimumSize(QSize(50, 0));
        chnoutV_15->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(chnoutV_15, 6, 3, 1, 1);

        chnoutV_16 = new QLabel(simulatorDialog);
        chnoutV_16->setObjectName(QString::fromUtf8("chnoutV_16"));
        chnoutV_16->setMinimumSize(QSize(50, 0));
        chnoutV_16->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(chnoutV_16, 7, 3, 1, 1);


        verticalLayout_9->addLayout(gridLayout_4);


        retranslateUi(simulatorDialog);

        QMetaObject::connectSlotsByName(simulatorDialog);
    } // setupUi

    void retranslateUi(QDialog *simulatorDialog)
    {
        simulatorDialog->setWindowTitle(QApplication::translate("simulatorDialog", "ER9x Simulator", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        dialP_1->setToolTip(QApplication::translate("simulatorDialog", "P1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        dialP_2->setToolTip(QApplication::translate("simulatorDialog", "P2", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        dialP_3->setToolTip(QApplication::translate("simulatorDialog", "P3", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        switchTHR->setText(QApplication::translate("simulatorDialog", "THR", 0, QApplication::UnicodeUTF8));
        switchRUD->setText(QApplication::translate("simulatorDialog", "RUD", 0, QApplication::UnicodeUTF8));
        switchELE->setText(QApplication::translate("simulatorDialog", "ELE", 0, QApplication::UnicodeUTF8));
        switchAIL->setText(QApplication::translate("simulatorDialog", "AIL", 0, QApplication::UnicodeUTF8));
        holdLeftX->setText(QApplication::translate("simulatorDialog", "Hold X", 0, QApplication::UnicodeUTF8));
        FixLeftX->setText(QApplication::translate("simulatorDialog", "Fix X", 0, QApplication::UnicodeUTF8));
        FixLeftY->setText(QApplication::translate("simulatorDialog", "Fix Y", 0, QApplication::UnicodeUTF8));
        holdLeftY->setText(QApplication::translate("simulatorDialog", "Hold Y", 0, QApplication::UnicodeUTF8));
        leftXPerc->setText(QApplication::translate("simulatorDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
        leftYPerc->setText(QApplication::translate("simulatorDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
        switchTRN->setText(QApplication::translate("simulatorDialog", "TRN", 0, QApplication::UnicodeUTF8));
        switchGEA->setText(QApplication::translate("simulatorDialog", "GEA", 0, QApplication::UnicodeUTF8));
        switchID0->setText(QApplication::translate("simulatorDialog", "ID0", 0, QApplication::UnicodeUTF8));
        switchID1->setText(QApplication::translate("simulatorDialog", "ID1", 0, QApplication::UnicodeUTF8));
        switchID2->setText(QApplication::translate("simulatorDialog", "ID2", 0, QApplication::UnicodeUTF8));
        holdRightX->setText(QApplication::translate("simulatorDialog", "Hold X", 0, QApplication::UnicodeUTF8));
        FixRightX->setText(QApplication::translate("simulatorDialog", "Fix X", 0, QApplication::UnicodeUTF8));
        FixRightY->setText(QApplication::translate("simulatorDialog", "Fix Y", 0, QApplication::UnicodeUTF8));
        holdRightY->setText(QApplication::translate("simulatorDialog", "Hold Y", 0, QApplication::UnicodeUTF8));
        rightXPerc->setText(QApplication::translate("simulatorDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
        rightYPerc->setText(QApplication::translate("simulatorDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
        labelCSW_1->setText(QApplication::translate("simulatorDialog", "SW1", 0, QApplication::UnicodeUTF8));
        labelCSW_2->setText(QApplication::translate("simulatorDialog", "SW2", 0, QApplication::UnicodeUTF8));
        labelCSW_3->setText(QApplication::translate("simulatorDialog", "SW3", 0, QApplication::UnicodeUTF8));
        labelCSW_4->setText(QApplication::translate("simulatorDialog", "SW4", 0, QApplication::UnicodeUTF8));
        labelCSW_5->setText(QApplication::translate("simulatorDialog", "SW5", 0, QApplication::UnicodeUTF8));
        labelCSW_6->setText(QApplication::translate("simulatorDialog", "SW6", 0, QApplication::UnicodeUTF8));
        label_beep->setText(QApplication::translate("simulatorDialog", "BEEP", 0, QApplication::UnicodeUTF8));
        labelCSW_7->setText(QApplication::translate("simulatorDialog", "SW7", 0, QApplication::UnicodeUTF8));
        labelCSW_8->setText(QApplication::translate("simulatorDialog", "SW8", 0, QApplication::UnicodeUTF8));
        labelCSW_9->setText(QApplication::translate("simulatorDialog", "SW9", 0, QApplication::UnicodeUTF8));
        labelCSW_10->setText(QApplication::translate("simulatorDialog", "SWA", 0, QApplication::UnicodeUTF8));
        labelCSW_11->setText(QApplication::translate("simulatorDialog", "SWB", 0, QApplication::UnicodeUTF8));
        labelCSW_12->setText(QApplication::translate("simulatorDialog", "SWC", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("simulatorDialog", "CH1", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("simulatorDialog", "CH9", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("simulatorDialog", "CH2", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("simulatorDialog", "CH10", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("simulatorDialog", "CH3", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("simulatorDialog", "CH11", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("simulatorDialog", "CH4", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("simulatorDialog", "CH12", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("simulatorDialog", "CH5", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("simulatorDialog", "CH13", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("simulatorDialog", "CH6", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("simulatorDialog", "CH14", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("simulatorDialog", "CH7", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("simulatorDialog", "CH15", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("simulatorDialog", "CH8", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("simulatorDialog", "CH16", 0, QApplication::UnicodeUTF8));
        chnoutV_1->setText(QApplication::translate("simulatorDialog", "-100.1", 0, QApplication::UnicodeUTF8));
        chnoutV_2->setText(QApplication::translate("simulatorDialog", "-100.1", 0, QApplication::UnicodeUTF8));
        chnoutV_3->setText(QApplication::translate("simulatorDialog", "-100.1", 0, QApplication::UnicodeUTF8));
        chnoutV_4->setText(QApplication::translate("simulatorDialog", "-100.1", 0, QApplication::UnicodeUTF8));
        chnoutV_5->setText(QApplication::translate("simulatorDialog", "-100.1", 0, QApplication::UnicodeUTF8));
        chnoutV_6->setText(QApplication::translate("simulatorDialog", "-100.1", 0, QApplication::UnicodeUTF8));
        chnoutV_7->setText(QApplication::translate("simulatorDialog", "-100.1", 0, QApplication::UnicodeUTF8));
        chnoutV_8->setText(QApplication::translate("simulatorDialog", "-100.1", 0, QApplication::UnicodeUTF8));
        chnoutV_9->setText(QApplication::translate("simulatorDialog", "-100.1", 0, QApplication::UnicodeUTF8));
        chnoutV_10->setText(QApplication::translate("simulatorDialog", "-100.1", 0, QApplication::UnicodeUTF8));
        chnoutV_11->setText(QApplication::translate("simulatorDialog", "-100.1", 0, QApplication::UnicodeUTF8));
        chnoutV_12->setText(QApplication::translate("simulatorDialog", "-100.1", 0, QApplication::UnicodeUTF8));
        chnoutV_13->setText(QApplication::translate("simulatorDialog", "-100.1", 0, QApplication::UnicodeUTF8));
        chnoutV_14->setText(QApplication::translate("simulatorDialog", "-100.1", 0, QApplication::UnicodeUTF8));
        chnoutV_15->setText(QApplication::translate("simulatorDialog", "-100.1", 0, QApplication::UnicodeUTF8));
        chnoutV_16->setText(QApplication::translate("simulatorDialog", "-100.1", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class simulatorDialog: public Ui_simulatorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULATORDIALOG_H
