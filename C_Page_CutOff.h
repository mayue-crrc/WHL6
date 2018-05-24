#ifndef C_PAGE_CUTOFF_H
#define C_PAGE_CUTOFF_H


#include "CPage.h"
#include "DataBuffer.h"

#define ID_PIBCUTOFF_ARROW_RIGHT  0x0001
#define ID_PIBCUTOFF_ARROW_LEFT   0x0002
#define ID_PIBCUTOFF_TRAIN        0x0003

#define ID_PIBCUTOFF_TC1BTN1      0X0004
#define ID_PIBCUTOFF_TC1BTN2      0X0005
#define ID_PIBCUTOFF_TC1BTN3      0X0006
#define ID_PIBCUTOFF_TC1BTN4      0X0007

#define ID_PIBCUTOFF_MP1BTN1      0X0008
#define ID_PIBCUTOFF_MP1BTN2      0X0009
#define ID_PIBCUTOFF_MP1BTN3      0X000A
#define ID_PIBCUTOFF_MP1BTN4      0X000B
#define ID_PIBCUTOFF_MP1BTN5      0X000C

#define ID_PIBCUTOFF_M1BTN1      0X000D
#define ID_PIBCUTOFF_M1BTN2      0X000E
#define ID_PIBCUTOFF_M1BTN3      0X000F
#define ID_PIBCUTOFF_M1BTN4      0X0010
#define ID_PIBCUTOFF_M1BTN5      0X0011

#define ID_PIBCUTOFF_TC2BTN1      0X0012
#define ID_PIBCUTOFF_TC2BTN2      0X0013
#define ID_PIBCUTOFF_TC2BTN3      0X0014
#define ID_PIBCUTOFF_TC2BTN4      0X0015

#define ID_PIBCUTOFF_MP2BTN1      0X0016
#define ID_PIBCUTOFF_MP2BTN2      0X0017
#define ID_PIBCUTOFF_MP2BTN3      0X0018
#define ID_PIBCUTOFF_MP2BTN4      0X0019
#define ID_PIBCUTOFF_MP2BTN5      0X001A

#define ID_PIBCUTOFF_M2BTN1      0X001B
#define ID_PIBCUTOFF_M2BTN2      0X001C
#define ID_PIBCUTOFF_M2BTN3      0X001D
#define ID_PIBCUTOFF_M2BTN4      0X001E
#define ID_PIBCUTOFF_M2BTN5      0X001F

#define ID_PIBCUTOFF_HOLDBRKRLS      0X0020
#define ID_PIBCUTOFF_ALLBRKCUT      0X0021
#define ID_PIBCUTOFF_ALLBRKCUTSHOW      0X0022

extern vector<CPage*>  g_PageVec;

class C_Page_CutOff : public CPage
{
     DECLEAR_MESSAGE_MAP(C_Page_CutOff)
public:
    C_Page_CutOff();
protected:
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

     void OnComACU1cutClk();
     void OnComACU1resetClk();
     void OnComREC1cutClk();
     void OnComREC1resetClk();
     void OnComACU2cutClk();
     void OnComACU2resetClk();
     void OnComREC2cutClk();
     void OnComREC2resetClk();
     void OnComDCU1cutClk();
     void OnComDCU1resetClk();
     void OnComDCU2cutClk();
     void OnComDCU2resetClk();
     void OnComDCU3cutClk();
     void OnComDCU3resetClk();
     void OnComDCU4cutClk();
     void OnComDCU4resetClk();
     void OnComEB1cutPress();
     void OnComEB2cutPress();
     void OnComEB3cutPress();
     void OnComEB4cutPress();
     void OnComHoldbrkrlscutPress();
     void OnComALLbrkcutPress();

//     void OnComEB1cutRelease();
//     void OnComEB2cutRelease();
//     void OnComEB3cutRelease();
//     void OnComEB4cutRelease();
     int timer,timercount[16];
     void OnRealtimefaultBtnClk();
     void UpdateRealtimefaults();
     bool m_btndown;
 #endif
};


#endif // C_PAGE_CUTOFF_H
