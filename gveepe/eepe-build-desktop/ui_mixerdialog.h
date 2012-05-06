/********************************************************************************
** Form generated from reading UI file 'mixerdialog.ui'
**
** Created: Sat 17. Mar 22:36:08 2012
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIXERDIALOG_H
#define UI_MIXERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_MixerDialog
{
public:
    QGridLayout *gridLayout_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QComboBox *sourceCB;
    QLabel *label_3;
    QSpinBox *weightSB;
    QLabel *offset_label;
    QSpinBox *offsetSB;
    QLabel *label_5;
    QCheckBox *trimChkB;
    QLabel *label_6;
    QComboBox *curvesCB;
    QLabel *label_7;
    QComboBox *switchesCB;
    QLabel *label_8;
    QComboBox *warningCB;
    QLabel *label_9;
    QComboBox *mltpxCB;
    QLabel *label_10;
    QCheckBox *FMtrimChkB;
    QGridLayout *gridLayout;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_12;
    QSpinBox *delayUpSB;
    QSpinBox *slowUpSB;
    QLabel *label_11;
    QSpinBox *delayDownSB;
    QSpinBox *slowDownSB;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer_2;
    QPlainTextEdit *mixerComment;
    QLabel *label;

    void setupUi(QDialog *MixerDialog)
    {
        if (MixerDialog->objectName().isEmpty())
            MixerDialog->setObjectName(QString::fromUtf8("MixerDialog"));
        MixerDialog->resize(350, 529);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MixerDialog->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(MixerDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_2 = new QLabel(MixerDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        sourceCB = new QComboBox(MixerDialog);
        sourceCB->setObjectName(QString::fromUtf8("sourceCB"));

        formLayout->setWidget(0, QFormLayout::FieldRole, sourceCB);

        label_3 = new QLabel(MixerDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        weightSB = new QSpinBox(MixerDialog);
        weightSB->setObjectName(QString::fromUtf8("weightSB"));
        weightSB->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        weightSB->setMinimum(-125);
        weightSB->setMaximum(125);

        formLayout->setWidget(1, QFormLayout::FieldRole, weightSB);

        offset_label = new QLabel(MixerDialog);
        offset_label->setObjectName(QString::fromUtf8("offset_label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, offset_label);

        offsetSB = new QSpinBox(MixerDialog);
        offsetSB->setObjectName(QString::fromUtf8("offsetSB"));
        offsetSB->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        offsetSB->setMinimum(-125);
        offsetSB->setMaximum(125);

        formLayout->setWidget(2, QFormLayout::FieldRole, offsetSB);

        label_5 = new QLabel(MixerDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        trimChkB = new QCheckBox(MixerDialog);
        trimChkB->setObjectName(QString::fromUtf8("trimChkB"));

        formLayout->setWidget(3, QFormLayout::FieldRole, trimChkB);

        label_6 = new QLabel(MixerDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        curvesCB = new QComboBox(MixerDialog);
        curvesCB->setObjectName(QString::fromUtf8("curvesCB"));

        formLayout->setWidget(5, QFormLayout::FieldRole, curvesCB);

        label_7 = new QLabel(MixerDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        switchesCB = new QComboBox(MixerDialog);
        switchesCB->setObjectName(QString::fromUtf8("switchesCB"));

        formLayout->setWidget(6, QFormLayout::FieldRole, switchesCB);

        label_8 = new QLabel(MixerDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_8);

        warningCB = new QComboBox(MixerDialog);
        warningCB->setObjectName(QString::fromUtf8("warningCB"));

        formLayout->setWidget(7, QFormLayout::FieldRole, warningCB);

        label_9 = new QLabel(MixerDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_9);

        mltpxCB = new QComboBox(MixerDialog);
        mltpxCB->setObjectName(QString::fromUtf8("mltpxCB"));

        formLayout->setWidget(8, QFormLayout::FieldRole, mltpxCB);

        label_10 = new QLabel(MixerDialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_10);

        FMtrimChkB = new QCheckBox(MixerDialog);
        FMtrimChkB->setObjectName(QString::fromUtf8("FMtrimChkB"));

        formLayout->setWidget(4, QFormLayout::FieldRole, FMtrimChkB);


        gridLayout_2->addLayout(formLayout, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_13 = new QLabel(MixerDialog);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 1, 1, 1, 1);

        label_14 = new QLabel(MixerDialog);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 1, 2, 1, 1);

        label_12 = new QLabel(MixerDialog);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_12, 2, 0, 1, 1);

        delayUpSB = new QSpinBox(MixerDialog);
        delayUpSB->setObjectName(QString::fromUtf8("delayUpSB"));
        delayUpSB->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        delayUpSB->setMaximum(15);

        gridLayout->addWidget(delayUpSB, 2, 1, 1, 1);

        slowUpSB = new QSpinBox(MixerDialog);
        slowUpSB->setObjectName(QString::fromUtf8("slowUpSB"));
        slowUpSB->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        slowUpSB->setMaximum(15);

        gridLayout->addWidget(slowUpSB, 2, 2, 1, 1);

        label_11 = new QLabel(MixerDialog);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 3, 0, 1, 1);

        delayDownSB = new QSpinBox(MixerDialog);
        delayDownSB->setObjectName(QString::fromUtf8("delayDownSB"));
        delayDownSB->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        delayDownSB->setMaximum(15);

        gridLayout->addWidget(delayDownSB, 3, 1, 1, 1);

        slowDownSB = new QSpinBox(MixerDialog);
        slowDownSB->setObjectName(QString::fromUtf8("slowDownSB"));
        slowDownSB->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        slowDownSB->setMaximum(15);

        gridLayout->addWidget(slowDownSB, 3, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 1);

        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(MixerDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 5, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 0, 1, 1);

        mixerComment = new QPlainTextEdit(MixerDialog);
        mixerComment->setObjectName(QString::fromUtf8("mixerComment"));

        gridLayout_2->addWidget(mixerComment, 4, 0, 1, 1);

        label = new QLabel(MixerDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 3, 0, 1, 1);


        retranslateUi(MixerDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MixerDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MixerDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MixerDialog);
    } // setupUi

    void retranslateUi(QDialog *MixerDialog)
    {
        MixerDialog->setWindowTitle(QApplication::translate("MixerDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MixerDialog", "Source", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        sourceCB->setWhatsThis(QApplication::translate("MixerDialog", "The source for the mixer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_3->setText(QApplication::translate("MixerDialog", "Weight", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        weightSB->setWhatsThis(QApplication::translate("MixerDialog", "The value of the mixer is multiplied by this value and divided by 100.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        offset_label->setText(QApplication::translate("MixerDialog", "Offset", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        offsetSB->setWhatsThis(QApplication::translate("MixerDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This value is added to the <span style=\" font-weight:600;\">input </span>of the mixer.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_5->setText(QApplication::translate("MixerDialog", "Include Trim", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        trimChkB->setWhatsThis(QApplication::translate("MixerDialog", "If checked - will add the trim from the source (if available)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        trimChkB->setText(QString());
        label_6->setText(QApplication::translate("MixerDialog", "Curve", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        curvesCB->setWhatsThis(QApplication::translate("MixerDialog", "The curve used by the mix", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_7->setText(QApplication::translate("MixerDialog", "Switch", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        switchesCB->setWhatsThis(QApplication::translate("MixerDialog", "Switch used by the mix.\n"
"If blank then the mix is considered to be \"ON\" all the time.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_8->setText(QApplication::translate("MixerDialog", "Warning", 0, QApplication::UnicodeUTF8));
        warningCB->clear();
        warningCB->insertItems(0, QStringList()
         << QApplication::translate("MixerDialog", "OFF", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MixerDialog", "1 Beep", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MixerDialog", "2 Beep", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MixerDialog", "3 Beep", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        warningCB->setWhatsThis(QApplication::translate("MixerDialog", "Mixer warning.\n"
"Setting this value will cause a beep to be emmitted when this value is active.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_9->setText(QApplication::translate("MixerDialog", "Multiplex", 0, QApplication::UnicodeUTF8));
        mltpxCB->clear();
        mltpxCB->insertItems(0, QStringList()
         << QApplication::translate("MixerDialog", "ADD", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MixerDialog", "MULTIPLY", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MixerDialog", "REPLACE", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        mltpxCB->setWhatsThis(QApplication::translate("MixerDialog", "Multiplexer\n"
"\n"
"This determines how mixer values are added.\n"
"\n"
"\"+\" means the value of the current mix is added to the previous mixes in the same channel.\n"
"\"*\" means the value of the current mix is amultiplied with the previous mixes in the same channel.\n"
"\"R\" means the value replaces the previous values.  If the switch is off the value will be ignored.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_10->setText(QApplication::translate("MixerDialog", "Flightmode Trim", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        FMtrimChkB->setWhatsThis(QApplication::translate("MixerDialog", "If checked - will add the trim from the source (if available)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        FMtrimChkB->setText(QString());
        label_13->setText(QApplication::translate("MixerDialog", "Delay", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MixerDialog", "Slow", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MixerDialog", "Up", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        delayUpSB->setWhatsThis(QApplication::translate("MixerDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; text-decoration: underline;\">Delay ans Slow</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600; text-decoration: underline;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">These values control the speed and delay of the output of the mix.  </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px"
                        "; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">If Delay is not zero the actuation of the mix will be delayed by the specified amount of seconds.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">If Slow is not zero then the speed of the mix will be set by the value specified -&gt; the value states the number of seconds it takes to transit from -100 to 100.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        slowUpSB->setWhatsThis(QApplication::translate("MixerDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; text-decoration: underline;\">Delay ans Slow</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600; text-decoration: underline;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">These values control the speed and delay of the output of the mix.  </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px"
                        "; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">If Delay is not zero the actuation of the mix will be delayed by the specified amount of seconds.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">If Slow is not zero then the speed of the mix will be set by the value specified -&gt; the value states the number of seconds it takes to transit from -100 to 100.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_11->setText(QApplication::translate("MixerDialog", "Down", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        delayDownSB->setWhatsThis(QApplication::translate("MixerDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; text-decoration: underline;\">Delay ans Slow</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600; text-decoration: underline;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">These values control the speed and delay of the output of the mix.  </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px"
                        "; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">If Delay is not zero the actuation of the mix will be delayed by the specified amount of seconds.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">If Slow is not zero then the speed of the mix will be set by the value specified -&gt; the value states the number of seconds it takes to transit from -100 to 100.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        slowDownSB->setWhatsThis(QApplication::translate("MixerDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; text-decoration: underline;\">Delay ans Slow</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600; text-decoration: underline;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">These values control the speed and delay of the output of the mix.  </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px"
                        "; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">If Delay is not zero the actuation of the mix will be delayed by the specified amount of seconds.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">If Slow is not zero then the speed of the mix will be set by the value specified -&gt; the value states the number of seconds it takes to transit from -100 to 100.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("MixerDialog", "Comment", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MixerDialog: public Ui_MixerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIXERDIALOG_H
