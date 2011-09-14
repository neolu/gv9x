#ifndef MODELEDIT_H
#define MODELEDIT_H

#include <QDialog>
#include <QtGui>
#include "pers.h"
#include "mixerslist.h"

namespace Ui {
    class ModelEdit;
}

class ModelEdit : public QDialog
{
    Q_OBJECT

public:
    explicit ModelEdit(EEPFILE *eFile, uint8_t id, QWidget *parent = 0);
    ~ModelEdit();

    void applyBaseTemplate();


private:
    Ui::ModelEdit *ui;
    EEPFILE *eeFile;
    class simulatorDialog *sdptr ;

    MixersList *MixerlistWidget;

    QStringList mixNotes;

    EEGeneral g_eeGeneral;
    ModelData g_model;
    int       id_model;

    bool switchEditLock;
    bool heliEditLock;

    QSpinBox  * cswitchOffset[NUM_CSW];
    QComboBox * cswitchSource1[NUM_CSW];
    QComboBox * cswitchSource2[NUM_CSW];

    QSpinBox  * safetySwitchValue[NUM_CHNOUT];
    QComboBox * safetySwitchSwtch[NUM_CHNOUT];

    QComboBox * rotarySwitchEnabled[NUM_ROTA_SW];
    QLineEdit * rotarySwitchName[NUM_ROTA_SW];
    QSpinBox  * rotarySwitchValue[NUM_ROTA_SW];

    void setupMixerListWidget();
    void updateSettings();
    void tabModelEditSetup();
    void tabExpo();
    void tabMixes();
    void tabHeli();
    void tabLimits();
    void tabCurves();
    void tabSwitches();
    void tabSafetySwitches();
    void tabRotarySwitches();
    void tabTrims();
    void tabFrsky();
    void tabTemplates();
    void updateCurvesTab();
    void setSwitchWidgetVisibility(int i);
    void setLimitMinMax();
    void updateSwitchesTab();
    void updateHeliTab();

    void launchSimulation();
    void resizeEvent(QResizeEvent *event  = 0);

    void drawCurve();
    int currentCurve;

    QSpinBox *getNodeSB(int i);

    void gm_insertMix(int idx);
    int getMixerIndex(int dch);
    void gm_deleteMix(int index);
    void gm_openMix(int index);
    int gm_moveMix(int idx, bool dir);
    void mixersDeleteList(QList<int> list);
    QList<int> createListFromSelected();
    void setSelectedByList(QList<int> list);

    void applyTemplate(uint8_t idx);
    MixData* setDest(uint8_t dch);
    void setCurve(uint8_t c, int8_t ar[]);
    void setSwitch(uint8_t idx, uint8_t func, int8_t v1, int8_t v2);

signals:
    void modelValuesChanged();

private slots:
    void clearMixes(bool ask=true);
    void clearCurves(bool ask=true);

    void on_extendedLimitsChkB_toggled(bool checked);
    void on_resetCurve_1_clicked();
    void on_resetCurve_2_clicked();
    void on_resetCurve_3_clicked();
    void on_resetCurve_4_clicked();
    void on_resetCurve_5_clicked();
    void on_resetCurve_6_clicked();
    void on_resetCurve_7_clicked();
    void on_resetCurve_8_clicked();
    void on_resetCurve_9_clicked();
    void on_resetCurve_10_clicked();
    void on_resetCurve_11_clicked();
    void on_resetCurve_12_clicked();
    void on_resetCurve_13_clicked();
    void on_resetCurve_14_clicked();
    void on_resetCurve_15_clicked();
    void on_resetCurve_16_clicked();

    void mimeDropped(int index, const QMimeData *data, Qt::DropAction action);
    void pasteMIMEData(const QMimeData * mimeData, int destIdx=1000);
    void on_pushButton_clicked();
    void mixersDelete(bool ask=true);
    void mixersCut();
    void mixersCopy();
    void mixersPaste();
    void mixersDuplicate();
    void mixerOpen();
    void mixerAdd();
    void moveMixUp();
    void moveMixDown();

    void mixerlistWidget_customContextMenuRequested(QPoint pos);
    void mixerlistWidget_doubleClicked(QModelIndex index);
    void mixerlistWidget_KeyPress(QKeyEvent *event);



    void on_curveEdit_1_clicked();
    void on_curveEdit_2_clicked();
    void on_curveEdit_3_clicked();
    void on_curveEdit_4_clicked();
    void on_curveEdit_5_clicked();
    void on_curveEdit_6_clicked();
    void on_curveEdit_7_clicked();
    void on_curveEdit_8_clicked();
    void on_curveEdit_9_clicked();
    void on_curveEdit_10_clicked();
    void on_curveEdit_11_clicked();
    void on_curveEdit_12_clicked();
    void on_curveEdit_13_clicked();
    void on_curveEdit_14_clicked();
    void on_curveEdit_15_clicked();
    void on_curveEdit_16_clicked();

    void curvePointEdited();
    void limitEdited();
    void switchesEdited();
    void safetySwitchesEdited();
    void rotarySwitchesEdited();
    void expoEdited();
    void mixesEdited();
    void heliEdited();
    void FrSkyEdited();

    void on_spinBox_S1_valueChanged(int value);
    void on_spinBox_S2_valueChanged(int value);
    void on_spinBox_S3_valueChanged(int value);
    void on_spinBox_S4_valueChanged(int value);

    void on_bcRUDChkB_toggled(bool checked);
    void on_bcELEChkB_toggled(bool checked);
    void on_bcTHRChkB_toggled(bool checked);
    void on_bcAILChkB_toggled(bool checked);
    void on_bcP1ChkB_toggled(bool checked);
    void on_bcP2ChkB_toggled(bool checked);
    void on_bcP3ChkB_toggled(bool checked);

    void on_thrExpoChkB_toggled(bool checked);
    void on_thrTrimChkB_toggled(bool checked);
    void on_TrainerChkB_toggled(bool checked);
    void on_T2ThrTrgChkB_toggled(bool checked);
		
    void on_ppmDelaySB_editingFinished();
    void on_numChannelsSB_editingFinished();
    void on_timerValTE_editingFinished();
    void on_protocolCB_currentIndexChanged(int index);
    void on_pulsePolCB_currentIndexChanged(int index);
    void on_trimSWCB_currentIndexChanged(int index);
    void on_trimIncCB_currentIndexChanged(int index);
    void on_timerDirCB_currentIndexChanged(int index);
    void on_timerModeCB_currentIndexChanged(int index);
    void on_modelNameLE_editingFinished();
    void on_tabWidget_currentChanged(int index);
    void on_templateList_doubleClicked(QModelIndex index);
    void on_ppmFrameLengthDSB_editingFinished();
};



#endif // MODELEDIT_H

