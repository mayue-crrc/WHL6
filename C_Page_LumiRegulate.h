#ifndef C_PAGE_LUMIREGULATE_H
#define C_PAGE_LUMIREGULATE_H

#include "CPage.h"
#include "DataBuffer.h"

//#define ID_PIBLUMIREGULATE_ARROW_RIGHT  0x0001
//#define ID_PIBLUMIREGULATE_ARROW_LEFT   0x0002
//#define ID_PIBLUMIREGULATE_TRAIN        0x0003


#define ID_PIBLUMIREGULATE_LABEL_1_1    0x0011
#define ID_PIBLUMIREGULATE_LABEL_1_2    0x0012
#define ID_PIBLUMIREGULATE_LABEL_1_3    0x0013
#define ID_PIBLUMIREGULATE_LABEL_1_4    0x0014

extern vector<CPage*>  g_PageVec;

class C_Page_LumiRegulate : public CPage
{
     DECLEAR_MESSAGE_MAP(C_Page_LumiRegulate)
public:
    C_Page_LumiRegulate();
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
 #endif
};

#endif // C_PAGE_LUMIREGULATE_H
