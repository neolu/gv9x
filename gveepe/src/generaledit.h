#ifndef GENERALEDIT_H
#define GENERALEDIT_H

#include <QDialog>
#include "pers.h"

namespace Ui {
    class GeneralEdit;
}

class GeneralEdit : public QDialog
{
    Q_OBJECT

public:
    explicit GeneralEdit(EEPFILE *eFile, QWidget *parent = 0);
    ~GeneralEdit();
    void updateSettings();

private:
    Ui::GeneralEdit *ui;
    EEPFILE *eeFile;

    EEGeneral g_eeGeneral;

signals:
    void modelValuesChanged();

private slots:
    void updateTrianerTab();
    void trainerTabValueChanged();
    void validateWeightSB();

    void on_ownerNameLE_editingFinished();
    void on_splashScreenChkB_stateChanged(int );
    void on_beepCountDownChkB_stateChanged(int );
    void on_beepMinuteChkB_stateChanged(int );
    void on_alarmwarnChkB_stateChanged(int );
    void on_tabWidget_currentChanged(int index);

    void on_battCalib_editingFinished();
    void on_ana1Neg_editingFinished();
    void on_ana2Neg_editingFinished();
    void on_ana3Neg_editingFinished();
    void on_ana4Neg_editingFinished();
    void on_ana5Neg_editingFinished();
    void on_ana6Neg_editingFinished();
    void on_ana7Neg_editingFinished();

    void on_ana1Mid_editingFinished();
    void on_ana2Mid_editingFinished();
    void on_ana3Mid_editingFinished();
    void on_ana4Mid_editingFinished();
    void on_ana5Mid_editingFinished();
    void on_ana6Mid_editingFinished();
    void on_ana7Mid_editingFinished();

    void on_ana1Pos_editingFinished();
    void on_ana2Pos_editingFinished();
    void on_ana3Pos_editingFinished();
    void on_ana4Pos_editingFinished();
    void on_ana5Pos_editingFinished();
    void on_ana6Pos_editingFinished();
    void on_ana7Pos_editingFinished();


    void on_stickmodeCB_currentIndexChanged(int index);
    void on_channelorderCB_currentIndexChanged(int index);
    void on_beeperCB_currentIndexChanged(int index);
    void on_memwarnChkB_stateChanged(int );
    void on_switchwarnChkB_stateChanged(int );
    void on_thrwarnChkB_stateChanged(int );
    void on_inputfilterCB_currentIndexChanged(int index);
    void on_thrrevChkB_stateChanged(int );
    void on_inactimerSB_editingFinished();
    void on_backlightautoSB_editingFinished();
    void on_backlightswCB_currentIndexChanged(int index);
    void on_battcalibDSB_editingFinished();
    void on_battwarningDSB_editingFinished();
    void on_contrastSB_editingFinished();
    void on_beepFlashChkB_stateChanged(int );
    void on_speakerPitchSB_editingFinished();
    void on_tabWidget_selected(QString );
    void on_baudRateCB_currentIndexChanged(int index);
    void on_mavTargetSystemSB_editingFinished();
};

#endif // GENERALEDIT_H
