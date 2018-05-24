#ifndef C_PAGE_TCU_STATUS_HELP_H
#define C_PAGE_TCU_STATUS_HELP_H


#include "CPage.h"

extern vector<CPage*>  g_PageVec;

class CCarStatusHelpPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CCarStatusHelpPage)
public:
    CCarStatusHelpPage();

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
#endif
};


#endif // C_PAGE_TCU_STATUS_HELP_H
