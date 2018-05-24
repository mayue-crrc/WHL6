#ifndef CTRANSPORTMODE_H
#define CTRANSPORTMODE_H

#include "CPage.h"
#include "DataBuffer.h"
#define ID_CTRANSPROT_LABEL_PP          0X0001
#define ID_CTRANSPROT_LABEL_PRP         0X0002
#define ID_CTRANSPROT_LABEL_TR          0X0003
#define ID_CTRANSPROT_LABEL_BDF          0X0004
#define ID_CTRANSPROT_LABEL_A          0X0005
#define ID_CTRANSPROT_LABEL_TM          0X0006
#define ID_CTRANSPROT_LABEL_MRP          0X0007
#define ID_CTRANSPROT_LABEL_NB          0X0008
#define ID_CTRANSPROT_LABEL_EB          0X0009
#define ID_CTRANSPROT_LABEL_CTHM_PBReleaseC1                0X00030
#define ID_CTRANSPROT_LABEL_CTHM_PBReleaseC2                0X00031
#define ID_CTRANSPROT_LABEL_CTHM_PBReleaseC3                0X00032
#define ID_CTRANSPROT_LABEL_CTHM_PBReleaseC4                0X00033
#define ID_CTRANSPROT_LABEL_CTHM_PBReleaseC5                0X00034
#define ID_CTRANSPROT_LABEL_CTHM_PBReleaseC6                0X00035
#define ID_CTRANSPROT_BUTTON_SETTINGSPEED                   0X00037
#define ID_CTRANSPROT_LABEL_SETTINGSPEED                   0X00036

#define ID_CTRANSPROT_LABEL_TCUBCUEFFORT             0X0038
#define ID_CTRANSPROT_LABEL_TCUBCUEFFORT2            0X0039
#define ID_CTRANSPROT_BUTTON_CONFIRM            0X003A
#define ID_CTRANSPROT_LABEL_TRANSPORTMODE          0X003B
#define ID_CTRANSPROT_LABEL_SENSORERR1          0X003C
#define ID_CTRANSPROT_LABEL_SENSORERR2          0X003D
#define ID_CTRANSPROT_BUTTON_CLEARSPEED         0x003e
extern vector<CPage*>  g_PageVec;


class CTransportMode : public CPage
{
    DECLEAR_MESSAGE_MAP(CTransportMode)
public:
    CTransportMode();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
private:
    void OnComBtn1Clk();
    void OnComBtn2Clk();
    void OnComBtn3Clk();
    void OnComBtn4Clk();
    void OnComBtn5Clk();
    void OnComBtn6Clk();
#ifdef PAGE_BUTTON_BAR_NEW
    void OnComBtn7Clk();
    void OnComBtn8Clk();
    void OnComBtn9Clk();
    void OnComBtn10Clk();
    void OnComBtn11Clk();
    void OnComBtn12Clk();
#endif

    void OnSetSpeedClk();
    void OnConfirmClk();
    void OnSpeedclearClk();
    void OnRealtimefaultBtnClk();
    void UpdateRealtimefaults();

    int timer3s;

};



#endif // CTransportMode
