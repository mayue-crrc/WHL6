#ifndef C_PAGE_SIV_STATUS_HELP_H
#define C_PAGE_SIV_STATUS_HELP_H


#include "CPage.h"

extern vector<CPage*>  g_PageVec;

class CCarStatus1Help2Page : public CPage
{
    DECLEAR_MESSAGE_MAP(CCarStatus1Help2Page)
public:
    CCarStatus1Help2Page();

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
};

#endif // CCarStatus1Help2Page_H

