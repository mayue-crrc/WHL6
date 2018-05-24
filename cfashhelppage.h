#ifndef CFASHHELPPAGE_H
#define CFASHHELPPAGE_H

#include "CPage.h"

extern vector<CPage*>  g_PageVec;


#define ID_IMAGEHELPPAGE1    0X0001

class CFASHHelpPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CFASHHelpPage)
public:
    CFASHHelpPage();

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

#endif // CFASHHELPPAGE_H
