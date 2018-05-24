#ifndef C_PAGE_LEVELDEBUG_H
#define C_PAGE_LEVELDEBUG_H
#include "DataBuffer.h"
#include "CPage.h"
#define ID_PIBLVL_LABEL_SPEED                          0X0001
#define ID_PIBLVL_LABEL_CTH                            0X0002
#define ID_PIBLVL_LABEL_TRCPER                         0X0003
#define ID_PIBLVL_LABEL_BRKPER                         0X0004
#define ID_PIBLVL_LABEL_VTCTRC1                        0X0007
#define ID_PIBLVL_LABEL_VTCBRK1                        0X0008
#define ID_PIBLVL_LABEL_VTCTRC2                        0X0009
#define ID_PIBLVL_LABEL_VTCBRK2                        0X000A
#define ID_PIBLVL_LABEL_VTCTRC3                        0X000B
#define ID_PIBLVL_LABEL_VTCBRK3                        0X000C
#define ID_PIBLVL_LABEL_VTCTRC4                        0X000D
#define ID_PIBLVL_LABEL_VTCBRK4                        0X000E
#define ID_PIBLVL_LABEL_CTBTRC                         0X0011
#define ID_PIBLVL_LABEL_CTBBRK                         0X0012
#define ID_PIBLVL_LABEL_RIOMAI1                        0X0013
#define ID_PIBLVL_LABEL_RIOMAI2                        0X0014
#define ID_PIBLVL_LABEL_RIOMAI3                        0X0015
#define ID_PIBLVL_LABEL_RIOMAI4                        0X0016
#define ID_PIBLVL_LABEL_BTCTRC1                        0X0017
#define ID_PIBLVL_LABEL_BTCBRK1                        0X0018
#define ID_PIBLVL_LABEL_BTCTRC2                        0X0019
#define ID_PIBLVL_LABEL_BTCBRK2                        0X001A
#define ID_PIBLVL_LABEL_BTCTRC3                        0X001B
#define ID_PIBLVL_LABEL_BTCBRK3                        0X001C
#define ID_PIBLVL_LABEL_BTCTRC4                        0X001D
#define ID_PIBLVL_LABEL_BTCBRK4                        0X001E
#define ID_PIBLVL_LABEL_HBRELEASED                     0X000F
#define ID_PIBLVL_LABEL_BTCFASTBRK1                        0X0020
#define ID_PIBLVL_LABEL_BTCFASTBRK2                        0X0021
#define ID_PIBLVL_LABEL_BTCFASTBRK3                        0X0022
#define ID_PIBLVL_LABEL_BTCFASTBRK4                        0X0023
#define ID_PIBLVL_LABEL_BTCEMRBRK1                        0X0024
#define ID_PIBLVL_LABEL_BTCEMRBRK2                        0X0025
#define ID_PIBLVL_LABEL_BTCEMRBRK3                        0X0026
#define ID_PIBLVL_LABEL_BTCEMRBRK4                        0X0027
#define ID_PIBLVL_LABEL_VVVFTRC1                        0X00028
#define ID_PIBLVL_LABEL_VVVFBRK1                        0X00029
#define ID_PIBLVL_LABEL_VVVFTRC2                        0X0002a
#define ID_PIBLVL_LABEL_VVVFBRK2                        0X0002b
#define ID_PIBLVL_LABEL_VVVFTRC3                        0X0002c
#define ID_PIBLVL_LABEL_VVVFBRK3                        0X0002d
#define ID_PIBLVL_LABEL_VVVFTRC4                        0X0002e
#define ID_PIBLVL_LABEL_VVVFBRK4                        0X0002f

#define ID_PIBLVL_LABEL_CTHM_PBReleaseC1                0X00030
#define ID_PIBLVL_LABEL_CTHM_PBReleaseC2                0X00031
#define ID_PIBLVL_LABEL_CTHM_PBReleaseC3                0X00032
#define ID_PIBLVL_LABEL_CTHM_PBReleaseC4                0X00033
#define ID_PIBLVL_LABEL_CTHM_PBReleaseC5                0X00034
#define ID_PIBLVL_LABEL_CTHM_PBReleaseC6                0X00035

//#define ID_PIBCSH_LABEL_BCUCANTRANSFERNOMAL                 0X0005
//#define ID_PIBCSH_LABEL_BCUCANTRANSFERABNORMITY             0X0006

extern vector<CPage*>  g_PageVec;

class C_PAGE_LEVELDEBUG : public CPage
{
    DECLEAR_MESSAGE_MAP(C_PAGE_LEVELDEBUG)
public:
    C_PAGE_LEVELDEBUG();

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
    void OnRealtimefaultBtnClk();
    void UpdateRealtimefaults();
};



#endif // C_PAGE_NET_STATUS_HELP_H
