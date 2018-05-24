#ifndef C_PAGE_PISALARMHELP_H
#define C_PAGE_PISALARMHELP_H

#include "CPage.h"

extern vector<CPage*>  g_PageVec;


#define ID_IMAGEHELPPAGE1    0X0001

class C_Page_PisAlarmHelp : public CPage
{
    DECLEAR_MESSAGE_MAP(C_Page_PisAlarmHelp)
public:
    C_Page_PisAlarmHelp();

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
};
#endif // C_PAGE_PISALARMHELP_H
