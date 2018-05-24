#ifndef C_PAGE_STATIONSET_H
#define C_PAGE_STATIONSET_H

#include "CPage.h"
#include "DataBuffer.h"

#define    ID_PIBCSTATIONSET_BUTTON_11 0X0001
#define    ID_PIBCSTATIONSET_BUTTON_12 0X0002
#define    ID_PIBCSTATIONSET_BUTTON_13 0X0003
#define    ID_PIBCSTATIONSET_BUTTON_14 0X0004
#define    ID_PIBCSTATIONSET_BUTTON_15 0X0005
#define    ID_PIBCSTATIONSET_BUTTON_16 0X0006
#define    ID_PIBCSTATIONSET_BUTTON_17 0X0007
#define    ID_PIBCSTATIONSET_BUTTON_18 0X0008
#define    ID_PIBCSTATIONSET_BUTTON_19 0X0009
#define    ID_PIBCSTATIONSET_BUTTON_20 0X000a
#define    ID_PIBCSTATIONSET_BUTTON_21 0X000b
#define    ID_PIBCSTATIONSET_BUTTON_22 0X000c
#define    ID_PIBCSTATIONSET_BUTTON_23 0X000d
#define    ID_PIBCSTATIONSET_BUTTON_24 0X000e
#define    ID_PIBCSTATIONSET_BUTTON_25 0X000f
#define    ID_PIBCSTATIONSET_BUTTON_26 0X0010
#define    ID_PIBCSTATIONSET_BUTTON_27 0X0011
#define    ID_PIBCSTATIONSET_BUTTON_28 0X0012
#define    ID_PIBCSTATIONSET_BUTTON_29 0X0013
#define    ID_PIBCSTATIONSET_BUTTON_30 0X0014
#define    ID_PIBCSTATIONSET_BUTTON_31 0X0015
#define    ID_PIBCSTATIONSET_BUTTON_32 0X0016
#define    ID_PIBCSTATIONSET_BUTTON_33 0X0017
#define    ID_PIBCSTATIONSET_BUTTON_34 0X0018
#define    ID_PIBCSTATIONSET_BUTTON_35 0X0019
#define    ID_PIBCSTATIONSET_BUTTON_36 0X001a
#define    ID_PIBCSTATIONSET_BUTTON_37 0X001b
#define    ID_PIBCSTATIONSET_BUTTON_01 0X0021
#define    ID_PIBCSTATIONSET_BUTTON_02 0X0022
#define    ID_PIBCSTATIONSET_LABEL_03 0X0023
#define    ID_PIBCSTATIONSET_LABEL_04 0X0024
#define    ID_PIBCSTATIONSET_LABEL_05 0X0025
#define    ID_PIBCSTATIONSET_LABEL_06 0X0026
#define    ID_PIBCAUTOMODE_BTN      0X0027
#define    ID_PIBCMANUALMODE_BTN     0X0028
#define    ID_PIBSTARTSTATION_BTN      0X0029
#define    ID_PIBENDSTATION_BTN     0X002a
#define    ID_PIBSTARTLABEL_BTN      0X002b
#define    ID_PIBENDLABEL_BTN     0X002c
#define    ID_PIBCURRENTLABEL      0X002d
#define    ID_PIBNEXTLABEL     0X002e
#define    ID_PIBSTARTLABEL      0X002f
#define    ID_PIBENDLABEL     0X0030
extern vector<CPage*>  g_PageVec;

#define  STATIONFLG_CURRENT  0
#define  STATIONFLG_NEXT    1
#define  STATIONFLG_START  2
#define  STATIONFLG_END    3
class C_Page_Stationset : public CPage
{
    DECLEAR_MESSAGE_MAP(C_Page_Stationset)
public:
    C_Page_Stationset();

public:
    int m_CurrentStationFlg;

private:
    void SetStationButtonDownByID(int nID);
    void SetStationButtonDownByName(QString stationName);
    int m_Currentstation;
    int m_Nextstation;
    int m_Startstation;
    int m_Endstation;
    bool m_confirmflg;
    int counter3s;
    QString GetStationNameByID(int nStationID);

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

    void OnBtnCurrentMode();
    void OnBtnNextMode();
    void OnBtnStartMode();
    void OnBtnEndMode();
    void OnBtnAutoMode();
    void OnBtnManualMode();
    void UpdateStationColor();
};

#endif // C_PAGE_STATIONSET_H
