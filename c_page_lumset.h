#ifndef C_PAGE_LUMSET_H
#define C_PAGE_LUMSET_H
#include "qsettings.h"
#include "h8.h"
#include "DataBuffer.h"
#include "CPage.h"
#include "qlabel.h"
#include "QFile"
#define ID_PIBLUM_LABEL_PLUS                             0X0001
#define ID_PIBLUM_LABEL_MINUS                            0X0002
#define ID_PIBLUM_LABEL_MANUAL                            0X0003
#define ID_PIBLUM_LABEL_AUTO                            0X0004
#define ID_PIBLUM_LABEL_BARVALUE                            0X0005

#define ID_PIBLUM_LABEL_BACKBAR                            0X0006

extern vector<CPage*>  g_PageVec;

class C_Page_Lumset : public CPage
{
    DECLEAR_MESSAGE_MAP(C_Page_Lumset)
public:
    C_Page_Lumset();

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

    void OnlumplusClk();
    void OnlumminusClk();
    void OnlumautoClk();
    void OnlummaunalClk();

    int m_barvalue;
    int m_initvalue;
    bool m_automode;
#endif
};


#endif // C_PAGE_LUMSET_H
