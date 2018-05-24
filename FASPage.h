#ifndef FASPAGE_H
#define FASPAGE_H

#include "CPage.h"
#include "DataBuffer.h"


#define ID_PIBFASPage_TRAIN                   0X0001
#define ID_PIBFASPage_ARROW_RIGHT             0X0002
#define ID_PIBFASPage_ARROW_LEFT              0X0003

#define ID_PIBFASPage_TRAINDIAGRAM            0X0004

#define IDFASPAGE_LABEL_CAR01                 0X0005
#define IDFASPAGE_LABEL_CAR02                 0X0006
#define IDFASPAGE_LABEL_CAR03                 0X0007
#define IDFASPAGE_LABEL_CAR04                 0X0008
#define IDFASPAGE_LABEL_CAR05                 0X0009
#define IDFASPAGE_LABEL_CAR06                 0X000A

#define IDFASPAGE_BTNRESET_CAR01                 0X000B
#define IDFASPAGE_BTNRESET_CAR02                 0X000C
#define IDFASPAGE_BTNRESET_CAR03                 0X000D
#define IDFASPAGE_BTNRESET_CAR04                 0X000E
#define IDFASPAGE_BTNRESET_CAR05                 0X000F
#define IDFASPAGE_BTNRESET_CAR06                 0X0010
#define IDFASPAGE_BTNRESET_CARALL                 0X0011

extern vector<CPage*>  g_PageVec;

class FASPage  : public CPage
{

    DECLEAR_MESSAGE_MAP(FASPage)
public:
    FASPage();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
    void OnLeavePage();
    void UpdateFireState();
    void UpdateFireAlert();
    void UpdateFireIso();
    void UpdateShortCircuitFault();
    void UpdateOpenCircuitFault();
    void UpdateFanFault();
    void UpdatePollut();
    void UpdateCommuFault();
    void SetLabelColor(int id,int colorVal);


private:
    void OnComBtnCar01reset();
    void OnComBtnCar02reset();
    void OnComBtnCar03reset();
    void OnComBtnCar04reset();
    void OnComBtnCar05reset();
    void OnComBtnCar06reset();
    void OnComBtnCarallreset();
    void OnComBtnCar01press();
    void OnComBtnCar02press();
    void OnComBtnCar03press();
    void OnComBtnCar04press();
    void OnComBtnCar05press();
    void OnComBtnCar06press();
    void OnComBtnCarallpress();

    void OnComBtn1Clk();
    void OnComBtn2Clk();
    void OnComBtn3Clk();
    void OnComBtn4Clk();
    void OnComBtn5Clk();
    void OnComBtn6Clk();
    void OnClearVoiceClk();
    void UpResetClk();
#ifdef PAGE_BUTTON_BAR_NEW
    void OnComBtn7Clk();
    void OnComBtn8Clk();
    void OnComBtn12Clk();
#endif
    bool m_bBtnPress;
    int  m_fas_PrePageIndex;
 //   void DrawCarriageCtrl();
    void UpdateRealtimefaults();
    void OnRealtimefaultBtnClk();
    bool car1reset,car2reset,car3reset,car4reset,car5reset,car6reset, carallreset;

  //  void OnReplaceBtnClk();
 //   void OnRealTimeFaultsWarnningIconClk();
};

#endif // FASPAGE_H
