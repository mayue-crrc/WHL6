#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "CGlobal.h"
#include <qevent.h>
#include <qmutex.h>
#include <qtimer.h>
#include "CPage.h"
#include "C_Ctrl_Log.h"
//common dialog
#include "cdebugdialog.h"
//page head file



#include "CStationSettingPage.h"

#include "CRunStatePage.h"


#include "CRunHelp4Page.h"



#include "CWheelDiaRecordPage.h"

#include "CTractionSystemTestPage.h"
#include "CTractionSystemTestHelpPage.h"

#include "C_Page_Brake_Sefl_Test_Help.h"
#include "C_Page_Brake_Self_Test.h"
#include "C_Page_Brake_Test.h"
#include "C_Page_Brake_Test_Help.h"
#include "C_Page_SIV_Test.h"
#include "C_Page_SIV_Test_Help.h"
#include "C_Page_Help_Reserve.h"
#include "C_Page_SIV_Status.h"
#include "C_Page_SIV_Status_Help.h"
#include "C_Page_Run_Status_Help4.h"
#include "C_Page_TCU_Status.h"
#include "C_Page_Bypass_Status_Help.h"
#include "C_Page_Bypass_Status.h"
#include "C_Page_TCU_Status_Help.h"
#include "C_Page_Net_Status.h"
#include "C_Page_Net_Status_Help.h"
#include "C_Page_UI_ConfirmDialog.h"
//#include "C_Page_UI_Fault_Inforation.h"
#include "CFaultInfoDialog.h"
#include "C_Page_Fault.h"
#include "C_Page_Fault_Help.h"
#include "C_Page_HVAC_Setting.h"
#include "C_Page_HVAC_Setting_Help.h"
#include "C_Page_Station_Setting.h"
#include "C_Page_Emergency_Broadcast.h"
#include "C_Page_Main.h"
#include "C_Page_Maintain.h"
#include "C_Page_Param_Setting.h"
#include "C_Page_Param_Setting_Input.h"
#include "C_Page_Password.h"
#include "C_Page_Realtime_Fault.h"
#include "C_Page_Clear_Record.h"
#include "C_Page_Run_Status_Help1.h"
#include "C_Page_Run_Status_Help2.h"
#include "C_Page_Run_Status_Help3.h"


#include "C_Debug_RIOM_Tc_DI.h"
#include "C_Debug_RIOM_M_DI.h"
#include "C_Debug_RIOM_DO.h"
#include "C_Debug_Main.h"
#include "C_Debug_RIOM_Total.h"
#include "C_Debug_Refresh_Time.h"
#include "C_Page_Brake_Status.h"
#include "C_Debug_RIOM_M_DI_new.h"




#include "CTodayFaultPage.h"
#include "CRunRecordPage.h"
#include "CTryRunTestPage.h"



//#include "CHistoryFaultPage.h"
#include "CTractionSystemFaultPage.h"

#include "CVersionInfoPage.h"
#include "CVialSignalPage.h"
//#include "CRIOMDebugPage.h"

//#include "CCommStatusDebugPage.h"
#include "cpasswordmodifypage.h"
#include "ctimesettingpage.h"
//#include "CFaultInfoPage.h"
#include "CWheelDiaRecordSelectPage.h"
//#include "CCommStatus2Page.h"
//#include "CCommStatus3Page.h"
//#include "CCommStatus4Page.h"
//#include "CCommStatus5Page.h"
//#include "CCommStatus6Page.h"


#include "cwarningdialog.h"
#include "cfaultscommonprocess.h"
#include "serialthread.h"
#include "CRealTimeFaultsWarnningDialog.h"
#include "CSerialDebugDialog.h"
#include "cudpdatapage1.h"
#include "C_Page_Door_Setting.h"
#include "C_Debug_Initial_Setting.h"

#include "C_Page_Brake_Status2.h"
#include "C_Page_Brake_Status3.h"
#include "C_Page_TCU_Status2.h"
#include "C_Page_TCU_Status3.h"
#include "C_Page_TCU_Status4.h"
#include "C_Page_SIV_Status2.h"
#include "C_Page_SIV_Status3.h"
#include "C_Page_Brake_Status_Help.h"
#include "C_Page_TcuBloack_Reason.h"
#include "C_Page_PisAlarm.h"
#include "C_Page_CutOff.h"
#include "C_Page_Reset.h"
#include "C_Page_LumiRegulate.h"
#include "C_Page_EBCutOff.h"
#include "FASPage.h"
#include "c_page_tcublockhelp.h"
#include "cfashhelppage.h"
#include "c_page_pisalarmhelp.h"
#include "c_page_stationset.h"
#include "c_page_leveldebug.h"
#include "c_page_lumset.h"
#include "cpage_screenclose.h"
#include "ceventrecordpage.h"
#include "ctransportmode.h"
#include "c_page_speedset.h"
#include "CRunWarningPage.h"
#include "c_page_adminpwedit.h"
#ifdef USE_MVB_DATA
#include "mvbthread.h"
#endif

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog {
    Q_OBJECT
    DECLEAR_PAGE_MANAGE()
public:
    Dialog(QWidget *parent = 0);
    ~Dialog();

public:
     CSerialDebugDialog serialDebugDlg;
     CRealTimeFaultsWarnningDialog dlg;

private:
    SerialThread* m_serialThread;
    CRunWarningPage* WarningDialog;
    CRunWarningPage* WarningDialogMRE;

#ifdef USE_MVB_DATA
    MvbThread *m_mvbthread;
#endif
    CLog m_log;
    QTimer m_logTimer;
    QTimer dateTimer;
    QTimer UpdateDataTimer;
    QTimer timer4s;
    QTimer timer_settingtime;
    QTimer timer30s;
    QTimer timer5min;
    QTimer timer6sfortiming;
    int fault1scnt;
    bool prefaultflg;
    bool isScreenClosed;
    bool oneactiveflag;
    void ShowFaultPage();

    void SerialDebug();
    bool bSerialDebug;
    int m_preCCULifeSignal;
    int m_10sCCULifeSignalcount;
    //tty_USB
    QFile *ttyUSB_sc;
    //ccu/erm life signal
    bool m_CCUclearflg;


    //screen serial
    int fd;
    int InitSerialPort();
    void CloseSerialPort();
    int ComWrite(char *writeData, int len);
    int ComRead(char *readData);
    void BackLightCtrl();
    void SetWarningTemperature();
    bool isOpen;
    int BAUDRATE;
    const char *MODEMDEVICE;
    int DATABITS;
    int PARITYTYPE;
    int STOPBITS;
    QMutex mutexRead, mutexWrite;
    void HMI_Initial_Set();
    int read_h8_response(int fd);

    void C2Hmorethan3sFunc();
    QDateTime dateTimeCcu;
    // add filter func n s
    void doLogicFault();
protected:
    void keyPressEvent( QKeyEvent * event );
    void mouseMoveEvent( QMouseEvent * event);
    void mousePressEvent(QMouseEvent* event);
    void mouseReleaseEvent(QMouseEvent* event);
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent* e);
    void closeEvent (QCloseEvent* e);
    void reject();
    void globalDataInit();
    void initReceiveData();
    void createSendData();
    void CheckLifeSignalChange();
    bool CheckLifeSignalValue(WORD &temp, WORD data);

signals:
    void setDataSignal( uchar *data, int len );

protected slots:
    void OnLogTimer();
    void OnUpdateData();
    void OnUpdateDate();
    void OnTimer4s();
    void OnTimer30s();
    void OnTimer5min();
    void OnTimer6sfortiming();
    void OnTimer_settingtime();
    void getRevDataSlot( int const pageNo, const QByteArray data, int const length );

    void OpenPort();
    void ClosePort();
    QString SendText(QString sc_com);
    void ReadFile();


    void OnTimer10mins();
    //void OnTimer5s();
    void getclose(bool b);
private:
    Ui::Dialog *ui;
    QTimer timer10mins;
    QTimer timer5s;
    int m_showtips,m_showtips10min;
    bool m_isclose;

    bool MREtips,MREtips10mins,MREturntofault,MREfinish10mins;
    //unsigned short int old_CTDTi_MRP_U16;
    bool old_DTiCT_MRPLow_B1;
};

#endif // DIALOG_H
