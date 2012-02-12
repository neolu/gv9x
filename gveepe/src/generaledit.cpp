#include "generaledit.h"
#include "ui_generaledit.h"
#include "pers.h"
#include "helpers.h"
#include <QtGui>

#define BIT_WARN_THR     ( 0x01 )
#define BIT_WARN_SW      ( 0x02 )
#define BIT_WARN_MEM     ( 0x04 )
#define BIT_WARN_BEEP    ( 0x80 )
#define BIT_BEEP_VAL     ( 0x38 ) // >>3
#define BEEP_VAL_SHIFT   3

GeneralEdit::GeneralEdit(EEPFILE *eFile, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GeneralEdit)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/icon.png"));
    eeFile = eFile;

    QSettings settings("gv9x-eePe", "eePe");
    ui->tabWidget->setCurrentIndex(settings.value("generalEditTab", 0).toInt());

    eeFile->getGeneralSettings(&g_eeGeneral);

    QRegExp rx(CHAR_FOR_NAMES_REGEX);
    ui->ownerNameLE->setValidator(new QRegExpValidator(rx, this));

    populateSwitchCB(ui->backlightswCB,g_eeGeneral.lightSw);

    ui->ownerNameLE->setText(g_eeGeneral.ownerName);

    ui->contrastSB->setValue(g_eeGeneral.contrast);
    ui->battwarningDSB->setValue((double)g_eeGeneral.vBatWarn/10);
    ui->battcalibDSB->setValue((double)g_eeGeneral.vBatCalib/10);
    ui->battCalib->setValue((double)g_eeGeneral.vBatCalib/10);

    ui->backlightautoSB->setValue(g_eeGeneral.lightAutoOff*5);
    ui->inactimerSB->setValue(g_eeGeneral.inactivityTimer+10);
    ui->speakerPitchSB->setValue(g_eeGeneral.speakerPitch);
    ui->thrrevChkB->setChecked(g_eeGeneral.throttleReversed);
    ui->inputfilterCB->setCurrentIndex(g_eeGeneral.filterInput);
    ui->thrwarnChkB->setChecked(!g_eeGeneral.disableThrottleWarning);   //Default is zero=checked
    ui->switchwarnChkB->setChecked(!g_eeGeneral.disableSwitchWarning); //Default is zero=checked
    ui->memwarnChkB->setChecked(!g_eeGeneral.disableMemoryWarning);   //Default is zero=checked
    ui->alarmwarnChkB->setChecked(!g_eeGeneral.disableAlarmWarning);//Default is zero=checked
    ui->beeperCB->setCurrentIndex(g_eeGeneral.beeperVal);
    ui->channelorderCB->setCurrentIndex(g_eeGeneral.templateSetup);
    ui->stickmodeCB->setCurrentIndex(g_eeGeneral.stickMode);

    ui->beepMinuteChkB->setChecked(g_eeGeneral.minuteBeep);
    ui->beepCountDownChkB->setChecked(g_eeGeneral.preBeep);
    ui->beepFlashChkB->setChecked(g_eeGeneral.flashBeep);
    ui->splashScreenChkB->setChecked(!g_eeGeneral.disableSplashScreen);

    ui->ana1Neg->setValue(g_eeGeneral.calibSpanNeg[0]);
    ui->ana2Neg->setValue(g_eeGeneral.calibSpanNeg[1]);
    ui->ana3Neg->setValue(g_eeGeneral.calibSpanNeg[2]);
    ui->ana4Neg->setValue(g_eeGeneral.calibSpanNeg[3]);
    ui->ana5Neg->setValue(g_eeGeneral.calibSpanNeg[4]);
    ui->ana6Neg->setValue(g_eeGeneral.calibSpanNeg[5]);
    ui->ana7Neg->setValue(g_eeGeneral.calibSpanNeg[6]);

    ui->ana1Mid->setValue(g_eeGeneral.calibMid[0]);
    ui->ana2Mid->setValue(g_eeGeneral.calibMid[1]);
    ui->ana3Mid->setValue(g_eeGeneral.calibMid[2]);
    ui->ana4Mid->setValue(g_eeGeneral.calibMid[3]);
    ui->ana5Mid->setValue(g_eeGeneral.calibMid[4]);
    ui->ana6Mid->setValue(g_eeGeneral.calibMid[5]);
    ui->ana7Mid->setValue(g_eeGeneral.calibMid[6]);

    ui->ana1Pos->setValue(g_eeGeneral.calibSpanPos[0]);
    ui->ana2Pos->setValue(g_eeGeneral.calibSpanPos[1]);
    ui->ana3Pos->setValue(g_eeGeneral.calibSpanPos[2]);
    ui->ana4Pos->setValue(g_eeGeneral.calibSpanPos[3]);
    ui->ana5Pos->setValue(g_eeGeneral.calibSpanPos[4]);
    ui->ana6Pos->setValue(g_eeGeneral.calibSpanPos[5]);
    ui->ana7Pos->setValue(g_eeGeneral.calibSpanPos[6]);

    ui->mavTargetSystemSB->setValue(g_eeGeneral.mavTargetSystem);
    ui->baudRateCB->setCurrentIndex(g_eeGeneral.baudRate);

    updateTrianerTab();

    connect(ui->modeCB_1, SIGNAL(currentIndexChanged(int)), this, SLOT(trainerTabValueChanged()));
    connect(ui->modeCB_2, SIGNAL(currentIndexChanged(int)), this, SLOT(trainerTabValueChanged()));
    connect(ui->modeCB_3, SIGNAL(currentIndexChanged(int)), this, SLOT(trainerTabValueChanged()));
    connect(ui->modeCB_4, SIGNAL(currentIndexChanged(int)), this, SLOT(trainerTabValueChanged()));

    connect(ui->weightSB_1, SIGNAL(editingFinished()), this, SLOT(trainerTabValueChanged()));
    connect(ui->weightSB_2, SIGNAL(editingFinished()), this, SLOT(trainerTabValueChanged()));
    connect(ui->weightSB_3, SIGNAL(editingFinished()), this, SLOT(trainerTabValueChanged()));
    connect(ui->weightSB_4, SIGNAL(editingFinished()), this, SLOT(trainerTabValueChanged()));

    connect(ui->sourceCB_1, SIGNAL(currentIndexChanged(int)), this, SLOT(trainerTabValueChanged()));
    connect(ui->sourceCB_2, SIGNAL(currentIndexChanged(int)), this, SLOT(trainerTabValueChanged()));
    connect(ui->sourceCB_3, SIGNAL(currentIndexChanged(int)), this, SLOT(trainerTabValueChanged()));
    connect(ui->sourceCB_4, SIGNAL(currentIndexChanged(int)), this, SLOT(trainerTabValueChanged()));

    connect(ui->swtchCB_1, SIGNAL(currentIndexChanged(int)), this, SLOT(trainerTabValueChanged()));
    connect(ui->swtchCB_2, SIGNAL(currentIndexChanged(int)), this, SLOT(trainerTabValueChanged()));
    connect(ui->swtchCB_3, SIGNAL(currentIndexChanged(int)), this, SLOT(trainerTabValueChanged()));
    connect(ui->swtchCB_4, SIGNAL(currentIndexChanged(int)), this, SLOT(trainerTabValueChanged()));

    connect(ui->trainerCalib_1, SIGNAL(editingFinished()), this, SLOT(trainerTabValueChanged()));
    connect(ui->trainerCalib_2, SIGNAL(editingFinished()), this, SLOT(trainerTabValueChanged()));
    connect(ui->trainerCalib_3, SIGNAL(editingFinished()), this, SLOT(trainerTabValueChanged()));
    connect(ui->trainerCalib_4, SIGNAL(editingFinished()), this, SLOT(trainerTabValueChanged()));

    connect(ui->PPM_MultiplierDSB, SIGNAL(editingFinished()), this, SLOT(trainerTabValueChanged()));

    connect(ui->weightSB_1, SIGNAL(valueChanged(int)), this, SLOT(validateWeightSB()));
    connect(ui->weightSB_2, SIGNAL(valueChanged(int)), this, SLOT(validateWeightSB()));
    connect(ui->weightSB_3, SIGNAL(valueChanged(int)), this, SLOT(validateWeightSB()));
    connect(ui->weightSB_4, SIGNAL(valueChanged(int)), this, SLOT(validateWeightSB()));
}

GeneralEdit::~GeneralEdit()
{
    delete ui;
}

void GeneralEdit::updateSettings()
{
    int16_t sum=0;
    for(int i=0; i<12;i++) sum+=g_eeGeneral.calibMid[i];
    g_eeGeneral.chkSum = sum;
    eeFile->putGeneralSettings(&g_eeGeneral);

    emit modelValuesChanged();
}


void GeneralEdit::updateTrianerTab()
{
    on_tabWidget_selected(""); // updates channel name labels

    ui->modeCB_1->setCurrentIndex(g_eeGeneral.trainer.mix[0].mode);
    ui->weightSB_1->setValue(g_eeGeneral.trainer.mix[0].studWeight*13/4);
    ui->sourceCB_1->setCurrentIndex(g_eeGeneral.trainer.mix[0].srcChn);
    populateSwitchCB(ui->swtchCB_1,g_eeGeneral.trainer.mix[0].swtch);

    ui->modeCB_2->setCurrentIndex(g_eeGeneral.trainer.mix[1].mode);
    ui->weightSB_2->setValue(g_eeGeneral.trainer.mix[1].studWeight*13/4);
    ui->sourceCB_2->setCurrentIndex(g_eeGeneral.trainer.mix[1].srcChn);
    populateSwitchCB(ui->swtchCB_2,g_eeGeneral.trainer.mix[1].swtch);

    ui->modeCB_3->setCurrentIndex(g_eeGeneral.trainer.mix[2].mode);
    ui->weightSB_3->setValue(g_eeGeneral.trainer.mix[2].studWeight*13/4);
    ui->sourceCB_3->setCurrentIndex(g_eeGeneral.trainer.mix[2].srcChn);
    populateSwitchCB(ui->swtchCB_3,g_eeGeneral.trainer.mix[2].swtch);

    ui->modeCB_4->setCurrentIndex(g_eeGeneral.trainer.mix[0].mode);
    ui->weightSB_4->setValue(g_eeGeneral.trainer.mix[3].studWeight*13/4);
    ui->sourceCB_4->setCurrentIndex(g_eeGeneral.trainer.mix[3].srcChn);
    populateSwitchCB(ui->swtchCB_4,g_eeGeneral.trainer.mix[3].swtch);

    ui->trainerCalib_1->setValue(g_eeGeneral.trainer.calib[0]);
    ui->trainerCalib_2->setValue(g_eeGeneral.trainer.calib[1]);
    ui->trainerCalib_3->setValue(g_eeGeneral.trainer.calib[2]);
    ui->trainerCalib_4->setValue(g_eeGeneral.trainer.calib[3]);

    ui->PPM_MultiplierDSB->setValue(double(g_eeGeneral.PPM_Multiplier+10)/10);
}

void GeneralEdit::trainerTabValueChanged()
{
    g_eeGeneral.trainer.mix[0].mode       = ui->modeCB_1->currentIndex();
    g_eeGeneral.trainer.mix[0].studWeight = ui->weightSB_1->value()*4/13;
    g_eeGeneral.trainer.mix[0].srcChn     = ui->sourceCB_1->currentIndex();
    g_eeGeneral.trainer.mix[0].swtch      = ui->swtchCB_1->currentIndex()-MAX_DRSWITCH;

    g_eeGeneral.trainer.mix[1].mode       = ui->modeCB_2->currentIndex();
    g_eeGeneral.trainer.mix[1].studWeight = ui->weightSB_2->value()*4/13;
    g_eeGeneral.trainer.mix[1].srcChn     = ui->sourceCB_2->currentIndex();
    g_eeGeneral.trainer.mix[1].swtch      = ui->swtchCB_2->currentIndex()-MAX_DRSWITCH;

    g_eeGeneral.trainer.mix[2].mode       = ui->modeCB_3->currentIndex();
    g_eeGeneral.trainer.mix[2].studWeight = ui->weightSB_3->value()*4/13;
    g_eeGeneral.trainer.mix[2].srcChn     = ui->sourceCB_3->currentIndex();
    g_eeGeneral.trainer.mix[2].swtch      = ui->swtchCB_3->currentIndex()-MAX_DRSWITCH;

    g_eeGeneral.trainer.mix[3].mode       = ui->modeCB_4->currentIndex();
    g_eeGeneral.trainer.mix[3].studWeight = ui->weightSB_4->value()*4/13;
    g_eeGeneral.trainer.mix[3].srcChn     = ui->sourceCB_4->currentIndex();
    g_eeGeneral.trainer.mix[3].swtch      = ui->swtchCB_4->currentIndex()-MAX_DRSWITCH;

    g_eeGeneral.trainer.calib[0] = ui->trainerCalib_1->value();
    g_eeGeneral.trainer.calib[1] = ui->trainerCalib_2->value();
    g_eeGeneral.trainer.calib[2] = ui->trainerCalib_3->value();
    g_eeGeneral.trainer.calib[3] = ui->trainerCalib_4->value();

    g_eeGeneral.PPM_Multiplier = ((quint16)(ui->PPM_MultiplierDSB->value()*10))-10;

    updateSettings();
}

void GeneralEdit::validateWeightSB()
{
    int i;

    ui->weightSB_1->blockSignals(true);
    ui->weightSB_2->blockSignals(true);
    ui->weightSB_3->blockSignals(true);
    ui->weightSB_4->blockSignals(true);

    i = ui->weightSB_1->value()*4/13;
    ui->weightSB_1->setValue(i*13/4);

    i = ui->weightSB_2->value()*4/13;
    ui->weightSB_2->setValue(i*13/4);

    i = ui->weightSB_3->value()*4/13;
    ui->weightSB_3->setValue(i*13/4);

    i = ui->weightSB_4->value()*4/13;
    ui->weightSB_4->setValue(i*13/4);

    ui->weightSB_1->blockSignals(false);
    ui->weightSB_2->blockSignals(false);
    ui->weightSB_3->blockSignals(false);
    ui->weightSB_4->blockSignals(false);
}

void GeneralEdit::on_contrastSB_editingFinished()
{
    g_eeGeneral.contrast = ui->contrastSB->value();
    updateSettings();
}

void GeneralEdit::on_battwarningDSB_editingFinished()
{
    g_eeGeneral.vBatWarn = (int)(ui->battwarningDSB->value()*10);
    updateSettings();
}

void GeneralEdit::on_battcalibDSB_editingFinished()
{
    g_eeGeneral.vBatCalib = ui->battcalibDSB->value()*10;
    ui->battCalib->setValue(ui->battcalibDSB->value());
    updateSettings();
}

void GeneralEdit::on_backlightswCB_currentIndexChanged(int index)
{
    g_eeGeneral.lightSw = index-MAX_DRSWITCH;
    updateSettings();
}

void GeneralEdit::on_backlightautoSB_editingFinished()
{
    int i = ui->backlightautoSB->value()/5;
    if((i*5)!=ui->backlightautoSB->value())
        ui->backlightautoSB->setValue(i*5);
    else
    {
        g_eeGeneral.lightAutoOff = i;
        updateSettings();
    }
}

void GeneralEdit::on_inactimerSB_editingFinished()
{
    g_eeGeneral.inactivityTimer = ui->inactimerSB->value() - 10;
    updateSettings();
}

void GeneralEdit::on_thrrevChkB_stateChanged(int )
{
    g_eeGeneral.throttleReversed = ui->thrrevChkB->isChecked() ? 1 : 0;
    updateSettings();
}

void GeneralEdit::on_inputfilterCB_currentIndexChanged(int index)
{
    g_eeGeneral.filterInput = index;
    updateSettings();
}

void GeneralEdit::on_thrwarnChkB_stateChanged(int )
{
    g_eeGeneral.disableThrottleWarning = ui->thrwarnChkB->isChecked() ? 0 : 1;
    updateSettings();
}

void GeneralEdit::on_switchwarnChkB_stateChanged(int )
{
    g_eeGeneral.disableSwitchWarning = ui->switchwarnChkB->isChecked() ? 0 : 1;
    updateSettings();
}

void GeneralEdit::on_memwarnChkB_stateChanged(int )
{
    g_eeGeneral.disableMemoryWarning = ui->memwarnChkB->isChecked() ? 0 : 1;
    updateSettings();
}

void GeneralEdit::on_alarmwarnChkB_stateChanged(int )
{
    g_eeGeneral.disableAlarmWarning = ui->alarmwarnChkB->isChecked() ? 0 : 1;
    updateSettings();
}

void GeneralEdit::on_beeperCB_currentIndexChanged(int index)
{
    g_eeGeneral.beeperVal = index;
    updateSettings();
}

void GeneralEdit::on_channelorderCB_currentIndexChanged(int index)
{
    g_eeGeneral.templateSetup = index;
    updateSettings();
}

void GeneralEdit::on_stickmodeCB_currentIndexChanged(int index)
{
    g_eeGeneral.stickMode = index;
    updateSettings();
}



void GeneralEdit::on_ana1Neg_editingFinished()
{
    g_eeGeneral.calibSpanNeg[0] = ui->ana1Neg->value();
    updateSettings();
}

void GeneralEdit::on_ana2Neg_editingFinished()
{
    g_eeGeneral.calibSpanNeg[1] = ui->ana2Neg->value();
    updateSettings();
}

void GeneralEdit::on_ana3Neg_editingFinished()
{
    g_eeGeneral.calibSpanNeg[2] = ui->ana3Neg->value();
    updateSettings();
}

void GeneralEdit::on_ana4Neg_editingFinished()
{
    g_eeGeneral.calibSpanNeg[3] = ui->ana4Neg->value();
    updateSettings();
}

void GeneralEdit::on_ana5Neg_editingFinished()
{
    g_eeGeneral.calibSpanNeg[4] = ui->ana5Neg->value();
    updateSettings();
}

void GeneralEdit::on_ana6Neg_editingFinished()
{
    g_eeGeneral.calibSpanNeg[5] = ui->ana6Neg->value();
    updateSettings();
}

void GeneralEdit::on_ana7Neg_editingFinished()
{
    g_eeGeneral.calibSpanNeg[6] = ui->ana7Neg->value();
    updateSettings();
}



void GeneralEdit::on_ana1Mid_editingFinished()
{
    g_eeGeneral.calibMid[0] = ui->ana1Mid->value();
    updateSettings();
}

void GeneralEdit::on_ana2Mid_editingFinished()
{
    g_eeGeneral.calibMid[1] = ui->ana2Mid->value();
    updateSettings();
}

void GeneralEdit::on_ana3Mid_editingFinished()
{
    g_eeGeneral.calibMid[2] = ui->ana3Mid->value();
    updateSettings();
}

void GeneralEdit::on_ana4Mid_editingFinished()
{
    g_eeGeneral.calibMid[3] = ui->ana4Mid->value();
    updateSettings();
}

void GeneralEdit::on_ana5Mid_editingFinished()
{
    g_eeGeneral.calibMid[4] = ui->ana5Mid->value();
    updateSettings();
}

void GeneralEdit::on_ana6Mid_editingFinished()
{
    g_eeGeneral.calibMid[5] = ui->ana6Mid->value();
    updateSettings();
}

void GeneralEdit::on_ana7Mid_editingFinished()
{
    g_eeGeneral.calibMid[6] = ui->ana7Mid->value();
    updateSettings();
}



void GeneralEdit::on_ana1Pos_editingFinished()
{
    g_eeGeneral.calibSpanPos[0] = ui->ana1Pos->value();
    updateSettings();
}

void GeneralEdit::on_ana2Pos_editingFinished()
{
    g_eeGeneral.calibSpanPos[1] = ui->ana2Pos->value();
    updateSettings();
}

void GeneralEdit::on_ana3Pos_editingFinished()
{
    g_eeGeneral.calibSpanPos[2] = ui->ana3Pos->value();
    updateSettings();
}

void GeneralEdit::on_ana4Pos_editingFinished()
{
    g_eeGeneral.calibSpanPos[3] = ui->ana4Pos->value();
    updateSettings();
}

void GeneralEdit::on_ana5Pos_editingFinished()
{
    g_eeGeneral.calibSpanNeg[4] = ui->ana5Pos->value();
    updateSettings();
}

void GeneralEdit::on_ana6Pos_editingFinished()
{
    g_eeGeneral.calibSpanNeg[5] = ui->ana6Pos->value();
    updateSettings();
}

void GeneralEdit::on_ana7Pos_editingFinished()
{
    g_eeGeneral.calibSpanPos[6] = ui->ana7Pos->value();
    updateSettings();
}

void GeneralEdit::on_battCalib_editingFinished()
{
    g_eeGeneral.vBatCalib = ui->battCalib->value()*10;
    ui->battcalibDSB->setValue(ui->battCalib->value());
    updateSettings();
}


void GeneralEdit::on_tabWidget_currentChanged(int index)
{
    QSettings settings("gv9x-eePe", "eePe");
    settings.setValue("generalEditTab",index);//ui->tabWidget->currentIndex());
}


void GeneralEdit::on_beepMinuteChkB_stateChanged(int )
{
    g_eeGeneral.minuteBeep = ui->beepMinuteChkB->isChecked() ? 1 : 0;
    updateSettings();
}

void GeneralEdit::on_beepCountDownChkB_stateChanged(int )
{
    g_eeGeneral.preBeep = ui->beepCountDownChkB->isChecked() ? 1 : 0;
    updateSettings();
}

void GeneralEdit::on_beepFlashChkB_stateChanged(int )
{
    g_eeGeneral.flashBeep = ui->beepFlashChkB->isChecked() ? 1 : 0;
    updateSettings();
}

void GeneralEdit::on_splashScreenChkB_stateChanged(int )
{
    g_eeGeneral.disableSplashScreen = ui->splashScreenChkB->isChecked() ? 0 : 1;
    updateSettings();
}

void GeneralEdit::on_ownerNameLE_editingFinished()
{
    memset(&g_eeGeneral.ownerName,' ',sizeof(g_eeGeneral.ownerName));
    for(quint8 i=0; i<(ui->ownerNameLE->text().length()); i++)
    {
        if(i>=sizeof(g_eeGeneral.ownerName)) break;
        g_eeGeneral.ownerName[i] = ui->ownerNameLE->text().toStdString()[i];
    }

    updateSettings();
}

void GeneralEdit::on_speakerPitchSB_editingFinished()
{
    g_eeGeneral.speakerPitch = ui->speakerPitchSB->value();
    updateSettings();
}

void GeneralEdit::on_tabWidget_selected(QString )
{
    ui->chnLabel_1->setText(getSourceStr(g_eeGeneral.stickMode,1));
    ui->chnLabel_2->setText(getSourceStr(g_eeGeneral.stickMode,2));
    ui->chnLabel_3->setText(getSourceStr(g_eeGeneral.stickMode,3));
    ui->chnLabel_4->setText(getSourceStr(g_eeGeneral.stickMode,4));
}



void GeneralEdit::on_baudRateCB_currentIndexChanged(int index)
{
    g_eeGeneral.baudRate = index;
    updateSettings();
}


void GeneralEdit::on_mavTargetSystemSB_editingFinished()
{
    g_eeGeneral.mavTargetSystem = ui->mavTargetSystemSB->value();
    updateSettings();
}
