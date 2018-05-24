#ifndef CStationSettingPage_H
#define CStationSettingPage_H

#include "CPage.h"
#define    ID_PIBSTATIONSET_BUTTON_11 0X0001
#define    ID_PIBSTATIONSET_BUTTON_12 0X0002
#define    ID_PIBSTATIONSET_BUTTON_13 0X0003
#define    ID_PIBSTATIONSET_BUTTON_14 0X0004
#define    ID_PIBSTATIONSET_BUTTON_15 0X0005
#define    ID_PIBSTATIONSET_BUTTON_16 0X0006
#define    ID_PIBSTATIONSET_BUTTON_17 0X0007
#define    ID_PIBSTATIONSET_BUTTON_18 0X0008
#define    ID_PIBSTATIONSET_BUTTON_19 0X0009
#define    ID_PIBSTATIONSET_BUTTON_20 0X000a
#define    ID_PIBSTATIONSET_BUTTON_21 0X000b
#define    ID_PIBSTATIONSET_BUTTON_22 0X000c
#define    ID_PIBSTATIONSET_BUTTON_23 0X000d
#define    ID_PIBSTATIONSET_BUTTON_24 0X000e
#define    ID_PIBSTATIONSET_BUTTON_25 0X000f
#define    ID_PIBSTATIONSET_BUTTON_26 0X0010
#define    ID_PIBSTATIONSET_BUTTON_27 0X0011
#define    ID_PIBSTATIONSET_BUTTON_28 0X0012
#define    ID_PIBSTATIONSET_BUTTON_29 0X0013
#define    ID_PIBSTATIONSET_BUTTON_30 0X0014
#define    ID_PIBSTATIONSET_BUTTON_31 0X0015
#define    ID_PIBSTATIONSET_BUTTON_32 0X0016
#define    ID_PIBSTATIONSET_BUTTON_33 0X0017
#define    ID_PIBSTATIONSET_BUTTON_34 0X0018
#define    ID_PIBSTATIONSET_BUTTON_35 0X0019
#define    ID_PIBSTATIONSET_BUTTON_36 0X001a
#define    ID_PIBSTATIONSET_BUTTON_37 0X001b



extern vector<CPage*>  g_PageVec;

#define  STATIONFLG_START  0
#define  STATIONFLG_END    1

class CStationSettingPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CStationSettingPage)
public:
    CStationSettingPage();

public:
    int m_nStationFlg;

private:
    void SetStationButtonDownByID(int nID);
    void SetStationButtonDownByName(QString stationName);
    int m_stationindex;

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
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
    void OnBtn11Clk();
    void OnBtn12Clk();
    void OnBtn13Clk();
    void OnBtn14Clk();
    void OnBtn15Clk();
    void OnBtn16Clk();
    void OnBtn17Clk();
    void OnBtn18Clk();
    void OnBtn19Clk();
    void OnBtn20Clk();

    void OnBtn21Clk();
    void OnBtn22Clk();
    void OnBtn23Clk();
    void OnBtn24Clk();
    void OnBtn25Clk();
    void OnBtn26Clk();
    void OnBtn27Clk();
    void OnBtn28Clk();
    void OnBtn29Clk();
    void OnBtn30Clk();

    void OnBtn31Clk();
    void OnBtn32Clk();
    void OnBtn33Clk();
    void OnBtn34Clk();
    void OnBtn35Clk();
    void OnBtn36Clk();
    void OnBtn37Clk();

    void UpdateStationColor();
};

#endif // CStationSettingPage_H
