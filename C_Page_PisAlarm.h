#ifndef C_PAGE_PISALARM_H
#define C_PAGE_PISALARM_H
#include "CPage.h"
#include "DataBuffer.h"

//#define ID_PIBPISALRM_ARROW_RIGHT  0x0001
//#define ID_PIBPISALRM_ARROW_LEFT   0x0002
//#define ID_PIBPISALRM_TRAIN        0x0003


#define ID_PIBPISALRM_LABEL_1_1    0x0011
#define ID_PIBPISALRM_LABEL_1_2    0x0012
#define ID_PIBPISALRM_LABEL_1_3    0x0013
#define ID_PIBPISALRM_LABEL_1_4    0x0014
#define ID_PIBPISALRM_TRAIN        0x0015
#define ID_PIBPISALRM_ARROW_RIGHT  0x0016
#define ID_PIBPISALRM_ARROW_LEFT  0x0017


#define IDPISALARM_LABEL_CAR01 0x0018
#define IDPISALARM_LABEL_CAR02 0x0019
#define IDPISALARM_LABEL_CAR03 0x001a
#define IDPISALARM_LABEL_CAR04 0x001b
#define IDPISALARM_LABEL_CAR05 0x001c
#define IDPISALARM_LABEL_CAR06 0x001d

#define IDPISALARM_LABEL_CAR01_2 0x001E
#define IDPISALARM_LABEL_CAR02_2 0x001F
#define IDPISALARM_LABEL_CAR03_2 0x0020
#define IDPISALARM_LABEL_CAR04_2 0x0021
#define IDPISALARM_LABEL_CAR05_2 0x0022
#define IDPISALARM_LABEL_CAR06_2 0x0023
extern vector<CPage*>  g_PageVec;

class C_Page_PisAlarm : public CPage
{
     DECLEAR_MESSAGE_MAP(C_Page_PisAlarm)
public:
    C_Page_PisAlarm();
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
     void OnComBtn12Clk();

     void UpdatePisAlarm();

 #endif
     void UpdateRealtimefaults();
     void OnRealtimefaultBtnClk();
};



#endif // C_PAGE_PISALARM_H
