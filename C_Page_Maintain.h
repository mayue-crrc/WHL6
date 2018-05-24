#ifndef C_PAGE_MAINTAIN_H
#define C_PAGE_MAINTAIN_H


#include "CPage.h"
#include "CRealTimeFaultsWarnningDialog.h"

extern vector<CPage*>  g_PageVec;



#define ID_PICMAINTAIN_BUTTON_POINT1_1          0x0001
#define ID_PICMAINTAIN_BUTTON_POINT1_2          0x0002
#define ID_PICMAINTAIN_BUTTON_POINT1_3          0x0003
#define ID_PICMAINTAIN_BUTTON_POINT1_4          0x0004
#define ID_PICMAINTAIN_BUTTON_POINT1_5          0x0005

#define ID_PICMAINTAIN_BUTTON_POINT2_1          0x0006
#define ID_PICMAINTAIN_BUTTON_POINT2_2          0x0007
#define ID_PICMAINTAIN_BUTTON_POINT2_3          0x0008
#define ID_PICMAINTAIN_BUTTON_POINT2_4          0x0009
#define ID_PICMAINTAIN_BUTTON_POINT2_5          0x000a

#define ID_PICMAINTAIN_BUTTON_POINT3_1          0x000b
#define ID_PICMAINTAIN_BUTTON_POINT3_2          0x000c
#define ID_PICMAINTAIN_BUTTON_POINT3_3          0x000d
#define ID_PICMAINTAIN_BUTTON_POINT3_4          0x000e
#define ID_PICMAINTAIN_BUTTON_POINT3_5          0x000f

#define ID_PICMAINTAIN_BUTTON_POINT4_1          0x0011
#define ID_PICMAINTAIN_BUTTON_POINT4_2          0x0012
#define ID_PICMAINTAIN_BUTTON_POINT4_3          0x0013
#define ID_PICMAINTAIN_BUTTON_POINT4_4          0x0014
#define ID_PICMAINTAIN_BUTTON_POINT4_5          0x0015

#define ID_PICMAINTAIN_BUTTON_POINT5_1          0x0016
#define ID_PICMAINTAIN_BUTTON_POINT5_2          0x0017
#define ID_PICMAINTAIN_BUTTON_POINT5_3          0x0018

#define ID_PICMAINTAIN_REALTIMEFAULT                      0X0940
#define ID_PICMAINTAIN_REALTIMEFAULTCONFIRM               0X0941
#define ID_PICMAINTAIN_REALTIMEFAULTCONFIRMALL            0X0942
#define ID_PICMAINTAIN_REALTIMEFAULTPOS                   0X0943
#define ID_PICMAINTAIN_REALTIMEFAULTCODE                  0X0944
#define ID_PICMAINTAIN_REALTIMEFAULTCATE                  0X0945
class CMaintainPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CMaintainPage)
public:
    CMaintainPage();
    CRealTimeFaultsWarnningDialog dlg;

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

void OnComBtnClkPOINT1_1(); //1_1
void OnComBtnClkPOINT1_2(); //1_2
void OnComBtnClkPOINT1_3(); //1_3
void OnComBtnClkPOINT1_4(); //1_4
void OnComBtnClkPOINT1_5(); //1_5

void OnComBtnClkPOINT2_1(); //2_1
void OnComBtnClkPOINT2_2(); //2_2
void OnComBtnClkPOINT2_3(); //2_3
void OnComBtnClkPOINT2_4(); //2_4
void OnComBtnClkPOINT2_5(); //2_5

void OnComBtnClkPOINT3_1(); //3_1
void OnComBtnClkPOINT3_2(); //3_2
void OnComBtnClkPOINT3_3(); //3_3
void OnComBtnClkPOINT3_4(); //3_4
void OnComBtnClkPOINT3_5(); //3_5

void OnComBtnClkPOINT4_1(); //4_1
void OnComBtnClkPOINT4_2(); //4_2
void OnComBtnClkPOINT4_3(); //4_3
void OnComBtnClkPOINT4_4(); //4_4
void OnComBtnClkPOINT4_5(); //4_5

void OnComBtnClkPOINT5_1(); //5_1
void OnComBtnClkPOINT5_2(); //5_2
void OnComBtnClkPOINT5_3(); //5_3
void OnRealtimefaultBtnClk();
void UpdateRealtimefaults();
private:
    int hiddenbtn1,hiddenbtn2;

    };
#endif
