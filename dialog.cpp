#include "dialog.h"
#include "ui_dialog.h"
#include <qdesktopwidget.h>
#include <qapplication.h>
#include <qdatetime.h>
#include <QDateTime>
#include "CRealTimeFaultsWarnningDialog.h"
#include "qdebug.h"
/*
   vector是C++标准模板库（STL）中的一部分，它是一个多功能，能够操作多种数据结构和算法的模板类和函数库
   vector之所以被认为是一个容器，是因为它能够像容器一样存放各种类型的对象，简单地说vector是一个能够存放任意类型的动态数组
   使用g_PageVec容器用于存放每个页面实例的指针，通过这个指针实现不同页面内容的切换
*/
vector<CPage*>  g_PageVec(BKSURFACENUM);


BEGIN_PAGE_MANAGE()
        ADD_PAGE(CCommStatusPage,               ROM_INDEX(PAGE_INDEX_COMMSTATUS))
        ADD_PAGE(CCommStatusHelpPage,           ROM_INDEX(PAGE_INDEX_COMMSTATUSHELP))
        ADD_PAGE(CMainPage,                     ROM_INDEX(PAGE_INDEX_MAIN))
        ADD_PAGE(CInitialSettingPage,           ROM_INDEX(PAGE_INDEX_INITIALSETTING))
 //       ADD_PAGE(CReserveSettingPage,           ROM_INDEX(PAGE_INDEX_RESERVESETTING))
        ADD_PAGE(CStationSettingPage,           ROM_INDEX(PAGE_INDEX_STATIONSETTING))
 //       ADD_PAGE(CDirectionConfirmPage,         ROM_INDEX(PAGE_INDEX_DIRECTIONCONFIRM))
        ADD_PAGE(CRunStatePage,                 ROM_INDEX(PAGE_INDEX_RUNSTATE))
        ADD_PAGE(CRunHelp1Page,                 ROM_INDEX(PAGE_INDEX_RUNHELP1))
        ADD_PAGE(CRunHelp2Page,                 ROM_INDEX(PAGE_INDEX_RUNHELP2))
        ADD_PAGE(CRunHelp3Page,                 ROM_INDEX(PAGE_INDEX_RUNHELP3))
        ADD_PAGE(CRunHelp4Page,                 ROM_INDEX(PAGE_INDEX_RUNHELP4))
        ADD_PAGE(CCarStatus1Page,               ROM_INDEX(PAGE_INDEX_CARSTATUS1))
        ADD_PAGE(CCarStatus1Help1Page,          ROM_INDEX(PAGE_INDEX_CARSTATUS1HELP1))
        ADD_PAGE(CCarStatus1Help2Page,          ROM_INDEX(PAGE_INDEX_CARSTATUS1HELP2))
        ADD_PAGE(CCarStatus1Help3Page,          ROM_INDEX(PAGE_INDEX_CARSTATUS1HELP3))
        ADD_PAGE(CCarStatus2Page,               ROM_INDEX(PAGE_INDEX_CARSTATUS2))
        ADD_PAGE(CCarStatusHelpPage,            ROM_INDEX(PAGE_INDEX_CARSTATUSHELP))
        ADD_PAGE(CCarStatus3Page,               ROM_INDEX(PAGE_INDEX_CARSTATUS3))
        ADD_PAGE(CCarStatus3HelpPage,           ROM_INDEX(PAGE_INDEX_CARSTATUS3HELP))
        ADD_PAGE(CFaultPage,                    ROM_INDEX(PAGE_INDEX_FAULT))
        ADD_PAGE(CHVACSettingPage,              ROM_INDEX(PAGE_INDEX_HVACSETTING))
        ADD_PAGE(CHVACSettingHelpPage,          ROM_INDEX(PAGE_INDEX_HVACSETTINGHELP))
        ADD_PAGE(CMaintainPage,                 ROM_INDEX(PAGE_INDEX_MAINTAIN))
        ADD_PAGE(CParameterSettingPage1,        ROM_INDEX(PAGE_INDEX_PARAMETERSETTING1))
        ADD_PAGE(CParameterSettingPage2,        ROM_INDEX(PAGE_INDEX_PARAMETERSETTING2))
        ADD_PAGE(CWheelDiaRecordPage,           ROM_INDEX(PAGE_INDEX_WHEELDIARECORD))
 //       ADD_PAGE(CDoorTestPage,                 ROM_INDEX(PAGE_INDEX_DOORTEST))
 //       ADD_PAGE(CDoorTestHelpPage,             ROM_INDEX(PAGE_INDEX_DOORTESTHELP))
        ADD_PAGE(CTractionSystemTestPage,	ROM_INDEX(PAGE_INDEX_TRACTIONSYSTEMTEST))
        ADD_PAGE(CTractionSystemTestHelpPage,	ROM_INDEX(PAGE_INDEX_TRACTIONSYSTEMTESTHELP))
        ADD_PAGE(CAccessorySystemTestPage,	ROM_INDEX(PAGE_INDEX_ACCESSORYSYSTEMTEST))
        ADD_PAGE(CAccessorySystemTestHelpPage,	ROM_INDEX(PAGE_INDEX_ACCESSORYSYSTEMTESTHELP))
        ADD_PAGE(CBrakeTestPage,                ROM_INDEX(PAGE_INDEX_BRAKETEST))
        ADD_PAGE(CBrakeTestHelpPage,        	ROM_INDEX(PAGE_INDEX_BRAKETESTHELP))
        ADD_PAGE(CBrakeSelfTestPage,            ROM_INDEX(PAGE_INDEX_BRAKESELFTEST))
        ADD_PAGE(CBrakeSelfTestHelpPage,	ROM_INDEX(PAGE_INDEX_BRAKESELFTESTHELP))
        ADD_PAGE(CTodayFaultPage,               ROM_INDEX(PAGE_INDEX_TODAYFAULT))
        ADD_PAGE(CRunRecordPage,                ROM_INDEX(PAGE_INDEX_RUNRECORD))
        ADD_PAGE(CTryRunTestPage,               ROM_INDEX(PAGE_INDEX_TRYRUNTEST))
        ADD_PAGE(CPasswordPage,                 ROM_INDEX(PAGE_INDEX_PASSWORD))
        ADD_PAGE(CResetRunRecordPage,       	ROM_INDEX(PAGE_INDEX_RESETRUNRECORD))
        ADD_PAGE(CInstancyBroadcastPage,	ROM_INDEX(PAGE_INDEX_INSTANCYBROADCAST))
        ADD_PAGE(CRealTimeFaultPage,            ROM_INDEX(PAGE_INDEX_REALTIMEFAULT))
//        ADD_PAGE(CHistoryFaultPage,             ROM_INDEX(PAGE_INDEX_HISTORYFAULT))
        ADD_PAGE(CTractionSystemFaultPage,	ROM_INDEX(PAGE_INDEX_TRACTIONSYSTEMFAULT))
        ADD_PAGE(CDebugMainPage,                ROM_INDEX(PAGE_INDEX_DEBUGMAIN))
        ADD_PAGE(CVersionInfoPage,              ROM_INDEX(PAGE_INDEX_VERSIONINFO))
        ADD_PAGE(CVialSignalPage,               ROM_INDEX(PAGE_INDEX_VIALSIGNAL))
        ADD_PAGE(CRIOMDebugPage,                ROM_INDEX(PAGE_INDEX_RIOMDEBUG))
        ADD_PAGE(CRefreshTimePage,              ROM_INDEX(PAGE_INDEX_REFRESHTIME))
   //     ADD_PAGE(CCommStatusDebugPage,          ROM_INDEX(PAGE_INDEX_COMMSTATUSDEBUG))
        ADD_PAGE(CPasswordModifyPage,           ROM_INDEX(PAGE_INDEX_PASSWORDMODIFY))
        ADD_PAGE(CTimeSettingPage,              ROM_INDEX(PAGE_INDEX_TIMESETTING))
   //     ADD_PAGE(CFaultInfoPage,                ROM_INDEX(PAGE_INDEX_FAULTINFO))
        ADD_PAGE(CWheelDiaRecordSelectPage,     ROM_INDEX(PAGE_INDEX_WHEELDIARECORDSELECT))
//        ADD_PAGE(CCommStatus2Page,              ROM_INDEX(PAGE_INDEX_COMMSTATUS2))
//        ADD_PAGE(CCommStatus3Page,              ROM_INDEX(PAGE_INDEX_COMMSTATUS3))
//        ADD_PAGE(CCommStatus4Page,              ROM_INDEX(PAGE_INDEX_COMMSTATUS4))
//        ADD_PAGE(CCommStatus5Page,              ROM_INDEX(PAGE_INDEX_COMMSTATUS5))
//        ADD_PAGE(CCommStatus6Page,              ROM_INDEX(PAGE_INDEX_COMMSTATUS6))
        ADD_PAGE(CIOTCTablePage,                ROM_INDEX(PAGE_INDEX_IOTCTABLE))
        ADD_PAGE(CIOMTablePage,                 ROM_INDEX(PAGE_INDEX_IOMTABLE))
        ADD_PAGE(CDOTablePage,                  ROM_INDEX(PAGE_INDEX_DOTABLE))
        ADD_PAGE(CUdpDataPage1,                 ROM_INDEX(PAGE_INDEX_UDPDATA1))
 //       ADD_PAGE(CAW0Setting,                   ROM_INDEX(PAGE_INDEX_AW0SETTING))
        ADD_PAGE(FASPage,                       ROM_INDEX(PAGE_INDEX_FASPage))
//        ADD_PAGE(CRefreshTimePage2,             ROM_INDEX(PAGE_INDEX_REFRESHTIME2))
        ADD_PAGE(CFaultPageHelp,                ROM_INDEX(PAGE_INDEX_FAULTPAGEHELP))
        ADD_PAGE(C_Page_Brake_Status,                ROM_INDEX(PAGE_BRAKESTATUS))
        ADD_PAGE(C_Debug_RIOM_M_DI_new,                ROM_INDEX(PAGE_INDEX_IOMTABLE_NEW))
        ADD_PAGE(C_Page_Door_Setting,                ROM_INDEX(PAGE_INDEX_DOORSETTING))
        ADD_PAGE(C_Debug_Initial_Setting,                ROM_INDEX(PAGE_INDEX_DEBUGSETTING))   
        ADD_PAGE(C_Page_Brake_Status2,              ROM_INDEX(PAGE_INDEX_BRAKESTATUS2))
        ADD_PAGE(C_Page_Brake_Status3,              ROM_INDEX(PAGE_INDEX_BRAKESTATUS3))
        ADD_PAGE(C_Page_TCU_Status2,                ROM_INDEX(PAGE_INDEX_TCUSTATUS2))
        ADD_PAGE(C_Page_TCU_Status3,                ROM_INDEX(PAGE_INDEX_TCUSTATUS3))
        ADD_PAGE(C_Page_TCU_Status4,                ROM_INDEX(PAGE_INDEX_TCUSTATUS4))
        ADD_PAGE(C_Page_SIV_Status2,                ROM_INDEX(PAGE_INDEX_SIVSTATUS2))
        ADD_PAGE(C_Page_SIV_Status3,                ROM_INDEX(PAGE_INDEX_SIVSTATUS3))
        ADD_PAGE(C_Page_Brake_Status_Help,          ROM_INDEX(PAGE_INDEX_BRAKESTATUSHELP))
        ADD_PAGE(C_Page_TcuBloack_Reason,          ROM_INDEX(PAGE_INDEX_TCUBLOCKREASON))
        ADD_PAGE(C_Page_PisAlarm,          ROM_INDEX(PAGE_INDEX_PISALARM))
        ADD_PAGE(C_Page_CutOff,          ROM_INDEX(PAGE_INDEX_CUTOFF))
        ADD_PAGE(C_Page_Reset,          ROM_INDEX(PAGE_INDEX_RESET))
        ADD_PAGE(C_Page_LumiRegulate,          ROM_INDEX(PAGE_INDEX_LUMIREGULATE))
        ADD_PAGE(C_Page_EBCutOff,          ROM_INDEX(PAGE_INDEX_EBCUTOFF))
        ADD_PAGE(C_Page_TcuBlockhelp,          ROM_INDEX(PAGE_INDEX_TCUBLOCKHELPAGE))
        ADD_PAGE(CFASHHelpPage,          ROM_INDEX(PAGE_INDEX_FASHELPPAGE))
        ADD_PAGE(C_Page_PisAlarmHelp,          ROM_INDEX(PAGE_INDEX_PISALARMHELP))
        ADD_PAGE(C_Page_Stationset,          ROM_INDEX(PAGE_INDEX_CSTATIONSET))
        ADD_PAGE(C_PAGE_LEVELDEBUG,          ROM_INDEX(PAGE_INDEX_LEVELDEBUG))
        ADD_PAGE(C_Page_Lumset,          ROM_INDEX(PAGE_INDEX_LUMSET))
        ADD_PAGE(CPage_ScreenClose,          ROM_INDEX(PAGE_INDEX_SCREENCLOSE))
        ADD_PAGE(CEventRecordPage,          ROM_INDEX(PAGE_INDEX_EVENTPAGE))
        ADD_PAGE(CTransportMode,          ROM_INDEX(PAGE_INDEX_TRANSPORTMODE))
        ADD_PAGE(C_Page_Speedset,           ROM_INDEX(PAGE_INDEX_SPEEDSETPAGE))
        ADD_PAGE(C_Page_AdminPWedit,           ROM_INDEX(PAGE_INDEX_ADMINPWEDIT))

END_PAGE_MANAGE()


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->retranslateUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    QDesktopWidget* pDesktop = QApplication::desktop();
    int nScrW = pDesktop->width(), nScrH = pDesktop->height();
    if ((nScrW == SCREEN_W*SCREEN_factor) && (nScrH == SCREEN_H*SCREEN_factor))
    {
        this->showFullScreen();
    }
    else
    {
//        this->setFixedSize(1024, 768);
        this->setFixedSize(int(SCREEN_W*SCREEN_factor), int(SCREEN_H*SCREEN_factor));

        int x = (nScrW - this->width())/2;
        int y = (nScrH - this->height())/2+9;
        this->move(x,y);
    }
    H8::initH8("/dev/ttyUSB_SC");
    WarningDialog = new CRunWarningPage(this);
    WarningDialog->hide();
    WarningDialogMRE = new CRunWarningPage(this);
    WarningDialogMRE->hide();
    globalDataInit();
    //TC1_HMI=1;
    if(TC1_HMI_ini==1)
    {
        TC1_HMI=1;
        TC2_HMI=0;
        system("ifconfig eth0 192.168.2.3");

        //如果显示屏位置同时为1则弹出提示框
        if(TC2_HMI_ini==1)
        {
            QMessageBox::warning(NULL,
                                         "error",
                                         QString("An Error at: \nFile:") +__FILE__+ QString("   Line:") +QString::number(__LINE__)+
                                          "\nsystem.ini is error ! TC1=1 && TC2=1"+QObject::trUtf8("  请联系TMS调试人员!"),
                                         QMessageBox::Ok,QMessageBox::Ok);
        }
    }
    else
    {
        if(TC2_HMI_ini==1)
        {
                TC2_HMI=1;
                TC1_HMI=0;
                system("ifconfig eth0 192.168.2.4");
        }
        else
        {
            QMessageBox::warning(NULL,
                                         "error",
                                         QString("An Error at: \nFile:") +__FILE__+ QString("   Line:") +QString::number(__LINE__)+
                                          "\nsystem.ini is error ! TC1=0 && TC2=0"+QObject::trUtf8("  请联系TMS调试人员!"),
                                         QMessageBox::Ok,QMessageBox::Ok);
            #ifdef LOG_OPEN
                    qWarning()<<"system.ini is not OK! TC1=0 && TC2=0";
            #endif

        }
    }

#ifndef USE_RAND_DATA

    //HMI_Initial_Set();
    //SetWarningTemperature();
    //读报警，关闭显示屏，关闭电源 温度设定值
    //BackLightCtrl(1);
#endif


#ifdef USE_SERIAL_DATA

    m_serialThread  = new SerialThread;
    m_serialThread->render();
//    connect( m_serialThread, SIGNAL( SendReadData(  int, QByteArray, int ) ),
//             this,  SLOT( getRevDataSlot( int, QByteArray, int ) ) );
#endif

#ifdef USE_MVB_DATA

    m_mvbthread  = new MvbThread;
    m_mvbthread->render();
    //writeLog("USE_MVB_DATA\n");
#endif


    //init page
    IMPLEMENT_PAGE_MANAGE()
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    pPage->ChangePage(PAGE_INDEX_RUNSTATE);

    //pPage->ChangePage(PAGE_INDEX_COMMSTATUS);
    //ui->retranslateUi(this);
    //init rand seed
    #ifndef windows_demo
    srand((unsigned int)time(NULL));
    #endif  //windows_demo


    //update date
    connect(&dateTimer,SIGNAL(timeout()),this,SLOT(OnUpdateDate()));
    dateTimer.start(1000);
    //update data timer
    connect(&UpdateDataTimer,SIGNAL(timeout()),this,SLOT(OnUpdateData()));
    UpdateDataTimer.start(200);
    //start 4s timer
    connect(&timer4s,SIGNAL(timeout()),this,SLOT(OnTimer4s()));
    timer4s.start(4000);

    #ifndef windows_demo
    connect(&timer30s,SIGNAL(timeout()),this,SLOT(OnTimer30s()));
    timer30s.start(5000);
    #endif  //windows_demo

    //add mre tips
    connect(&timer10mins,SIGNAL(timeout()),this,SLOT(OnTimer10mins()));
    //connect(&timer5s,SIGNAL(timeout()),this,SLOT(OnTimer5s()));


    connect(&timer5min,SIGNAL(timeout()),this,SLOT(OnTimer5min()));

    connect(&timer6sfortiming,SIGNAL(timeout()),this,SLOT(OnTimer6sfortiming()));


    connect(&timer_settingtime,SIGNAL(timeout()),this,SLOT(OnTimer_settingtime()));
    oneactiveflag = false ;
    isScreenClosed = false;
    fault1scnt = 0;
    prefaultflg = false;
    m_10sCCULifeSignalcount = 0;
    m_CCUclearflg = false;
    m_showtips = 0;
    m_showtips10min = 0;
    m_isclose = false;
    connect(WarningDialogMRE,SIGNAL(sendclose(bool)),this,SLOT(getclose(bool)));
    MREtips = false;
    MREtips10mins = false;
    MREturntofault = false;
    MREfinish10mins = false;
    old_CTDTi_MRP_U16 = 0;
#ifdef LOG_OPEN

//    connect(&m_logTimer,SIGNAL(timeout()),this,SLOT(OnLogTimer()));
//    m_logTimer.start(10000);
#endif

#ifdef LOG_OPEN
//    QString dateStr = GetDateStr();
//    dateStr.replace("-", "");
//    QString timeStr = GetTimeStr();
//    timeStr.replace(':', "");
//    g_logFileName = "/Log_" + dateStr.toStdString() + "_" + timeStr.toStdString() + ".log";
#endif
}

Dialog::~Dialog()
{
    for_each(g_PageVec.begin(), g_PageVec.end(), DELOBJ<CPage*>());
    delete ui;
}

void Dialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Dialog::OnUpdateData()
{
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    if (pPage == NULL)
        return;
    //更新接收数据
    initReceiveData();
    //检测到显示屏时间校准标志位，延时5秒后显示屏同CCU校时 RECEIVE OTHER SIDE HMI SIGNAL
    if(timer_settingtime.isActive())
    {
            qDebug() <<"timer_settingtime.isActive()";

    }
    else
    {
        if(bool(HM1CT_SAVETime_B1|| PUBPORT_SettingTimeEnable_B1)&&(TC2_HMI == 1))
        {
            timer_settingtime.start(5000);
        }else if(bool(HM2CT_SAVETime_B1|| PUBPORT_SettingTimeEnable_B1)&&(TC1_HMI == 1))
        {
            timer_settingtime.start(5000);
        }
    }
    if(CTHM_CCU1On_B1||CTHM_CCU2On_B1)
    {
        C2Hmorethan3sFunc();
    }

    doLogicFault();
    //刷新试试故障信息
    // 上电前30秒 不进行故障判断
    if(Faultfilter30s<100)
    {
        Faultfilter30s++;
    }else
    {
        Faultfilter30s = 800;
    }

    if(Faultfilter30s == 800)
    {
        bool nowfaultflg = bool(FaultsScanning());
        if(nowfaultflg)
        {
            HMiCT_FaultDetection_B1 = true;
        }
        if(HMiCT_FaultDetection_B1)
        {
            if(++fault1scnt > 12)
            {
                HMiCT_FaultDetection_B1 = false;
                fault1scnt = 0;
                nowfaultflg = false;
            }
        }
    }

    //other train HVAC mode logic

    if(TC1_HMI == 1 && CTHM_TC2Active_B1)
    {
        OtherTrainHVACmode = (bool(HM2CT_Add1_B1))<<2|
                             (bool(HM2CT_Add2_B1))<<1|
                             (bool(HM2CT_Reduce1_B1))<<3|
                             (bool(HM2CT_Reduce2_B1))<<4|
                             (bool(HM2CT_UICMode_B1))|
                             (bool(HM2CT_FIRE_B1))<<5|
                             (bool(HM2CT_PREOFF_B1))<<6|
                             (bool(HM2CT_EMVEN_B1))<<7|
                             (bool(HM2CT_VEN_B1))<<8|
                             (bool(HM2CT_AUTO_B1))<<9|
                             (bool(HM2CT_TEST_B1))<<10
                             ;

        if(OtherTrainHVACmode != OtherTrainHVACmode_old)
        {
            OtherTrainsettingHVAC = true;
            HMiCT_Add1_B1 = HM2CT_Add1_B1;
            HMiCT_Add2_B1 = HM2CT_Add2_B1;
            HMiCT_Reduce1_B1 = HM2CT_Reduce1_B1;
            HMiCT_Reduce2_B1 = HM2CT_Reduce2_B1;
            HMiCT_UICMode_B1 = HM2CT_UICMode_B1;
            HMiCT_HVAC1FireMode_B1 = HMiCT_HVAC2FireMode_B1 = HMiCT_HVAC3FireMode_B1 =
            HMiCT_HVAC4FireMode_B1 = HMiCT_HVAC5FireMode_B1 = HMiCT_HVAC6FireMode_B1 = HM2CT_FIRE_B1;
            HMiCT_HVAC1PreOff_B1 = HMiCT_HVAC2PreOff_B1 = HMiCT_HVAC3PreOff_B1 =
            HMiCT_HVAC4PreOff_B1 = HMiCT_HVAC5PreOff_B1 = HMiCT_HVAC6PreOff_B1 = HM2CT_PREOFF_B1;
            HMiCT_HVAC1EmgcyVenti_B1 = HMiCT_HVAC2EmgcyVenti_B1 = HMiCT_HVAC3EmgcyVenti_B1 =
            HMiCT_HVAC4EmgcyVenti_B1 = HMiCT_HVAC5EmgcyVenti_B1 = HMiCT_HVAC6EmgcyVenti_B1 = HM2CT_EMVEN_B1;
            HMiCT_HVAC1Venti_B1 = HMiCT_HVAC2Venti_B1 = HMiCT_HVAC3Venti_B1 =
            HMiCT_HVAC4Venti_B1 = HMiCT_HVAC5Venti_B1 = HMiCT_HVAC6Venti_B1 = HM2CT_VEN_B1;
            HMiCT_HVAC1Auto_B1 = HMiCT_HVAC2Auto_B1 = HMiCT_HVAC3Auto_B1 =
            HMiCT_HVAC4Auto_B1 = HMiCT_HVAC5Auto_B1 = HMiCT_HVAC6Auto_B1 = HM2CT_AUTO_B1;
            HMiCT_HVAC1Test_B1 = HMiCT_HVAC2Test_B1 = HMiCT_HVAC3Test_B1 =
            HMiCT_HVAC4Test_B1 = HMiCT_HVAC5Test_B1 = HMiCT_HVAC6Test_B1 = HM2CT_TEST_B1;
        }
        OtherTrainHVACmode_old = OtherTrainHVACmode;
    }

    if(TC2_HMI == 1 && CTHM_TC1Active_B1)
    {
        OtherTrainHVACmode = (bool(HM1CT_Add1_B1))<<2|
                             (bool(HM1CT_Add2_B1))<<1|
                             (bool(HM1CT_Reduce1_B1))<<3|
                             (bool(HM1CT_Reduce2_B1))<<4|
                             (bool(HM1CT_UICMode_B1))|
                             (bool(HM1CT_FIRE_B1))<<5|
                             (bool(HM1CT_PREOFF_B1))<<6|
                             (bool(HM1CT_EMVEN_B1))<<7|
                             (bool(HM1CT_VEN_B1))<<8|
                             (bool(HM1CT_AUTO_B1))<<9|
                             (bool(HM1CT_TEST_B1))<<10;

        if(OtherTrainHVACmode != OtherTrainHVACmode_old)
        {
            OtherTrainsettingHVAC = true;
            HMiCT_Add1_B1 = HM1CT_Add1_B1;
            HMiCT_Add2_B1 = HM1CT_Add2_B1;
            HMiCT_Reduce1_B1 = HM1CT_Reduce1_B1;
            HMiCT_Reduce2_B1 = HM1CT_Reduce2_B1;
            HMiCT_UICMode_B1 = HM1CT_UICMode_B1;
            HMiCT_HVAC1FireMode_B1 = HMiCT_HVAC2FireMode_B1 = HMiCT_HVAC3FireMode_B1 =
            HMiCT_HVAC4FireMode_B1 = HMiCT_HVAC5FireMode_B1 = HMiCT_HVAC6FireMode_B1 = HM1CT_FIRE_B1;
            HMiCT_HVAC1PreOff_B1 = HMiCT_HVAC2PreOff_B1 = HMiCT_HVAC3PreOff_B1 =
            HMiCT_HVAC4PreOff_B1 = HMiCT_HVAC5PreOff_B1 = HMiCT_HVAC6PreOff_B1 = HM1CT_PREOFF_B1;
            HMiCT_HVAC1EmgcyVenti_B1 = HMiCT_HVAC2EmgcyVenti_B1 = HMiCT_HVAC3EmgcyVenti_B1 =
            HMiCT_HVAC4EmgcyVenti_B1 = HMiCT_HVAC5EmgcyVenti_B1 = HMiCT_HVAC6EmgcyVenti_B1 = HM1CT_EMVEN_B1;
            HMiCT_HVAC1Venti_B1 = HMiCT_HVAC2Venti_B1 = HMiCT_HVAC3Venti_B1 =
            HMiCT_HVAC4Venti_B1 = HMiCT_HVAC5Venti_B1 = HMiCT_HVAC6Venti_B1 = HM1CT_VEN_B1;
            HMiCT_HVAC1Auto_B1 = HMiCT_HVAC2Auto_B1 = HMiCT_HVAC3Auto_B1 =
            HMiCT_HVAC4Auto_B1 = HMiCT_HVAC5Auto_B1 = HMiCT_HVAC6Auto_B1 = HM1CT_AUTO_B1;
            HMiCT_HVAC1Test_B1 = HMiCT_HVAC2Test_B1 = HMiCT_HVAC3Test_B1 =
            HMiCT_HVAC4Test_B1 = HMiCT_HVAC5Test_B1 = HMiCT_HVAC6Test_B1 = HM1CT_TEST_B1;
        }
        OtherTrainHVACmode_old = OtherTrainHVACmode;
    }
    //刷新页面内容
    pPage->ConnectEvent(WM_UPDATEPAGE);

    //弹出提示信息
    if(g_speedlimitvalue == 0 || oneactiveflag)
    {
        WarningDialog->hide();
    }else//非限速状态
    {
        overspeed5km = CTHMI_TrainSpeed_U16 > (g_speedlimitvalue+4) ?true:false;
        overspeed3km = CTHMI_TrainSpeed_U16 > (g_speedlimitvalue+2) ?true:false;
        if(overspeed5km)
        {
            WarningDialog->setGeometry(312,200,424,300);
            WarningDialog->setwarningcolor(1);
            WarningDialog->wariningstr(QObject::trUtf8("严重超速\n请拍急停！！"));

            WarningDialog->show();
        }else if((overspeed3km)
                )
        {
            WarningDialog->setGeometry(312,200,424,300);
            WarningDialog->setwarningcolor(2);
            WarningDialog->wariningstr(QObject::trUtf8("超出限速3km/h\n请注意减速！"));

            WarningDialog->show();
        }else
        {
            WarningDialog->hide();

        }

    }
    //  运输模式 超速提示
    if(CTHM_TransportMode_B1)
    {
        bool transportoverspeed;
        transportoverspeed = CTHMI_TrainSpeed_U16 > (HMiCT_TransModeSpeed_U8+4) ?true:false;
        if(HMiCT_TransModeSpeed_U8 > 0)
        {
            if(transportoverspeed)
            {
                WarningDialog->setGeometry(312,200,424,300);
                WarningDialog->setwarningcolor(1);
                WarningDialog->wariningstr(QObject::trUtf8("运输模式\n超速5km/h以上\n请拍急停！！"));

                WarningDialog->show();
            }else
            {
                WarningDialog->hide();
            }
        }
    }





    //输出电压 网压 网流 速度 牵引制动级位 站点信息
    if (pPage->TestControlExists(IDLB_COM_OutputVol))
    {
        pPage->UpdateOutputVol(IDLB_COM_OutputVol);
    }

    if (pPage->TestControlExists(IDLB_COM_voltage))
    {
        pPage->UpdateVoltage(IDLB_COM_voltage);
    }


    if (pPage->TestControlExists(IDLB_COM_level))//牵引制动级位
    {
        pPage->UpdateTractionLevel(IDLB_COM_level);
    }
    if (pPage->TestControlExists(IDLB_COM_speed))//列车速度
    {
        pPage->UpdateSpeed(IDLB_COM_speed);

    }

    if (pPage->TestControlExists(IDLB_COM_current))
    {

        pPage->UpdateCurrent(IDLB_COM_current);

    }
    if (pPage->TestControlExists(IDLB_COM_CurrentStation))
    {
        pPage->UpdateStation();


    }
    if (pPage->TestControlExists(IDLB_COM_TrainFault))
    {
        pPage->updateFault(IDLB_COM_TrainFault);
    }

    if(CTHM_TransportMode_B1&&(!g_transportmode))
    {
        pPage->ChangePage(PAGE_INDEX_TRANSPORTMODE);
    }

    g_transportmode = CTHM_TransportMode_B1;
    createSendData();
    ////    // 5 mins non-active car close screen
    if(
       (bool(TC2_HMI == 1)&&CTHM_TC1Active_B1)||
       (bool(TC1_HMI == 1)&&CTHM_TC2Active_B1)
      )
    {
        oneactiveflag = true;
    }else
    {
        oneactiveflag = false;
    }


    if(oneactiveflag)
    {
        isScreenClosed = true;
        pPage->ChangePage(PAGE_INDEX_SCREENCLOSE);
    }
    else
    {
        if(isScreenClosed)
        {
            isScreenClosed = false;
            pPage->ChangePage(PAGE_INDEX_RUNSTATE);
        }
    }


    //mre tips
    if(CTDTi_MRP_U16 <700 && old_CTDTi_MRP_U16>=700)
    {
        MREturntofault = true;
        MREtips = true;
        if(!this->timer10mins.isActive())
        {
            this->timer10mins.start(600000);
        }
    }

    if((old_CTDTi_MRP_U16<=750 && CTDTi_MRP_U16>750) || MREfinish10mins == true )
    {
        MREtips = false;
        MREtips10mins = false;
        MREfinish10mins = false;
        this->timer10mins.stop();
    }


    if(MREtips10mins)
    {
        WarningDialogMRE->setGeometry(312,200,WarningDialogMRE->width(),WarningDialogMRE->height());
        WarningDialogMRE->setwarningcolor(1);
        WarningDialogMRE->wariningstr(QObject::trUtf8("总风压力\n低于7bar\n超过十分钟！!"));
        WarningDialogMRE->show();
        WarningDialogMRE->showbutton(true);
        if(m_showtips10min++>25 || this->m_isclose)
        {
            WarningDialogMRE->hide();
            m_showtips10min = 30;
            //MREtips10mins = false;

        }else
        {
            WarningDialogMRE->show();
        }
        m_showtips = 0;

    }else if(MREtips)
    {
        WarningDialogMRE->setGeometry(312,200,WarningDialogMRE->width(),WarningDialogMRE->height());
        WarningDialogMRE->setwarningcolor(2);
        WarningDialogMRE->wariningstr(QObject::trUtf8("总风压力\n低于7bar！"));
        WarningDialogMRE->show();
        WarningDialogMRE->showbutton(false);

        if(m_showtips++>50)
        {
            WarningDialogMRE->hide();
            m_showtips = 60;
        }else
        {
            WarningDialogMRE->show();
        }
        this->m_isclose = false;
        m_showtips10min = 0;

    }else
    {
       m_showtips = 0;
       m_showtips10min = 0;
       WarningDialogMRE->hide();

    }


    old_CTDTi_MRP_U16 = CTDTi_MRP_U16;
}
void Dialog::OnTimer10mins()
{
    if(CTDTi_MRP_U16 < 700 )
    {
        MREtips10mins = true;
    }else
    {
        MREfinish10mins = true;

        MREtips10mins = false;
        MREtips = false;
    }

}
void Dialog::getclose(bool b)
{
    this->m_isclose = b;
}
void Dialog::OnUpdateDate()
{


    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        if (pPage == NULL)
            return;
    if (pPage->TestControlExists(IDLB_COM_TIME))
    {
           {
                QDate date = QDate::currentDate();
                QString str;
                str = QString::number(date.year()) + QObject::trUtf8("-")+
                      QString::number(date.month()) + QObject::trUtf8("-")+
                      QString::number(date.day()) + QObject::trUtf8("");
                pPage->GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);

                QString time = QDateTime::currentDateTime().toString("HH:mm:ss");
                pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);

            }
#ifdef USE_MVB_DATA

   // pixymvb_ForceSwitch();
#endif


    }


//    if((PIS1CT_NextStationID_U16 != temp_NextStation )&&(temp_NextStation!=0))
//    {
//        PIS1CT_CurrntSttnID_U16 = temp_NextStation;
//        temp_NextStation = PIS1CT_NextStationID_U16;
//    }
//    else
//    {
//         temp_NextStation = PIS1CT_NextStationID_U16;
//    }
    PIS1CT_CurrntSttnID_U16 = PIS1CT_StartStationID_U16;

    //send data 28 29 30
//    QTime time = QDateTime::currentDateTime().time();
//    QDate date = QDate::currentDate();
//    time_setting_1 = date.year();
//    time_setting_2 = date.month();
//    time_setting_3 = date.day();
//    time_setting_4 = time.hour();
//    time_setting_5 = time.minute();
//    time_setting_6 = time.second();
//    HMI_send_data30=(time_setting_1-2000)+time_setting_2*256;
//    HMI_send_data31=time_setting_3+time_setting_4*256;
//    HMI_send_data32=time_setting_5+time_setting_6*256;
}

void Dialog::paintEvent(QPaintEvent* /*e*/)
{
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    if (pPage == NULL)
        return;
//    if (pPage->TestControlExists(IDLB_COM_TIME))
//    {
//        QString time = QDateTime::currentDateTime().toString("HH:mm:ss");
//        pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);
//    }
    QPainter painter;
    painter.begin(this);
    painter.drawPixmap(0,0,*(pPage->GetPixmap()));
    painter.end();
}

void Dialog::keyPressEvent( QKeyEvent * event )
{
    if ((event->modifiers() & Qt::ControlModifier)
        && event->key() == Qt::Key_F)
    {
        CDebugDialog dbgDlg(this);
        if (dbgDlg.exec() == QDialog::Accepted)
        {
            this->update();
        }
    }
    else if ((event->modifiers() & Qt::ControlModifier)
        && event->key() == Qt::Key_D)
    {
        if(serialDebugDlg.isHidden())
            serialDebugDlg.show();
    }
    else if (event->key() == Qt::Key_Escape)
    {
        this->close();
    }
    else if((event->modifiers() & Qt::ControlModifier) && event->key() == Qt::Key_D)
    {
        //stop or continue scann fault.
        g_bScannFault = !g_bScannFault;
    }


}

void Dialog::mouseMoveEvent( QMouseEvent * /*event*/)
{
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    pPage->ConnectEvent(WM_MOUSEMOVE);
}

void Dialog::mousePressEvent(QMouseEvent * event)
{
    if (event->button() == Qt::LeftButton)
    {
//        if(oneactiveflag)
//        {
//            if(isScreenClosed)
//            {
//                timer5min.stop();
//                qDebug("open screen");
//                system("xset s reset");//wake up
//                isScreenClosed = false ;
//            }else
//            {
//                timer5min.stop();
//                timer5min.start(10000);
//            }
//        }



        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        pPage->ConnectEvent(event->pos(), WM_LBUTTONDOWN);
    }
}

void Dialog::mouseReleaseEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton)
    {
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        pPage->ConnectEvent(event->pos(),WM_LBUTTONUP);
        pPage->ConnectEvent(event->pos(),WM_LBTNCLICK);
        pPage->ResetButtonState();

        HMiCT_FireAlarm1Rst_B1 = false;
        HMiCT_FireAlarm2Rst_B1 = false;
        HMiCT_FireAlarm3Rst_B1 = false;
        HMiCT_FireAlarm4Rst_B1 = false;
        HMiCT_FireAlarm5Rst_B1 = false;
        HMiCT_FireAlarm6Rst_B1 = false;
        HMiCT_FireAlarmAllRst_B1 = false;

        update();
    }
}

void Dialog::reject()
{
    close();
}

void Dialog::closeEvent(QCloseEvent* /*e*/)
{
    system("killall WHL6");
}

void Dialog::globalDataInit()
{
    g_history_faults_pagenum = 1;
    g_current_faults_pagenum = 1;

    HistoryFaultsListInit();

    GetINIInfo();

}

void Dialog::initReceiveData()
{

    //用于模拟变量
    SerialDebug();

#ifdef USE_RAND_DATA

    for(int i=0;i<4000;i++)
    {
        g_dataBuffer_Display[i]=g_dataBuffer_MVB[i];
        g_dataBuffer_WH_Display[i]=g_dataBuffer_MVB[i];


    }



   // BitSet(g_dataBuffer_MVB[1872],7,1);  //ccu1 online


//    BitSet(g_dataBuffer_MVB[1877],0,1);  //tcu4 online
//    BitSet(g_dataBuffer_MVB[1877],1,1);
//    BitSet(g_dataBuffer_MVB[1877],2,1);
//    BitSet(g_dataBuffer_MVB[1877],3,1);

//    BitSet(g_dataBuffer_MVB[1877],7,1);  //bcu1 online
//    BitSet(g_dataBuffer_MVB[1877],6,1);
//    BitSet(g_dataBuffer_MVB[1877],4,1);
//    BitSet(g_dataBuffer_MVB[466],14,1);  //bcu1 is master

//    BitSet(g_dataBuffer_MVB[1877],5,1);  //bcu3 online
//    BitSet(g_dataBuffer_MVB[466+192],14,1);  //bcu3 is master

//    BitSet(g_dataBuffer_MVB[1877],15,1);  //siv online
//    BitSet(g_dataBuffer_MVB[1877],14,1);


//    g_dataBuffer_MVB[1878]=65535;


//    BitSet(g_dataBuffer_MVB[1885],7,1);   //CTHM_RunForward_B1
//    BitSet(g_dataBuffer_MVB[1885],4,1);   //CTHM_TC1Active_B1
//    BitSet(g_dataBuffer_MVB[1885],1,1);  //CTHM_EmgcyBrakeState_B1



//    g_dataBuffer_MVB[1490]=g_dataBuffer_MVB[1490]/256 +5; //TC1 制动制冷

//    BitSet(g_dataBuffer_MVB[1492],7,1);   //TC1 集控
//    BitSet(g_dataBuffer_MVB[1874],6,1);
//    BitSet(g_dataBuffer_MVB[1874],5,1);


#endif

#ifndef USE_RAND_DATA

    if(m_10sCCULifeSignalcount++ > 10)
    {
        m_10sCCULifeSignalcount = 0;
        if(m_preCCULifeSignal==CTALL_LifeSign_U16)
        {
            m_CCUclearflg = true;
        }else
        {
            m_CCUclearflg = false;
        }
        m_preCCULifeSignal = CTALL_LifeSign_U16;

    }

    if(m_CCUclearflg)
    {
        for(int j=0;j<5;j++)//clear online signals
        {
            g_dataBuffer_MVB[1872+j] = 0;
        }
        g_dataBuffer_MVB[1872+5] = g_dataBuffer_MVB[1872+5] & 0xff0f;

    }
    for(int i=0;i<4000;i++)
    {
         g_dataBuffer_WH_Display[i]=g_dataBuffer_MVB[i];
         g_dataBuffer_Display[i]=g_dataBuffer_MVB[i];
    }






    //CCU生命信号不变则清零所有生命信号标志位
//    if (Bit(hmi_485_error,4))
//    {
//        for(int j=0;j<8;j++)
//        {
//            g_dataBuffer_Display[1872+j] = 0;
//        }

//    }
#endif
    //用于判断对端显示屏 发送的车号设置，轮径设置标志位 跳变延（取下降沿）
    if(TC1_HMI==1)
    {   //g_dataBuffer_UDP_2
             g_dataBuffer_UDP_2[9]=g_dataBuffer_Display[415]^g_dataBuffer_UDP[9];
                if(g_dataBuffer_UDP_2[9])//1872
                {
                    if(g_dataBuffer_UDP_2[9]& bit1)
                    {
                        if(g_dataBuffer_Display[415]& bit1)
                        {

                        }
                        else
                        {
                            // do write csv
                        }

                    }

                }

                g_dataBuffer_UDP[9]=g_dataBuffer_Display[415]  ;

    }
    else
    {
            g_dataBuffer_UDP_2[9]=g_dataBuffer_Display[351]^g_dataBuffer_UDP[9];
               if(g_dataBuffer_UDP_2[9])//1872
               {
                   if(g_dataBuffer_UDP_2[9]& bit1)
                   {
                       if(g_dataBuffer_Display[351]& bit1)
                       {

                       }
                       else
                       {
                           // do write csv
                       }

                   }

               }

               g_dataBuffer_UDP[9]=g_dataBuffer_Display[351]  ;

    }
    //用于判断CCU发送的生命信号 跳变延
    for(int j=0;j<8;j++)
    {
        g_dataBuffer_UDP_2[j]=g_dataBuffer_Display[1872+j]^g_dataBuffer_UDP[j];

    }



    if(g_dataBuffer_UDP_2[0])//1872
    {
        if(g_dataBuffer_UDP_2[0]& bit7)
        {
            if(g_dataBuffer_Display[1872]& bit7)
            {
                g_ccu1_comm_err_flg=false;
            }
            else
            {
                g_ccu1_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[0]& bit6)
        {
            if(g_dataBuffer_Display[1872]& bit6)
            {
                g_ccu2_comm_err_flg=false;
            }
            else
            {
                g_ccu2_comm_err_flg=true;
            }

        }

        if(m_CCUclearflg)
        {
            g_ccu1_comm_err_flg=true;
            g_ccu2_comm_err_flg=true;
        }

        if(g_dataBuffer_UDP_2[0]& bit5)
        {
            if(g_dataBuffer_Display[1872]& bit5)
            {
                g_erm1_comm_err_flg=false;
            }
            else
            {
                g_erm1_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[0]& bit4)
        {
            if(g_dataBuffer_Display[1872]& bit4)
            {
                g_erm2_comm_err_flg=false;
            }
            else
            {
                g_erm2_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[0]& bit3)
        {
            if(g_dataBuffer_Display[1872]& bit3)
            {
                g_hmi1_comm_err_flg=false;
            }
            else
            {
                g_hmi1_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[0]& bit2)
        {
            if(g_dataBuffer_Display[1872]& bit2)
            {
                g_hmi2_comm_err_flg=false;
            }
            else
            {
                g_hmi2_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[0]& bit15)
        {
            if(g_dataBuffer_Display[1872]& bit15)
            {
                g_riom1_gw123_comm_err_flg=false;
            }
            else
            {
                g_riom1_gw123_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[0]& bit14)
        {
            if(g_dataBuffer_Display[1872]& bit14)
            {
                g_riom2_gw123_comm_err_flg=false;
            }
            else
            {
                g_riom2_gw123_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[0]& bit13)
        {
            if(g_dataBuffer_Display[1872]& bit13)
            {
                g_riom3_gw123_comm_err_flg=false;
            }
            else
            {
                g_riom3_gw123_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[0]& bit12)
        {
            if(g_dataBuffer_Display[1872]& bit12)
            {
                g_riom4_gw123_comm_err_flg=false;
            }
            else
            {
                g_riom4_gw123_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[0]& bit11)
        {
            if(g_dataBuffer_Display[1872]& bit11)
            {
                g_riom5_gw123_comm_err_flg=false;
            }
            else
            {
                g_riom5_gw123_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[0]& bit10)
        {
            if(g_dataBuffer_Display[1872]& bit10)
            {
                g_riom6_gw123_comm_err_flg=false;
            }
            else
            {
                g_riom6_gw123_comm_err_flg=true;
            }

        }
    }

    if(g_dataBuffer_UDP_2[3])//1875
    {
        if(g_dataBuffer_UDP_2[3]& bit15)
        {
            if(g_dataBuffer_Display[1875]& bit15)
            {
                g_acu1_comm_err_flg=false;
            }
            else
            {
                g_acu1_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[3]& bit14)
        {
            if(g_dataBuffer_Display[1875]& bit14)
            {
                g_acu2_comm_err_flg=false;
            }
            else
            {
                g_acu2_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[3]& bit13)
        {
            if(g_dataBuffer_Display[1875]& bit13)
            {
                g_rec1_comm_err_flg=false;
            }
            else
            {
                g_rec1_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[3]& bit12)
        {
            if(g_dataBuffer_Display[1875]& bit12)
            {
                g_rec2_comm_err_flg=false;
            }
            else
            {
                g_rec2_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[3]& bit11)
        {
            if(g_dataBuffer_Display[1875]& bit11)
            {
                g_door1_comm_err_flg=false;
            }
            else
            {
                g_door1_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[3]& bit10)
        {
            if(g_dataBuffer_Display[1875]& bit10)
            {
                g_door2_comm_err_flg=false;
            }
            else
            {
                g_door2_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[3]& bit9)
        {
            if(g_dataBuffer_Display[1875]& bit9)
            {
                g_door3_comm_err_flg=false;
            }
            else
            {
                g_door3_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[3]& bit8)
        {
            if(g_dataBuffer_Display[1875]& bit8)
            {
                g_door4_comm_err_flg=false;
            }
            else
            {
                g_door4_comm_err_flg=true;
            }
        }
        if(g_dataBuffer_UDP_2[3]& bit7)
        {
            if(g_dataBuffer_Display[1875]& bit7)
            {
                g_bcu1_comm_err_flg=false;
            }
            else
            {
                g_bcu1_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[3]& bit6)
        {
            if(g_dataBuffer_Display[1875]& bit6)
            {
                g_bcu2_comm_err_flg=false;
            }
            else
            {
                g_bcu2_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[3]& bit5)
        {
            if(g_dataBuffer_Display[1875]& bit5)
            {
                g_bcu3_comm_err_flg=false;
            }
            else
            {
                g_bcu3_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[3]& bit4)
        {
            if(g_dataBuffer_Display[1875]& bit4)
            {
                g_bcu4_comm_err_flg=false;
            }
            else
            {
                g_bcu4_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[3]& bit3)
        {
            if(g_dataBuffer_Display[1875]& bit3)
            {
                g_tcu1_comm_err_flg=false;
            }
            else
            {
                g_tcu1_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[3]& bit2)
        {
            if(g_dataBuffer_Display[1875]& bit2)
            {
                g_tcu2_comm_err_flg=false;
            }
            else
            {
                g_tcu2_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[3]& bit1)
        {
            if(g_dataBuffer_Display[1875]& bit1)
            {
                g_tcu3_comm_err_flg=false;
            }
            else
            {
                g_tcu3_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[3]& bit0)
        {
            if(g_dataBuffer_Display[1875]& bit0)
            {
                g_tcu4_comm_err_flg=false;
            }
            else
            {
                g_tcu4_comm_err_flg=true;
            }
        }
    }

    if(g_dataBuffer_UDP_2[4])//1876
    {
        if(g_dataBuffer_UDP_2[4]& bit7)
        {
            if(g_dataBuffer_Display[1876]& bit7)
            {
                g_door5_comm_err_flg=false;
            }
            else
            {
                g_door5_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[4]& bit6)
        {
            if(g_dataBuffer_Display[1876]& bit6)
            {
                g_door6_comm_err_flg=false;
            }
            else
            {
                g_door6_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[4]& bit5)
        {
            if(g_dataBuffer_Display[1876]& bit5)
            {
                g_door7_comm_err_flg=false;
            }
            else
            {
                g_door7_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[4]& bit4)
        {
            if(g_dataBuffer_Display[1876]& bit4)
            {
                g_door8_comm_err_flg=false;
            }
            else
            {
                g_door8_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[4]& bit3)
        {
            if(g_dataBuffer_Display[1876]& bit3)
            {
                g_door9_comm_err_flg=false;
            }
            else
            {
                g_door9_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[4]& bit2)
        {
            if(g_dataBuffer_Display[1876]& bit2)
            {
                g_door10_comm_err_flg=false;
            }
            else
            {
                g_door10_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[4]& bit1)
        {
            if(g_dataBuffer_Display[1876]& bit1)
            {
                g_door11_comm_err_flg=false;
            }
            else
            {
                g_door11_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[4]& bit0)
        {
            if(g_dataBuffer_Display[1876]& bit0)
            {
                g_door12_comm_err_flg=false;
            }
            else
            {
                g_door12_comm_err_flg=true;
            }
        }
        if(g_dataBuffer_UDP_2[4]& bit15)
        {
            if(g_dataBuffer_Display[1876]& bit15)
            {
                g_pis1_comm_err_flg=false;
            }
            else
            {
                g_pis1_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[4]& bit14)
        {
            if(g_dataBuffer_Display[1876]& bit14)
            {
                g_pis2_comm_err_flg=false;
            }
            else
            {
                g_pis2_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[4]& bit13)
        {
            if(g_dataBuffer_Display[1876]& bit13)
            {
                g_hvac1_comm_err_flg=false;
            }
            else
            {
                g_hvac1_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[4]& bit12)
        {
            if(g_dataBuffer_Display[1876]& bit12)
            {
                g_hvac2_comm_err_flg=false;
            }
            else
            {
                g_hvac2_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[4]& bit11)
        {
            if(g_dataBuffer_Display[1876]& bit11)
            {
                g_hvac3_comm_err_flg=false;
            }
            else
            {
                g_hvac3_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[4]& bit10)
        {
            if(g_dataBuffer_Display[1876]& bit10)
            {
                g_hvac4_comm_err_flg=false;
            }
            else
            {
                g_hvac4_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[4]& bit9)
        {
            if(g_dataBuffer_Display[1876]& bit9)
            {
                g_hvac5_comm_err_flg=false;
            }
            else
            {
                g_hvac5_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[4]& bit8)
        {
            if(g_dataBuffer_Display[1876]& bit8)
            {
                g_hvac6_comm_err_flg=false;
            }
            else
            {
                g_hvac6_comm_err_flg=true;
            }
        }
    }

    if(g_dataBuffer_UDP_2[5])//1877
    {

       if(g_dataBuffer_UDP_2[5]& bit7)
       {
           if(g_dataBuffer_Display[1877]& bit7)
           {
               g_atc1_comm_err_flg=false;
           }
           else
           {
               g_atc1_comm_err_flg=true;
           }

       }

       if(g_dataBuffer_UDP_2[5]& bit5)
      {
          if(g_dataBuffer_Display[1877]& bit5)
          {
              g_rtu1_comm_err_flg=false;
          }
          else
          {
              g_rtu1_comm_err_flg=true;
          }

      }
      if(g_dataBuffer_UDP_2[5]& bit4)
      {
          if(g_dataBuffer_Display[1877]& bit4)
          {
             g_rtu2_comm_err_flg=false;
          }
          else
          {
              g_rtu2_comm_err_flg=true;
          }
      }

    }


    for(int j=0;j<8;j++)// to old
    {
        g_dataBuffer_UDP[j]=g_dataBuffer_Display[1872+j]  ;
    }
    //运行数据选择:ERM1在线
    if(CTHM_ERM1On_B1)
    {
        for(int j=0;j<64;j++)
        {
              g_dataBuffer_WH_Display[208+j]=g_dataBuffer_MVB[208+j];
        }
    }else if(CTHM_ERM2On_B1)
    {
        for(int j=0;j<64;j++)
        {
              g_dataBuffer_WH_Display[208+j]=g_dataBuffer_MVB[272+j];
        }
    }



    //PIS 数据选择
    if(CTHMI_PIS1On_B1||CTHMI_PIS2On_B1)
    {
        if(CTHM_PIS1Active_B1&&CTHMI_PIS1On_B1)
        {
            for(int j=0;j<32;j++)
            {
                  g_dataBuffer_WH_Display[1648+j]=g_dataBuffer_MVB[1648+j];
            }
        } else if(CTHM_PIS2Active_B1&&CTHMI_PIS2On_B1)
        {
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1648+j]=g_dataBuffer_MVB[1648+32+j];
            }
        }else
        {
            for(int j=0;j<32;j++)
            {
                  g_dataBuffer_WH_Display[1648+j]=g_dataBuffer_MVB[1648+j];
            }
        }
    }else
    {
        for(int j=0;j<32;j++)
        {
              g_dataBuffer_WH_Display[1648+j]=0;
        }
    }






    /********   选择制动主从  WH    ****/
    //BCU1/2 is Master
    if(CTHMI_BCU1On_B1&&CTHMI_BCU2On_B1)
    {
        if(Bit(g_dataBuffer_MVB[368+144+11],13)==1) //1 master
        {
            for(int j=0;j<96;j++)
            {
                  g_dataBuffer_WH_Display[464+j]=g_dataBuffer_MVB[464+j];
            }
        }else if(Bit(g_dataBuffer_MVB[368+144+11+96],13)==1) //2 master
        {
            for(int j=0;j<96;j++)
            {
                  g_dataBuffer_WH_Display[464+j]=g_dataBuffer_MVB[464+96+j];
            }
        }else                                               //1 master
        {
            for(int j=0;j<96;j++)
            {
                  g_dataBuffer_WH_Display[464+j]=g_dataBuffer_MVB[464+j];
            }
        }
    }else if(CTHMI_BCU1On_B1)
    {
        for(int j=0;j<96;j++)
        {
              g_dataBuffer_WH_Display[464+j]=g_dataBuffer_MVB[464+j];
        }
    }else if(CTHMI_BCU2On_B1)
    {
        for(int j=0;j<96;j++)
        {
              g_dataBuffer_WH_Display[464+j]=g_dataBuffer_MVB[464+96+j];
        }
    }else
    {
        for(int j=0;j<96;j++)
        {
              g_dataBuffer_WH_Display[464+j]=0;
        }
    }

    //BCU3/4 is Master
    if(CTHMI_BCU3On_B1&&CTHMI_BCU4On_B1)
    {
        if(Bit(g_dataBuffer_MVB[368+144+11+192],13)==1) // 3 master
        {
            for(int j=0;j<96;j++)
            {
                g_dataBuffer_WH_Display[464+192+j]=g_dataBuffer_MVB[464+192+j];
            }
        }else if(Bit(g_dataBuffer_MVB[368+144+11+288],13)==1 ) //4 master
        {
            for(int j=0;j<96;j++)
            {
                g_dataBuffer_WH_Display[464+192+j]=g_dataBuffer_MVB[464+288+j];
            }
        }else                                               //4 master
        {
            for(int j=0;j<96;j++)
            {
                g_dataBuffer_WH_Display[464+192+j]=g_dataBuffer_MVB[464+288+j];
            }
        }
    }else if(CTHMI_BCU3On_B1)
    {
        for(int j=0;j<96;j++)
        {
            g_dataBuffer_WH_Display[464+192+j]=g_dataBuffer_MVB[464+192+j];
        }
    }else if(CTHMI_BCU4On_B1)
    {
        for(int j=0;j<96;j++)
        {
            g_dataBuffer_WH_Display[464+192+j]=g_dataBuffer_MVB[464+288+j];
        }
    }else
    {
        for(int j=0;j<96;j++)
        {
            g_dataBuffer_WH_Display[464+192+j]=0;
        }
    }

    // 1 车厢 EDCU1

    if(CTHMI_EDCU1On_B1&&CTHMI_EDCU2On_B1)///both edcu12 online
    {
        if((g_dataBuffer_MVB[1118]/256==1)^(g_dataBuffer_MVB[1118+32]/256==1))////edcu1or2 master
        {
            if(g_dataBuffer_MVB[1118]/256==1)//edcu1 master
            {
                for(int j=0;j<32;j++)
                {
                    g_dataBuffer_WH_Display[1104+j]=g_dataBuffer_MVB[1104+j];

                    //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或
                   if ( (Bit(g_dataBuffer_WH_Display[1120],8) )  )
                   {
                       che1_door1 = 1;
                   }
                   else
                   {
                       che1_door1 = 0;
                   }
                   if ( (Bit(g_dataBuffer_WH_Display[1120],9) ) )
                   {
                       che1_door2 = 1;
                   }
                   else
                   {
                       che1_door2 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120],10) )  )
                   {
                       che1_door3 = 1;
                   }
                   else
                   {
                       che1_door3 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120],11) )  )
                   {
                       che1_door4 = 1;
                   }
                   else
                   {
                       che1_door4 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120],12) )  )
                   {
                       che1_door5 = 1;
                   }
                   else
                   {
                       che1_door5 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120],13) )  )
                   {
                       che1_door6 = 1;
                   }
                   else
                   {
                       che1_door6 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120],14) )  )
                   {
                       che1_door7 = 1;
                   }
                   else
                   {
                       che1_door7 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120],15) )  )
                   {
                       che1_door8 = 1;
                   }
                   else
                   {
                       che1_door8 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120],0) )  )
                   {
                       che1_door9 = 1;
                   }
                   else
                   {
                       che1_door9 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120],1) )  )
                   {
                       che1_door10 = 1;
                   }
                   else
                   {
                       che1_door10 = 0;
                   }

                }
            }
            else if((g_dataBuffer_MVB[1118+32]/256==1))//edcu2 master
            {
                for(int j=0;j<32;j++)
                {
                    g_dataBuffer_WH_Display[1104+j]=g_dataBuffer_MVB[1104+32+j];

                    //DRiCT_Dr1SttsVld_B1	门2状态可信	1=激活    每节车厢两个门网关的信号相或
                   if ( (Bit(g_dataBuffer_WH_Display[1120],8) )  )
                   {
                       che1_door1 = 1;
                   }
                   else
                   {
                       che1_door1 = 0;
                   }
                   if ( (Bit(g_dataBuffer_WH_Display[1120],9) ) )
                   {
                       che1_door2 = 1;
                   }
                   else
                   {
                       che1_door2 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120],10) )  )
                   {
                       che1_door3 = 1;
                   }
                   else
                   {
                       che1_door3 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120],11) )  )
                   {
                       che1_door4 = 1;
                   }
                   else
                   {
                       che1_door4 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120],12) )  )
                   {
                       che1_door5 = 1;
                   }
                   else
                   {
                       che1_door5 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120],13) )  )
                   {
                       che1_door6 = 1;
                   }
                   else
                   {
                       che1_door6 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120],14) )  )
                   {
                       che1_door7 = 1;
                   }
                   else
                   {
                       che1_door7 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120],15) )  )
                   {
                       che1_door8 = 1;
                   }
                   else
                   {
                       che1_door8 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120],0) )  )
                   {
                       che1_door9 = 1;
                   }
                   else
                   {
                       che1_door9 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120],1) )  )
                   {
                       che1_door10 = 1;
                   }
                   else
                   {
                       che1_door10 = 0;
                   }

                }
            }

        }
        else if((g_dataBuffer_MVB[1118]/256==3)&&(g_dataBuffer_MVB[1118+32]/256==3))//state == 3 get vaild door word
        {

            if((Bit(g_dataBuffer_MVB[1120],8)==1)^(Bit(g_dataBuffer_MVB[1152],8)==1))//door1
            {
                if(Bit(g_dataBuffer_MVB[1120],8)==1)
                {
                    che1_door1 = 1;

                    g_dataBuffer_WH_Display[1105]=g_dataBuffer_MVB[1105];
                    g_dataBuffer_WH_Display[1121]=g_dataBuffer_MVB[1121];
                }
                else if(Bit(g_dataBuffer_MVB[1152],8)==1)
                {
                    che1_door1 = 1;

                    g_dataBuffer_WH_Display[1105]=g_dataBuffer_MVB[1105+32];
                    g_dataBuffer_WH_Display[1121]=g_dataBuffer_MVB[1121+32];
                }

            }
            else //both vaild\invaild  = 0
            {
                che1_door1 = 0;

                g_dataBuffer_WH_Display[1105]=0;
                g_dataBuffer_WH_Display[1121]=0;
            }


            if((Bit(g_dataBuffer_MVB[1120],9)==1)^(Bit(g_dataBuffer_MVB[1152],9)==1))///door2
            {
                if(Bit(g_dataBuffer_MVB[1120],9)==1)
                {
                    che1_door2 = 1;

                    g_dataBuffer_WH_Display[1106]=g_dataBuffer_MVB[1106];
                    g_dataBuffer_WH_Display[1122]=g_dataBuffer_MVB[1122];
                }
                else if(Bit(g_dataBuffer_MVB[1152],9)==1)
                {
                    che1_door2 = 1;

                    g_dataBuffer_WH_Display[1106]=g_dataBuffer_MVB[1106+32];
                    g_dataBuffer_WH_Display[1122]=g_dataBuffer_MVB[1122+32];
                }

            }
            else //both vaild\invaild  = 0
            {
                che1_door2 = 0;

                g_dataBuffer_WH_Display[1106]=0;
                g_dataBuffer_WH_Display[1122]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120],10)==1)^(Bit(g_dataBuffer_MVB[1152],10)==1))///door3
            {
                if(Bit(g_dataBuffer_MVB[1120],10)==1)
                {
                    che1_door3 = 1;

                    g_dataBuffer_WH_Display[1107]=g_dataBuffer_MVB[1107];
                    g_dataBuffer_WH_Display[1123]=g_dataBuffer_MVB[1123];
                }
                else if(Bit(g_dataBuffer_MVB[1152],10)==1)
                {
                    che1_door3 = 1;

                    g_dataBuffer_WH_Display[1107]=g_dataBuffer_MVB[1107+32];
                    g_dataBuffer_WH_Display[1123]=g_dataBuffer_MVB[1123+32];
                }

            }
            else //both vaild\invaild  = 0
            {
                che1_door3 = 0;

                g_dataBuffer_WH_Display[1107]=0;
                g_dataBuffer_WH_Display[1123]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120],11)==1)^(Bit(g_dataBuffer_MVB[1152],11)==1))///door4
            {
                if(Bit(g_dataBuffer_MVB[1120],11)==1)
                {
                    che1_door4 = 1;

                    g_dataBuffer_WH_Display[1108]=g_dataBuffer_MVB[1108];
                    g_dataBuffer_WH_Display[1124]=g_dataBuffer_MVB[1124];
                }
                else if(Bit(g_dataBuffer_MVB[1152],11)==1)
                {
                    che1_door4 = 1;

                    g_dataBuffer_WH_Display[1108]=g_dataBuffer_MVB[1108+32];
                    g_dataBuffer_WH_Display[1124]=g_dataBuffer_MVB[1124+32];
                }

            }
            else //both vaild\invaild  = 0
            {
                che1_door4 = 0;

                g_dataBuffer_WH_Display[1108]=0;
                g_dataBuffer_WH_Display[1124]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120],12)==1)^(Bit(g_dataBuffer_MVB[1152],12)==1))///door5
            {
                if(Bit(g_dataBuffer_MVB[1120],12)==1)
                {
                    che1_door5 = 1;

                    g_dataBuffer_WH_Display[1109]=g_dataBuffer_MVB[1109];
                    g_dataBuffer_WH_Display[1125]=g_dataBuffer_MVB[1125];
                }
                else if(Bit(g_dataBuffer_MVB[1152],12)==1)
                {
                    che1_door5 = 1;

                    g_dataBuffer_WH_Display[1109]=g_dataBuffer_MVB[1109+32];
                    g_dataBuffer_WH_Display[1125]=g_dataBuffer_MVB[1125+32];
                }

            }
            else //both vaild\invaild  = 0
            {
                che1_door5 = 0;

                g_dataBuffer_WH_Display[1109]=0;
                g_dataBuffer_WH_Display[1125]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120],13)==1)^(Bit(g_dataBuffer_MVB[1152],13)==1))///door6
            {
                if(Bit(g_dataBuffer_MVB[1120],13)==1)
                {
                    che1_door6 = 1;

                    g_dataBuffer_WH_Display[1110]=g_dataBuffer_MVB[1110];
                    g_dataBuffer_WH_Display[1126]=g_dataBuffer_MVB[1126];
                }
                else if(Bit(g_dataBuffer_MVB[1152],13)==1)
                {
                    che1_door6 = 1;

                    g_dataBuffer_WH_Display[1110]=g_dataBuffer_MVB[1110+32];
                    g_dataBuffer_WH_Display[1126]=g_dataBuffer_MVB[1126+32];
                }

            }
            else //both vaild\invaild  = 0
            {
                che1_door6 = 0;

                g_dataBuffer_WH_Display[1110]=0;
                g_dataBuffer_WH_Display[1126]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120],14)==1)^(Bit(g_dataBuffer_MVB[1152],14)==1))///door7
            {
                if(Bit(g_dataBuffer_MVB[1120],14)==1)
                {
                    che1_door7 = 1;

                    g_dataBuffer_WH_Display[1111]=g_dataBuffer_MVB[1111];
                    g_dataBuffer_WH_Display[1127]=g_dataBuffer_MVB[1127];
                }
                else if(Bit(g_dataBuffer_MVB[1152],14)==1)
                {
                    che1_door7 = 1;

                    g_dataBuffer_WH_Display[1111]=g_dataBuffer_MVB[1111+32];
                    g_dataBuffer_WH_Display[1127]=g_dataBuffer_MVB[1127+32];
                }

            }
            else //both vaild\invaild  = 0
            {
                che1_door7 = 0;

                g_dataBuffer_WH_Display[1111]=0;
                g_dataBuffer_WH_Display[1127]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120],15)==1)^(Bit(g_dataBuffer_MVB[1152],15)==1))///door8
            {
                if(Bit(g_dataBuffer_MVB[1120],15)==1)
                {
                    che1_door8 = 1;

                    g_dataBuffer_WH_Display[1112]=g_dataBuffer_MVB[1112];
                    g_dataBuffer_WH_Display[1128]=g_dataBuffer_MVB[1128];
                }
                else if(Bit(g_dataBuffer_MVB[1152],15)==1)
                {
                    che1_door8 = 1;

                    g_dataBuffer_WH_Display[1112]=g_dataBuffer_MVB[1112+32];
                    g_dataBuffer_WH_Display[1128]=g_dataBuffer_MVB[1128+32];
                }

            }
            else //both vaild\invaild  = 0
            {
                che1_door8 = 0;

                g_dataBuffer_WH_Display[1112]=0;
                g_dataBuffer_WH_Display[1128]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120],0)==1)^(Bit(g_dataBuffer_MVB[1152],0)==1))///door9
            {
                if(Bit(g_dataBuffer_MVB[1120],0)==1)
                {
                    che1_door9 = 1;

                    g_dataBuffer_WH_Display[1113]=g_dataBuffer_MVB[1113];
                    g_dataBuffer_WH_Display[1129]=g_dataBuffer_MVB[1129];
                }
                else if(Bit(g_dataBuffer_MVB[1152],0)==1)
                {
                    che1_door9 = 1;

                    g_dataBuffer_WH_Display[1113]=g_dataBuffer_MVB[1113+32];
                    g_dataBuffer_WH_Display[1129]=g_dataBuffer_MVB[1129+32];
                }

            }
            else //both vaild\invaild  = 0
            {
                che1_door9 = 0;

                g_dataBuffer_WH_Display[1113]=0;
                g_dataBuffer_WH_Display[1129]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120],1)==1)^(Bit(g_dataBuffer_MVB[1152],1)==1))///door10
            {
                if(Bit(g_dataBuffer_MVB[1120],1)==1)
                {
                    che1_door10 = 1;

                    g_dataBuffer_WH_Display[1114]=g_dataBuffer_MVB[1114];
                    g_dataBuffer_WH_Display[1130]=g_dataBuffer_MVB[1130];
                }
                else if(Bit(g_dataBuffer_MVB[1152],1)==1)
                {
                    che1_door10 = 1;

                    g_dataBuffer_WH_Display[1114]=g_dataBuffer_MVB[1114+32];
                    g_dataBuffer_WH_Display[1130]=g_dataBuffer_MVB[1130+32];
                }

            }
            else //both vaild\invaild  = 0
            {
                che1_door10 = 0;

                g_dataBuffer_WH_Display[1114]=0;
                g_dataBuffer_WH_Display[1130]=0;
            }


        }
        else if((g_dataBuffer_MVB[1118]/256==3)^(g_dataBuffer_MVB[1118+32]/256==3))///one is part master other is sliver
        {
            if((g_dataBuffer_MVB[1118]/256==3))// edcu1 part master
            {
                if(Bit(g_dataBuffer_MVB[1120],8)==1)
                {
                    g_dataBuffer_WH_Display[1105]=g_dataBuffer_MVB[1105];
                    g_dataBuffer_WH_Display[1121]=g_dataBuffer_MVB[1121];
                    che1_door1 = 1;
                }else
                {
                    che1_door1 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120],9)==1)
                {
                    g_dataBuffer_WH_Display[1106]=g_dataBuffer_MVB[1106];
                    g_dataBuffer_WH_Display[1122]=g_dataBuffer_MVB[1122];
                    che1_door2 = 1;
                }else
                {
                    che1_door2 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120],10)==1)
                {
                    g_dataBuffer_WH_Display[1107]=g_dataBuffer_MVB[1107];
                    g_dataBuffer_WH_Display[1123]=g_dataBuffer_MVB[1123];
                    che1_door3 = 1;
                }else
                {
                    che1_door3 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120],11)==1)
                {
                    g_dataBuffer_WH_Display[1108]=g_dataBuffer_MVB[1108];
                    g_dataBuffer_WH_Display[1124]=g_dataBuffer_MVB[1124];
                    che1_door4 = 1;
                }else
                {
                    che1_door4 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120],12)==1)
                {
                    g_dataBuffer_WH_Display[1109]=g_dataBuffer_MVB[1109];
                    g_dataBuffer_WH_Display[1125]=g_dataBuffer_MVB[1125];
                    che1_door5 = 1;
                }else
                {
                    che1_door5 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120],13)==1)
                {
                    g_dataBuffer_WH_Display[1110]=g_dataBuffer_MVB[1110];
                    g_dataBuffer_WH_Display[1126]=g_dataBuffer_MVB[1126];
                    che1_door6 = 1;
                }else
                {
                    che1_door6 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120],14)==1)
                {
                    g_dataBuffer_WH_Display[1111]=g_dataBuffer_MVB[1111];
                    g_dataBuffer_WH_Display[1127]=g_dataBuffer_MVB[1127];
                    che1_door7 = 1;
                }else
                {
                    che1_door7 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120],15)==1)
                {
                    g_dataBuffer_WH_Display[1112]=g_dataBuffer_MVB[1112];
                    g_dataBuffer_WH_Display[1128]=g_dataBuffer_MVB[1128];
                    che1_door8 = 1;
                }else
                {
                    che1_door8 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120],0)==1)
                {
                    g_dataBuffer_WH_Display[1113]=g_dataBuffer_MVB[1113];
                    g_dataBuffer_WH_Display[1129]=g_dataBuffer_MVB[1129];
                    che1_door9 = 1;
                }else
                {
                    che1_door9 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120],1)==1)
                {
                    g_dataBuffer_WH_Display[1114]=g_dataBuffer_MVB[1114];
                    g_dataBuffer_WH_Display[1130]=g_dataBuffer_MVB[1130];
                    che1_door10 = 1;
                }else
                {
                    che1_door10 = 0;
                }

            }
            else if((g_dataBuffer_MVB[1118+32]/256==3))// edcu2 part master
            {
                if(Bit(g_dataBuffer_MVB[1152],8)==1)
                {
                    g_dataBuffer_WH_Display[1105]=g_dataBuffer_MVB[1105+32];
                    g_dataBuffer_WH_Display[1121]=g_dataBuffer_MVB[1121+32];
                    che1_door1 = 1;
                }else
                {
                    che1_door1 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152],9)==1)
                {
                    g_dataBuffer_WH_Display[1106]=g_dataBuffer_MVB[1106+32];
                    g_dataBuffer_WH_Display[1122]=g_dataBuffer_MVB[1122+32];
                    che1_door2 = 1;
                }else
                {
                    che1_door2 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152],10)==1)
                {
                    g_dataBuffer_WH_Display[1107]=g_dataBuffer_MVB[1107+32];
                    g_dataBuffer_WH_Display[1123]=g_dataBuffer_MVB[1123+32];
                    che1_door3 = 1;
                }else
                {
                    che1_door3 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152],11)==1)
                {
                    g_dataBuffer_WH_Display[1108]=g_dataBuffer_MVB[1108+32];
                    g_dataBuffer_WH_Display[1124]=g_dataBuffer_MVB[1124+32];
                    che1_door4 = 1;
                }else
                {
                    che1_door4 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152],12)==1)
                {
                    g_dataBuffer_WH_Display[1109]=g_dataBuffer_MVB[1109+32];
                    g_dataBuffer_WH_Display[1125]=g_dataBuffer_MVB[1125+32];
                    che1_door5 = 1;
                }else
                {
                    che1_door5 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152],13)==1)
                {
                    g_dataBuffer_WH_Display[1110]=g_dataBuffer_MVB[1110+32];
                    g_dataBuffer_WH_Display[1126]=g_dataBuffer_MVB[1126+32];
                    che1_door6 = 1;
                }else
                {
                    che1_door6 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152],14)==1)
                {
                    g_dataBuffer_WH_Display[1111]=g_dataBuffer_MVB[1111+32];
                    g_dataBuffer_WH_Display[1127]=g_dataBuffer_MVB[1127+32];
                    che1_door7 = 1;
                }else
                {
                    che1_door7 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152],15)==1)
                {
                    g_dataBuffer_WH_Display[1112]=g_dataBuffer_MVB[1112+32];
                    g_dataBuffer_WH_Display[1128]=g_dataBuffer_MVB[1128+32];
                    che1_door8 = 1;
                }else
                {
                    che1_door8 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152],0)==1)
                {
                    g_dataBuffer_WH_Display[1113]=g_dataBuffer_MVB[1113+32];
                    g_dataBuffer_WH_Display[1129]=g_dataBuffer_MVB[1129+32];
                    che1_door9 = 1;
                }else
                {
                    che1_door9 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152],1)==1)
                {
                    g_dataBuffer_WH_Display[1114]=g_dataBuffer_MVB[1114+32];
                    g_dataBuffer_WH_Display[1130]=g_dataBuffer_MVB[1130+32];
                    che1_door10 = 1;
                }else
                {
                    che1_door10 = 0;
                }
            }
        }
        else
        {
            che1_door1 = 0;
            che1_door2 = 0;
            che1_door3 = 0;
            che1_door4 = 0;
            che1_door5 = 0;
            che1_door6 = 0;
            che1_door7 = 0;
            che1_door8 = 0;
            che1_door9 = 0;
            che1_door10 = 0;
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j]=0;
            }

        }
    }else if(CTHMI_EDCU1On_B1)//edcu1 online
    {
        if(g_dataBuffer_MVB[1118]/256==1)//edcu1 master
        {
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j]=g_dataBuffer_MVB[1104+j];

                //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或
               if ( (Bit(g_dataBuffer_WH_Display[1120],8) )  )
               {
                   che1_door1 = 1;
               }
               else
               {
                   che1_door1 = 0;
               }
               if ( (Bit(g_dataBuffer_WH_Display[1120],9) ) )
               {
                   che1_door2 = 1;
               }
               else
               {
                   che1_door2 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120],10) )  )
               {
                   che1_door3 = 1;
               }
               else
               {
                   che1_door3 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120],11) )  )
               {
                   che1_door4 = 1;
               }
               else
               {
                   che1_door4 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120],12) )  )
               {
                   che1_door5 = 1;
               }
               else
               {
                   che1_door5 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120],13) )  )
               {
                   che1_door6 = 1;
               }
               else
               {
                   che1_door6 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120],14) )  )
               {
                   che1_door7 = 1;
               }
               else
               {
                   che1_door7 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120],15) )  )
               {
                   che1_door8 = 1;
               }
               else
               {
                   che1_door8 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120],0) )  )
               {
                   che1_door9 = 1;
               }
               else
               {
                   che1_door9 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120],1) )  )
               {
                   che1_door10 = 1;
               }
               else
               {
                   che1_door10 = 0;
               }

            }
        }
        else if(g_dataBuffer_MVB[1118]/256==3)//edcu1 part master
        {

            if(Bit(g_dataBuffer_MVB[1120],8)==1)
            {
                g_dataBuffer_WH_Display[1105]=g_dataBuffer_MVB[1105];
                g_dataBuffer_WH_Display[1121]=g_dataBuffer_MVB[1121];
                che1_door1 = 1;
            }else
            {
                che1_door1 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120],9)==1)
            {
                g_dataBuffer_WH_Display[1106]=g_dataBuffer_MVB[1106];
                g_dataBuffer_WH_Display[1122]=g_dataBuffer_MVB[1122];
                che1_door2 = 1;
            }else
            {
                che1_door2 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120],10)==1)
            {
                g_dataBuffer_WH_Display[1107]=g_dataBuffer_MVB[1107];
                g_dataBuffer_WH_Display[1123]=g_dataBuffer_MVB[1123];
                che1_door3 = 1;
            }else
            {
                che1_door3 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120],11)==1)
            {
                g_dataBuffer_WH_Display[1108]=g_dataBuffer_MVB[1108];
                g_dataBuffer_WH_Display[1124]=g_dataBuffer_MVB[1124];
                che1_door4 = 1;
            }else
            {
                che1_door4 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120],12)==1)
            {
                g_dataBuffer_WH_Display[1109]=g_dataBuffer_MVB[1109];
                g_dataBuffer_WH_Display[1125]=g_dataBuffer_MVB[1125];
                che1_door5 = 1;
            }else
            {
                che1_door5 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120],13)==1)
            {
                g_dataBuffer_WH_Display[1110]=g_dataBuffer_MVB[1110];
                g_dataBuffer_WH_Display[1126]=g_dataBuffer_MVB[1126];
                che1_door6 = 1;
            }else
            {
                che1_door6 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120],14)==1)
            {
                g_dataBuffer_WH_Display[1111]=g_dataBuffer_MVB[1111];
                g_dataBuffer_WH_Display[1127]=g_dataBuffer_MVB[1127];
                che1_door7 = 1;
            }else
            {
                che1_door7 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120],15)==1)
            {
                g_dataBuffer_WH_Display[1112]=g_dataBuffer_MVB[1112];
                g_dataBuffer_WH_Display[1128]=g_dataBuffer_MVB[1128];
                che1_door8 = 1;
            }else
            {
                che1_door8 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120],0)==1)
            {
                g_dataBuffer_WH_Display[1113]=g_dataBuffer_MVB[1113];
                g_dataBuffer_WH_Display[1129]=g_dataBuffer_MVB[1129];
                che1_door9 = 1;
            }else
            {
                che1_door9 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120],1)==1)
            {
                g_dataBuffer_WH_Display[1114]=g_dataBuffer_MVB[1114];
                g_dataBuffer_WH_Display[1130]=g_dataBuffer_MVB[1130];
                che1_door10 = 1;
            }else
            {
                che1_door10 = 0;
            }


        }else
        {
            che1_door1 = 0;
            che1_door2 = 0;
            che1_door3 = 0;
            che1_door4 = 0;
            che1_door5 = 0;
            che1_door6 = 0;
            che1_door7 = 0;
            che1_door8 = 0;
            che1_door9 = 0;
            che1_door10 = 0;
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j]=0;
            }
        }

    }else if(CTHMI_EDCU2On_B1)
    {
        if((g_dataBuffer_MVB[1118+32]/256==1))//edcu2 master
        {
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j]=g_dataBuffer_MVB[1104+32+j];

                //DRiCT_Dr1SttsVld_B1	门2状态可信	1=激活    每节车厢两个门网关的信号相或
               if ( (Bit(g_dataBuffer_WH_Display[1120],8) )  )
               {
                   che1_door1 = 1;
               }
               else
               {
                   che1_door1 = 0;
               }
               if ( (Bit(g_dataBuffer_WH_Display[1120],9) ) )
               {
                   che1_door2 = 1;
               }
               else
               {
                   che1_door2 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120],10) )  )
               {
                   che1_door3 = 1;
               }
               else
               {
                   che1_door3 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120],11) )  )
               {
                   che1_door4 = 1;
               }
               else
               {
                   che1_door4 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120],12) )  )
               {
                   che1_door5 = 1;
               }
               else
               {
                   che1_door5 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120],13) )  )
               {
                   che1_door6 = 1;
               }
               else
               {
                   che1_door6 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120],14) )  )
               {
                   che1_door7 = 1;
               }
               else
               {
                   che1_door7 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120],15) )  )
               {
                   che1_door8 = 1;
               }
               else
               {
                   che1_door8 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120],0) )  )
               {
                   che1_door9 = 1;
               }
               else
               {
                   che1_door9 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120],1) )  )
               {
                   che1_door10 = 1;
               }
               else
               {
                   che1_door10 = 0;
               }

            }
        }
        else if((g_dataBuffer_MVB[1118+32]/256==3))// edcu2 part master
        {
            if(Bit(g_dataBuffer_MVB[1152],8)==1)
            {
                g_dataBuffer_WH_Display[1105]=g_dataBuffer_MVB[1105+32];
                g_dataBuffer_WH_Display[1121]=g_dataBuffer_MVB[1121+32];
                che1_door1 = 1;
            }else
            {
                che1_door1 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152],9)==1)
            {
                g_dataBuffer_WH_Display[1106]=g_dataBuffer_MVB[1106+32];
                g_dataBuffer_WH_Display[1122]=g_dataBuffer_MVB[1122+32];
                che1_door2 = 1;
            }else
            {
                che1_door2 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152],10)==1)
            {
                g_dataBuffer_WH_Display[1107]=g_dataBuffer_MVB[1107+32];
                g_dataBuffer_WH_Display[1123]=g_dataBuffer_MVB[1123+32];
                che1_door3 = 1;
            }else
            {
                che1_door3 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152],11)==1)
            {
                g_dataBuffer_WH_Display[1108]=g_dataBuffer_MVB[1108+32];
                g_dataBuffer_WH_Display[1124]=g_dataBuffer_MVB[1124+32];
                che1_door4 = 1;
            }else
            {
                che1_door4 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152],12)==1)
            {
                g_dataBuffer_WH_Display[1109]=g_dataBuffer_MVB[1109+32];
                g_dataBuffer_WH_Display[1125]=g_dataBuffer_MVB[1125+32];
                che1_door5 = 1;
            }else
            {
                che1_door5 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152],13)==1)
            {
                g_dataBuffer_WH_Display[1110]=g_dataBuffer_MVB[1110+32];
                g_dataBuffer_WH_Display[1126]=g_dataBuffer_MVB[1126+32];
                che1_door6 = 1;
            }else
            {
                che1_door6 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152],14)==1)
            {
                g_dataBuffer_WH_Display[1111]=g_dataBuffer_MVB[1111+32];
                g_dataBuffer_WH_Display[1127]=g_dataBuffer_MVB[1127+32];
                che1_door7 = 1;
            }else
            {
                che1_door7 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152],15)==1)
            {
                g_dataBuffer_WH_Display[1112]=g_dataBuffer_MVB[1112+32];
                g_dataBuffer_WH_Display[1128]=g_dataBuffer_MVB[1128+32];
                che1_door8 = 1;
            }else
            {
                che1_door8 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152],0)==1)
            {
                g_dataBuffer_WH_Display[1113]=g_dataBuffer_MVB[1113+32];
                g_dataBuffer_WH_Display[1129]=g_dataBuffer_MVB[1129+32];
                che1_door9 = 1;
            }else
            {
                che1_door9 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152],1)==1)
            {
                g_dataBuffer_WH_Display[1114]=g_dataBuffer_MVB[1114+32];
                g_dataBuffer_WH_Display[1130]=g_dataBuffer_MVB[1130+32];
                che1_door10 = 1;
            }else
            {
                che1_door10 = 0;
            }
        }
        else
        {
            che1_door1 = 0;
            che1_door2 = 0;
            che1_door3 = 0;
            che1_door4 = 0;
            che1_door5 = 0;
            che1_door6 = 0;
            che1_door7 = 0;
            che1_door8 = 0;
            che1_door9 = 0;
            che1_door10 = 0;
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j]=0;
            }
        }
    }
    else
    {
        che1_door1 = 0;
        che1_door2 = 0;
        che1_door3 = 0;
        che1_door4 = 0;
        che1_door5 = 0;
        che1_door6 = 0;
        che1_door7 = 0;
        che1_door8 = 0;
        che1_door9 = 0;
        che1_door10 = 0;
        for(int j=0;j<32;j++)
        {
            g_dataBuffer_WH_Display[1104+j]=0;
        }
    }

    // 2 车厢 EDCU3

    if(CTHMI_EDCU3On_B1&&CTHMI_EDCU4On_B1)///both edcu34 online
    {
        if((g_dataBuffer_MVB[1118+64]/256==1)^(g_dataBuffer_MVB[1118+32+64]/256==1))////edcu3or4 master
        {
            if(g_dataBuffer_MVB[1118+64]/256==1)//edcu3 master
            {
                for(int j=0;j<32;j++)
                {
                    g_dataBuffer_WH_Display[1104+j+64]=g_dataBuffer_MVB[1104+j+64];

                    //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或
                   if ( (Bit(g_dataBuffer_WH_Display[1120+64],8) )  )
                   {
                       che2_door1 = 1;
                   }
                   else
                   {
                       che2_door1 = 0;
                   }
                   if ( (Bit(g_dataBuffer_WH_Display[1120+64],9) ) )
                   {
                       che2_door2 = 1;
                   }
                   else
                   {
                       che2_door2 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+64],10) )  )
                   {
                       che2_door3 = 1;
                   }
                   else
                   {
                       che2_door3 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+64],11) )  )
                   {
                       che2_door4 = 1;
                   }
                   else
                   {
                       che2_door4 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+64],12) )  )
                   {
                       che2_door5 = 1;
                   }
                   else
                   {
                       che2_door5 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+64],13) )  )
                   {
                       che2_door6 = 1;
                   }
                   else
                   {
                       che2_door6 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+64],14) )  )
                   {
                       che2_door7 = 1;
                   }
                   else
                   {
                       che2_door7 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+64],15) )  )
                   {
                       che2_door8 = 1;
                   }
                   else
                   {
                       che2_door8 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+64],0) )  )
                   {
                       che2_door9 = 1;
                   }
                   else
                   {
                       che2_door9 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+64],1) )  )
                   {
                       che2_door10 = 1;
                   }
                   else
                   {
                       che2_door10 = 0;
                   }

                }
            }
            else if((g_dataBuffer_MVB[1118+32+64]/256==1))//edcu4 master
            {
                for(int j=0;j<32;j++)
                {
                    g_dataBuffer_WH_Display[1104+j+64]=g_dataBuffer_MVB[1104+32+j+64];

                    //DRiCT_Dr1SttsVld_B1	门2状态可信	1=激活    每节车厢两个门网关的信号相或
                   if ( (Bit(g_dataBuffer_WH_Display[1120+64],8) )  )
                   {
                       che2_door1 = 1;
                   }
                   else
                   {
                       che2_door1 = 0;
                   }
                   if ( (Bit(g_dataBuffer_WH_Display[1120+64],9) ) )
                   {
                       che2_door2 = 1;
                   }
                   else
                   {
                       che2_door2 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+64],10) )  )
                   {
                       che2_door3 = 1;
                   }
                   else
                   {
                       che2_door3 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+64],11) )  )
                   {
                       che2_door4 = 1;
                   }
                   else
                   {
                       che2_door4 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+64],12) )  )
                   {
                       che2_door5 = 1;
                   }
                   else
                   {
                       che2_door5 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+64],13) )  )
                   {
                       che2_door6 = 1;
                   }
                   else
                   {
                       che2_door6 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+64],14) )  )
                   {
                       che2_door7 = 1;
                   }
                   else
                   {
                       che2_door7 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+64],15) )  )
                   {
                       che2_door8 = 1;
                   }
                   else
                   {
                       che2_door8 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+64],0) )  )
                   {
                       che2_door9 = 1;
                   }
                   else
                   {
                       che2_door9 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+64],1) )  )
                   {
                       che2_door10 = 1;
                   }
                   else
                   {
                       che2_door10 = 0;
                   }

                }
            }

        }
        else if((g_dataBuffer_MVB[1118+64]/256==3)&&(g_dataBuffer_MVB[1118+32+64]/256==3))//state == 3 get vaild door word
        {

            if((Bit(g_dataBuffer_MVB[1120+64],8)==1)^(Bit(g_dataBuffer_MVB[1152+64],8)==1))//door1
            {
                if(Bit(g_dataBuffer_MVB[1120+64],8)==1)
                {
                    che2_door1 = 1;

                    g_dataBuffer_WH_Display[1105+64]=g_dataBuffer_MVB[1105+64];
                    g_dataBuffer_WH_Display[1121+64]=g_dataBuffer_MVB[1121+64];
                }
                else if(Bit(g_dataBuffer_MVB[1152+64],8)==1)
                {
                    che2_door1 = 1;

                    g_dataBuffer_WH_Display[1105+64]=g_dataBuffer_MVB[1105+32+64];
                    g_dataBuffer_WH_Display[1121+64]=g_dataBuffer_MVB[1121+32+64];
                }

            }
            else //both vaild\invaild  = 0
            {
                che2_door1 = 0;

                g_dataBuffer_WH_Display[1105+64]=0;
                g_dataBuffer_WH_Display[1121+64]=0;
            }


            if((Bit(g_dataBuffer_MVB[1120+64],9)==1)^(Bit(g_dataBuffer_MVB[1152+64],9)==1))///door2
            {
                if(Bit(g_dataBuffer_MVB[1120+64],9)==1)
                {
                    che2_door2 = 1;

                    g_dataBuffer_WH_Display[1106+64]=g_dataBuffer_MVB[1106+64];
                    g_dataBuffer_WH_Display[1122+64]=g_dataBuffer_MVB[1122+64];
                }
                else if(Bit(g_dataBuffer_MVB[1152+64],9)==1)
                {
                    che2_door2 = 1;

                    g_dataBuffer_WH_Display[1106+64]=g_dataBuffer_MVB[1106+32+64];
                    g_dataBuffer_WH_Display[1122+64]=g_dataBuffer_MVB[1122+32+64];
                }

            }
            else //both vaild\invaild  = 0
            {
                che2_door2 = 0;

                g_dataBuffer_WH_Display[1106+64]=0;
                g_dataBuffer_WH_Display[1122+64]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+64],10)==1)^(Bit(g_dataBuffer_MVB[1152+64],10)==1))///door3
            {
                if(Bit(g_dataBuffer_MVB[1120+64],10)==1)
                {
                    che2_door3 = 1;

                    g_dataBuffer_WH_Display[1107+64]=g_dataBuffer_MVB[1107+64];
                    g_dataBuffer_WH_Display[1123+64]=g_dataBuffer_MVB[1123+64];
                }
                else if(Bit(g_dataBuffer_MVB[1152+64],10)==1)
                {
                    che2_door3 = 1;

                    g_dataBuffer_WH_Display[1107+64]=g_dataBuffer_MVB[1107+32+64];
                    g_dataBuffer_WH_Display[1123+64]=g_dataBuffer_MVB[1123+32+64];
                }

            }
            else //both vaild\invaild  = 0
            {
                che2_door3 = 0;

                g_dataBuffer_WH_Display[1107+64]=0;
                g_dataBuffer_WH_Display[1123+64]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+64],11)==1)^(Bit(g_dataBuffer_MVB[1152+64],11)==1))///door4
            {
                if(Bit(g_dataBuffer_MVB[1120+64],11)==1)
                {
                    che2_door4 = 1;

                    g_dataBuffer_WH_Display[1108+64]=g_dataBuffer_MVB[1108+64];
                    g_dataBuffer_WH_Display[1124+64]=g_dataBuffer_MVB[1124+64];
                }
                else if(Bit(g_dataBuffer_MVB[1152+64],11)==1)
                {
                    che2_door4 = 1;

                    g_dataBuffer_WH_Display[1108+64]=g_dataBuffer_MVB[1108+32+64];
                    g_dataBuffer_WH_Display[1124+64]=g_dataBuffer_MVB[1124+32+64];
                }

            }
            else //both vaild\invaild  = 0
            {
                che2_door4 = 0;

                g_dataBuffer_WH_Display[1108+64]=0;
                g_dataBuffer_WH_Display[1124+64]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+64],12)==1)^(Bit(g_dataBuffer_MVB[1152+64],12)==1))///door5
            {
                if(Bit(g_dataBuffer_MVB[1120+64],12)==1)
                {
                    che2_door5 = 1;

                    g_dataBuffer_WH_Display[1109+64]=g_dataBuffer_MVB[1109+64];
                    g_dataBuffer_WH_Display[1125+64]=g_dataBuffer_MVB[1125+64];
                }
                else if(Bit(g_dataBuffer_MVB[1152+64],12)==1)
                {
                    che2_door5 = 1;

                    g_dataBuffer_WH_Display[1109+64]=g_dataBuffer_MVB[1109+32+64];
                    g_dataBuffer_WH_Display[1125+64]=g_dataBuffer_MVB[1125+32+64];
                }

            }
            else //both vaild\invaild  = 0
            {
                che2_door5 = 0;

                g_dataBuffer_WH_Display[1109+64]=0;
                g_dataBuffer_WH_Display[1125+64]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+64],13)==1)^(Bit(g_dataBuffer_MVB[1152+64],13)==1))///door6
            {
                if(Bit(g_dataBuffer_MVB[1120+64],13)==1)
                {
                    che2_door6 = 1;

                    g_dataBuffer_WH_Display[1110+64]=g_dataBuffer_MVB[1110+64];
                    g_dataBuffer_WH_Display[1126+64]=g_dataBuffer_MVB[1126+64];
                }
                else if(Bit(g_dataBuffer_MVB[1152+64],13)==1)
                {
                    che2_door6 = 1;

                    g_dataBuffer_WH_Display[1110+64]=g_dataBuffer_MVB[1110+32+64];
                    g_dataBuffer_WH_Display[1126+64]=g_dataBuffer_MVB[1126+32+64];
                }

            }
            else //both vaild\invaild  = 0
            {
                che2_door6 = 0;

                g_dataBuffer_WH_Display[1110+64]=0;
                g_dataBuffer_WH_Display[1126+64]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+64],14)==1)^(Bit(g_dataBuffer_MVB[1152+64],14)==1))///door7
            {
                if(Bit(g_dataBuffer_MVB[1120+64],14)==1)
                {
                    che2_door7 = 1;

                    g_dataBuffer_WH_Display[1111+64]=g_dataBuffer_MVB[1111+64];
                    g_dataBuffer_WH_Display[1127+64]=g_dataBuffer_MVB[1127+64];
                }
                else if(Bit(g_dataBuffer_MVB[1152+64],14)==1)
                {
                    che2_door7 = 1;

                    g_dataBuffer_WH_Display[1111+64]=g_dataBuffer_MVB[1111+32+64];
                    g_dataBuffer_WH_Display[1127+64]=g_dataBuffer_MVB[1127+32+64];
                }

            }
            else //both vaild\invaild  = 0
            {
                che2_door7 = 0;

                g_dataBuffer_WH_Display[1111+64]=0;
                g_dataBuffer_WH_Display[1127+64]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+64],15)==1)^(Bit(g_dataBuffer_MVB[1152+64],15)==1))///door8
            {
                if(Bit(g_dataBuffer_MVB[1120+64],15)==1)
                {
                    che2_door8 = 1;

                    g_dataBuffer_WH_Display[1112+64]=g_dataBuffer_MVB[1112+64];
                    g_dataBuffer_WH_Display[1128+64]=g_dataBuffer_MVB[1128+64];
                }
                else if(Bit(g_dataBuffer_MVB[1152+64],15)==1)
                {
                    che2_door8 = 1;

                    g_dataBuffer_WH_Display[1112+64]=g_dataBuffer_MVB[1112+32+64];
                    g_dataBuffer_WH_Display[1128+64]=g_dataBuffer_MVB[1128+32+64];
                }

            }
            else //both vaild\invaild  = 0
            {
                che2_door8 = 0;

                g_dataBuffer_WH_Display[1112+64]=0;
                g_dataBuffer_WH_Display[1128+64]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+64],0)==1)^(Bit(g_dataBuffer_MVB[1152+64],0)==1))///door9
            {
                if(Bit(g_dataBuffer_MVB[1120+64],0)==1)
                {
                    che2_door9 = 1;

                    g_dataBuffer_WH_Display[1113+64]=g_dataBuffer_MVB[1113+64];
                    g_dataBuffer_WH_Display[1129+64]=g_dataBuffer_MVB[1129+64];
                }
                else if(Bit(g_dataBuffer_MVB[1152+64],0)==1)
                {
                    che2_door9 = 1;

                    g_dataBuffer_WH_Display[1113+64]=g_dataBuffer_MVB[1113+32+64];
                    g_dataBuffer_WH_Display[1129+64]=g_dataBuffer_MVB[1129+32+64];
                }

            }
            else //both vaild\invaild  = 0
            {
                che2_door9 = 0;

                g_dataBuffer_WH_Display[1113+64]=0;
                g_dataBuffer_WH_Display[1129+64]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+64],1)==1)^(Bit(g_dataBuffer_MVB[1152+64],1)==1))///door10
            {
                if(Bit(g_dataBuffer_MVB[1120+64],1)==1)
                {
                    che2_door10 = 1;

                    g_dataBuffer_WH_Display[1114+64]=g_dataBuffer_MVB[1114+64];
                    g_dataBuffer_WH_Display[1130+64]=g_dataBuffer_MVB[1130+64];
                }
                else if(Bit(g_dataBuffer_MVB[1152+64],1)==1)
                {
                    che2_door10 = 1;

                    g_dataBuffer_WH_Display[1114+64]=g_dataBuffer_MVB[1114+32+64];
                    g_dataBuffer_WH_Display[1130+64]=g_dataBuffer_MVB[1130+32+64];
                }

            }
            else //both vaild\invaild  = 0
            {
                che2_door10 = 0;

                g_dataBuffer_WH_Display[1114+64]=0;
                g_dataBuffer_WH_Display[1130+64]=0;
            }


        }
        else if((g_dataBuffer_MVB[1118+64]/256==3)^(g_dataBuffer_MVB[1118+32+64]/256==3))///one is part master other is sliver
        {
            if((g_dataBuffer_MVB[1118+64]/256==3))// edcu3 part master
            {
                if(Bit(g_dataBuffer_MVB[1120+64],8)==1)
                {
                    g_dataBuffer_WH_Display[1105+64]=g_dataBuffer_MVB[1105+64];
                    g_dataBuffer_WH_Display[1121+64]=g_dataBuffer_MVB[1121+64];
                    che2_door1 = 1;
                }else
                {
                    che2_door1 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+64],9)==1)
                {
                    g_dataBuffer_WH_Display[1106+64]=g_dataBuffer_MVB[1106+64];
                    g_dataBuffer_WH_Display[1122+64]=g_dataBuffer_MVB[1122+64];
                    che2_door2 = 1;
                }else
                {
                    che2_door2 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+64],10)==1)
                {
                    g_dataBuffer_WH_Display[1107+64]=g_dataBuffer_MVB[1107+64];
                    g_dataBuffer_WH_Display[1123+64]=g_dataBuffer_MVB[1123+64];
                    che2_door3 = 1;
                }else
                {
                    che2_door3 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+64],11)==1)
                {
                    g_dataBuffer_WH_Display[1108+64]=g_dataBuffer_MVB[1108+64];
                    g_dataBuffer_WH_Display[1124+64]=g_dataBuffer_MVB[1124+64];
                    che2_door4 = 1;
                }else
                {
                    che2_door4 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+64],12)==1)
                {
                    g_dataBuffer_WH_Display[1109+64]=g_dataBuffer_MVB[1109+64];
                    g_dataBuffer_WH_Display[1125+64]=g_dataBuffer_MVB[1125+64];
                    che2_door5 = 1;
                }else
                {
                    che2_door5 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+64],13)==1)
                {
                    g_dataBuffer_WH_Display[1110+64]=g_dataBuffer_MVB[1110+64];
                    g_dataBuffer_WH_Display[1126+64]=g_dataBuffer_MVB[1126+64];
                    che2_door6 = 1;
                }else
                {
                    che2_door6 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+64],14)==1)
                {
                    g_dataBuffer_WH_Display[1111+64]=g_dataBuffer_MVB[1111+64];
                    g_dataBuffer_WH_Display[1127+64]=g_dataBuffer_MVB[1127+64];
                    che2_door7 = 1;
                }else
                {
                    che2_door7 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+64],15)==1)
                {
                    g_dataBuffer_WH_Display[1112+64]=g_dataBuffer_MVB[1112+64];
                    g_dataBuffer_WH_Display[1128+64]=g_dataBuffer_MVB[1128+64];
                    che2_door8 = 1;
                }else
                {
                    che2_door8 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+64],0)==1)
                {
                    g_dataBuffer_WH_Display[1113+64]=g_dataBuffer_MVB[1113+64];
                    g_dataBuffer_WH_Display[1129+64]=g_dataBuffer_MVB[1129+64];
                    che2_door9 = 1;
                }else
                {
                    che2_door9 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+64],1)==1)
                {
                    g_dataBuffer_WH_Display[1114+64]=g_dataBuffer_MVB[1114+64];
                    g_dataBuffer_WH_Display[1130+64]=g_dataBuffer_MVB[1130+64];
                    che2_door10 = 1;
                }else
                {
                    che2_door10 = 0;
                }

            }
            else if((g_dataBuffer_MVB[1118+32+64]/256==3))// edcu4 part master
            {
                if(Bit(g_dataBuffer_MVB[1152+64],8)==1)
                {
                    g_dataBuffer_WH_Display[1105+64]=g_dataBuffer_MVB[1105+32+64];
                    g_dataBuffer_WH_Display[1121+64]=g_dataBuffer_MVB[1121+32+64];
                    che2_door1 = 1;
                }else
                {
                    che2_door1 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+64],9)==1)
                {
                    g_dataBuffer_WH_Display[1106+64]=g_dataBuffer_MVB[1106+32+64];
                    g_dataBuffer_WH_Display[1122+64]=g_dataBuffer_MVB[1122+32+64];
                    che2_door2 = 1;
                }else
                {
                    che2_door2 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+64],10)==1)
                {
                    g_dataBuffer_WH_Display[1107+64]=g_dataBuffer_MVB[1107+32+64];
                    g_dataBuffer_WH_Display[1123+64]=g_dataBuffer_MVB[1123+32+64];
                    che2_door3 = 1;
                }else
                {
                    che2_door3 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+64],11)==1)
                {
                    g_dataBuffer_WH_Display[1108+64]=g_dataBuffer_MVB[1108+32+64];
                    g_dataBuffer_WH_Display[1124+64]=g_dataBuffer_MVB[1124+32+64];
                    che2_door4 = 1;
                }else
                {
                    che2_door4 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+64],12)==1)
                {
                    g_dataBuffer_WH_Display[1109+64]=g_dataBuffer_MVB[1109+32+64];
                    g_dataBuffer_WH_Display[1125+64]=g_dataBuffer_MVB[1125+32+64];
                    che2_door5 = 1;
                }else
                {
                    che2_door5 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+64],13)==1)
                {
                    g_dataBuffer_WH_Display[1110+64]=g_dataBuffer_MVB[1110+32+64];
                    g_dataBuffer_WH_Display[1126+64]=g_dataBuffer_MVB[1126+32+64];
                    che2_door6 = 1;
                }else
                {
                    che2_door6 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+64],14)==1)
                {
                    g_dataBuffer_WH_Display[1111+64]=g_dataBuffer_MVB[1111+32+64];
                    g_dataBuffer_WH_Display[1127+64]=g_dataBuffer_MVB[1127+32+64];
                    che2_door7 = 1;
                }else
                {
                    che2_door7 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+64],15)==1)
                {
                    g_dataBuffer_WH_Display[1112+64]=g_dataBuffer_MVB[1112+32+64];
                    g_dataBuffer_WH_Display[1128+64]=g_dataBuffer_MVB[1128+32+64];
                    che2_door8 = 1;
                }else
                {
                    che2_door8 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+64],0)==1)
                {
                    g_dataBuffer_WH_Display[1113+64]=g_dataBuffer_MVB[1113+32+64];
                    g_dataBuffer_WH_Display[1129+64]=g_dataBuffer_MVB[1129+32+64];
                    che2_door9 = 1;
                }else
                {
                    che2_door9 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+64],1)==1)
                {
                    g_dataBuffer_WH_Display[1114+64]=g_dataBuffer_MVB[1114+32+64];
                    g_dataBuffer_WH_Display[1130+64]=g_dataBuffer_MVB[1130+32+64];
                    che2_door10 = 1;
                }else
                {
                    che2_door10 = 0;
                }
            }
        }
        else
        {
            che2_door1 = 0;
            che2_door2 = 0;
            che2_door3 = 0;
            che2_door4 = 0;
            che2_door5 = 0;
            che2_door6 = 0;
            che2_door7 = 0;
            che2_door8 = 0;
            che2_door9 = 0;
            che2_door10 = 0;
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j+64]=0;
            }

        }
    }else if(CTHMI_EDCU3On_B1)//edcu3 online
    {
        if(g_dataBuffer_MVB[1118+64]/256==1)//edcu3 master
        {
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j+64]=g_dataBuffer_MVB[1104+j+64];

                //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或
               if ( (Bit(g_dataBuffer_WH_Display[1120+64],8) )  )
               {
                   che2_door1 = 1;
               }
               else
               {
                   che2_door1 = 0;
               }
               if ( (Bit(g_dataBuffer_WH_Display[1120+64],9) ) )
               {
                   che2_door2 = 1;
               }
               else
               {
                   che2_door2 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+64],10) )  )
               {
                   che2_door3 = 1;
               }
               else
               {
                   che2_door3 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+64],11) )  )
               {
                   che2_door4 = 1;
               }
               else
               {
                   che2_door4 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+64],12) )  )
               {
                   che2_door5 = 1;
               }
               else
               {
                   che2_door5 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+64],13) )  )
               {
                   che2_door6 = 1;
               }
               else
               {
                   che2_door6 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+64],14) )  )
               {
                   che2_door7 = 1;
               }
               else
               {
                   che2_door7 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+64],15) )  )
               {
                   che2_door8 = 1;
               }
               else
               {
                   che2_door8 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+64],0) )  )
               {
                   che2_door9 = 1;
               }
               else
               {
                   che2_door9 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+64],1) )  )
               {
                   che2_door10 = 1;
               }
               else
               {
                   che2_door10 = 0;
               }

            }
        }else if(g_dataBuffer_MVB[1118+64]/256==3)//edcu3 part master
        {

            if(Bit(g_dataBuffer_MVB[1120+64],8)==1)
            {
                g_dataBuffer_WH_Display[1105+64]=g_dataBuffer_MVB[1105+64];
                g_dataBuffer_WH_Display[1121+64]=g_dataBuffer_MVB[1121+64];
                che2_door1 = 1;
            }else
            {
                che2_door1 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+64],9)==1)
            {
                g_dataBuffer_WH_Display[1106+64]=g_dataBuffer_MVB[1106+64];
                g_dataBuffer_WH_Display[1122+64]=g_dataBuffer_MVB[1122+64];
                che2_door2 = 1;
            }else
            {
                che2_door2 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+64],10)==1)
            {
                g_dataBuffer_WH_Display[1107+64]=g_dataBuffer_MVB[1107+64];
                g_dataBuffer_WH_Display[1123+64]=g_dataBuffer_MVB[1123+64];
                che2_door3 = 1;
            }else
            {
                che2_door3 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+64],11)==1)
            {
                g_dataBuffer_WH_Display[1108+64]=g_dataBuffer_MVB[1108+64];
                g_dataBuffer_WH_Display[1124+64]=g_dataBuffer_MVB[1124+64];
                che2_door4 = 1;
            }else
            {
                che2_door4 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+64],12)==1)
            {
                g_dataBuffer_WH_Display[1109+64]=g_dataBuffer_MVB[1109+64];
                g_dataBuffer_WH_Display[1125+64]=g_dataBuffer_MVB[1125+64];
                che2_door5 = 1;
            }else
            {
                che2_door5 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+64],13)==1)
            {
                g_dataBuffer_WH_Display[1110+64]=g_dataBuffer_MVB[1110+64];
                g_dataBuffer_WH_Display[1126+64]=g_dataBuffer_MVB[1126+64];
                che2_door6 = 1;
            }else
            {
                che2_door6 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+64],14)==1)
            {
                g_dataBuffer_WH_Display[1111+64]=g_dataBuffer_MVB[1111+64];
                g_dataBuffer_WH_Display[1127+64]=g_dataBuffer_MVB[1127+64];
                che2_door7 = 1;
            }else
            {
                che2_door7 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+64],15)==1)
            {
                g_dataBuffer_WH_Display[1112+64]=g_dataBuffer_MVB[1112+64];
                g_dataBuffer_WH_Display[1128+64]=g_dataBuffer_MVB[1128+64];
                che2_door8 = 1;
            }else
            {
                che2_door8 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+64],0)==1)
            {
                g_dataBuffer_WH_Display[1113+64]=g_dataBuffer_MVB[1113+64];
                g_dataBuffer_WH_Display[1129+64]=g_dataBuffer_MVB[1129+64];
                che2_door9 = 1;
            }else
            {
                che2_door9 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+64],1)==1)
            {
                g_dataBuffer_WH_Display[1114+64]=g_dataBuffer_MVB[1114+64];
                g_dataBuffer_WH_Display[1130+64]=g_dataBuffer_MVB[1130+64];
                che2_door10 = 1;
            }else
            {
                che2_door10 = 0;
            }
        }else
        {
            che2_door1 = 0;
            che2_door2 = 0;
            che2_door3 = 0;
            che2_door4 = 0;
            che2_door5 = 0;
            che2_door6 = 0;
            che2_door7 = 0;
            che2_door8 = 0;
            che2_door9 = 0;
            che2_door10 = 0;
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j+64]=0;
            }
        }

    }else if(CTHMI_EDCU4On_B1)
    {
        if((g_dataBuffer_MVB[1118+32+64]/256==1))//edcu4 master
        {
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j+64]=g_dataBuffer_MVB[1104+32+j+64];

                //DRiCT_Dr1SttsVld_B1	门2状态可信	1=激活    每节车厢两个门网关的信号相或
               if ( (Bit(g_dataBuffer_WH_Display[1120+64],8) )  )
               {
                   che2_door1 = 1;
               }
               else
               {
                   che2_door1 = 0;
               }
               if ( (Bit(g_dataBuffer_WH_Display[1120+64],9) ) )
               {
                   che2_door2 = 1;
               }
               else
               {
                   che2_door2 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+64],10) )  )
               {
                   che2_door3 = 1;
               }
               else
               {
                   che2_door3 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+64],11) )  )
               {
                   che2_door4 = 1;
               }
               else
               {
                   che2_door4 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+64],12) )  )
               {
                   che2_door5 = 1;
               }
               else
               {
                   che2_door5 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+64],13) )  )
               {
                   che2_door6 = 1;
               }
               else
               {
                   che2_door6 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+64],14) )  )
               {
                   che2_door7 = 1;
               }
               else
               {
                   che2_door7 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+64],15) )  )
               {
                   che2_door8 = 1;
               }
               else
               {
                   che2_door8 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+64],0) )  )
               {
                   che2_door9 = 1;
               }
               else
               {
                   che2_door9 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+64],1) )  )
               {
                   che2_door10 = 1;
               }
               else
               {
                   che2_door10 = 0;
               }

            }
        }
        else if((g_dataBuffer_MVB[1118+32+64]/256==3))// edcu4 part master
        {
            if(Bit(g_dataBuffer_MVB[1152+64],8)==1)
            {
                g_dataBuffer_WH_Display[1105+64]=g_dataBuffer_MVB[1105+32+64];
                g_dataBuffer_WH_Display[1121+64]=g_dataBuffer_MVB[1121+32+64];
                che2_door1 = 1;
            }else
            {
                che2_door1 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+64],9)==1)
            {
                g_dataBuffer_WH_Display[1106+64]=g_dataBuffer_MVB[1106+32+64];
                g_dataBuffer_WH_Display[1122+64]=g_dataBuffer_MVB[1122+32+64];
                che2_door2 = 1;
            }else
            {
                che2_door2 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+64],10)==1)
            {
                g_dataBuffer_WH_Display[1107+64]=g_dataBuffer_MVB[1107+32+64];
                g_dataBuffer_WH_Display[1123+64]=g_dataBuffer_MVB[1123+32+64];
                che2_door3 = 1;
            }else
            {
                che2_door3 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+64],11)==1)
            {
                g_dataBuffer_WH_Display[1108+64]=g_dataBuffer_MVB[1108+32+64];
                g_dataBuffer_WH_Display[1124+64]=g_dataBuffer_MVB[1124+32+64];
                che2_door4 = 1;
            }else
            {
                che2_door4 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+64],12)==1)
            {
                g_dataBuffer_WH_Display[1109+64]=g_dataBuffer_MVB[1109+32+64];
                g_dataBuffer_WH_Display[1125+64]=g_dataBuffer_MVB[1125+32+64];
                che2_door5 = 1;
            }else
            {
                che2_door5 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+64],13)==1)
            {
                g_dataBuffer_WH_Display[1110+64]=g_dataBuffer_MVB[1110+32+64];
                g_dataBuffer_WH_Display[1126+64]=g_dataBuffer_MVB[1126+32+64];
                che2_door6 = 1;
            }else
            {
                che2_door6 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+64],14)==1)
            {
                g_dataBuffer_WH_Display[1111+64]=g_dataBuffer_MVB[1111+32+64];
                g_dataBuffer_WH_Display[1127+64]=g_dataBuffer_MVB[1127+32+64];
                che2_door7 = 1;
            }else
            {
                che2_door7 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+64],15)==1)
            {
                g_dataBuffer_WH_Display[1112+64]=g_dataBuffer_MVB[1112+32+64];
                g_dataBuffer_WH_Display[1128+64]=g_dataBuffer_MVB[1128+32+64];
                che2_door8 = 1;
            }else
            {
                che2_door8 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+64],0)==1)
            {
                g_dataBuffer_WH_Display[1113+64]=g_dataBuffer_MVB[1113+32+64];
                g_dataBuffer_WH_Display[1129+64]=g_dataBuffer_MVB[1129+32+64];
                che2_door9 = 1;
            }else
            {
                che2_door9 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+64],1)==1)
            {
                g_dataBuffer_WH_Display[1114+64]=g_dataBuffer_MVB[1114+32+64];
                g_dataBuffer_WH_Display[1130+64]=g_dataBuffer_MVB[1130+32+64];
                che2_door10 = 1;
            }else
            {
                che2_door10 = 0;
            }
        }
        else
        {
            che2_door1 = 0;
            che2_door2 = 0;
            che2_door3 = 0;
            che2_door4 = 0;
            che2_door5 = 0;
            che2_door6 = 0;
            che2_door7 = 0;
            che2_door8 = 0;
            che2_door9 = 0;
            che2_door10 = 0;
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j+64]=0;
            }
        }
    }
    else
    {
        che2_door1 = 0;
        che2_door2 = 0;
        che2_door3 = 0;
        che2_door4 = 0;
        che2_door5 = 0;
        che2_door6 = 0;
        che2_door7 = 0;
        che2_door8 = 0;
        che2_door9 = 0;
        che2_door10 = 0;
        for(int j=0;j<32;j++)
        {
            g_dataBuffer_WH_Display[1104+j+64]=0;
        }
    }


    // 3 车厢 EDCU5
    if(CTHMI_EDCU5On_B1&&CTHMI_EDCU6On_B1)///both edcu56 online
    {
        if((g_dataBuffer_MVB[1118+128]/256==1)^(g_dataBuffer_MVB[1118+32+128]/256==1))////edcu5or6 master
        {
            if(g_dataBuffer_MVB[1118+128]/256==1)//edcu5 master
            {
                for(int j=0;j<32;j++)
                {
                    g_dataBuffer_WH_Display[1104+j+128]=g_dataBuffer_MVB[1104+j+128];

                    //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或
                   if ( (Bit(g_dataBuffer_WH_Display[1120+128],8) )  )
                   {
                       che3_door1 = 1;
                   }
                   else
                   {
                       che3_door1 = 0;
                   }
                   if ( (Bit(g_dataBuffer_WH_Display[1120+128],9) ) )
                   {
                       che3_door2 = 1;
                   }
                   else
                   {
                       che3_door2 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+128],10) )  )
                   {
                       che3_door3 = 1;
                   }
                   else
                   {
                       che3_door3 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+128],11) )  )
                   {
                       che3_door4 = 1;
                   }
                   else
                   {
                       che3_door4 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+128],12) )  )
                   {
                       che3_door5 = 1;
                   }
                   else
                   {
                       che3_door5 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+128],13) )  )
                   {
                       che3_door6 = 1;
                   }
                   else
                   {
                       che3_door6 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+128],14) )  )
                   {
                       che3_door7 = 1;
                   }
                   else
                   {
                       che3_door7 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+128],15) )  )
                   {
                       che3_door8 = 1;
                   }
                   else
                   {
                       che3_door8 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+128],0) )  )
                   {
                       che3_door9 = 1;
                   }
                   else
                   {
                       che3_door9 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+128],1) )  )
                   {
                       che3_door10 = 1;
                   }
                   else
                   {
                       che3_door10 = 0;
                   }

                }
            }
            else if((g_dataBuffer_MVB[1118+32+128]/256==1))//edcu6 master
            {
                for(int j=0;j<32;j++)
                {
                    g_dataBuffer_WH_Display[1104+j+128]=g_dataBuffer_MVB[1104+32+j+128];

                    //DRiCT_Dr1SttsVld_B1	门2状态可信	1=激活    每节车厢两个门网关的信号相或
                   if ( (Bit(g_dataBuffer_WH_Display[1120+128],8) )  )
                   {
                       che3_door1 = 1;
                   }
                   else
                   {
                       che3_door1 = 0;
                   }
                   if ( (Bit(g_dataBuffer_WH_Display[1120+128],9) ) )
                   {
                       che3_door2 = 1;
                   }
                   else
                   {
                       che3_door2 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+128],10) )  )
                   {
                       che3_door3 = 1;
                   }
                   else
                   {
                       che3_door3 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+128],11) )  )
                   {
                       che3_door4 = 1;
                   }
                   else
                   {
                       che3_door4 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+128],12) )  )
                   {
                       che3_door5 = 1;
                   }
                   else
                   {
                       che3_door5 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+128],13) )  )
                   {
                       che3_door6 = 1;
                   }
                   else
                   {
                       che3_door6 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+128],14) )  )
                   {
                       che3_door7 = 1;
                   }
                   else
                   {
                       che3_door7 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+128],15) )  )
                   {
                       che3_door8 = 1;
                   }
                   else
                   {
                       che3_door8 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+128],0) )  )
                   {
                       che3_door9 = 1;
                   }
                   else
                   {
                       che3_door9 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+128],1) )  )
                   {
                       che3_door10 = 1;
                   }
                   else
                   {
                       che3_door10 = 0;
                   }

                }
            }

        }
        else if((g_dataBuffer_MVB[1118+128]/256==3)&&(g_dataBuffer_MVB[1118+32+128]/256==3))//state == 3 get vaild door word
        {

            if((Bit(g_dataBuffer_MVB[1120+128],8)==1)^(Bit(g_dataBuffer_MVB[1152+128],8)==1))//door1
            {
                if(Bit(g_dataBuffer_MVB[1120+128],8)==1)
                {
                    che3_door1 = 1;

                    g_dataBuffer_WH_Display[1105+128]=g_dataBuffer_MVB[1105+128];
                    g_dataBuffer_WH_Display[1121+128]=g_dataBuffer_MVB[1121+128];
                }
                else if(Bit(g_dataBuffer_MVB[1152+128],8)==1)
                {
                    che3_door1 = 1;

                    g_dataBuffer_WH_Display[1105+128]=g_dataBuffer_MVB[1105+32+128];
                    g_dataBuffer_WH_Display[1121+128]=g_dataBuffer_MVB[1121+32+128];
                }

            }
            else //both vaild\invaild  = 0
            {
                che3_door1 = 0;

                g_dataBuffer_WH_Display[1105+128]=0;
                g_dataBuffer_WH_Display[1121+128]=0;
            }


            if((Bit(g_dataBuffer_MVB[1120+128],9)==1)^(Bit(g_dataBuffer_MVB[1152+128],9)==1))///door2
            {
                if(Bit(g_dataBuffer_MVB[1120+128],9)==1)
                {
                    che3_door2 = 1;

                    g_dataBuffer_WH_Display[1106+128]=g_dataBuffer_MVB[1106+128];
                    g_dataBuffer_WH_Display[1122+128]=g_dataBuffer_MVB[1122+128];
                }
                else if(Bit(g_dataBuffer_MVB[1152+128],9)==1)
                {
                    che3_door2 = 1;

                    g_dataBuffer_WH_Display[1106+128]=g_dataBuffer_MVB[1106+32+128];
                    g_dataBuffer_WH_Display[1122+128]=g_dataBuffer_MVB[1122+32+128];
                }

            }
            else //both vaild\invaild  = 0
            {
                che3_door2 = 0;

                g_dataBuffer_WH_Display[1106+128]=0;
                g_dataBuffer_WH_Display[1122+128]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+128],10)==1)^(Bit(g_dataBuffer_MVB[1152+128],10)==1))///door3
            {
                if(Bit(g_dataBuffer_MVB[1120+128],10)==1)
                {
                    che3_door3 = 1;

                    g_dataBuffer_WH_Display[1107+128]=g_dataBuffer_MVB[1107+128];
                    g_dataBuffer_WH_Display[1123+128]=g_dataBuffer_MVB[1123+128];
                }
                else if(Bit(g_dataBuffer_MVB[1152+128],10)==1)
                {
                    che3_door3 = 1;

                    g_dataBuffer_WH_Display[1107+128]=g_dataBuffer_MVB[1107+32+128];
                    g_dataBuffer_WH_Display[1123+128]=g_dataBuffer_MVB[1123+32+128];
                }

            }
            else //both vaild\invaild  = 0
            {
                che3_door3 = 0;

                g_dataBuffer_WH_Display[1107+128]=0;
                g_dataBuffer_WH_Display[1123+128]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+128],11)==1)^(Bit(g_dataBuffer_MVB[1152+128],11)==1))///door4
            {
                if(Bit(g_dataBuffer_MVB[1120+128],11)==1)
                {
                    che3_door4 = 1;

                    g_dataBuffer_WH_Display[1108+128]=g_dataBuffer_MVB[1108+128];
                    g_dataBuffer_WH_Display[1124+128]=g_dataBuffer_MVB[1124+128];
                }
                else if(Bit(g_dataBuffer_MVB[1152+128],11)==1)
                {
                    che3_door4 = 1;

                    g_dataBuffer_WH_Display[1108+128]=g_dataBuffer_MVB[1108+32+128];
                    g_dataBuffer_WH_Display[1124+128]=g_dataBuffer_MVB[1124+32+128];
                }

            }
            else //both vaild\invaild  = 0
            {
                che3_door4 = 0;

                g_dataBuffer_WH_Display[1108+128]=0;
                g_dataBuffer_WH_Display[1124+128]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+128],12)==1)^(Bit(g_dataBuffer_MVB[1152+128],12)==1))///door5
            {
                if(Bit(g_dataBuffer_MVB[1120+128],12)==1)
                {
                    che3_door5 = 1;

                    g_dataBuffer_WH_Display[1109+128]=g_dataBuffer_MVB[1109+128];
                    g_dataBuffer_WH_Display[1125+128]=g_dataBuffer_MVB[1125+128];
                }
                else if(Bit(g_dataBuffer_MVB[1152+128],12)==1)
                {
                    che3_door5 = 1;

                    g_dataBuffer_WH_Display[1109+128]=g_dataBuffer_MVB[1109+32+128];
                    g_dataBuffer_WH_Display[1125+128]=g_dataBuffer_MVB[1125+32+128];
                }

            }
            else //both vaild\invaild  = 0
            {
                che3_door5 = 0;

                g_dataBuffer_WH_Display[1109+128]=0;
                g_dataBuffer_WH_Display[1125+128]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+128],13)==1)^(Bit(g_dataBuffer_MVB[1152+128],13)==1))///door6
            {
                if(Bit(g_dataBuffer_MVB[1120+128],13)==1)
                {
                    che3_door6 = 1;

                    g_dataBuffer_WH_Display[1110+128]=g_dataBuffer_MVB[1110+128];
                    g_dataBuffer_WH_Display[1126+128]=g_dataBuffer_MVB[1126+128];
                }
                else if(Bit(g_dataBuffer_MVB[1152+128],13)==1)
                {
                    che3_door6 = 1;

                    g_dataBuffer_WH_Display[1110+128]=g_dataBuffer_MVB[1110+32+128];
                    g_dataBuffer_WH_Display[1126+128]=g_dataBuffer_MVB[1126+32+128];
                }

            }
            else //both vaild\invaild  = 0
            {
                che3_door6 = 0;

                g_dataBuffer_WH_Display[1110+128]=0;
                g_dataBuffer_WH_Display[1126+128]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+128],14)==1)^(Bit(g_dataBuffer_MVB[1152+128],14)==1))///door7
            {
                if(Bit(g_dataBuffer_MVB[1120+128],14)==1)
                {
                    che3_door7 = 1;

                    g_dataBuffer_WH_Display[1111+128]=g_dataBuffer_MVB[1111+128];
                    g_dataBuffer_WH_Display[1127+128]=g_dataBuffer_MVB[1127+128];
                }
                else if(Bit(g_dataBuffer_MVB[1152+128],14)==1)
                {
                    che3_door7 = 1;

                    g_dataBuffer_WH_Display[1111+128]=g_dataBuffer_MVB[1111+32+128];
                    g_dataBuffer_WH_Display[1127+128]=g_dataBuffer_MVB[1127+32+128];
                }

            }
            else //both vaild\invaild  = 0
            {
                che3_door7 = 0;

                g_dataBuffer_WH_Display[1111+128]=0;
                g_dataBuffer_WH_Display[1127+128]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+128],15)==1)^(Bit(g_dataBuffer_MVB[1152+128],15)==1))///door8
            {
                if(Bit(g_dataBuffer_MVB[1120+128],15)==1)
                {
                    che3_door8 = 1;

                    g_dataBuffer_WH_Display[1112+128]=g_dataBuffer_MVB[1112+128];
                    g_dataBuffer_WH_Display[1128+128]=g_dataBuffer_MVB[1128+128];
                }
                else if(Bit(g_dataBuffer_MVB[1152+128],15)==1)
                {
                    che3_door8 = 1;

                    g_dataBuffer_WH_Display[1112+128]=g_dataBuffer_MVB[1112+32+128];
                    g_dataBuffer_WH_Display[1128+128]=g_dataBuffer_MVB[1128+32+128];
                }

            }
            else //both vaild\invaild  = 0
            {
                che3_door8 = 0;

                g_dataBuffer_WH_Display[1112+128]=0;
                g_dataBuffer_WH_Display[1128+128]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+128],0)==1)^(Bit(g_dataBuffer_MVB[1152+128],0)==1))///door9
            {
                if(Bit(g_dataBuffer_MVB[1120+128],0)==1)
                {
                    che3_door9 = 1;

                    g_dataBuffer_WH_Display[1113+128]=g_dataBuffer_MVB[1113+128];
                    g_dataBuffer_WH_Display[1129+128]=g_dataBuffer_MVB[1129+128];
                }
                else if(Bit(g_dataBuffer_MVB[1152+128],0)==1)
                {
                    che3_door9 = 1;

                    g_dataBuffer_WH_Display[1113+128]=g_dataBuffer_MVB[1113+32+128];
                    g_dataBuffer_WH_Display[1129+128]=g_dataBuffer_MVB[1129+32+128];
                }

            }
            else //both vaild\invaild  = 0
            {
                che3_door9 = 0;

                g_dataBuffer_WH_Display[1113+128]=0;
                g_dataBuffer_WH_Display[1129+128]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+128],1)==1)^(Bit(g_dataBuffer_MVB[1152+128],1)==1))///door10
            {
                if(Bit(g_dataBuffer_MVB[1120+128],1)==1)
                {
                    che3_door10 = 1;

                    g_dataBuffer_WH_Display[1114+128]=g_dataBuffer_MVB[1114+128];
                    g_dataBuffer_WH_Display[1130+128]=g_dataBuffer_MVB[1130+128];
                }
                else if(Bit(g_dataBuffer_MVB[1152+128],1)==1)
                {
                    che3_door10 = 1;

                    g_dataBuffer_WH_Display[1114+128]=g_dataBuffer_MVB[1114+32+128];
                    g_dataBuffer_WH_Display[1130+128]=g_dataBuffer_MVB[1130+32+128];
                }

            }
            else //both vaild\invaild  = 0
            {
                che3_door10 = 0;

                g_dataBuffer_WH_Display[1114+128]=0;
                g_dataBuffer_WH_Display[1130+128]=0;
            }


        }
        else if((g_dataBuffer_MVB[1118+128]/256==3)^(g_dataBuffer_MVB[1118+32+128]/256==3))///one is part master other is sliver
        {
            if((g_dataBuffer_MVB[1118+128]/256==3))// edcu5 part master
            {
                if(Bit(g_dataBuffer_MVB[1120+128],8)==1)
                {
                    g_dataBuffer_WH_Display[1105+128]=g_dataBuffer_MVB[1105+128];
                    g_dataBuffer_WH_Display[1121+128]=g_dataBuffer_MVB[1121+128];
                    che3_door1 = 1;
                }else
                {
                    che3_door1 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+128],9)==1)
                {
                    g_dataBuffer_WH_Display[1106+128]=g_dataBuffer_MVB[1106+128];
                    g_dataBuffer_WH_Display[1122+128]=g_dataBuffer_MVB[1122+128];
                    che3_door2 = 1;
                }else
                {
                    che3_door2 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+128],10)==1)
                {
                    g_dataBuffer_WH_Display[1107+128]=g_dataBuffer_MVB[1107+128];
                    g_dataBuffer_WH_Display[1123+128]=g_dataBuffer_MVB[1123+128];
                    che3_door3 = 1;
                }else
                {
                    che3_door3 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+128],11)==1)
                {
                    g_dataBuffer_WH_Display[1108+128]=g_dataBuffer_MVB[1108+128];
                    g_dataBuffer_WH_Display[1124+128]=g_dataBuffer_MVB[1124+128];
                    che3_door4 = 1;
                }else
                {
                    che3_door4 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+128],12)==1)
                {
                    g_dataBuffer_WH_Display[1109+128]=g_dataBuffer_MVB[1109+128];
                    g_dataBuffer_WH_Display[1125+128]=g_dataBuffer_MVB[1125+128];
                    che3_door5 = 1;
                }else
                {
                    che3_door5 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+128],13)==1)
                {
                    g_dataBuffer_WH_Display[1110+128]=g_dataBuffer_MVB[1110+128];
                    g_dataBuffer_WH_Display[1126+128]=g_dataBuffer_MVB[1126+128];
                    che3_door6 = 1;
                }else
                {
                    che3_door6 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+128],14)==1)
                {
                    g_dataBuffer_WH_Display[1111+128]=g_dataBuffer_MVB[1111+128];
                    g_dataBuffer_WH_Display[1127+128]=g_dataBuffer_MVB[1127+128];
                    che3_door7 = 1;
                }else
                {
                    che3_door7 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+128],15)==1)
                {
                    g_dataBuffer_WH_Display[1112+128]=g_dataBuffer_MVB[1112+128];
                    g_dataBuffer_WH_Display[1128+128]=g_dataBuffer_MVB[1128+128];
                    che3_door8 = 1;
                }else
                {
                    che3_door8 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+128],0)==1)
                {
                    g_dataBuffer_WH_Display[1113+128]=g_dataBuffer_MVB[1113+128];
                    g_dataBuffer_WH_Display[1129+128]=g_dataBuffer_MVB[1129+128];
                    che3_door9 = 1;
                }else
                {
                    che3_door9 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+128],1)==1)
                {
                    g_dataBuffer_WH_Display[1114+128]=g_dataBuffer_MVB[1114+128];
                    g_dataBuffer_WH_Display[1130+128]=g_dataBuffer_MVB[1130+128];
                    che3_door10 = 1;
                }else
                {
                    che3_door10 = 0;
                }

            }
            else if((g_dataBuffer_MVB[1118+32+128]/256==3))// edcu6 part master
            {
                if(Bit(g_dataBuffer_MVB[1152+128],8)==1)
                {
                    g_dataBuffer_WH_Display[1105+128]=g_dataBuffer_MVB[1105+32+128];
                    g_dataBuffer_WH_Display[1121+128]=g_dataBuffer_MVB[1121+32+128];
                    che3_door1 = 1;
                }else
                {
                    che3_door1 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+128],9)==1)
                {
                    g_dataBuffer_WH_Display[1106+128]=g_dataBuffer_MVB[1106+32+128];
                    g_dataBuffer_WH_Display[1122+128]=g_dataBuffer_MVB[1122+32+128];
                    che3_door2 = 1;
                }else
                {
                    che3_door2 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+128],10)==1)
                {
                    g_dataBuffer_WH_Display[1107+128]=g_dataBuffer_MVB[1107+32+128];
                    g_dataBuffer_WH_Display[1123+128]=g_dataBuffer_MVB[1123+32+128];
                    che3_door3 = 1;
                }else
                {
                    che3_door3 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+128],11)==1)
                {
                    g_dataBuffer_WH_Display[1108+128]=g_dataBuffer_MVB[1108+32+128];
                    g_dataBuffer_WH_Display[1124+128]=g_dataBuffer_MVB[1124+32+128];
                    che3_door4 = 1;
                }else
                {
                    che3_door4 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+128],12)==1)
                {
                    g_dataBuffer_WH_Display[1109+128]=g_dataBuffer_MVB[1109+32+128];
                    g_dataBuffer_WH_Display[1125+128]=g_dataBuffer_MVB[1125+32+128];
                    che3_door5 = 1;
                }else
                {
                    che3_door5 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+128],13)==1)
                {
                    g_dataBuffer_WH_Display[1110+128]=g_dataBuffer_MVB[1110+32+128];
                    g_dataBuffer_WH_Display[1126+128]=g_dataBuffer_MVB[1126+32+128];
                    che3_door6 = 1;
                }else
                {
                    che3_door6 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+128],14)==1)
                {
                    g_dataBuffer_WH_Display[1111+128]=g_dataBuffer_MVB[1111+32+128];
                    g_dataBuffer_WH_Display[1127+128]=g_dataBuffer_MVB[1127+32+128];
                    che3_door7 = 1;
                }else
                {
                    che3_door7 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+128],15)==1)
                {
                    g_dataBuffer_WH_Display[1112+128]=g_dataBuffer_MVB[1112+32+128];
                    g_dataBuffer_WH_Display[1128+128]=g_dataBuffer_MVB[1128+32+128];
                    che3_door8 = 1;
                }else
                {
                    che3_door8 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+128],0)==1)
                {
                    g_dataBuffer_WH_Display[1113+128]=g_dataBuffer_MVB[1113+32+128];
                    g_dataBuffer_WH_Display[1129+128]=g_dataBuffer_MVB[1129+32+128];
                    che3_door9 = 1;
                }else
                {
                    che3_door9 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+128],1)==1)
                {
                    g_dataBuffer_WH_Display[1114+128]=g_dataBuffer_MVB[1114+32+128];
                    g_dataBuffer_WH_Display[1130+128]=g_dataBuffer_MVB[1130+32+128];
                    che3_door10 = 1;
                }else
                {
                    che3_door10 = 0;
                }
            }
        }
        else
        {
            che3_door1 = 0;
            che3_door2 = 0;
            che3_door3 = 0;
            che3_door4 = 0;
            che3_door5 = 0;
            che3_door6 = 0;
            che3_door7 = 0;
            che3_door8 = 0;
            che3_door9 = 0;
            che3_door10 = 0;
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j+128]=0;
            }

        }
    }else if(CTHMI_EDCU5On_B1)//edcu5 online
    {
        if(g_dataBuffer_MVB[1118+128]/256==1)//edcu5 master
        {
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j+128]=g_dataBuffer_MVB[1104+j+128];

                //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或
               if ( (Bit(g_dataBuffer_WH_Display[1120+128],8) )  )
               {
                   che3_door1 = 1;
               }
               else
               {
                   che3_door1 = 0;
               }
               if ( (Bit(g_dataBuffer_WH_Display[1120+128],9) ) )
               {
                   che3_door2 = 1;
               }
               else
               {
                   che3_door2 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+128],10) )  )
               {
                   che3_door3 = 1;
               }
               else
               {
                   che3_door3 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+128],11) )  )
               {
                   che3_door4 = 1;
               }
               else
               {
                   che3_door4 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+128],12) )  )
               {
                   che3_door5 = 1;
               }
               else
               {
                   che3_door5 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+128],13) )  )
               {
                   che3_door6 = 1;
               }
               else
               {
                   che3_door6 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+128],14) )  )
               {
                   che3_door7 = 1;
               }
               else
               {
                   che3_door7 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+128],15) )  )
               {
                   che3_door8 = 1;
               }
               else
               {
                   che3_door8 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+128],0) )  )
               {
                   che3_door9 = 1;
               }
               else
               {
                   che3_door9 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+128],1) )  )
               {
                   che3_door10 = 1;
               }
               else
               {
                   che3_door10 = 0;
               }

            }
        }
        else if(g_dataBuffer_MVB[1118+128]/256==3)//edcu5 part master
        {

            if(Bit(g_dataBuffer_MVB[1120+128],8)==1)
            {
                g_dataBuffer_WH_Display[1105+128]=g_dataBuffer_MVB[1105+128];
                g_dataBuffer_WH_Display[1121+128]=g_dataBuffer_MVB[1121+128];
                che3_door1 = 1;
            }else
            {
                che3_door1 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+128],9)==1)
            {
                g_dataBuffer_WH_Display[1106+128]=g_dataBuffer_MVB[1106+128];
                g_dataBuffer_WH_Display[1122+128]=g_dataBuffer_MVB[1122+128];
                che3_door2 = 1;
            }else
            {
                che3_door2 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+128],10)==1)
            {
                g_dataBuffer_WH_Display[1107+128]=g_dataBuffer_MVB[1107+128];
                g_dataBuffer_WH_Display[1123+128]=g_dataBuffer_MVB[1123+128];
                che3_door3 = 1;
            }else
            {
                che3_door3 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+128],11)==1)
            {
                g_dataBuffer_WH_Display[1108+128]=g_dataBuffer_MVB[1108+128];
                g_dataBuffer_WH_Display[1124+128]=g_dataBuffer_MVB[1124+128];
                che3_door4 = 1;
            }else
            {
                che3_door4 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+128],12)==1)
            {
                g_dataBuffer_WH_Display[1109+128]=g_dataBuffer_MVB[1109+128];
                g_dataBuffer_WH_Display[1125+128]=g_dataBuffer_MVB[1125+128];
                che3_door5 = 1;
            }else
            {
                che3_door5 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+128],13)==1)
            {
                g_dataBuffer_WH_Display[1110+128]=g_dataBuffer_MVB[1110+128];
                g_dataBuffer_WH_Display[1126+128]=g_dataBuffer_MVB[1126+128];
                che3_door6 = 1;
            }else
            {
                che3_door6 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+128],14)==1)
            {
                g_dataBuffer_WH_Display[1111+128]=g_dataBuffer_MVB[1111+128];
                g_dataBuffer_WH_Display[1127+128]=g_dataBuffer_MVB[1127+128];
                che3_door7 = 1;
            }else
            {
                che3_door7 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+128],15)==1)
            {
                g_dataBuffer_WH_Display[1112+128]=g_dataBuffer_MVB[1112+128];
                g_dataBuffer_WH_Display[1128+128]=g_dataBuffer_MVB[1128+128];
                che3_door8 = 1;
            }else
            {
                che3_door8 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+128],0)==1)
            {
                g_dataBuffer_WH_Display[1113+128]=g_dataBuffer_MVB[1113+128];
                g_dataBuffer_WH_Display[1129+128]=g_dataBuffer_MVB[1129+128];
                che3_door9 = 1;
            }else
            {
                che3_door9 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+128],1)==1)
            {
                g_dataBuffer_WH_Display[1114+128]=g_dataBuffer_MVB[1114+128];
                g_dataBuffer_WH_Display[1130+128]=g_dataBuffer_MVB[1130+128];
                che3_door10 = 1;
            }else
            {
                che3_door10 = 0;
            }


        }else
        {
            che3_door1 = 0;
            che3_door2 = 0;
            che3_door3 = 0;
            che3_door4 = 0;
            che3_door5 = 0;
            che3_door6 = 0;
            che3_door7 = 0;
            che3_door8 = 0;
            che3_door9 = 0;
            che3_door10 = 0;
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j+128]=0;
            }
        }

    }else if(CTHMI_EDCU6On_B1)
    {
        if((g_dataBuffer_MVB[1118+32+128]/256==1))//edcu6 master
        {
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j+128]=g_dataBuffer_MVB[1104+32+j+128];

                //DRiCT_Dr1SttsVld_B1	门2状态可信	1=激活    每节车厢两个门网关的信号相或
               if ( (Bit(g_dataBuffer_WH_Display[1120+128],8) )  )
               {
                   che3_door1 = 1;
               }
               else
               {
                   che3_door1 = 0;
               }
               if ( (Bit(g_dataBuffer_WH_Display[1120+128],9) ) )
               {
                   che3_door2 = 1;
               }
               else
               {
                   che3_door2 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+128],10) )  )
               {
                   che3_door3 = 1;
               }
               else
               {
                   che3_door3 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+128],11) )  )
               {
                   che3_door4 = 1;
               }
               else
               {
                   che3_door4 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+128],12) )  )
               {
                   che3_door5 = 1;
               }
               else
               {
                   che3_door5 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+128],13) )  )
               {
                   che3_door6 = 1;
               }
               else
               {
                   che3_door6 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+128],14) )  )
               {
                   che3_door7 = 1;
               }
               else
               {
                   che3_door7 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+128],15) )  )
               {
                   che3_door8 = 1;
               }
               else
               {
                   che3_door8 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+128],0) )  )
               {
                   che3_door9 = 1;
               }
               else
               {
                   che3_door9 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+128],1) )  )
               {
                   che3_door10 = 1;
               }
               else
               {
                   che3_door10 = 0;
               }

            }
        }
        else if((g_dataBuffer_MVB[1118+32+128]/256==3))// edcu6 part master
        {
            if(Bit(g_dataBuffer_MVB[1152+128],8)==1)
            {
                g_dataBuffer_WH_Display[1105+128]=g_dataBuffer_MVB[1105+32+128];
                g_dataBuffer_WH_Display[1121+128]=g_dataBuffer_MVB[1121+32+128];
                che3_door1 = 1;
            }else
            {
                che3_door1 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+128],9)==1)
            {
                g_dataBuffer_WH_Display[1106+128]=g_dataBuffer_MVB[1106+32+128];
                g_dataBuffer_WH_Display[1122+128]=g_dataBuffer_MVB[1122+32+128];
                che3_door2 = 1;
            }else
            {
                che3_door2 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+128],10)==1)
            {
                g_dataBuffer_WH_Display[1107+128]=g_dataBuffer_MVB[1107+32+128];
                g_dataBuffer_WH_Display[1123+128]=g_dataBuffer_MVB[1123+32+128];
                che3_door3 = 1;
            }else
            {
                che3_door3 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+128],11)==1)
            {
                g_dataBuffer_WH_Display[1108+128]=g_dataBuffer_MVB[1108+32+128];
                g_dataBuffer_WH_Display[1124+128]=g_dataBuffer_MVB[1124+32+128];
                che3_door4 = 1;
            }else
            {
                che3_door4 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+128],12)==1)
            {
                g_dataBuffer_WH_Display[1109+128]=g_dataBuffer_MVB[1109+32+128];
                g_dataBuffer_WH_Display[1125+128]=g_dataBuffer_MVB[1125+32+128];
                che3_door5 = 1;
            }else
            {
                che3_door5 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+128],13)==1)
            {
                g_dataBuffer_WH_Display[1110+128]=g_dataBuffer_MVB[1110+32+128];
                g_dataBuffer_WH_Display[1126+128]=g_dataBuffer_MVB[1126+32+128];
                che3_door6 = 1;
            }else
            {
                che3_door6 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+128],14)==1)
            {
                g_dataBuffer_WH_Display[1111+128]=g_dataBuffer_MVB[1111+32+128];
                g_dataBuffer_WH_Display[1127+128]=g_dataBuffer_MVB[1127+32+128];
                che3_door7 = 1;
            }else
            {
                che3_door7 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+128],15)==1)
            {
                g_dataBuffer_WH_Display[1112+128]=g_dataBuffer_MVB[1112+32+128];
                g_dataBuffer_WH_Display[1128+128]=g_dataBuffer_MVB[1128+32+128];
                che3_door8 = 1;
            }else
            {
                che3_door8 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+128],0)==1)
            {
                g_dataBuffer_WH_Display[1113+128]=g_dataBuffer_MVB[1113+32+128];
                g_dataBuffer_WH_Display[1129+128]=g_dataBuffer_MVB[1129+32+128];
                che3_door9 = 1;
            }else
            {
                che3_door9 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+128],1)==1)
            {
                g_dataBuffer_WH_Display[1114+128]=g_dataBuffer_MVB[1114+32+128];
                g_dataBuffer_WH_Display[1130+128]=g_dataBuffer_MVB[1130+32+128];
                che3_door10 = 1;
            }else
            {
                che3_door10 = 0;
            }
        }
        else
        {
            che3_door1 = 0;
            che3_door2 = 0;
            che3_door3 = 0;
            che3_door4 = 0;
            che3_door5 = 0;
            che3_door6 = 0;
            che3_door7 = 0;
            che3_door8 = 0;
            che3_door9 = 0;
            che3_door10 = 0;
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j+128]=0;
            }
        }
    }
    else
    {
        che3_door1 = 0;
        che3_door2 = 0;
        che3_door3 = 0;
        che3_door4 = 0;
        che3_door5 = 0;
        che3_door6 = 0;
        che3_door7 = 0;
        che3_door8 = 0;
        che3_door9 = 0;
        che3_door10 = 0;
        for(int j=0;j<32;j++)
        {
            g_dataBuffer_WH_Display[1104+j+128]=0;
        }
    }

    // 4 车厢 EDCU7

    if(CTHMI_EDCU7On_B1&&CTHMI_EDCU8On_B1)///both edcu78 online
    {
        if((g_dataBuffer_MVB[1118+192]/256==1)^(g_dataBuffer_MVB[1118+32+192]/256==1))////edcu7or8 master
        {
            if(g_dataBuffer_MVB[1118+192]/256==1)//edcu7 master
            {
                for(int j=0;j<32;j++)
                {
                    g_dataBuffer_WH_Display[1104+j+192]=g_dataBuffer_MVB[1104+j+192];

                    //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或
                   if ( (Bit(g_dataBuffer_WH_Display[1120+192],8) )  )
                   {
                       che4_door1 = 1;
                   }
                   else
                   {
                       che4_door1 = 0;
                   }
                   if ( (Bit(g_dataBuffer_WH_Display[1120+192],9) ) )
                   {
                       che4_door2 = 1;
                   }
                   else
                   {
                       che4_door2 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+192],10) )  )
                   {
                       che4_door3 = 1;
                   }
                   else
                   {
                       che4_door3 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+192],11) )  )
                   {
                       che4_door4 = 1;
                   }
                   else
                   {
                       che4_door4 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+192],12) )  )
                   {
                       che4_door5 = 1;
                   }
                   else
                   {
                       che4_door5 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+192],13) )  )
                   {
                       che4_door6 = 1;
                   }
                   else
                   {
                       che4_door6 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+192],14) )  )
                   {
                       che4_door7 = 1;
                   }
                   else
                   {
                       che4_door7 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+192],15) )  )
                   {
                       che4_door8 = 1;
                   }
                   else
                   {
                       che4_door8 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+192],0) )  )
                   {
                       che4_door9 = 1;
                   }
                   else
                   {
                       che4_door9 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+192],1) )  )
                   {
                       che4_door10 = 1;
                   }
                   else
                   {
                       che4_door10 = 0;
                   }

                }
            }
            else if((g_dataBuffer_MVB[1118+32+192]/256==1))//edcu8 master
            {
                for(int j=0;j<32;j++)
                {
                    g_dataBuffer_WH_Display[1104+j+192]=g_dataBuffer_MVB[1104+32+j+192];

                    //DRiCT_Dr1SttsVld_B1	门2状态可信	1=激活    每节车厢两个门网关的信号相或
                   if ( (Bit(g_dataBuffer_WH_Display[1120+192],8) )  )
                   {
                       che4_door1 = 1;
                   }
                   else
                   {
                       che4_door1 = 0;
                   }
                   if ( (Bit(g_dataBuffer_WH_Display[1120+192],9) ) )
                   {
                       che4_door2 = 1;
                   }
                   else
                   {
                       che4_door2 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+192],10) )  )
                   {
                       che4_door3 = 1;
                   }
                   else
                   {
                       che4_door3 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+192],11) )  )
                   {
                       che4_door4 = 1;
                   }
                   else
                   {
                       che4_door4 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+192],12) )  )
                   {
                       che4_door5 = 1;
                   }
                   else
                   {
                       che4_door5 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+192],13) )  )
                   {
                       che4_door6 = 1;
                   }
                   else
                   {
                       che4_door6 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+192],14) )  )
                   {
                       che4_door7 = 1;
                   }
                   else
                   {
                       che4_door7 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+192],15) )  )
                   {
                       che4_door8 = 1;
                   }
                   else
                   {
                       che4_door8 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+192],0) )  )
                   {
                       che4_door9 = 1;
                   }
                   else
                   {
                       che4_door9 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+192],1) )  )
                   {
                       che4_door10 = 1;
                   }
                   else
                   {
                       che4_door10 = 0;
                   }

                }
            }

        }
        else if((g_dataBuffer_MVB[1118+192]/256==3)&&(g_dataBuffer_MVB[1118+32+192]/256==3))//state == 3 get vaild door word
        {

            if((Bit(g_dataBuffer_MVB[1120+192],8)==1)^(Bit(g_dataBuffer_MVB[1152+192],8)==1))//door1
            {
                if(Bit(g_dataBuffer_MVB[1120+192],8)==1)
                {
                    che4_door1 = 1;

                    g_dataBuffer_WH_Display[1105+192]=g_dataBuffer_MVB[1105+192];
                    g_dataBuffer_WH_Display[1121+192]=g_dataBuffer_MVB[1121+192];
                }
                else if(Bit(g_dataBuffer_MVB[1152+192],8)==1)
                {
                    che4_door1 = 1;

                    g_dataBuffer_WH_Display[1105+192]=g_dataBuffer_MVB[1105+32+192];
                    g_dataBuffer_WH_Display[1121+192]=g_dataBuffer_MVB[1121+32+192];
                }

            }
            else //both vaild\invaild  = 0
            {
                che4_door1 = 0;

                g_dataBuffer_WH_Display[1105+192]=0;
                g_dataBuffer_WH_Display[1121+192]=0;
            }


            if((Bit(g_dataBuffer_MVB[1120+192],9)==1)^(Bit(g_dataBuffer_MVB[1152+192],9)==1))///door2
            {
                if(Bit(g_dataBuffer_MVB[1120+192],9)==1)
                {
                    che4_door2 = 1;

                    g_dataBuffer_WH_Display[1106+192]=g_dataBuffer_MVB[1106+192];
                    g_dataBuffer_WH_Display[1122+192]=g_dataBuffer_MVB[1122+192];
                }
                else if(Bit(g_dataBuffer_MVB[1152+192],9)==1)
                {
                    che4_door2 = 1;

                    g_dataBuffer_WH_Display[1106+192]=g_dataBuffer_MVB[1106+32+192];
                    g_dataBuffer_WH_Display[1122+192]=g_dataBuffer_MVB[1122+32+192];
                }

            }
            else //both vaild\invaild  = 0
            {
                che4_door2 = 0;

                g_dataBuffer_WH_Display[1106+192]=0;
                g_dataBuffer_WH_Display[1122+192]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+192],10)==1)^(Bit(g_dataBuffer_MVB[1152+192],10)==1))///door3
            {
                if(Bit(g_dataBuffer_MVB[1120+192],10)==1)
                {
                    che4_door3 = 1;

                    g_dataBuffer_WH_Display[1107+192]=g_dataBuffer_MVB[1107+192];
                    g_dataBuffer_WH_Display[1123+192]=g_dataBuffer_MVB[1123+192];
                }
                else if(Bit(g_dataBuffer_MVB[1152+192],10)==1)
                {
                    che4_door3 = 1;

                    g_dataBuffer_WH_Display[1107+192]=g_dataBuffer_MVB[1107+32+192];
                    g_dataBuffer_WH_Display[1123+192]=g_dataBuffer_MVB[1123+32+192];
                }

            }
            else //both vaild\invaild  = 0
            {
                che4_door3 = 0;

                g_dataBuffer_WH_Display[1107+192]=0;
                g_dataBuffer_WH_Display[1123+192]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+192],11)==1)^(Bit(g_dataBuffer_MVB[1152+192],11)==1))///door4
            {
                if(Bit(g_dataBuffer_MVB[1120+192],11)==1)
                {
                    che4_door4 = 1;

                    g_dataBuffer_WH_Display[1108+192]=g_dataBuffer_MVB[1108+192];
                    g_dataBuffer_WH_Display[1124+192]=g_dataBuffer_MVB[1124+192];
                }
                else if(Bit(g_dataBuffer_MVB[1152+192],11)==1)
                {
                    che4_door4 = 1;

                    g_dataBuffer_WH_Display[1108+192]=g_dataBuffer_MVB[1108+32+192];
                    g_dataBuffer_WH_Display[1124+192]=g_dataBuffer_MVB[1124+32+192];
                }

            }
            else //both vaild\invaild  = 0
            {
                che4_door4 = 0;

                g_dataBuffer_WH_Display[1108+192]=0;
                g_dataBuffer_WH_Display[1124+192]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+192],12)==1)^(Bit(g_dataBuffer_MVB[1152+192],12)==1))///door5
            {
                if(Bit(g_dataBuffer_MVB[1120+192],12)==1)
                {
                    che4_door5 = 1;

                    g_dataBuffer_WH_Display[1109+192]=g_dataBuffer_MVB[1109+192];
                    g_dataBuffer_WH_Display[1125+192]=g_dataBuffer_MVB[1125+192];
                }
                else if(Bit(g_dataBuffer_MVB[1152+192],12)==1)
                {
                    che4_door5 = 1;

                    g_dataBuffer_WH_Display[1109+192]=g_dataBuffer_MVB[1109+32+192];
                    g_dataBuffer_WH_Display[1125+192]=g_dataBuffer_MVB[1125+32+192];
                }

            }
            else //both vaild\invaild  = 0
            {
                che4_door5 = 0;

                g_dataBuffer_WH_Display[1109+192]=0;
                g_dataBuffer_WH_Display[1125+192]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+192],13)==1)^(Bit(g_dataBuffer_MVB[1152+192],13)==1))///door6
            {
                if(Bit(g_dataBuffer_MVB[1120+192],13)==1)
                {
                    che4_door6 = 1;

                    g_dataBuffer_WH_Display[1110+192]=g_dataBuffer_MVB[1110+192];
                    g_dataBuffer_WH_Display[1126+192]=g_dataBuffer_MVB[1126+192];
                }
                else if(Bit(g_dataBuffer_MVB[1152+192],13)==1)
                {
                    che4_door6 = 1;

                    g_dataBuffer_WH_Display[1110+192]=g_dataBuffer_MVB[1110+32+192];
                    g_dataBuffer_WH_Display[1126+192]=g_dataBuffer_MVB[1126+32+192];
                }

            }
            else //both vaild\invaild  = 0
            {
                che4_door6 = 0;

                g_dataBuffer_WH_Display[1110+192]=0;
                g_dataBuffer_WH_Display[1126+192]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+192],14)==1)^(Bit(g_dataBuffer_MVB[1152+192],14)==1))///door7
            {
                if(Bit(g_dataBuffer_MVB[1120+192],14)==1)
                {
                    che4_door7 = 1;

                    g_dataBuffer_WH_Display[1111+192]=g_dataBuffer_MVB[1111+192];
                    g_dataBuffer_WH_Display[1127+192]=g_dataBuffer_MVB[1127+192];
                }
                else if(Bit(g_dataBuffer_MVB[1152+192],14)==1)
                {
                    che4_door7 = 1;

                    g_dataBuffer_WH_Display[1111+192]=g_dataBuffer_MVB[1111+32+192];
                    g_dataBuffer_WH_Display[1127+192]=g_dataBuffer_MVB[1127+32+192];
                }

            }
            else //both vaild\invaild  = 0
            {
                che4_door7 = 0;

                g_dataBuffer_WH_Display[1111+192]=0;
                g_dataBuffer_WH_Display[1127+192]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+192],15)==1)^(Bit(g_dataBuffer_MVB[1152+192],15)==1))///door8
            {
                if(Bit(g_dataBuffer_MVB[1120+192],15)==1)
                {
                    che4_door8 = 1;

                    g_dataBuffer_WH_Display[1112+192]=g_dataBuffer_MVB[1112+192];
                    g_dataBuffer_WH_Display[1128+192]=g_dataBuffer_MVB[1128+192];
                }
                else if(Bit(g_dataBuffer_MVB[1152+192],15)==1)
                {
                    che4_door8 = 1;

                    g_dataBuffer_WH_Display[1112+192]=g_dataBuffer_MVB[1112+32+192];
                    g_dataBuffer_WH_Display[1128+192]=g_dataBuffer_MVB[1128+32+192];
                }

            }
            else //both vaild\invaild  = 0
            {
                che4_door8 = 0;

                g_dataBuffer_WH_Display[1112+192]=0;
                g_dataBuffer_WH_Display[1128+192]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+192],0)==1)^(Bit(g_dataBuffer_MVB[1152+192],0)==1))///door9
            {
                if(Bit(g_dataBuffer_MVB[1120+192],0)==1)
                {
                    che4_door9 = 1;

                    g_dataBuffer_WH_Display[1113+192]=g_dataBuffer_MVB[1113+192];
                    g_dataBuffer_WH_Display[1129+192]=g_dataBuffer_MVB[1129+192];
                }
                else if(Bit(g_dataBuffer_MVB[1152+192],0)==1)
                {
                    che4_door9 = 1;

                    g_dataBuffer_WH_Display[1113+192]=g_dataBuffer_MVB[1113+32+192];
                    g_dataBuffer_WH_Display[1129+192]=g_dataBuffer_MVB[1129+32+192];
                }

            }
            else //both vaild\invaild  = 0
            {
                che4_door9 = 0;

                g_dataBuffer_WH_Display[1113+192]=0;
                g_dataBuffer_WH_Display[1129+192]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+192],1)==1)^(Bit(g_dataBuffer_MVB[1152+192],1)==1))///door10
            {
                if(Bit(g_dataBuffer_MVB[1120+192],1)==1)
                {
                    che4_door10 = 1;

                    g_dataBuffer_WH_Display[1114+192]=g_dataBuffer_MVB[1114+192];
                    g_dataBuffer_WH_Display[1130+192]=g_dataBuffer_MVB[1130+192];
                }
                else if(Bit(g_dataBuffer_MVB[1152+192],1)==1)
                {
                    che4_door10 = 1;

                    g_dataBuffer_WH_Display[1114+192]=g_dataBuffer_MVB[1114+32+192];
                    g_dataBuffer_WH_Display[1130+192]=g_dataBuffer_MVB[1130+32+192];
                }

            }
            else //both vaild\invaild  = 0
            {
                che4_door10 = 0;

                g_dataBuffer_WH_Display[1114+192]=0;
                g_dataBuffer_WH_Display[1130+192]=0;
            }


        }
        else if((g_dataBuffer_MVB[1118+192]/256==3)^(g_dataBuffer_MVB[1118+32+192]/256==3))///one is part master other is sliver
        {
            if((g_dataBuffer_MVB[1118+192]/256==3))// edcu7 part master
            {
                if(Bit(g_dataBuffer_MVB[1120+192],8)==1)
                {
                    g_dataBuffer_WH_Display[1105+192]=g_dataBuffer_MVB[1105+192];
                    g_dataBuffer_WH_Display[1121+192]=g_dataBuffer_MVB[1121+192];
                    che4_door1 = 1;
                }else
                {
                    che4_door1 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+192],9)==1)
                {
                    g_dataBuffer_WH_Display[1106+192]=g_dataBuffer_MVB[1106+192];
                    g_dataBuffer_WH_Display[1122+192]=g_dataBuffer_MVB[1122+192];
                    che4_door2 = 1;
                }else
                {
                    che4_door2 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+192],10)==1)
                {
                    g_dataBuffer_WH_Display[1107+192]=g_dataBuffer_MVB[1107+192];
                    g_dataBuffer_WH_Display[1123+192]=g_dataBuffer_MVB[1123+192];
                    che4_door3 = 1;
                }else
                {
                    che4_door3 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+192],11)==1)
                {
                    g_dataBuffer_WH_Display[1108+192]=g_dataBuffer_MVB[1108+192];
                    g_dataBuffer_WH_Display[1124+192]=g_dataBuffer_MVB[1124+192];
                    che4_door4 = 1;
                }else
                {
                    che4_door4 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+192],12)==1)
                {
                    g_dataBuffer_WH_Display[1109+192]=g_dataBuffer_MVB[1109+192];
                    g_dataBuffer_WH_Display[1125+192]=g_dataBuffer_MVB[1125+192];
                    che4_door5 = 1;
                }else
                {
                    che4_door5 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+192],13)==1)
                {
                    g_dataBuffer_WH_Display[1110+192]=g_dataBuffer_MVB[1110+192];
                    g_dataBuffer_WH_Display[1126+192]=g_dataBuffer_MVB[1126+192];
                    che4_door6 = 1;
                }else
                {
                    che4_door6 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+192],14)==1)
                {
                    g_dataBuffer_WH_Display[1111+192]=g_dataBuffer_MVB[1111+192];
                    g_dataBuffer_WH_Display[1127+192]=g_dataBuffer_MVB[1127+192];
                    che4_door7 = 1;
                }else
                {
                    che4_door7 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+192],15)==1)
                {
                    g_dataBuffer_WH_Display[1112+192]=g_dataBuffer_MVB[1112+192];
                    g_dataBuffer_WH_Display[1128+192]=g_dataBuffer_MVB[1128+192];
                    che4_door8 = 1;
                }else
                {
                    che4_door8 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+192],0)==1)
                {
                    g_dataBuffer_WH_Display[1113+192]=g_dataBuffer_MVB[1113+192];
                    g_dataBuffer_WH_Display[1129+192]=g_dataBuffer_MVB[1129+192];
                    che4_door9 = 1;
                }else
                {
                    che4_door9 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+192],1)==1)
                {
                    g_dataBuffer_WH_Display[1114+192]=g_dataBuffer_MVB[1114+192];
                    g_dataBuffer_WH_Display[1130+192]=g_dataBuffer_MVB[1130+192];
                    che4_door10 = 1;
                }else
                {
                    che4_door10 = 0;
                }

            }
            else if((g_dataBuffer_MVB[1118+32+192]/256==3))// edcu8 part master
            {
                if(Bit(g_dataBuffer_MVB[1152+192],8)==1)
                {
                    g_dataBuffer_WH_Display[1105+192]=g_dataBuffer_MVB[1105+32+192];
                    g_dataBuffer_WH_Display[1121+192]=g_dataBuffer_MVB[1121+32+192];
                    che4_door1 = 1;
                }else
                {
                    che4_door1 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+192],9)==1)
                {
                    g_dataBuffer_WH_Display[1106+192]=g_dataBuffer_MVB[1106+32+192];
                    g_dataBuffer_WH_Display[1122+192]=g_dataBuffer_MVB[1122+32+192];
                    che4_door2 = 1;
                }else
                {
                    che4_door2 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+192],10)==1)
                {
                    g_dataBuffer_WH_Display[1107+192]=g_dataBuffer_MVB[1107+32+192];
                    g_dataBuffer_WH_Display[1123+192]=g_dataBuffer_MVB[1123+32+192];
                    che4_door3 = 1;
                }else
                {
                    che4_door3 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+192],11)==1)
                {
                    g_dataBuffer_WH_Display[1108+192]=g_dataBuffer_MVB[1108+32+192];
                    g_dataBuffer_WH_Display[1124+192]=g_dataBuffer_MVB[1124+32+192];
                    che4_door4 = 1;
                }else
                {
                    che4_door4 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+192],12)==1)
                {
                    g_dataBuffer_WH_Display[1109+192]=g_dataBuffer_MVB[1109+32+192];
                    g_dataBuffer_WH_Display[1125+192]=g_dataBuffer_MVB[1125+32+192];
                    che4_door5 = 1;
                }else
                {
                    che4_door5 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+192],13)==1)
                {
                    g_dataBuffer_WH_Display[1110+192]=g_dataBuffer_MVB[1110+32+192];
                    g_dataBuffer_WH_Display[1126+192]=g_dataBuffer_MVB[1126+32+192];
                    che4_door6 = 1;
                }else
                {
                    che4_door6 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+192],14)==1)
                {
                    g_dataBuffer_WH_Display[1111+192]=g_dataBuffer_MVB[1111+32+192];
                    g_dataBuffer_WH_Display[1127+192]=g_dataBuffer_MVB[1127+32+192];
                    che4_door7 = 1;
                }else
                {
                    che4_door7 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+192],15)==1)
                {
                    g_dataBuffer_WH_Display[1112+192]=g_dataBuffer_MVB[1112+32+192];
                    g_dataBuffer_WH_Display[1128+192]=g_dataBuffer_MVB[1128+32+192];
                    che4_door8 = 1;
                }else
                {
                    che4_door8 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+192],0)==1)
                {
                    g_dataBuffer_WH_Display[1113+192]=g_dataBuffer_MVB[1113+32+192];
                    g_dataBuffer_WH_Display[1129+192]=g_dataBuffer_MVB[1129+32+192];
                    che4_door9 = 1;
                }else
                {
                    che4_door9 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+192],1)==1)
                {
                    g_dataBuffer_WH_Display[1114+192]=g_dataBuffer_MVB[1114+32+192];
                    g_dataBuffer_WH_Display[1130+192]=g_dataBuffer_MVB[1130+32+192];
                    che4_door10 = 1;
                }else
                {
                    che4_door10 = 0;
                }
            }
        }
        else
        {
            che4_door1 = 0;
            che4_door2 = 0;
            che4_door3 = 0;
            che4_door4 = 0;
            che4_door5 = 0;
            che4_door6 = 0;
            che4_door7 = 0;
            che4_door8 = 0;
            che4_door9 = 0;
            che4_door10 = 0;
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j+192]=0;
            }

        }
    }else if(CTHMI_EDCU7On_B1)//edcu7 online
    {
        if(g_dataBuffer_MVB[1118+192]/256==1)//edcu7 master
        {
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j+192]=g_dataBuffer_MVB[1104+j+192];

                //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或
               if ( (Bit(g_dataBuffer_WH_Display[1120+192],8) )  )
               {
                   che4_door1 = 1;
               }
               else
               {
                   che4_door1 = 0;
               }
               if ( (Bit(g_dataBuffer_WH_Display[1120+192],9) ) )
               {
                   che4_door2 = 1;
               }
               else
               {
                   che4_door2 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+192],10) )  )
               {
                   che4_door3 = 1;
               }
               else
               {
                   che4_door3 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+192],11) )  )
               {
                   che4_door4 = 1;
               }
               else
               {
                   che4_door4 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+192],12) )  )
               {
                   che4_door5 = 1;
               }
               else
               {
                   che4_door5 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+192],13) )  )
               {
                   che4_door6 = 1;
               }
               else
               {
                   che4_door6 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+192],14) )  )
               {
                   che4_door7 = 1;
               }
               else
               {
                   che4_door7 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+192],15) )  )
               {
                   che4_door8 = 1;
               }
               else
               {
                   che4_door8 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+192],0) )  )
               {
                   che4_door9 = 1;
               }
               else
               {
                   che4_door9 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+192],1) )  )
               {
                   che4_door10 = 1;
               }
               else
               {
                   che4_door10 = 0;
               }

            }
        }
        else if(g_dataBuffer_MVB[1118+192]/256==3)//edcu7 part master
        {

            if(Bit(g_dataBuffer_MVB[1120+192],8)==1)
            {
                g_dataBuffer_WH_Display[1105+192]=g_dataBuffer_MVB[1105+192];
                g_dataBuffer_WH_Display[1121+192]=g_dataBuffer_MVB[1121+192];
                che4_door1 = 1;
            }else
            {
                che4_door1 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+192],9)==1)
            {
                g_dataBuffer_WH_Display[1106+192]=g_dataBuffer_MVB[1106+192];
                g_dataBuffer_WH_Display[1122+192]=g_dataBuffer_MVB[1122+192];
                che4_door2 = 1;
            }else
            {
                che4_door2 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+192],10)==1)
            {
                g_dataBuffer_WH_Display[1107+192]=g_dataBuffer_MVB[1107+192];
                g_dataBuffer_WH_Display[1123+192]=g_dataBuffer_MVB[1123+192];
                che4_door3 = 1;
            }else
            {
                che4_door3 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+192],11)==1)
            {
                g_dataBuffer_WH_Display[1108+192]=g_dataBuffer_MVB[1108+192];
                g_dataBuffer_WH_Display[1124+192]=g_dataBuffer_MVB[1124+192];
                che4_door4 = 1;
            }else
            {
                che4_door4 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+192],12)==1)
            {
                g_dataBuffer_WH_Display[1109+192]=g_dataBuffer_MVB[1109+192];
                g_dataBuffer_WH_Display[1125+192]=g_dataBuffer_MVB[1125+192];
                che4_door5 = 1;
            }else
            {
                che4_door5 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+192],13)==1)
            {
                g_dataBuffer_WH_Display[1110+192]=g_dataBuffer_MVB[1110+192];
                g_dataBuffer_WH_Display[1126+192]=g_dataBuffer_MVB[1126+192];
                che4_door6 = 1;
            }else
            {
                che4_door6 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+192],14)==1)
            {
                g_dataBuffer_WH_Display[1111+192]=g_dataBuffer_MVB[1111+192];
                g_dataBuffer_WH_Display[1127+192]=g_dataBuffer_MVB[1127+192];
                che4_door7 = 1;
            }else
            {
                che4_door7 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+192],15)==1)
            {
                g_dataBuffer_WH_Display[1112+192]=g_dataBuffer_MVB[1112+192];
                g_dataBuffer_WH_Display[1128+192]=g_dataBuffer_MVB[1128+192];
                che4_door8 = 1;
            }else
            {
                che4_door8 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+192],0)==1)
            {
                g_dataBuffer_WH_Display[1113+192]=g_dataBuffer_MVB[1113+192];
                g_dataBuffer_WH_Display[1129+192]=g_dataBuffer_MVB[1129+192];
                che4_door9 = 1;
            }else
            {
                che4_door9 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+192],1)==1)
            {
                g_dataBuffer_WH_Display[1114+192]=g_dataBuffer_MVB[1114+192];
                g_dataBuffer_WH_Display[1130+192]=g_dataBuffer_MVB[1130+192];
                che4_door10 = 1;
            }else
            {
                che4_door10 = 0;
            }


        }else
        {
            che4_door1 = 0;
            che4_door2 = 0;
            che4_door3 = 0;
            che4_door4 = 0;
            che4_door5 = 0;
            che4_door6 = 0;
            che4_door7 = 0;
            che4_door8 = 0;
            che4_door9 = 0;
            che4_door10 = 0;
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j+192]=0;
            }
        }

    }else if(CTHMI_EDCU8On_B1)
    {
        if((g_dataBuffer_MVB[1118+32+192]/256==1))//edcu8 master
        {
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j+192]=g_dataBuffer_MVB[1104+32+j+192];

                //DRiCT_Dr1SttsVld_B1	门2状态可信	1=激活    每节车厢两个门网关的信号相或
               if ( (Bit(g_dataBuffer_WH_Display[1120+192],8) )  )
               {
                   che4_door1 = 1;
               }
               else
               {
                   che4_door1 = 0;
               }
               if ( (Bit(g_dataBuffer_WH_Display[1120+192],9) ) )
               {
                   che4_door2 = 1;
               }
               else
               {
                   che4_door2 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+192],10) )  )
               {
                   che4_door3 = 1;
               }
               else
               {
                   che4_door3 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+192],11) )  )
               {
                   che4_door4 = 1;
               }
               else
               {
                   che4_door4 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+192],12) )  )
               {
                   che4_door5 = 1;
               }
               else
               {
                   che4_door5 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+192],13) )  )
               {
                   che4_door6 = 1;
               }
               else
               {
                   che4_door6 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+192],14) )  )
               {
                   che4_door7 = 1;
               }
               else
               {
                   che4_door7 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+192],15) )  )
               {
                   che4_door8 = 1;
               }
               else
               {
                   che4_door8 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+192],0) )  )
               {
                   che4_door9 = 1;
               }
               else
               {
                   che4_door9 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+192],1) )  )
               {
                   che4_door10 = 1;
               }
               else
               {
                   che4_door10 = 0;
               }

            }
        }
        else if((g_dataBuffer_MVB[1118+32+192]/256==3))// edcu8 part master
        {
            if(Bit(g_dataBuffer_MVB[1152+192],8)==1)
            {
                g_dataBuffer_WH_Display[1105+192]=g_dataBuffer_MVB[1105+32+192];
                g_dataBuffer_WH_Display[1121+192]=g_dataBuffer_MVB[1121+32+192];
                che4_door1 = 1;
            }else
            {
                che4_door1 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+192],9)==1)
            {
                g_dataBuffer_WH_Display[1106+192]=g_dataBuffer_MVB[1106+32+192];
                g_dataBuffer_WH_Display[1122+192]=g_dataBuffer_MVB[1122+32+192];
                che4_door2 = 1;
            }else
            {
                che4_door2 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+192],10)==1)
            {
                g_dataBuffer_WH_Display[1107+192]=g_dataBuffer_MVB[1107+32+192];
                g_dataBuffer_WH_Display[1123+192]=g_dataBuffer_MVB[1123+32+192];
                che4_door3 = 1;
            }else
            {
                che4_door3 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+192],11)==1)
            {
                g_dataBuffer_WH_Display[1108+192]=g_dataBuffer_MVB[1108+32+192];
                g_dataBuffer_WH_Display[1124+192]=g_dataBuffer_MVB[1124+32+192];
                che4_door4 = 1;
            }else
            {
                che4_door4 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+192],12)==1)
            {
                g_dataBuffer_WH_Display[1109+192]=g_dataBuffer_MVB[1109+32+192];
                g_dataBuffer_WH_Display[1125+192]=g_dataBuffer_MVB[1125+32+192];
                che4_door5 = 1;
            }else
            {
                che4_door5 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+192],13)==1)
            {
                g_dataBuffer_WH_Display[1110+192]=g_dataBuffer_MVB[1110+32+192];
                g_dataBuffer_WH_Display[1126+192]=g_dataBuffer_MVB[1126+32+192];
                che4_door6 = 1;
            }else
            {
                che4_door6 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+192],14)==1)
            {
                g_dataBuffer_WH_Display[1111+192]=g_dataBuffer_MVB[1111+32+192];
                g_dataBuffer_WH_Display[1127+192]=g_dataBuffer_MVB[1127+32+192];
                che4_door7 = 1;
            }else
            {
                che4_door7 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+192],15)==1)
            {
                g_dataBuffer_WH_Display[1112+192]=g_dataBuffer_MVB[1112+32+192];
                g_dataBuffer_WH_Display[1128+192]=g_dataBuffer_MVB[1128+32+192];
                che4_door8 = 1;
            }else
            {
                che4_door8 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+192],0)==1)
            {
                g_dataBuffer_WH_Display[1113+192]=g_dataBuffer_MVB[1113+32+192];
                g_dataBuffer_WH_Display[1129+192]=g_dataBuffer_MVB[1129+32+192];
                che4_door9 = 1;
            }else
            {
                che4_door9 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+192],1)==1)
            {
                g_dataBuffer_WH_Display[1114+192]=g_dataBuffer_MVB[1114+32+192];
                g_dataBuffer_WH_Display[1130+192]=g_dataBuffer_MVB[1130+32+192];
                che4_door10 = 1;
            }else
            {
                che4_door10 = 0;
            }
        }
        else
        {
            che4_door1 = 0;
            che4_door2 = 0;
            che4_door3 = 0;
            che4_door4 = 0;
            che4_door5 = 0;
            che4_door6 = 0;
            che4_door7 = 0;
            che4_door8 = 0;
            che4_door9 = 0;
            che4_door10 = 0;
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j+192]=0;
            }
        }
    }
    else
    {
        che4_door1 = 0;
        che4_door2 = 0;
        che4_door3 = 0;
        che4_door4 = 0;
        che4_door5 = 0;
        che4_door6 = 0;
        che4_door7 = 0;
        che4_door8 = 0;
        che4_door9 = 0;
        che4_door10 = 0;
        for(int j=0;j<32;j++)
        {
            g_dataBuffer_WH_Display[1104+j+192]=0;
        }
    }


    // 5 车厢 EDCU9

    if(CTHMI_EDCU9On_B1&&CTHMI_EDCU10On_B1)///both edcu9 10 online
    {
        if((g_dataBuffer_MVB[1118+256]/256==1)^(g_dataBuffer_MVB[1118+32+256]/256==1))////edcu9or10 master
        {
            if(g_dataBuffer_MVB[1118+256]/256==1)//edcu9 master
            {
                for(int j=0;j<32;j++)
                {
                    g_dataBuffer_WH_Display[1104+j+256]=g_dataBuffer_MVB[1104+j+256];

                    //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或
                   if ( (Bit(g_dataBuffer_WH_Display[1120+256],8) )  )
                   {
                       che5_door1 = 1;
                   }
                   else
                   {
                       che5_door1 = 0;
                   }
                   if ( (Bit(g_dataBuffer_WH_Display[1120+256],9) ) )
                   {
                       che5_door2 = 1;
                   }
                   else
                   {
                       che5_door2 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+256],10) )  )
                   {
                       che5_door3 = 1;
                   }
                   else
                   {
                       che5_door3 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+256],11) )  )
                   {
                       che5_door4 = 1;
                   }
                   else
                   {
                       che5_door4 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+256],12) )  )
                   {
                       che5_door5 = 1;
                   }
                   else
                   {
                       che5_door5 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+256],13) )  )
                   {
                       che5_door6 = 1;
                   }
                   else
                   {
                       che5_door6 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+256],14) )  )
                   {
                       che5_door7 = 1;
                   }
                   else
                   {
                       che5_door7 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+256],15) )  )
                   {
                       che5_door8 = 1;
                   }
                   else
                   {
                       che5_door8 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+256],0) )  )
                   {
                       che5_door9 = 1;
                   }
                   else
                   {
                       che5_door9 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+256],1) )  )
                   {
                       che5_door10 = 1;
                   }
                   else
                   {
                       che5_door10 = 0;
                   }

                }
            }
            else if((g_dataBuffer_MVB[1118+32+256]/256==1))//edcu10 master
            {
                for(int j=0;j<32;j++)
                {
                    g_dataBuffer_WH_Display[1104+j+256]=g_dataBuffer_MVB[1104+32+j+256];

                    //DRiCT_Dr1SttsVld_B1	门2状态可信	1=激活    每节车厢两个门网关的信号相或
                   if ( (Bit(g_dataBuffer_WH_Display[1120+256],8) )  )
                   {
                       che5_door1 = 1;
                   }
                   else
                   {
                       che5_door1 = 0;
                   }
                   if ( (Bit(g_dataBuffer_WH_Display[1120+256],9) ) )
                   {
                       che5_door2 = 1;
                   }
                   else
                   {
                       che5_door2 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+256],10) )  )
                   {
                       che5_door3 = 1;
                   }
                   else
                   {
                       che5_door3 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+256],11) )  )
                   {
                       che5_door4 = 1;
                   }
                   else
                   {
                       che5_door4 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+256],12) )  )
                   {
                       che5_door5 = 1;
                   }
                   else
                   {
                       che5_door5 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+256],13) )  )
                   {
                       che5_door6 = 1;
                   }
                   else
                   {
                       che5_door6 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+256],14) )  )
                   {
                       che5_door7 = 1;
                   }
                   else
                   {
                       che5_door7 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+256],15) )  )
                   {
                       che5_door8 = 1;
                   }
                   else
                   {
                       che5_door8 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+256],0) )  )
                   {
                       che5_door9 = 1;
                   }
                   else
                   {
                       che5_door9 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+256],1) )  )
                   {
                       che5_door10 = 1;
                   }
                   else
                   {
                       che5_door10 = 0;
                   }

                }
            }

        }
        else if((g_dataBuffer_MVB[1118+256]/256==3)&&(g_dataBuffer_MVB[1118+32+256]/256==3))//state == 3 get vaild door word
        {

            if((Bit(g_dataBuffer_MVB[1120+256],8)==1)^(Bit(g_dataBuffer_MVB[1152+256],8)==1))//door1
            {
                if(Bit(g_dataBuffer_MVB[1120+256],8)==1)
                {
                    che5_door1 = 1;

                    g_dataBuffer_WH_Display[1105+256]=g_dataBuffer_MVB[1105+256];
                    g_dataBuffer_WH_Display[1121+256]=g_dataBuffer_MVB[1121+256];
                }
                else if(Bit(g_dataBuffer_MVB[1152+256],8)==1)
                {
                    che5_door1 = 1;

                    g_dataBuffer_WH_Display[1105+256]=g_dataBuffer_MVB[1105+32+256];
                    g_dataBuffer_WH_Display[1121+256]=g_dataBuffer_MVB[1121+32+256];
                }

            }
            else //both vaild\invaild  = 0
            {
                che5_door1 = 0;

                g_dataBuffer_WH_Display[1105+256]=0;
                g_dataBuffer_WH_Display[1121+256]=0;
            }


            if((Bit(g_dataBuffer_MVB[1120+256],9)==1)^(Bit(g_dataBuffer_MVB[1152+256],9)==1))///door2
            {
                if(Bit(g_dataBuffer_MVB[1120+256],9)==1)
                {
                    che5_door2 = 1;

                    g_dataBuffer_WH_Display[1106+256]=g_dataBuffer_MVB[1106+256];
                    g_dataBuffer_WH_Display[1122+256]=g_dataBuffer_MVB[1122+256];
                }
                else if(Bit(g_dataBuffer_MVB[1152+256],9)==1)
                {
                    che5_door2 = 1;

                    g_dataBuffer_WH_Display[1106+256]=g_dataBuffer_MVB[1106+32+256];
                    g_dataBuffer_WH_Display[1122+256]=g_dataBuffer_MVB[1122+32+256];
                }

            }
            else //both vaild\invaild  = 0
            {
                che5_door2 = 0;

                g_dataBuffer_WH_Display[1106+256]=0;
                g_dataBuffer_WH_Display[1122+256]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+256],10)==1)^(Bit(g_dataBuffer_MVB[1152+256],10)==1))///door3
            {
                if(Bit(g_dataBuffer_MVB[1120+256],10)==1)
                {
                    che5_door3 = 1;

                    g_dataBuffer_WH_Display[1107+256]=g_dataBuffer_MVB[1107+256];
                    g_dataBuffer_WH_Display[1123+256]=g_dataBuffer_MVB[1123+256];
                }
                else if(Bit(g_dataBuffer_MVB[1152+256],10)==1)
                {
                    che5_door3 = 1;

                    g_dataBuffer_WH_Display[1107+256]=g_dataBuffer_MVB[1107+32+256];
                    g_dataBuffer_WH_Display[1123+256]=g_dataBuffer_MVB[1123+32+256];
                }

            }
            else //both vaild\invaild  = 0
            {
                che5_door3 = 0;

                g_dataBuffer_WH_Display[1107+256]=0;
                g_dataBuffer_WH_Display[1123+256]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+256],11)==1)^(Bit(g_dataBuffer_MVB[1152+256],11)==1))///door4
            {
                if(Bit(g_dataBuffer_MVB[1120+256],11)==1)
                {
                    che5_door4 = 1;

                    g_dataBuffer_WH_Display[1108+256]=g_dataBuffer_MVB[1108+256];
                    g_dataBuffer_WH_Display[1124+256]=g_dataBuffer_MVB[1124+256];
                }
                else if(Bit(g_dataBuffer_MVB[1152+256],11)==1)
                {
                    che5_door4 = 1;

                    g_dataBuffer_WH_Display[1108+256]=g_dataBuffer_MVB[1108+32+256];
                    g_dataBuffer_WH_Display[1124+256]=g_dataBuffer_MVB[1124+32+256];
                }

            }
            else //both vaild\invaild  = 0
            {
                che5_door4 = 0;

                g_dataBuffer_WH_Display[1108+256]=0;
                g_dataBuffer_WH_Display[1124+256]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+256],12)==1)^(Bit(g_dataBuffer_MVB[1152+256],12)==1))///door5
            {
                if(Bit(g_dataBuffer_MVB[1120+256],12)==1)
                {
                    che5_door5 = 1;

                    g_dataBuffer_WH_Display[1109+256]=g_dataBuffer_MVB[1109+256];
                    g_dataBuffer_WH_Display[1125+256]=g_dataBuffer_MVB[1125+256];
                }
                else if(Bit(g_dataBuffer_MVB[1152+256],12)==1)
                {
                    che5_door5 = 1;

                    g_dataBuffer_WH_Display[1109+256]=g_dataBuffer_MVB[1109+32+256];
                    g_dataBuffer_WH_Display[1125+256]=g_dataBuffer_MVB[1125+32+256];
                }

            }
            else //both vaild\invaild  = 0
            {
                che5_door5 = 0;

                g_dataBuffer_WH_Display[1109+256]=0;
                g_dataBuffer_WH_Display[1125+256]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+256],13)==1)^(Bit(g_dataBuffer_MVB[1152+256],13)==1))///door6
            {
                if(Bit(g_dataBuffer_MVB[1120+256],13)==1)
                {
                    che5_door6 = 1;

                    g_dataBuffer_WH_Display[1110+256]=g_dataBuffer_MVB[1110+256];
                    g_dataBuffer_WH_Display[1126+256]=g_dataBuffer_MVB[1126+256];
                }
                else if(Bit(g_dataBuffer_MVB[1152+256],13)==1)
                {
                    che5_door6 = 1;

                    g_dataBuffer_WH_Display[1110+256]=g_dataBuffer_MVB[1110+32+256];
                    g_dataBuffer_WH_Display[1126+256]=g_dataBuffer_MVB[1126+32+256];
                }

            }
            else //both vaild\invaild  = 0
            {
                che5_door6 = 0;

                g_dataBuffer_WH_Display[1110+256]=0;
                g_dataBuffer_WH_Display[1126+256]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+256],14)==1)^(Bit(g_dataBuffer_MVB[1152+256],14)==1))///door7
            {
                if(Bit(g_dataBuffer_MVB[1120+256],14)==1)
                {
                    che5_door7 = 1;

                    g_dataBuffer_WH_Display[1111+256]=g_dataBuffer_MVB[1111+256];
                    g_dataBuffer_WH_Display[1127+256]=g_dataBuffer_MVB[1127+256];
                }
                else if(Bit(g_dataBuffer_MVB[1152+256],14)==1)
                {
                    che5_door7 = 1;

                    g_dataBuffer_WH_Display[1111+256]=g_dataBuffer_MVB[1111+32+256];
                    g_dataBuffer_WH_Display[1127+256]=g_dataBuffer_MVB[1127+32+256];
                }

            }
            else //both vaild\invaild  = 0
            {
                che5_door7 = 0;

                g_dataBuffer_WH_Display[1111+256]=0;
                g_dataBuffer_WH_Display[1127+256]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+256],15)==1)^(Bit(g_dataBuffer_MVB[1152+256],15)==1))///door8
            {
                if(Bit(g_dataBuffer_MVB[1120+256],15)==1)
                {
                    che5_door8 = 1;

                    g_dataBuffer_WH_Display[1112+256]=g_dataBuffer_MVB[1112+256];
                    g_dataBuffer_WH_Display[1128+256]=g_dataBuffer_MVB[1128+256];
                }
                else if(Bit(g_dataBuffer_MVB[1152+256],15)==1)
                {
                    che5_door8 = 1;

                    g_dataBuffer_WH_Display[1112+256]=g_dataBuffer_MVB[1112+32+256];
                    g_dataBuffer_WH_Display[1128+256]=g_dataBuffer_MVB[1128+32+256];
                }

            }
            else //both vaild\invaild  = 0
            {
                che5_door8 = 0;

                g_dataBuffer_WH_Display[1112+256]=0;
                g_dataBuffer_WH_Display[1128+256]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+256],0)==1)^(Bit(g_dataBuffer_MVB[1152+256],0)==1))///door9
            {
                if(Bit(g_dataBuffer_MVB[1120+256],0)==1)
                {
                    che5_door9 = 1;

                    g_dataBuffer_WH_Display[1113+256]=g_dataBuffer_MVB[1113+256];
                    g_dataBuffer_WH_Display[1129+256]=g_dataBuffer_MVB[1129+256];
                }
                else if(Bit(g_dataBuffer_MVB[1152+256],0)==1)
                {
                    che5_door9 = 1;

                    g_dataBuffer_WH_Display[1113+256]=g_dataBuffer_MVB[1113+32+256];
                    g_dataBuffer_WH_Display[1129+256]=g_dataBuffer_MVB[1129+32+256];
                }

            }
            else //both vaild\invaild  = 0
            {
                che5_door9 = 0;

                g_dataBuffer_WH_Display[1113+256]=0;
                g_dataBuffer_WH_Display[1129+256]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+256],1)==1)^(Bit(g_dataBuffer_MVB[1152+256],1)==1))///door10
            {
                if(Bit(g_dataBuffer_MVB[1120+256],1)==1)
                {
                    che5_door10 = 1;

                    g_dataBuffer_WH_Display[1114+256]=g_dataBuffer_MVB[1114+256];
                    g_dataBuffer_WH_Display[1130+256]=g_dataBuffer_MVB[1130+256];
                }
                else if(Bit(g_dataBuffer_MVB[1152+256],1)==1)
                {
                    che5_door10 = 1;

                    g_dataBuffer_WH_Display[1114+256]=g_dataBuffer_MVB[1114+32+256];
                    g_dataBuffer_WH_Display[1130+256]=g_dataBuffer_MVB[1130+32+256];
                }

            }
            else //both vaild\invaild  = 0
            {
                che5_door10 = 0;

                g_dataBuffer_WH_Display[1114+256]=0;
                g_dataBuffer_WH_Display[1130+256]=0;
            }


        }
        else if((g_dataBuffer_MVB[1118+256]/256==3)^(g_dataBuffer_MVB[1118+32+256]/256==3))///one is part master other is sliver
        {
            if((g_dataBuffer_MVB[1118+256]/256==3))// edcu9 part master
            {
                if(Bit(g_dataBuffer_MVB[1120+256],8)==1)
                {
                    g_dataBuffer_WH_Display[1105+256]=g_dataBuffer_MVB[1105+256];
                    g_dataBuffer_WH_Display[1121+256]=g_dataBuffer_MVB[1121+256];
                    che5_door1 = 1;
                }else
                {
                    che5_door1 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+256],9)==1)
                {
                    g_dataBuffer_WH_Display[1106+256]=g_dataBuffer_MVB[1106+256];
                    g_dataBuffer_WH_Display[1122+256]=g_dataBuffer_MVB[1122+256];
                    che5_door2 = 1;
                }else
                {
                    che5_door2 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+256],10)==1)
                {
                    g_dataBuffer_WH_Display[1107+256]=g_dataBuffer_MVB[1107+256];
                    g_dataBuffer_WH_Display[1123+256]=g_dataBuffer_MVB[1123+256];
                    che5_door3 = 1;
                }else
                {
                    che5_door3 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+256],11)==1)
                {
                    g_dataBuffer_WH_Display[1108+256]=g_dataBuffer_MVB[1108+256];
                    g_dataBuffer_WH_Display[1124+256]=g_dataBuffer_MVB[1124+256];
                    che5_door4 = 1;
                }else
                {
                    che5_door4 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+256],12)==1)
                {
                    g_dataBuffer_WH_Display[1109+256]=g_dataBuffer_MVB[1109+256];
                    g_dataBuffer_WH_Display[1125+256]=g_dataBuffer_MVB[1125+256];
                    che5_door5 = 1;
                }else
                {
                    che5_door5 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+256],13)==1)
                {
                    g_dataBuffer_WH_Display[1110+256]=g_dataBuffer_MVB[1110+256];
                    g_dataBuffer_WH_Display[1126+256]=g_dataBuffer_MVB[1126+256];
                    che5_door6 = 1;
                }else
                {
                    che5_door6 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+256],14)==1)
                {
                    g_dataBuffer_WH_Display[1111+256]=g_dataBuffer_MVB[1111+256];
                    g_dataBuffer_WH_Display[1127+256]=g_dataBuffer_MVB[1127+256];
                    che5_door7 = 1;
                }else
                {
                    che5_door7 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+256],15)==1)
                {
                    g_dataBuffer_WH_Display[1112+256]=g_dataBuffer_MVB[1112+256];
                    g_dataBuffer_WH_Display[1128+256]=g_dataBuffer_MVB[1128+256];
                    che5_door8 = 1;
                }else
                {
                    che5_door8 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+256],0)==1)
                {
                    g_dataBuffer_WH_Display[1113+256]=g_dataBuffer_MVB[1113+256];
                    g_dataBuffer_WH_Display[1129+256]=g_dataBuffer_MVB[1129+256];
                    che5_door9 = 1;
                }else
                {
                    che5_door9 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+256],1)==1)
                {
                    g_dataBuffer_WH_Display[1114+256]=g_dataBuffer_MVB[1114+256];
                    g_dataBuffer_WH_Display[1130+256]=g_dataBuffer_MVB[1130+256];
                    che5_door10 = 1;
                }else
                {
                    che5_door10 = 0;
                }

            }
            else if((g_dataBuffer_MVB[1118+32+256]/256==3))// edcu10 part master
            {
                if(Bit(g_dataBuffer_MVB[1152+256],8)==1)
                {
                    g_dataBuffer_WH_Display[1105+256]=g_dataBuffer_MVB[1105+32+256];
                    g_dataBuffer_WH_Display[1121+256]=g_dataBuffer_MVB[1121+32+256];
                    che5_door1 = 1;
                }else
                {
                    che5_door1 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+256],9)==1)
                {
                    g_dataBuffer_WH_Display[1106+256]=g_dataBuffer_MVB[1106+32+256];
                    g_dataBuffer_WH_Display[1122+256]=g_dataBuffer_MVB[1122+32+256];
                    che5_door2 = 1;
                }else
                {
                    che5_door2 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+256],10)==1)
                {
                    g_dataBuffer_WH_Display[1107+256]=g_dataBuffer_MVB[1107+32+256];
                    g_dataBuffer_WH_Display[1123+256]=g_dataBuffer_MVB[1123+32+256];
                    che5_door3 = 1;
                }else
                {
                    che5_door3 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+256],11)==1)
                {
                    g_dataBuffer_WH_Display[1108+256]=g_dataBuffer_MVB[1108+32+256];
                    g_dataBuffer_WH_Display[1124+256]=g_dataBuffer_MVB[1124+32+256];
                    che5_door4 = 1;
                }else
                {
                    che5_door4 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+256],12)==1)
                {
                    g_dataBuffer_WH_Display[1109+256]=g_dataBuffer_MVB[1109+32+256];
                    g_dataBuffer_WH_Display[1125+256]=g_dataBuffer_MVB[1125+32+256];
                    che5_door5 = 1;
                }else
                {
                    che5_door5 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+256],13)==1)
                {
                    g_dataBuffer_WH_Display[1110+256]=g_dataBuffer_MVB[1110+32+256];
                    g_dataBuffer_WH_Display[1126+256]=g_dataBuffer_MVB[1126+32+256];
                    che5_door6 = 1;
                }else
                {
                    che5_door6 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+256],14)==1)
                {
                    g_dataBuffer_WH_Display[1111+256]=g_dataBuffer_MVB[1111+32+256];
                    g_dataBuffer_WH_Display[1127+256]=g_dataBuffer_MVB[1127+32+256];
                    che5_door7 = 1;
                }else
                {
                    che5_door7 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+256],15)==1)
                {
                    g_dataBuffer_WH_Display[1112+256]=g_dataBuffer_MVB[1112+32+256];
                    g_dataBuffer_WH_Display[1128+256]=g_dataBuffer_MVB[1128+32+256];
                    che5_door8 = 1;
                }else
                {
                    che5_door8 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+256],0)==1)
                {
                    g_dataBuffer_WH_Display[1113+256]=g_dataBuffer_MVB[1113+32+256];
                    g_dataBuffer_WH_Display[1129+256]=g_dataBuffer_MVB[1129+32+256];
                    che5_door9 = 1;
                }else
                {
                    che5_door9 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+256],1)==1)
                {
                    g_dataBuffer_WH_Display[1114+256]=g_dataBuffer_MVB[1114+32+256];
                    g_dataBuffer_WH_Display[1130+256]=g_dataBuffer_MVB[1130+32+256];
                    che5_door10 = 1;
                }else
                {
                    che5_door10 = 0;
                }
            }
        }
        else
        {
            che5_door1 = 0;
            che5_door2 = 0;
            che5_door3 = 0;
            che5_door4 = 0;
            che5_door5 = 0;
            che5_door6 = 0;
            che5_door7 = 0;
            che5_door8 = 0;
            che5_door9 = 0;
            che5_door10 = 0;
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j+256]=0;
            }

        }
    }else if(CTHMI_EDCU9On_B1)//edcu9 online
    {
        if(g_dataBuffer_MVB[1118+256]/256==1)//edcu9 master
        {
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j+256]=g_dataBuffer_MVB[1104+j+256];

                //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或
               if ( (Bit(g_dataBuffer_WH_Display[1120+256],8) )  )
               {
                   che5_door1 = 1;
               }
               else
               {
                   che5_door1 = 0;
               }
               if ( (Bit(g_dataBuffer_WH_Display[1120+256],9) ) )
               {
                   che5_door2 = 1;
               }
               else
               {
                   che5_door2 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+256],10) )  )
               {
                   che5_door3 = 1;
               }
               else
               {
                   che5_door3 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+256],11) )  )
               {
                   che5_door4 = 1;
               }
               else
               {
                   che5_door4 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+256],12) )  )
               {
                   che5_door5 = 1;
               }
               else
               {
                   che5_door5 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+256],13) )  )
               {
                   che5_door6 = 1;
               }
               else
               {
                   che5_door6 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+256],14) )  )
               {
                   che5_door7 = 1;
               }
               else
               {
                   che5_door7 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+256],15) )  )
               {
                   che5_door8 = 1;
               }
               else
               {
                   che5_door8 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+256],0) )  )
               {
                   che5_door9 = 1;
               }
               else
               {
                   che5_door9 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+256],1) )  )
               {
                   che5_door10 = 1;
               }
               else
               {
                   che5_door10 = 0;
               }

            }
        }
        else if(g_dataBuffer_MVB[1118+256]/256==3)//edcu9 part master
        {

            if(Bit(g_dataBuffer_MVB[1120+256],8)==1)
            {
                g_dataBuffer_WH_Display[1105+256]=g_dataBuffer_MVB[1105+256];
                g_dataBuffer_WH_Display[1121+256]=g_dataBuffer_MVB[1121+256];
                che5_door1 = 1;
            }else
            {
                che5_door1 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+256],9)==1)
            {
                g_dataBuffer_WH_Display[1106+256]=g_dataBuffer_MVB[1106+256];
                g_dataBuffer_WH_Display[1122+256]=g_dataBuffer_MVB[1122+256];
                che5_door2 = 1;
            }else
            {
                che5_door2 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+256],10)==1)
            {
                g_dataBuffer_WH_Display[1107+256]=g_dataBuffer_MVB[1107+256];
                g_dataBuffer_WH_Display[1123+256]=g_dataBuffer_MVB[1123+256];
                che5_door3 = 1;
            }else
            {
                che5_door3 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+256],11)==1)
            {
                g_dataBuffer_WH_Display[1108+256]=g_dataBuffer_MVB[1108+256];
                g_dataBuffer_WH_Display[1124+256]=g_dataBuffer_MVB[1124+256];
                che5_door4 = 1;
            }else
            {
                che5_door4 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+256],12)==1)
            {
                g_dataBuffer_WH_Display[1109+256]=g_dataBuffer_MVB[1109+256];
                g_dataBuffer_WH_Display[1125+256]=g_dataBuffer_MVB[1125+256];
                che5_door5 = 1;
            }else
            {
                che5_door5 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+256],13)==1)
            {
                g_dataBuffer_WH_Display[1110+256]=g_dataBuffer_MVB[1110+256];
                g_dataBuffer_WH_Display[1126+256]=g_dataBuffer_MVB[1126+256];
                che5_door6 = 1;
            }else
            {
                che5_door6 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+256],14)==1)
            {
                g_dataBuffer_WH_Display[1111+256]=g_dataBuffer_MVB[1111+256];
                g_dataBuffer_WH_Display[1127+256]=g_dataBuffer_MVB[1127+256];
                che5_door7 = 1;
            }else
            {
                che5_door7 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+256],15)==1)
            {
                g_dataBuffer_WH_Display[1112+256]=g_dataBuffer_MVB[1112+256];
                g_dataBuffer_WH_Display[1128+256]=g_dataBuffer_MVB[1128+256];
                che5_door8 = 1;
            }else
            {
                che5_door8 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+256],0)==1)
            {
                g_dataBuffer_WH_Display[1113+256]=g_dataBuffer_MVB[1113+256];
                g_dataBuffer_WH_Display[1129+256]=g_dataBuffer_MVB[1129+256];
                che5_door9 = 1;
            }else
            {
                che5_door9 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+256],1)==1)
            {
                g_dataBuffer_WH_Display[1114+256]=g_dataBuffer_MVB[1114+256];
                g_dataBuffer_WH_Display[1130+256]=g_dataBuffer_MVB[1130+256];
                che5_door10 = 1;
            }else
            {
                che5_door10 = 0;
            }


        }else
        {
            che5_door1 = 0;
            che5_door2 = 0;
            che5_door3 = 0;
            che5_door4 = 0;
            che5_door5 = 0;
            che5_door6 = 0;
            che5_door7 = 0;
            che5_door8 = 0;
            che5_door9 = 0;
            che5_door10 = 0;
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j+256]=0;
            }
        }

    }else if(CTHMI_EDCU10On_B1)
    {
        if((g_dataBuffer_MVB[1118+32+256]/256==1))//edcu10 master
        {
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j+256]=g_dataBuffer_MVB[1104+32+j+256];

                //DRiCT_Dr1SttsVld_B1	门2状态可信	1=激活    每节车厢两个门网关的信号相或
               if ( (Bit(g_dataBuffer_WH_Display[1120+256],8) )  )
               {
                   che5_door1 = 1;
               }
               else
               {
                   che5_door1 = 0;
               }
               if ( (Bit(g_dataBuffer_WH_Display[1120+256],9) ) )
               {
                   che5_door2 = 1;
               }
               else
               {
                   che5_door2 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+256],10) )  )
               {
                   che5_door3 = 1;
               }
               else
               {
                   che5_door3 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+256],11) )  )
               {
                   che5_door4 = 1;
               }
               else
               {
                   che5_door4 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+256],12) )  )
               {
                   che5_door5 = 1;
               }
               else
               {
                   che5_door5 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+256],13) )  )
               {
                   che5_door6 = 1;
               }
               else
               {
                   che5_door6 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+256],14) )  )
               {
                   che5_door7 = 1;
               }
               else
               {
                   che5_door7 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+256],15) )  )
               {
                   che5_door8 = 1;
               }
               else
               {
                   che5_door8 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+256],0) )  )
               {
                   che5_door9 = 1;
               }
               else
               {
                   che5_door9 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+256],1) )  )
               {
                   che5_door10 = 1;
               }
               else
               {
                   che5_door10 = 0;
               }

            }
        }
        else if((g_dataBuffer_MVB[1118+32+256]/256==3))// edcu10 part master
        {
            if(Bit(g_dataBuffer_MVB[1152+256],8)==1)
            {
                g_dataBuffer_WH_Display[1105+256]=g_dataBuffer_MVB[1105+32+256];
                g_dataBuffer_WH_Display[1121+256]=g_dataBuffer_MVB[1121+32+256];
                che5_door1 = 1;
            }else
            {
                che5_door1 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+256],9)==1)
            {
                g_dataBuffer_WH_Display[1106+256]=g_dataBuffer_MVB[1106+32+256];
                g_dataBuffer_WH_Display[1122+256]=g_dataBuffer_MVB[1122+32+256];
                che5_door2 = 1;
            }else
            {
                che5_door2 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+256],10)==1)
            {
                g_dataBuffer_WH_Display[1107+256]=g_dataBuffer_MVB[1107+32+256];
                g_dataBuffer_WH_Display[1123+256]=g_dataBuffer_MVB[1123+32+256];
                che5_door3 = 1;
            }else
            {
                che5_door3 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+256],11)==1)
            {
                g_dataBuffer_WH_Display[1108+256]=g_dataBuffer_MVB[1108+32+256];
                g_dataBuffer_WH_Display[1124+256]=g_dataBuffer_MVB[1124+32+256];
                che5_door4 = 1;
            }else
            {
                che5_door4 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+256],12)==1)
            {
                g_dataBuffer_WH_Display[1109+256]=g_dataBuffer_MVB[1109+32+256];
                g_dataBuffer_WH_Display[1125+256]=g_dataBuffer_MVB[1125+32+256];
                che5_door5 = 1;
            }else
            {
                che5_door5 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+256],13)==1)
            {
                g_dataBuffer_WH_Display[1110+256]=g_dataBuffer_MVB[1110+32+256];
                g_dataBuffer_WH_Display[1126+256]=g_dataBuffer_MVB[1126+32+256];
                che5_door6 = 1;
            }else
            {
                che5_door6 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+256],14)==1)
            {
                g_dataBuffer_WH_Display[1111+256]=g_dataBuffer_MVB[1111+32+256];
                g_dataBuffer_WH_Display[1127+256]=g_dataBuffer_MVB[1127+32+256];
                che5_door7 = 1;
            }else
            {
                che5_door7 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+256],15)==1)
            {
                g_dataBuffer_WH_Display[1112+256]=g_dataBuffer_MVB[1112+32+256];
                g_dataBuffer_WH_Display[1128+256]=g_dataBuffer_MVB[1128+32+256];
                che5_door8 = 1;
            }else
            {
                che5_door8 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+256],0)==1)
            {
                g_dataBuffer_WH_Display[1113+256]=g_dataBuffer_MVB[1113+32+256];
                g_dataBuffer_WH_Display[1129+256]=g_dataBuffer_MVB[1129+32+256];
                che5_door9 = 1;
            }else
            {
                che5_door9 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+256],1)==1)
            {
                g_dataBuffer_WH_Display[1114+256]=g_dataBuffer_MVB[1114+32+256];
                g_dataBuffer_WH_Display[1130+256]=g_dataBuffer_MVB[1130+32+256];
                che5_door10 = 1;
            }else
            {
                che5_door10 = 0;
            }
        }
        else
        {
            che5_door1 = 0;
            che5_door2 = 0;
            che5_door3 = 0;
            che5_door4 = 0;
            che5_door5 = 0;
            che5_door6 = 0;
            che5_door7 = 0;
            che5_door8 = 0;
            che5_door9 = 0;
            che5_door10 = 0;
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j+256]=0;
            }
        }
    }
    else
    {
        che5_door1 = 0;
        che5_door2 = 0;
        che5_door3 = 0;
        che5_door4 = 0;
        che5_door5 = 0;
        che5_door6 = 0;
        che5_door7 = 0;
        che5_door8 = 0;
        che5_door9 = 0;
        che5_door10 = 0;
        for(int j=0;j<32;j++)
        {
            g_dataBuffer_WH_Display[1104+j+256]=0;
        }
    }

    // 6 车厢 EDCU11

    if(CTHMI_EDCU11On_B1&&CTHMI_EDCU12On_B1)///both edcu11 12 online
    {
        if((g_dataBuffer_MVB[1118+320]/256==1)^(g_dataBuffer_MVB[1118+32+320]/256==1))////edcu11or12 master
        {
            if(g_dataBuffer_MVB[1118+320]/256==1)//edcu11 master
            {
                for(int j=0;j<32;j++)
                {
                    g_dataBuffer_WH_Display[1104+j+320]=g_dataBuffer_MVB[1104+j+320];

                    //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或
                   if ( (Bit(g_dataBuffer_WH_Display[1120+320],8) )  )
                   {
                       che6_door1 = 1;
                   }
                   else
                   {
                       che6_door1 = 0;
                   }
                   if ( (Bit(g_dataBuffer_WH_Display[1120+320],9) ) )
                   {
                       che6_door2 = 1;
                   }
                   else
                   {
                       che6_door2 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+320],10) )  )
                   {
                       che6_door3 = 1;
                   }
                   else
                   {
                       che6_door3 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+320],11) )  )
                   {
                       che6_door4 = 1;
                   }
                   else
                   {
                       che6_door4 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+320],12) )  )
                   {
                       che6_door5 = 1;
                   }
                   else
                   {
                       che6_door5 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+320],13) )  )
                   {
                       che6_door6 = 1;
                   }
                   else
                   {
                       che6_door6 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+320],14) )  )
                   {
                       che6_door7 = 1;
                   }
                   else
                   {
                       che6_door7 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+320],15) )  )
                   {
                       che6_door8 = 1;
                   }
                   else
                   {
                       che6_door8 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+320],0) )  )
                   {
                       che6_door9 = 1;
                   }
                   else
                   {
                       che6_door9 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+320],1) )  )
                   {
                       che6_door10 = 1;
                   }
                   else
                   {
                       che6_door10 = 0;
                   }

                }
            }
            else if((g_dataBuffer_MVB[1118+32+320]/256==1))//edcu12 master
            {
                for(int j=0;j<32;j++)
                {
                    g_dataBuffer_WH_Display[1104+j+320]=g_dataBuffer_MVB[1104+32+j+320];

                    //DRiCT_Dr1SttsVld_B1	门2状态可信	1=激活    每节车厢两个门网关的信号相或
                   if ( (Bit(g_dataBuffer_WH_Display[1120+320],8) )  )
                   {
                       che6_door1 = 1;
                   }
                   else
                   {
                       che6_door1 = 0;
                   }
                   if ( (Bit(g_dataBuffer_WH_Display[1120+320],9) ) )
                   {
                       che6_door2 = 1;
                   }
                   else
                   {
                       che6_door2 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+320],10) )  )
                   {
                       che6_door3 = 1;
                   }
                   else
                   {
                       che6_door3 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+320],11) )  )
                   {
                       che6_door4 = 1;
                   }
                   else
                   {
                       che6_door4 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+320],12) )  )
                   {
                       che6_door5 = 1;
                   }
                   else
                   {
                       che6_door5 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+320],13) )  )
                   {
                       che6_door6 = 1;
                   }
                   else
                   {
                       che6_door6 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+320],14) )  )
                   {
                       che6_door7 = 1;
                   }
                   else
                   {
                       che6_door7 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+320],15) )  )
                   {
                       che6_door8 = 1;
                   }
                   else
                   {
                       che6_door8 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+320],0) )  )
                   {
                       che6_door9 = 1;
                   }
                   else
                   {
                       che6_door9 = 0;
                   }

                   if ( (Bit(g_dataBuffer_WH_Display[1120+320],1) )  )
                   {
                       che6_door10 = 1;
                   }
                   else
                   {
                       che6_door10 = 0;
                   }

                }
            }

        }
        else if((g_dataBuffer_MVB[1118+320]/256==3)&&(g_dataBuffer_MVB[1118+32+320]/256==3))//state == 3 get vaild door word
        {

            if((Bit(g_dataBuffer_MVB[1120+320],8)==1)^(Bit(g_dataBuffer_MVB[1152+320],8)==1))//door1
            {
                if(Bit(g_dataBuffer_MVB[1120+320],8)==1)
                {
                    che6_door1 = 1;

                    g_dataBuffer_WH_Display[1105+320]=g_dataBuffer_MVB[1105+320];
                    g_dataBuffer_WH_Display[1121+320]=g_dataBuffer_MVB[1121+320];
                }
                else if(Bit(g_dataBuffer_MVB[1152+320],8)==1)
                {
                    che6_door1 = 1;

                    g_dataBuffer_WH_Display[1105+320]=g_dataBuffer_MVB[1105+32+320];
                    g_dataBuffer_WH_Display[1121+320]=g_dataBuffer_MVB[1121+32+320];
                }

            }
            else //both vaild\invaild  = 0
            {
                che6_door1 = 0;

                g_dataBuffer_WH_Display[1105+320]=0;
                g_dataBuffer_WH_Display[1121+320]=0;
            }


            if((Bit(g_dataBuffer_MVB[1120+320],9)==1)^(Bit(g_dataBuffer_MVB[1152+320],9)==1))///door2
            {
                if(Bit(g_dataBuffer_MVB[1120+320],9)==1)
                {
                    che6_door2 = 1;

                    g_dataBuffer_WH_Display[1106+320]=g_dataBuffer_MVB[1106+320];
                    g_dataBuffer_WH_Display[1122+320]=g_dataBuffer_MVB[1122+320];
                }
                else if(Bit(g_dataBuffer_MVB[1152+320],9)==1)
                {
                    che6_door2 = 1;

                    g_dataBuffer_WH_Display[1106+320]=g_dataBuffer_MVB[1106+32+320];
                    g_dataBuffer_WH_Display[1122+320]=g_dataBuffer_MVB[1122+32+320];
                }

            }
            else //both vaild\invaild  = 0
            {
                che6_door2 = 0;

                g_dataBuffer_WH_Display[1106+320]=0;
                g_dataBuffer_WH_Display[1122+320]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+320],10)==1)^(Bit(g_dataBuffer_MVB[1152+320],10)==1))///door3
            {
                if(Bit(g_dataBuffer_MVB[1120+320],10)==1)
                {
                    che6_door3 = 1;

                    g_dataBuffer_WH_Display[1107+320]=g_dataBuffer_MVB[1107+320];
                    g_dataBuffer_WH_Display[1123+320]=g_dataBuffer_MVB[1123+320];
                }
                else if(Bit(g_dataBuffer_MVB[1152+320],10)==1)
                {
                    che6_door3 = 1;

                    g_dataBuffer_WH_Display[1107+320]=g_dataBuffer_MVB[1107+32+320];
                    g_dataBuffer_WH_Display[1123+320]=g_dataBuffer_MVB[1123+32+320];
                }

            }
            else //both vaild\invaild  = 0
            {
                che6_door3 = 0;

                g_dataBuffer_WH_Display[1107+320]=0;
                g_dataBuffer_WH_Display[1123+320]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+320],11)==1)^(Bit(g_dataBuffer_MVB[1152+320],11)==1))///door4
            {
                if(Bit(g_dataBuffer_MVB[1120+320],11)==1)
                {
                    che6_door4 = 1;

                    g_dataBuffer_WH_Display[1108+320]=g_dataBuffer_MVB[1108+320];
                    g_dataBuffer_WH_Display[1124+320]=g_dataBuffer_MVB[1124+320];
                }
                else if(Bit(g_dataBuffer_MVB[1152+320],11)==1)
                {
                    che6_door4 = 1;

                    g_dataBuffer_WH_Display[1108+320]=g_dataBuffer_MVB[1108+32+320];
                    g_dataBuffer_WH_Display[1124+320]=g_dataBuffer_MVB[1124+32+320];
                }

            }
            else //both vaild\invaild  = 0
            {
                che6_door4 = 0;

                g_dataBuffer_WH_Display[1108+320]=0;
                g_dataBuffer_WH_Display[1124+320]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+320],12)==1)^(Bit(g_dataBuffer_MVB[1152+320],12)==1))///door5
            {
                if(Bit(g_dataBuffer_MVB[1120+320],12)==1)
                {
                    che6_door5 = 1;

                    g_dataBuffer_WH_Display[1109+320]=g_dataBuffer_MVB[1109+320];
                    g_dataBuffer_WH_Display[1125+320]=g_dataBuffer_MVB[1125+320];
                }
                else if(Bit(g_dataBuffer_MVB[1152+320],12)==1)
                {
                    che6_door5 = 1;

                    g_dataBuffer_WH_Display[1109+320]=g_dataBuffer_MVB[1109+32+320];
                    g_dataBuffer_WH_Display[1125+320]=g_dataBuffer_MVB[1125+32+320];
                }

            }
            else //both vaild\invaild  = 0
            {
                che6_door5 = 0;

                g_dataBuffer_WH_Display[1109+320]=0;
                g_dataBuffer_WH_Display[1125+320]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+320],13)==1)^(Bit(g_dataBuffer_MVB[1152+320],13)==1))///door6
            {
                if(Bit(g_dataBuffer_MVB[1120+320],13)==1)
                {
                    che6_door6 = 1;

                    g_dataBuffer_WH_Display[1110+320]=g_dataBuffer_MVB[1110+320];
                    g_dataBuffer_WH_Display[1126+320]=g_dataBuffer_MVB[1126+320];
                }
                else if(Bit(g_dataBuffer_MVB[1152+320],13)==1)
                {
                    che6_door6 = 1;

                    g_dataBuffer_WH_Display[1110+320]=g_dataBuffer_MVB[1110+32+320];
                    g_dataBuffer_WH_Display[1126+320]=g_dataBuffer_MVB[1126+32+320];
                }

            }
            else //both vaild\invaild  = 0
            {
                che6_door6 = 0;

                g_dataBuffer_WH_Display[1110+320]=0;
                g_dataBuffer_WH_Display[1126+320]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+320],14)==1)^(Bit(g_dataBuffer_MVB[1152+320],14)==1))///door7
            {
                if(Bit(g_dataBuffer_MVB[1120+320],14)==1)
                {
                    che6_door7 = 1;

                    g_dataBuffer_WH_Display[1111+320]=g_dataBuffer_MVB[1111+320];
                    g_dataBuffer_WH_Display[1127+320]=g_dataBuffer_MVB[1127+320];
                }
                else if(Bit(g_dataBuffer_MVB[1152+320],14)==1)
                {
                    che6_door7 = 1;

                    g_dataBuffer_WH_Display[1111+320]=g_dataBuffer_MVB[1111+32+320];
                    g_dataBuffer_WH_Display[1127+320]=g_dataBuffer_MVB[1127+32+320];
                }

            }
            else //both vaild\invaild  = 0
            {
                che6_door7 = 0;

                g_dataBuffer_WH_Display[1111+320]=0;
                g_dataBuffer_WH_Display[1127+320]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+320],15)==1)^(Bit(g_dataBuffer_MVB[1152+320],15)==1))///door8
            {
                if(Bit(g_dataBuffer_MVB[1120+320],15)==1)
                {
                    che6_door8 = 1;

                    g_dataBuffer_WH_Display[1112+320]=g_dataBuffer_MVB[1112+320];
                    g_dataBuffer_WH_Display[1128+320]=g_dataBuffer_MVB[1128+320];
                }
                else if(Bit(g_dataBuffer_MVB[1152+320],15)==1)
                {
                    che6_door8 = 1;

                    g_dataBuffer_WH_Display[1112+320]=g_dataBuffer_MVB[1112+32+320];
                    g_dataBuffer_WH_Display[1128+320]=g_dataBuffer_MVB[1128+32+320];
                }

            }
            else //both vaild\invaild  = 0
            {
                che6_door8 = 0;

                g_dataBuffer_WH_Display[1112+320]=0;
                g_dataBuffer_WH_Display[1128+320]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+320],0)==1)^(Bit(g_dataBuffer_MVB[1152+320],0)==1))///door9
            {
                if(Bit(g_dataBuffer_MVB[1120+320],0)==1)
                {
                    che6_door9 = 1;

                    g_dataBuffer_WH_Display[1113+320]=g_dataBuffer_MVB[1113+320];
                    g_dataBuffer_WH_Display[1129+320]=g_dataBuffer_MVB[1129+320];
                }
                else if(Bit(g_dataBuffer_MVB[1152+320],0)==1)
                {
                    che6_door9 = 1;

                    g_dataBuffer_WH_Display[1113+320]=g_dataBuffer_MVB[1113+32+320];
                    g_dataBuffer_WH_Display[1129+320]=g_dataBuffer_MVB[1129+32+320];
                }

            }
            else //both vaild\invaild  = 0
            {
                che6_door9 = 0;

                g_dataBuffer_WH_Display[1113+320]=0;
                g_dataBuffer_WH_Display[1129+320]=0;
            }

            if((Bit(g_dataBuffer_MVB[1120+320],1)==1)^(Bit(g_dataBuffer_MVB[1152+320],1)==1))///door10
            {
                if(Bit(g_dataBuffer_MVB[1120+320],1)==1)
                {
                    che6_door10 = 1;

                    g_dataBuffer_WH_Display[1114+320]=g_dataBuffer_MVB[1114+320];
                    g_dataBuffer_WH_Display[1130+320]=g_dataBuffer_MVB[1130+320];
                }
                else if(Bit(g_dataBuffer_MVB[1152+320],1)==1)
                {
                    che6_door10 = 1;

                    g_dataBuffer_WH_Display[1114+320]=g_dataBuffer_MVB[1114+32+320];
                    g_dataBuffer_WH_Display[1130+320]=g_dataBuffer_MVB[1130+32+320];
                }

            }
            else //both vaild\invaild  = 0
            {
                che6_door10 = 0;

                g_dataBuffer_WH_Display[1114+320]=0;
                g_dataBuffer_WH_Display[1130+320]=0;
            }


        }
        else if((g_dataBuffer_MVB[1118+320]/256==3)^(g_dataBuffer_MVB[1118+32+320]/256==3))///one is part master other is sliver
        {
            if((g_dataBuffer_MVB[1118+320]/256==3))// edcu11 part master
            {
                if(Bit(g_dataBuffer_MVB[1120+320],8)==1)
                {
                    g_dataBuffer_WH_Display[1105+320]=g_dataBuffer_MVB[1105+320];
                    g_dataBuffer_WH_Display[1121+320]=g_dataBuffer_MVB[1121+320];
                    che6_door1 = 1;
                }else
                {
                    che6_door1 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+320],9)==1)
                {
                    g_dataBuffer_WH_Display[1106+320]=g_dataBuffer_MVB[1106+320];
                    g_dataBuffer_WH_Display[1122+320]=g_dataBuffer_MVB[1122+320];
                    che6_door2 = 1;
                }else
                {
                    che6_door2 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+320],10)==1)
                {
                    g_dataBuffer_WH_Display[1107+320]=g_dataBuffer_MVB[1107+320];
                    g_dataBuffer_WH_Display[1123+320]=g_dataBuffer_MVB[1123+320];
                    che6_door3 = 1;
                }else
                {
                    che6_door3 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+320],11)==1)
                {
                    g_dataBuffer_WH_Display[1108+320]=g_dataBuffer_MVB[1108+320];
                    g_dataBuffer_WH_Display[1124+320]=g_dataBuffer_MVB[1124+320];
                    che6_door4 = 1;
                }else
                {
                    che6_door4 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+320],12)==1)
                {
                    g_dataBuffer_WH_Display[1109+320]=g_dataBuffer_MVB[1109+320];
                    g_dataBuffer_WH_Display[1125+320]=g_dataBuffer_MVB[1125+320];
                    che6_door5 = 1;
                }else
                {
                    che6_door5 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+320],13)==1)
                {
                    g_dataBuffer_WH_Display[1110+320]=g_dataBuffer_MVB[1110+320];
                    g_dataBuffer_WH_Display[1126+320]=g_dataBuffer_MVB[1126+320];
                    che6_door6 = 1;
                }else
                {
                    che6_door6 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+320],14)==1)
                {
                    g_dataBuffer_WH_Display[1111+320]=g_dataBuffer_MVB[1111+320];
                    g_dataBuffer_WH_Display[1127+320]=g_dataBuffer_MVB[1127+320];
                    che6_door7 = 1;
                }else
                {
                    che6_door7 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+320],15)==1)
                {
                    g_dataBuffer_WH_Display[1112+320]=g_dataBuffer_MVB[1112+320];
                    g_dataBuffer_WH_Display[1128+320]=g_dataBuffer_MVB[1128+320];
                    che6_door8 = 1;
                }else
                {
                    che6_door8 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+320],0)==1)
                {
                    g_dataBuffer_WH_Display[1113+320]=g_dataBuffer_MVB[1113+320];
                    g_dataBuffer_WH_Display[1129+320]=g_dataBuffer_MVB[1129+320];
                    che6_door9 = 1;
                }else
                {
                    che6_door9 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1120+320],1)==1)
                {
                    g_dataBuffer_WH_Display[1114+320]=g_dataBuffer_MVB[1114+320];
                    g_dataBuffer_WH_Display[1130+320]=g_dataBuffer_MVB[1130+320];
                    che6_door10 = 1;
                }else
                {
                    che6_door10 = 0;
                }

            }
            else if((g_dataBuffer_MVB[1118+32+320]/256==3))// edcu12 part master
            {
                if(Bit(g_dataBuffer_MVB[1152+320],8)==1)
                {
                    g_dataBuffer_WH_Display[1105+320]=g_dataBuffer_MVB[1105+32+320];
                    g_dataBuffer_WH_Display[1121+320]=g_dataBuffer_MVB[1121+32+320];
                    che6_door1 = 1;
                }else
                {
                    che6_door1 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+320],9)==1)
                {
                    g_dataBuffer_WH_Display[1106+320]=g_dataBuffer_MVB[1106+32+320];
                    g_dataBuffer_WH_Display[1122+320]=g_dataBuffer_MVB[1122+32+320];
                    che6_door2 = 1;
                }else
                {
                    che6_door2 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+320],10)==1)
                {
                    g_dataBuffer_WH_Display[1107+320]=g_dataBuffer_MVB[1107+32+320];
                    g_dataBuffer_WH_Display[1123+320]=g_dataBuffer_MVB[1123+32+320];
                    che6_door3 = 1;
                }else
                {
                    che6_door3 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+320],11)==1)
                {
                    g_dataBuffer_WH_Display[1108+320]=g_dataBuffer_MVB[1108+32+320];
                    g_dataBuffer_WH_Display[1124+320]=g_dataBuffer_MVB[1124+32+320];
                    che6_door4 = 1;
                }else
                {
                    che6_door4 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+320],12)==1)
                {
                    g_dataBuffer_WH_Display[1109+320]=g_dataBuffer_MVB[1109+32+320];
                    g_dataBuffer_WH_Display[1125+320]=g_dataBuffer_MVB[1125+32+320];
                    che6_door5 = 1;
                }else
                {
                    che6_door5 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+320],13)==1)
                {
                    g_dataBuffer_WH_Display[1110+320]=g_dataBuffer_MVB[1110+32+320];
                    g_dataBuffer_WH_Display[1126+320]=g_dataBuffer_MVB[1126+32+320];
                    che6_door6 = 1;
                }else
                {
                    che6_door6 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+320],14)==1)
                {
                    g_dataBuffer_WH_Display[1111+320]=g_dataBuffer_MVB[1111+32+320];
                    g_dataBuffer_WH_Display[1127+320]=g_dataBuffer_MVB[1127+32+320];
                    che6_door7 = 1;
                }else
                {
                    che6_door7 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+320],15)==1)
                {
                    g_dataBuffer_WH_Display[1112+320]=g_dataBuffer_MVB[1112+32+320];
                    g_dataBuffer_WH_Display[1128+320]=g_dataBuffer_MVB[1128+32+320];
                    che6_door8 = 1;
                }else
                {
                    che6_door8 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+320],0)==1)
                {
                    g_dataBuffer_WH_Display[1113+320]=g_dataBuffer_MVB[1113+32+320];
                    g_dataBuffer_WH_Display[1129+320]=g_dataBuffer_MVB[1129+32+320];
                    che6_door9 = 1;
                }else
                {
                    che6_door9 = 0;
                }
                if(Bit(g_dataBuffer_MVB[1152+320],1)==1)
                {
                    g_dataBuffer_WH_Display[1114+320]=g_dataBuffer_MVB[1114+32+320];
                    g_dataBuffer_WH_Display[1130+320]=g_dataBuffer_MVB[1130+32+320];
                    che6_door10 = 1;
                }else
                {
                    che6_door10 = 0;
                }
            }
        }
        else
        {
            che6_door1 = 0;
            che6_door2 = 0;
            che6_door3 = 0;
            che6_door4 = 0;
            che6_door5 = 0;
            che6_door6 = 0;
            che6_door7 = 0;
            che6_door8 = 0;
            che6_door9 = 0;
            che6_door10 = 0;
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j+320]=0;
            }

        }
    }else if(CTHMI_EDCU11On_B1)//edcu11 online
    {
        if(g_dataBuffer_MVB[1118+320]/256==1)//edcu11 master
        {
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j+320]=g_dataBuffer_MVB[1104+j+320];

                //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或
               if ( (Bit(g_dataBuffer_WH_Display[1120+320],8) )  )
               {
                   che6_door1 = 1;
               }
               else
               {
                   che6_door1 = 0;
               }
               if ( (Bit(g_dataBuffer_WH_Display[1120+320],9) ) )
               {
                   che6_door2 = 1;
               }
               else
               {
                   che6_door2 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+320],10) )  )
               {
                   che6_door3 = 1;
               }
               else
               {
                   che6_door3 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+320],11) )  )
               {
                   che6_door4 = 1;
               }
               else
               {
                   che6_door4 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+320],12) )  )
               {
                   che6_door5 = 1;
               }
               else
               {
                   che6_door5 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+320],13) )  )
               {
                   che6_door6 = 1;
               }
               else
               {
                   che6_door6 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+320],14) )  )
               {
                   che6_door7 = 1;
               }
               else
               {
                   che6_door7 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+320],15) )  )
               {
                   che6_door8 = 1;
               }
               else
               {
                   che6_door8 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+320],0) )  )
               {
                   che6_door9 = 1;
               }
               else
               {
                   che6_door9 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+320],1) )  )
               {
                   che6_door10 = 1;
               }
               else
               {
                   che6_door10 = 0;
               }

            }
        }
        else if(g_dataBuffer_MVB[1118+320]/256==3)//edcu11 part master
        {

            if(Bit(g_dataBuffer_MVB[1120+320],8)==1)
            {
                g_dataBuffer_WH_Display[1105+320]=g_dataBuffer_MVB[1105+320];
                g_dataBuffer_WH_Display[1121+320]=g_dataBuffer_MVB[1121+320];
                che6_door1 = 1;
            }else
            {
                che6_door1 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+320],9)==1)
            {
                g_dataBuffer_WH_Display[1106+320]=g_dataBuffer_MVB[1106+320];
                g_dataBuffer_WH_Display[1122+320]=g_dataBuffer_MVB[1122+320];
                che6_door2 = 1;
            }else
            {
                che6_door2 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+320],10)==1)
            {
                g_dataBuffer_WH_Display[1107+320]=g_dataBuffer_MVB[1107+320];
                g_dataBuffer_WH_Display[1123+320]=g_dataBuffer_MVB[1123+320];
                che6_door3 = 1;
            }else
            {
                che6_door3 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+320],11)==1)
            {
                g_dataBuffer_WH_Display[1108+320]=g_dataBuffer_MVB[1108+320];
                g_dataBuffer_WH_Display[1124+320]=g_dataBuffer_MVB[1124+320];
                che6_door4 = 1;
            }else
            {
                che6_door4 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+320],12)==1)
            {
                g_dataBuffer_WH_Display[1109+320]=g_dataBuffer_MVB[1109+320];
                g_dataBuffer_WH_Display[1125+320]=g_dataBuffer_MVB[1125+320];
                che6_door5 = 1;
            }else
            {
                che6_door5 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+320],13)==1)
            {
                g_dataBuffer_WH_Display[1110+320]=g_dataBuffer_MVB[1110+320];
                g_dataBuffer_WH_Display[1126+320]=g_dataBuffer_MVB[1126+320];
                che6_door6 = 1;
            }else
            {
                che6_door6 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+320],14)==1)
            {
                g_dataBuffer_WH_Display[1111+320]=g_dataBuffer_MVB[1111+320];
                g_dataBuffer_WH_Display[1127+320]=g_dataBuffer_MVB[1127+320];
                che6_door7 = 1;
            }else
            {
                che6_door7 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+320],15)==1)
            {
                g_dataBuffer_WH_Display[1112+320]=g_dataBuffer_MVB[1112+320];
                g_dataBuffer_WH_Display[1128+320]=g_dataBuffer_MVB[1128+320];
                che6_door8 = 1;
            }else
            {
                che6_door8 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+320],0)==1)
            {
                g_dataBuffer_WH_Display[1113+320]=g_dataBuffer_MVB[1113+320];
                g_dataBuffer_WH_Display[1129+320]=g_dataBuffer_MVB[1129+320];
                che6_door9 = 1;
            }else
            {
                che6_door9 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1120+320],1)==1)
            {
                g_dataBuffer_WH_Display[1114+320]=g_dataBuffer_MVB[1114+320];
                g_dataBuffer_WH_Display[1130+320]=g_dataBuffer_MVB[1130+320];
                che6_door10 = 1;
            }else
            {
                che6_door10 = 0;
            }


        }else
        {
            che6_door1 = 0;
            che6_door2 = 0;
            che6_door3 = 0;
            che6_door4 = 0;
            che6_door5 = 0;
            che6_door6 = 0;
            che6_door7 = 0;
            che6_door8 = 0;
            che6_door9 = 0;
            che6_door10 = 0;
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j+320]=0;
            }
        }

    }else if(CTHMI_EDCU12On_B1)
    {
        if((g_dataBuffer_MVB[1118+32+320]/256==1))//edcu12 master
        {
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j+320]=g_dataBuffer_MVB[1104+32+j+320];

                //DRiCT_Dr1SttsVld_B1	门2状态可信	1=激活    每节车厢两个门网关的信号相或
               if ( (Bit(g_dataBuffer_WH_Display[1120+320],8) )  )
               {
                   che6_door1 = 1;
               }
               else
               {
                   che6_door1 = 0;
               }
               if ( (Bit(g_dataBuffer_WH_Display[1120+320],9) ) )
               {
                   che6_door2 = 1;
               }
               else
               {
                   che6_door2 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+320],10) )  )
               {
                   che6_door3 = 1;
               }
               else
               {
                   che6_door3 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+320],11) )  )
               {
                   che6_door4 = 1;
               }
               else
               {
                   che6_door4 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+320],12) )  )
               {
                   che6_door5 = 1;
               }
               else
               {
                   che6_door5 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+320],13) )  )
               {
                   che6_door6 = 1;
               }
               else
               {
                   che6_door6 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+320],14) )  )
               {
                   che6_door7 = 1;
               }
               else
               {
                   che6_door7 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+320],15) )  )
               {
                   che6_door8 = 1;
               }
               else
               {
                   che6_door8 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+320],0) )  )
               {
                   che6_door9 = 1;
               }
               else
               {
                   che6_door9 = 0;
               }

               if ( (Bit(g_dataBuffer_WH_Display[1120+320],1) )  )
               {
                   che6_door10 = 1;
               }
               else
               {
                   che6_door10 = 0;
               }

            }
        }
        else if((g_dataBuffer_MVB[1118+32+320]/256==3))// edcu12 part master
        {
            if(Bit(g_dataBuffer_MVB[1152+320],8)==1)
            {
                g_dataBuffer_WH_Display[1105+320]=g_dataBuffer_MVB[1105+32+320];
                g_dataBuffer_WH_Display[1121+320]=g_dataBuffer_MVB[1121+32+320];
                che6_door1 = 1;
            }else
            {
                che6_door1 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+320],9)==1)
            {
                g_dataBuffer_WH_Display[1106+320]=g_dataBuffer_MVB[1106+32+320];
                g_dataBuffer_WH_Display[1122+320]=g_dataBuffer_MVB[1122+32+320];
                che6_door2 = 1;
            }else
            {
                che6_door2 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+320],10)==1)
            {
                g_dataBuffer_WH_Display[1107+320]=g_dataBuffer_MVB[1107+32+320];
                g_dataBuffer_WH_Display[1123+320]=g_dataBuffer_MVB[1123+32+320];
                che6_door3 = 1;
            }else
            {
                che6_door3 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+320],11)==1)
            {
                g_dataBuffer_WH_Display[1108+320]=g_dataBuffer_MVB[1108+32+320];
                g_dataBuffer_WH_Display[1124+320]=g_dataBuffer_MVB[1124+32+320];
                che6_door4 = 1;
            }else
            {
                che6_door4 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+320],12)==1)
            {
                g_dataBuffer_WH_Display[1109+320]=g_dataBuffer_MVB[1109+32+320];
                g_dataBuffer_WH_Display[1125+320]=g_dataBuffer_MVB[1125+32+320];
                che6_door5 = 1;
            }else
            {
                che6_door5 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+320],13)==1)
            {
                g_dataBuffer_WH_Display[1110+320]=g_dataBuffer_MVB[1110+32+320];
                g_dataBuffer_WH_Display[1126+320]=g_dataBuffer_MVB[1126+32+320];
                che6_door6 = 1;
            }else
            {
                che6_door6 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+320],14)==1)
            {
                g_dataBuffer_WH_Display[1111+320]=g_dataBuffer_MVB[1111+32+320];
                g_dataBuffer_WH_Display[1127+320]=g_dataBuffer_MVB[1127+32+320];
                che6_door7 = 1;
            }else
            {
                che6_door7 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+320],15)==1)
            {
                g_dataBuffer_WH_Display[1112+320]=g_dataBuffer_MVB[1112+32+320];
                g_dataBuffer_WH_Display[1128+320]=g_dataBuffer_MVB[1128+32+320];
                che6_door8 = 1;
            }else
            {
                che6_door8 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+320],0)==1)
            {
                g_dataBuffer_WH_Display[1113+320]=g_dataBuffer_MVB[1113+32+320];
                g_dataBuffer_WH_Display[1129+320]=g_dataBuffer_MVB[1129+32+320];
                che6_door9 = 1;
            }else
            {
                che6_door9 = 0;
            }
            if(Bit(g_dataBuffer_MVB[1152+320],1)==1)
            {
                g_dataBuffer_WH_Display[1114+320]=g_dataBuffer_MVB[1114+32+320];
                g_dataBuffer_WH_Display[1130+320]=g_dataBuffer_MVB[1130+32+320];
                che6_door10 = 1;
            }else
            {
                che6_door10 = 0;
            }
        }
        else
        {
            che6_door1 = 0;
            che6_door2 = 0;
            che6_door3 = 0;
            che6_door4 = 0;
            che6_door5 = 0;
            che6_door6 = 0;
            che6_door7 = 0;
            che6_door8 = 0;
            che6_door9 = 0;
            che6_door10 = 0;
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_WH_Display[1104+j+320]=0;
            }
        }
    }
    else
    {
        che6_door1 = 0;
        che6_door2 = 0;
        che6_door3 = 0;
        che6_door4 = 0;
        che6_door5 = 0;
        che6_door6 = 0;
        che6_door7 = 0;
        che6_door8 = 0;
        che6_door9 = 0;
        che6_door10 = 0;
        for(int j=0;j<32;j++)
        {
            g_dataBuffer_WH_Display[1104+j+320]=0;
        }
    }




    //CTHM_CarNumber_U16	列车号	由显示屏设定
   if(0)
 {
    if(
            ((0<CTHM_TrainNumber_U8)&&(CTHM_TrainNumber_U8<100))&&
            ((0<CTHM_LineNumber_U8) &&(CTHM_LineNumber_U8<100 ))
      )
    {

        if (CTHM_LineNumber_U8<10)
        {
            if ( CTHM_TrainNumber_U8<10)
            {
                che1_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"1";
                che2_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"2";
                che3_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"3";
                che4_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"4";
                che5_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"5";
                che6_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"6";
                che7_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"7";
                che8_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"8";

            }
            else
            {
                if (CTHM_TrainNumber_U8<100)
                {
                    che1_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"1";
                    che2_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"2";
                    che3_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"3";
                    che4_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"4";
                    che5_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"5";
                    che6_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"6";
                    che7_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"7";
                    che8_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"8";

                }
                else
                {
                    che1_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"1";
                    che2_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"2";
                    che3_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"3";
                    che4_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"4";
                    che5_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"5";
                    che6_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"6";
                    che7_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"7";
                    che8_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"8";

                }
            }
        }
        else
        {
            if(CTHM_LineNumber_U8<100)
            {
                if ( CTHM_TrainNumber_U8<10)
                {
                       che1_num=StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"1";
                       che2_num=StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"2";
                       che3_num=StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"3";
                       che4_num=StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"4";
                       che5_num=StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"5";
                       che6_num=StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"6";
                       che7_num=StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"7";
                       che8_num=StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"8";
                }
                else
                {
                          if(CTHM_TrainNumber_U8<100)
                          {
                              che1_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"1";
                              che2_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"2";
                              che3_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"3";
                              che4_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"4";
                              che5_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"5";
                              che6_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"6";
                              che7_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"7";
                              che8_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"8";
                          }
                          else
                          {
                              che1_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"1";
                              che2_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"2";
                              che3_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"3";
                              che4_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"4";
                              che5_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"5";
                              che6_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"6";
                              che7_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"7";
                              che8_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"8";
                          }
                      }
                 }
        }
    }
    else
    {

        che1_num=QString("%1").arg(Train_num_Systemini,4,10,QLatin1Char('0'))+"1";
        che2_num=QString("%1").arg(Train_num_Systemini,4,10,QLatin1Char('0'))+"2";
        che3_num=QString("%1").arg(Train_num_Systemini,4,10,QLatin1Char('0'))+"3";
        che4_num=QString("%1").arg(Train_num_Systemini,4,10,QLatin1Char('0'))+"4";
        che5_num=QString("%1").arg(Train_num_Systemini,4,10,QLatin1Char('0'))+"5";
        che6_num=QString("%1").arg(Train_num_Systemini,4,10,QLatin1Char('0'))+"6";

    }

}
   else
   {
       che1_num="F"+QString("%1").arg(CTHM_TrainNumber_U8,2,10,QLatin1Char('0'))+"1";
       che2_num="F"+QString("%1").arg(CTHM_TrainNumber_U8,2,10,QLatin1Char('0'))+"2";
       che3_num="F"+QString("%1").arg(CTHM_TrainNumber_U8,2,10,QLatin1Char('0'))+"3";
       che4_num="F"+QString("%1").arg(CTHM_TrainNumber_U8,2,10,QLatin1Char('0'))+"4";
       che5_num="F"+QString("%1").arg(CTHM_TrainNumber_U8,2,10,QLatin1Char('0'))+"5";
       che6_num="F"+QString("%1").arg(CTHM_TrainNumber_U8,2,10,QLatin1Char('0'))+"6";
       che7_num="F"+QString("%1").arg(CTHM_TrainNumber_U8,2,10,QLatin1Char('0'))+"7";
       che8_num="F"+QString("%1").arg(CTHM_TrainNumber_U8,2,10,QLatin1Char('0'))+"8";
   }


}

void Dialog::createSendData()
{
    //显示屏发送的生命信号
    /*
    if (sendData[0] == 255)
    {
        sendData[0] = 0;
    }
    else
    {
       sendData[0]=sendData[0]+1;
    }

    HMCT_Version_U8=10;  // 显示屏版本号  v1.0
    //显示屏发送所有 字变量高8位低八位交换
    //sendData[0]  = HMI_send_data1&0x00FF;
    sendData[1]  = HMCT_Year_U8;
    sendData[2]  = HMCT_Month_U8;
    sendData[3]  = HMCT_Day_U8;
    sendData[4]  = HMCT_Hour_U8;
    sendData[5]  = HMCT_Minute_U8;
    sendData[6]  = HMCT_Second_U8;
    sendData[7]  = HMCT_TimeSetFlag_B1*128+
                   HMCT_FAUMute_B1*64+
                   HMCT_FAUReset_B1*32+
                   HMCT_BCUSelfDetection_B1*16+
                   HMCT_BackPressureSelection_B1*8+
                   HMCT_BackPressureSelection2_B1*4+
                   HMCT_ACDETestStartFlag_B1*2+
                   HMCT_ACDETestStopFlag*1;

    sendData[8]  = (HMCT_SingleMileSet_U32/65536)/256;
    sendData[9]  = (HMCT_SingleMileSet_U32/65536)%256;
    sendData[10] = (HMCT_SingleMileSet_U32%65536)/256;
    sendData[11] = (HMCT_SingleMileSet_U32%65536)%256;
    sendData[12] = (HMCT_SingleTimeSet_U32/65536)/256;
    sendData[13] = (HMCT_SingleTimeSet_U32/65536)%256;
    sendData[14] = (HMCT_SingleTimeSet_U32%65536)/256;
    sendData[15] = (HMCT_SingleTimeSet_U32%65536)%256;
    sendData[16] = (HMCT_SingleTracPowerSet_U32/65536)/256;
    sendData[17] = (HMCT_SingleTracPowerSet_U32/65536)%256;
    sendData[18] = (HMCT_SingleTracPowerSet_U32%65536)/256;
    sendData[19] = (HMCT_SingleTracPowerSet_U32%65536)%256;
    sendData[20] = (HMCT_SingleBrakePowerSet_U32/65536)/256;
    sendData[21] = (HMCT_SingleBrakePowerSet_U32/65536)%256;
    sendData[22] = (HMCT_SingleBrakePowerSet_U32%65536)/256;
    sendData[23] = (HMCT_SingleBrakePowerSet_U32%65536)%256;
    sendData[24] = (HMCT_SingleSivPowerSet_U32/65536)/256;
    sendData[25] = (HMCT_SingleSivPowerSet_U32/65536)%256;
    sendData[26] = (HMCT_SingleSivPowerSet_U32%65536)/256;
    sendData[27] = (HMCT_SingleSivPowerSet_U32%65536)%256;
    sendData[28] = HMCT_LineNoSet_U8;
    sendData[29] = HMCT_TrainNoSet_U8;
    sendData[30] = HMCT_SingleMileSet_B1        *128+
                   HMCT_SingleTimeSet_B1        *64 +
                   HMCT_SingleTracPowerSet_B1   *32 +
                   HMCT_SingleBrakePowerSet_B1  *16+
                   HMCT_SingleSivPowerSet_B1    *8+
                   HMCT_LineNoSet_B1            *4+
                   HMCT_TrainNoSet_B1           *2+
                   HMCT_ResetDetectionMile_B1   *1;
    sendData[31] = HMCT_Version_U8;

    sendData[32] = HMCT_SetHVACEnableTC1_B1        *128+
                   HMCT_SetHVACEnableMP1_B1        *64 +
                   HMCT_SetHVACEnableM1_B1         *32 +
                   HMCT_SetHVACEnableM2_B1         *16+
                   HMCT_SetHVACEnableMP2_B1        *8+
                   HMCT_SetHVACEnableTC2_B1        *4+
                   HMCT_SetDrEnable_B1             *2+
                   HMCT_SetWheelEnable_B1          *1;


    sendData[33] = HMCT_SetHVACModeTC1_U8;
    sendData[34] = HMCT_SetHVACModeMP1_U8;
    sendData[35] = HMCT_SetHVACModeM1_U8;
    sendData[36] = HMCT_SetHVACModeM2_U8;
    sendData[37] = HMCT_SetHVACModeMP2_U8;
    sendData[38] = HMCT_SetHVACModeTC2_U8;
    sendData[39] = HMCT_SetHVACTempTC1_U8;
    sendData[40] = HMCT_SetHVACTempMP1_U8;
    sendData[41] = HMCT_SetHVACTempM1_U8;
    sendData[42] = HMCT_SetHVACTempM2_U8;
    sendData[43] = HMCT_SetHVACTempMP2_U8;
    sendData[44] = HMCT_SetHVACTempTC2_U8;
    sendData[45] = HMCT_SetDrObsCloseForce1_U8;
    sendData[46] = HMCT_SetDrObsCloseForce2_U8;
    sendData[47] = HMCT_SetDrObsCloseForce3_U8;
    sendData[48] = HMCT_SetDrObsCloseForce4_U8;
    sendData[49] = HMCT_SetDrObsCloseForce5_U8;
    sendData[50] = HMCT_SetDrOpenTime_U8;
    sendData[51] = HMCT_SetDrCloSetDrime_U8;
    sendData[52] = HMCT_SetDrObsNumber_U8;
    sendData[53] = HMCT_SetDrOpenWidthOnObs_U8;
    sendData[54] = HMCT_SetDrObsDetectionDelay_U8;
    sendData[55] = HMCT_SetDrDelayTimeForOpen_U8;
    sendData[56] = HMCT_SetDrDelayTimeForClose_U8;
    sendData[57] = HMCT_SetDrObsRecloseDelay_U8;
    sendData[58] = HMCT_SetWheelDiaTC1_U8;
    sendData[59] = HMCT_SetWheelDiaMp1_U8;
    sendData[60] = HMCT_SetWheelDiaM1_U8;
    sendData[61] = HMCT_SetWheelDiaM2_U8;
    sendData[62] = HMCT_SetWheelDiaMp2_U8;
    sendData[63] = HMCT_SetWheelDiaTC2_U8;

    sendData[64] = HMCT_EmgcyBroadcastID_U8;
    sendData[65] = HMCT_ResetDetectDistance_B1*128 +
                   HMCT_ResetAP1_B1*64 +
                   HMCT_ResetAP2_B1*32+
                   HMCT_HeaterTimingControl*16;
    sendData[66] = HMCT_TimeCheck_U8;
    sendData[67] = HMCT_HeaterWorkingTime_U8;
    sendData[68] = HMCT_HeaterquiescentTime_U8;*/


    if(HMI_HMCT_LifeSignal_U16 < 65530)
    {
        HMI_HMCT_LifeSignal_U16++;
    }else
    {
        HMI_HMCT_LifeSignal_U16 = 0;
    }
    HMiCT_HMISWVerH_U8 = 2;
    HMiCT_HMISWVerL_U8 = 21;
    HMCT_LineNum_U8 = 6;
    ///PORT310
    sendData[0] = HMI_HMCT_LifeSignal_U16/256;
    sendData[1] = HMI_HMCT_LifeSignal_U16%256;
    sendData[2] = HMiCT_HMISWVerH_U8;
    sendData[3] = HMiCT_HMISWVerL_U8;
    sendData[31] = HMiCT_SetFlagChecker_U8;
    ///PROT311
    sendData[32] = HMCT_Year_U8;
    sendData[33] = HMCT_Month_U8;
    sendData[34] = HMCT_Day_U8;
    sendData[35] = HMCT_Hour_U8;
    sendData[36] = HMCT_Minute_U8;
    sendData[37] = HMCT_Second_U8;
    sendData[38] = HMCT_TrainNum_U8;
    sendData[39] = HMCT_LineNum_U8;
    sendData[40] = HMiCT_StationIDFirst_U8;
    sendData[41] = HMiCT_StationIDLast_U8;
    sendData[42] =     HMiCT_SAVETime_B1<<7|
                       HMiCT_SAVETrainNum_B1<<6|
                       HMiCT_SAVELineNum_B1<<5|
                       HMiCT_SAVEFirstStation_B1<<4|
                       HMiCT_SAVELastStation_B1<<3|
                       HMiCT_HoldBrkRls_B1<<2|
                       HMiCT_FaultDetection_B1<<1;
    sendData[43] =     HMiCT_HVAC1FireMode_B1<<7|
                        HMiCT_HVAC1PreOff_B1<<6|
                        HMiCT_HVAC1EmgcyVenti_B1<<5|
                        HMiCT_HVAC1Venti_B1<<4|
                        HMiCT_HVAC1Auto_B1<<3|
                        HMiCT_HVAC1Test_B1<<2;
    sendData[44] =  HMiCT_HVAC2FireMode_B1<<7|
                    HMiCT_HVAC2PreOff_B1<<6|
                    HMiCT_HVAC2EmgcyVenti_B1<<5|
                    HMiCT_HVAC2Venti_B1<<4|
                    HMiCT_HVAC2Auto_B1<<3|
                    HMiCT_HVAC2Test_B1<<2;
    sendData[45] =  HMiCT_HVAC3FireMode_B1<<7|
                    HMiCT_HVAC3PreOff_B1<<6|
                    HMiCT_HVAC3EmgcyVenti_B1<<5|
                    HMiCT_HVAC3Venti_B1<<4|
                    HMiCT_HVAC3Auto_B1<<3|
                    HMiCT_HVAC3Test_B1<<2;
    sendData[46] =  HMiCT_HVAC4FireMode_B1<<7|
                    HMiCT_HVAC4PreOff_B1<<6|
                    HMiCT_HVAC4EmgcyVenti_B1<<5|
                    HMiCT_HVAC4Venti_B1<<4|
                    HMiCT_HVAC4Auto_B1<<3|
                    HMiCT_HVAC4Test_B1<<2;
    sendData[47] =  HMiCT_HVAC5FireMode_B1<<7|
                    HMiCT_HVAC5PreOff_B1<<6|
                    HMiCT_HVAC5EmgcyVenti_B1<<5|
                    HMiCT_HVAC5Venti_B1<<4|
                    HMiCT_HVAC5Auto_B1<<3|
                    HMiCT_HVAC5Test_B1<<2;
    sendData[48] =  HMiCT_HVAC6FireMode_B1<<7|
                    HMiCT_HVAC6PreOff_B1<<6|
                    HMiCT_HVAC6EmgcyVenti_B1<<5|
                    HMiCT_HVAC6Venti_B1<<4|
                    HMiCT_HVAC6Auto_B1<<3|
                    HMiCT_HVAC6Test_B1<<2;


    sendData[49] =HMiCT_Reduce2_B1<<7|
                   HMiCT_Reduce1_B1<<6|
                   HMiCT_Add1_B1<<5|
                   HMiCT_Add2_B1<<4|
                   HMiCT_UICMode_B1<<3;



    sendData[51] = HMiCT_SetTemp1_U8;
    sendData[52] = HMiCT_SetTemp2_U8;
    sendData[53] = HMiCT_SetTemp3_U8;
    sendData[54] = HMiCT_SetTemp4_U8;
    sendData[55] = HMiCT_SetTemp5_U8;
    sendData[56] = HMiCT_SetTemp6_U8;
    sendData[59] = HMiCT_SAVEHVACMode1_B1<<7|
                   HMiCT_SAVEHVACMode2_B1<<6|
                   HMiCT_SAVEHVACMode3_B1<<5|
                   HMiCT_SAVEHVACMode4_B1<<4|
                   HMiCT_SAVEHVACMode5_B1<<3|
                   HMiCT_SAVEHVACMode6_B1<<2;
    sendData[60] = HMiCT_SAVEHVACTemp1_B1<<7|
                   HMiCT_SAVEHVACTemp2_B1<<6|
                   HMiCT_SAVEHVACTemp3_B1<<5|
                   HMiCT_SAVEHVACTemp4_B1<<4|
                   HMiCT_SAVEHVACTemp5_B1<<3|
                   HMiCT_SAVEHVACTemp6_B1<<2;
    sendData[61] = HMiCT_IsolateMp1_B1<<7|
                   HMiCT_IsolateM1_B1<<6|
                   HMiCT_IsolateM2_B1<<5|
                   HMiCT_IsolateMp2_B1<<4|
                   HMiCT_IsolateRstMp1_B1<<3|
                   HMiCT_IsolateRstM1_B1<<2|
                   HMiCT_IsolateRstM2_B1<<1|
                   HMiCT_IsolateRstMp2_B1;
    sendData[62] = HMiCT_Mp1DynamicBrkCut_B1<<7|
                   HMiCT_M1DynamicBrkCut_B1<<6|
                   HMiCT_M2DynamicBrkCut_B1<<5|
                   HMiCT_Mp2DynamicBrkCut_B1<<4|
                   HMiCT_ACU1Cutoff_B1<<3|
                   HMiCT_ACU2Cutoff_B1<<2|
                   HMiCT_ACU1Reset_B1<<1|
                   HMiCT_ACU2Reset_B1;
    sendData[63] = (HMiCT_REC1Cutoff_B1)<<7|
                   ((HMiCT_REC2Cutoff_B1)<<6)|
                   ((HMiCT_REC1Reset_B1)<<5)|
                   ((HMiCT_REC2Reset_B1)<<4);
    ///port 3i2
    sendData[64] = HMiCT_WheelDia1_U8;
    sendData[65] = HMiCT_WheelDia2_U8;
    sendData[66] = HMiCT_WheelDia3_U8;
    sendData[67] = HMiCT_WheelDia4_U8;
    sendData[68] = HMiCT_WheelDia5_U8;
    sendData[69] = HMiCT_WheelDia6_U8;

    sendData[71] = HMiCT_TransModeSpeed_U8;//////


    sendData[72] = HMiCT_SAVEWheelDig1_B1<<7|
                HMiCT_SAVEWheelDig2_B1<<6|
                HMiCT_SAVEWheelDig3_B1<<5|
                HMiCT_SAVEWheelDig4_B1<<4|
                HMiCT_SAVEWheelDig5_B1<<3|
                HMiCT_SAVEWheelDig6_B1<<2|
                HMiCT_TransModeSpeedValid_B1<<1|
                HMCT_SetDrEnable_B1;
    sendData[73] = HMiCT_StationIDCurrent_U8;
    sendData[74] = HMiCT_StationIDNext_U8;
    sendData[75] = HMiCT_EmgyBroadcastID_U8;
    sendData[76] = HMiCT_HVAC1UICValid_B1<<7|
                HMiCT_HVAC2UICValid_B1<<6|
                HMiCT_HVAC3UICValid_B1<<5|
                HMiCT_HVAC4UICValid_B1<<4|
                HMiCT_HVAC5UICValid_B1<<3|
                HMiCT_HVAC6UICValid_B1<<2;

    sendData[77] = HMiCT_HVAC1AxFunStart_B1<<7|
                HMiCT_HVAC2AxFunStart_B1<<6|
                HMiCT_HVAC3AxFunStart_B1<<5|
                HMiCT_HVAC4AxFunStart_B1<<4|
                HMiCT_HVAC5AxFunStart_B1<<3|
                HMiCT_HVAC6AxFunStart_B1<<2;
    sendData[78] = HMiCT_HVAC1AxFunStop_B1<<7|
                HMiCT_HVAC2AxFunStop_B1<<6|
                HMiCT_HVAC3AxFunStop_B1<<5|
                HMiCT_HVAC4AxFunStop_B1<<4|
                HMiCT_HVAC5AxFunStop_B1<<3|
                HMiCT_HVAC6AxFunStop_B1<<2;
    sendData[79] = HMiCT_ResetPCE1_B1<<7|
                HMiCT_ResetPCE2_B1<<6|
                HMiCT_ResetPCE3_B1<<5|
                HMiCT_ResetPCE4_B1<<4|
                HMiCT_ResetACU1Fult_B1<<3|
                HMiCT_ResetACU2Fult_B1<<2;
    sendData[80] =
                HMiCT_PISMODE_B1<<6|
                HMiCT_ResetACUEnergy1_B1<<5|
                HMiCT_ResetACUEnergy2_B1<<4|
                HMiCT_ResetTCUEnergy1_B1<<3|
                HMiCT_ResetTCUEnergy2_B1<<2|
                HMiCT_ResetTCUEnergy3_B1<<1|
                HMiCT_ResetTCUEnergy4_B1;
    sendData[81] = HMiCT_AdjustStation_B1<<7|
                   HMiCT_EmgyBroadcastCommd_B1<<6|
                   HMiCT_EmgyBroadcastStop_B1<<5|
                   HMiCT_BCUSelfTestReq_B1<<4|
                   HMiCT_ForJumpStation_B1<<3|
                   HMiCT_BackJumpStation_B1<<2|
                   HMiCT_LeavePA_B1<<1|
                   HMiCT_ArrivePA_B1;
    sendData[82] = HMCT_SetDrObsCloseForce1_U8;
    sendData[83] = HMCT_SetDrObsCloseForce2_U8;
    sendData[84] = HMCT_SetDrObsCloseForce3_U8;
    sendData[85] = HMCT_SetDrObsCloseForce4_U8;
    sendData[86] = HMCT_SetDrObsCloseForce5_U8;
    sendData[87] = HMCT_SetDrOpenTime_U8;
    sendData[88] = HMCT_SetDrCloSetDrime_U8;
    sendData[89] = HMCT_SetDrObsNumber_U8;
    sendData[90] = HMCT_SetDrOpenWidthOnObs_U8;
    sendData[91] = HMCT_SetDrObsDetectionDelay_U8;
    sendData[92] = HMCT_SetDrDelayTimeForOpen_U8;
    sendData[93] = HMCT_SetDrDelayTimeForClose_U8;
    sendData[94] = HMCT_SetDrObsRecloseDelay_U8;
    sendData[95] = HMiCT_ParaModifRequest_U8;
    sendData[96] = HMiCT_ClearERMAP1Time_B1<<7|
                   HMiCT_ClearERMAP2Time_B1<<6|
                   HMiCT_ClearTractionCost_B1<<5|
                   HMiCT_ClearServiceDistance_B1<<4|
                   HMiCT_ClearAuxCost_B1<<3|
                   HMiCT_EBCutOutCmd_B1<<2|
                   HMiCT_SAVESerialID_B1<<1|
                   HMiCT_SAVEServiceID_B1;
    sendData[97] = HMiCT_FireAlarm1Rst_B1<<7|
                   HMiCT_FireAlarm2Rst_B1<<6|
                   HMiCT_FireAlarm3Rst_B1<<5|
                   HMiCT_FireAlarm4Rst_B1<<4|
                   HMiCT_FireAlarm5Rst_B1<<3|
                   HMiCT_FireAlarm6Rst_B1<<2|
                   HMiCT_FireAlarmAllRst_B1<<1|
                   HMCT_ACDETestStartFlag_B1;

    sendData[98] = HMiCT_ServiceID_U16/256;
    sendData[99] = HMiCT_ServiceID_U16%256;
    sendData[100] = HMiCT_SerialID_U16/256;
    sendData[101] = HMiCT_SerialID_U16%256;

    sendData[102] = HMiCT_SetServiceKmYear_U8;
    sendData[103] = HMiCT_SetServiceKmMonth_U8;
    sendData[104] = HMiCT_SetServiceKmDay_U8;

    sendData[105] = HMiCT_SetRunTimeYear_U8;
    sendData[106] = HMiCT_SetRunTimeMonth_U8;
    sendData[107] = HMiCT_SetRunTimeDay_U8;

    sendData[108] = HMiCT_SetTotalKmYear_U8;
    sendData[109] = HMiCT_SetTotalKmMonth_U8;
    sendData[110] = HMiCT_SetTotalKmDay_U8;


    sendData[114] = HMiCT_SetRunTime_U32/65536/256;
    sendData[115] = HMiCT_SetRunTime_U32/65536%256;
    sendData[116] = HMiCT_SetRunTime_U32%65536/256;
    sendData[117] = HMiCT_SetRunTime_U32%65536%256;


    sendData[118] = HMiCT_SetServiceKilometers_U32/65536/256;
    sendData[119] = HMiCT_SetServiceKilometers_U32/65536%256;
    sendData[120] = HMiCT_SetServiceKilometers_U32%65536/256;
    sendData[121] = HMiCT_SetServiceKilometers_U32%65536%256;
    sendData[122] = HMiCT_SetTagServiceKilometers_U8;

    sendData[123] = HMiCT_SetRunningKilometers_U32/65536/256;
    sendData[124] = HMiCT_SetRunningKilometers_U32/65536%256;
    sendData[125] = HMiCT_SetRunningKilometers_U32%65536/256;
    sendData[126] = HMiCT_SetRunningKilometers_U32%65536%256;
    sendData[127] = HMiCT_SetTagRunningKilometers_U8;

    SerialDebug();
}


void Dialog::OnTimer_settingtime()
{
    /*
    显示屏校时逻辑（大连地铁）
    1.显示屏程序启动后4秒钟在Dialog::OnTimer4s()中执行一次与CCU时间校准操作。校准操作条件是：至少有一个CCU在线且通信正常。校准操作只执行一次，条件不满足则不再继续校准
    2.显示屏接收到任意一个显示屏发送的时间校准标志后，延时5秒钟同CCU校时Dialog::OnTimer_settingtime()。
    */

#ifdef USE_MVB_DATA
    if (CTHM_CCU1On_B1||CTHM_CCU2On_B1)
    {
        ATC_time_temp1 = CTALL_Year_U8+2000;
        ATC_time_temp2 = CTALL_Month_U8;
        ATC_time_temp3 = CTALL_Day_U8;
        ATC_time_temp4 = CTALL_Hour_U8;
        ATC_time_temp5 = CTALL_Minite_U8;
        ATC_time_temp6 = CTALL_Second_U8;
        if(ATC_time_temp1<2038 && ATC_time1 > 1999)
        {
            SetSystemTime(ATC_time_temp1,ATC_time_temp2,ATC_time_temp3,ATC_time_temp4,ATC_time_temp5,ATC_time_temp6);
        }

        //SetSystemTime(CTALL_Year_U8+2000,CTALL_Month_U8,CTALL_Day_U8,CTALL_Hour_U8,CTALL_Minite_U8,CTALL_Second_U8);
      //  qDebug() <<"setting time   ok!";
    }
    else
    {
        //qDebug() <<"setting time  not ok!,because ccu is not online!";
    }

#endif

    timer_settingtime.stop();

    //qDebug() <<"timer_settingtime.isActive()"<<timer_settingtime.isActive();


}

void Dialog::OnTimer4s()
{
    // ccu LifeSignal
    if(CCU_life_temp_MVB==g_dataBuffer_MVB[0])
    {
        BitSet(hmi_485_error,4,1);

    }
    else
    {
            CCU_life_temp_MVB=g_dataBuffer_MVB[0];
            BitSet(hmi_485_error,4,0);
            /*
            显示屏校时逻辑（大连地铁）
            1.显示屏程序启动后20秒钟在Dialog::OnTimer4s()中执行一次与CCU时间校准操作。校准操作条件是：至少有一个CCU在线且通信正常。校准操作只执行一次，条件不满足则不再继续校准
            2.显示屏接收到任意一个显示屏发送的时间校准标志后，延时5秒钟同CCU校时Dialog::OnTimer_settingtime()。
            3.显示屏设置时间功能不直接修改显示屏时间，通过设置时间页面修改时间，等待按钮弹起时显示屏同CCU校时一次。
            */


            if(SetTime_flag==false)
            {
                timesetting_num++;
                if(timesetting_num==5)
                {
                        #ifdef USE_MVB_DATA
                            if (CTHM_CCU1On_B1||CTHM_CCU2On_B1)
                            {
                                ATC_time_temp1 = CTALL_Year_U8+2000;
                                ATC_time_temp2 = CTALL_Month_U8;
                                ATC_time_temp3 = CTALL_Day_U8;
                                ATC_time_temp4 = CTALL_Hour_U8;
                                ATC_time_temp5 = CTALL_Minite_U8;
                                ATC_time_temp6 = CTALL_Second_U8;
                                if(ATC_time_temp1<2038)
                                {
                                  //  SetSystemTime(ATC_time_temp1,ATC_time_temp2,ATC_time_temp3,ATC_time_temp4,ATC_time_temp5,ATC_time_temp6);

                                }


                                //SetSystemTime(CTALL_Year_U8+2000,CTALL_Month_U8,CTALL_Day_U8,CTALL_Hour_U8,CTALL_Minite_U8,CTALL_Second_U8);
                              //  qDebug() <<"setting time   ok!";
                            }
                            else
                            {
                                // qDebug() <<"setting time  not ok!,because ccu is not online!";
                            }
                        #endif
                            SetTime_flag=true;

                }


            }

    }

    //CheckLifeSignalChange();
}

void Dialog::ShowFaultPage()
{
//    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
//    pPage->ChangePage(PAGE_INDEX_FAULTINFO);
}

// call this function when serial have data.
void Dialog::getRevDataSlot( int const pageNo, const QByteArray data, int const length )
{

}

void Dialog::CheckLifeSignalChange()
{
    //TC1_HMI=1;
    //当处于TC1端时弹出TC1端以太网通信异常故障
    if (Bit(hmi_485_error,4) && (TC1_HMI==1))
        g_485_comm_err_flg1 = true;
    else
        g_485_comm_err_flg1 = false;

    if (Bit(hmi_485_error,4) && (TC2_HMI==1))
        g_485_comm_err_flg2 = true;
    else
        g_485_comm_err_flg2 = false;


/*
    //if 485 error ,no more deal with other errors.
    if((g_485_comm_err_flg1  || g_485_comm_err_flg2))
    {

        return;
    }



    if (CTHM_CCU1On_B1||CTHM_CCU2On_B1)
    {
        g_riom1_gw123_comm_err_flg=Bit(~g_dataBuffer_Display[1873], 15 );
        g_riom6_gw123_comm_err_flg=Bit(~g_dataBuffer_Display[1875], 12 );
        g_riom2_gw123_comm_err_flg=Bit(~g_dataBuffer_Display[1874], 6 );
        g_riom5_gw123_comm_err_flg=Bit(~g_dataBuffer_Display[1875], 15 );
        g_riom3_gw123_comm_err_flg=Bit(~g_dataBuffer_Display[1874], 15 );
        g_riom4_gw123_comm_err_flg=Bit(~g_dataBuffer_Display[1875], 4 );

        g_ccu1_comm_err_flg=Bit(~g_dataBuffer_Display[1872], 7 );
        g_ccu2_comm_err_flg=Bit(~g_dataBuffer_Display[1872], 6 );
        g_tcu1_comm_err_flg=Bit(~g_dataBuffer_Display[1877], 3 );
        g_tcu2_comm_err_flg=Bit(~g_dataBuffer_Display[1877], 2 );
        g_tcu3_comm_err_flg=Bit(~g_dataBuffer_Display[1877], 1 );
        g_tcu4_comm_err_flg=Bit(~g_dataBuffer_Display[1877], 0 );
        //g_tcu1_comm_err_flg=!((bool) CTHM_DCU2_Online_B1);
//        g_tcu2_comm_err_flg=!((bool) CTHM_DCU3_Online_B1);
//        g_tcu3_comm_err_flg=!((bool) CTHM_DCU4_Online_B1);
//        g_tcu4_comm_err_flg=!((bool) CTHM_DCU5_Online_B1);
        g_bcu1_comm_err_flg=Bit(~g_dataBuffer_Display[1877], 7 );
        g_bcu2_comm_err_flg=Bit(~g_dataBuffer_Display[1877], 6 );
        g_bcu3_comm_err_flg=Bit(~g_dataBuffer_Display[1877], 5 );
        g_bcu4_comm_err_flg=Bit(~g_dataBuffer_Display[1877], 4 );
        g_acu1_comm_err_flg=Bit(~g_dataBuffer_Display[1877], 15 );
        g_acu2_comm_err_flg=Bit(~g_dataBuffer_Display[1877], 14 );
        g_atc1_comm_err_flg=Bit(~g_dataBuffer_Display[1879], 15 );
        g_atc2_comm_err_flg=Bit(~g_dataBuffer_Display[1879], 14 );

        //g_atc1_comm_err_flg=!((bool) CTHM_ATC1_Online_B1);
        //g_atc2_comm_err_flg=!((bool) CTHM_ATC2_Online_B1);
        g_pis1_comm_err_flg=Bit(~g_dataBuffer_Display[1879], 13 );
        g_pis2_comm_err_flg=Bit(~g_dataBuffer_Display[1879], 12 );
        g_erm1_comm_err_flg=Bit(~g_dataBuffer_Display[1876], 15 );
        g_erm2_comm_err_flg=Bit(~g_dataBuffer_Display[1876], 14 );
        g_fas1_comm_err_flg=Bit(~g_dataBuffer_Display[1879], 11 );
        g_fas2_comm_err_flg=Bit(~g_dataBuffer_Display[1879], 10 );
        g_door1_comm_err_flg=Bit(~g_dataBuffer_Display[1878], 7 );
        g_door2_comm_err_flg=Bit(~g_dataBuffer_Display[1878], 6 );
        g_door3_comm_err_flg=Bit(~g_dataBuffer_Display[1878], 5 );
        g_door4_comm_err_flg=Bit(~g_dataBuffer_Display[1878], 4 );
        g_door5_comm_err_flg=Bit(~g_dataBuffer_Display[1878], 3 );
        g_door6_comm_err_flg=Bit(~g_dataBuffer_Display[1878], 2 );
        g_door7_comm_err_flg=Bit(~g_dataBuffer_Display[1878], 1 );
        g_door8_comm_err_flg=Bit(~g_dataBuffer_Display[1878], 0 );
        g_door9_comm_err_flg=Bit(~g_dataBuffer_Display[1878], 15 );
        g_door10_comm_err_flg=Bit(~g_dataBuffer_Display[1878], 14 );
        g_door11_comm_err_flg=Bit(~g_dataBuffer_Display[1878], 13 );
        g_door12_comm_err_flg=Bit(~g_dataBuffer_Display[1878], 12 );
        g_hvac1_comm_err_flg=Bit(~g_dataBuffer_Display[1879], 7 );
        g_hvac2_comm_err_flg=Bit(~g_dataBuffer_Display[1879], 6 );
        g_hvac3_comm_err_flg=Bit(~g_dataBuffer_Display[1879], 5 );
        g_hvac4_comm_err_flg=Bit(~g_dataBuffer_Display[1879], 4 );
        g_hvac5_comm_err_flg=Bit(~g_dataBuffer_Display[1879], 3 );
        g_hvac6_comm_err_flg=Bit(~g_dataBuffer_Display[1879], 2 );


        g_riom1_gw123_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1873], 15 );
        g_riom6_gw123_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1875], 12 );
        g_riom2_gw123_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1874], 6 );
        g_riom5_gw123_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1875], 15 );
        g_riom3_gw123_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1874], 15 );
        g_riom4_gw123_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1875], 4 );

        g_ccu1_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1872], 7 );
        g_ccu2_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1872], 6 );
        g_tcu1_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1877], 3 );
        g_tcu2_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1877], 2 );
        g_tcu3_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1877], 1 );
        g_tcu4_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1877], 0 );
        //g_tcu1_comm_err_flg_temp=!((bool) CTHM_DCU2_Online_B1);
//        g_tcu2_comm_err_flg_temp=!((bool) CTHM_DCU3_Online_B1);
//        g_tcu3_comm_err_flg_temp=!((bool) CTHM_DCU4_Online_B1);
//        g_tcu4_comm_err_flg_temp=!((bool) CTHM_DCU5_Online_B1);
        g_bcu1_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1877], 7 );
        g_bcu2_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1877], 6 );
        g_bcu3_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1877], 5 );
        g_bcu4_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1877], 4 );
        g_acu1_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1877], 15 );
        g_acu2_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1877], 14 );
        g_atc1_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1879], 15 );
        g_atc2_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1879], 14 );

        //g_atc1_comm_err_flg_temp=!((bool) CTHM_ATC1_Online_B1);
        //g_atc2_comm_err_flg_temp=!((bool) CTHM_ATC2_Online_B1);
        g_pis1_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1879], 13 );
        g_pis2_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1879], 12 );
        g_erm1_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1876], 15 );
        g_erm2_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1876], 14 );
        g_fas1_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1879], 11 );
        g_fas2_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1879], 10 );
        g_door1_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1878], 7 );
        g_door2_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1878], 6 );
        g_door3_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1878], 5 );
        g_door4_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1878], 4 );
        g_door5_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1878], 3 );
        g_door6_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1878], 2 );
        g_door7_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1878], 1 );
        g_door8_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1878], 0 );
        g_door9_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1878], 15 );
        g_door10_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1878], 14 );
        g_door11_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1878], 13 );
        g_door12_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1878], 12 );
        g_hvac1_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1879], 7 );
        g_hvac2_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1879], 6 );
        g_hvac3_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1879], 5 );
        g_hvac4_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1879], 4 );
        g_hvac5_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1879], 3 );
        g_hvac6_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1879], 2 );

    }

*/
}

bool Dialog::CheckLifeSignalValue(WORD &temp, WORD data)
{
    bool ret;
    if (temp == data)
    {
        ret = true;
    }
    else
    {
        ret = false;
    }
    temp = data;
    return ret;
}

void Dialog::SerialDebug()
{
    if(serialDebugDlg.serialSetList.length() != 0)
    {
        int nOperation = 0;
        for(int i = 0; i < serialDebugDlg.serialSetList.length(); i++)
        {
            nOperation = serialDebugDlg.serialSetList[i].nOperation;
            if(nOperation == 0)
            {
                if(serialDebugDlg.serialSetList[i].bSetRevData)
                    g_dataBuffer_MVB[serialDebugDlg.serialSetList[i].nArrayIndex] |= serialDebugDlg.serialSetList[i].nNum;
                else
                    sendData[serialDebugDlg.serialSetList[i].nArrayIndex] |= serialDebugDlg.serialSetList[i].nNum;
            }
            else if(nOperation == 1)
            {
                if(serialDebugDlg.serialSetList[i].bSetRevData)
                    g_dataBuffer_MVB[serialDebugDlg.serialSetList[i].nArrayIndex] &= serialDebugDlg.serialSetList[i].nNum;
                else
                    sendData[serialDebugDlg.serialSetList[i].nArrayIndex] &= serialDebugDlg.serialSetList[i].nNum;
            }
            else if(nOperation == 2)
            {
                if(serialDebugDlg.serialSetList[i].bSetRevData)
                    g_dataBuffer_MVB[serialDebugDlg.serialSetList[i].nArrayIndex] ^= serialDebugDlg.serialSetList[i].nNum;
                else
                    sendData[serialDebugDlg.serialSetList[i].nArrayIndex] ^= serialDebugDlg.serialSetList[i].nNum;
            }
            else if(nOperation == 3)
            {
                if(serialDebugDlg.serialSetList[i].bSetRevData)
                    g_dataBuffer_MVB[serialDebugDlg.serialSetList[i].nArrayIndex] = serialDebugDlg.serialSetList[i].nNum;
                else
                    sendData[serialDebugDlg.serialSetList[i].nArrayIndex] = serialDebugDlg.serialSetList[i].nNum;
            }
        }
    }
}

QString Dialog::SendText(QString sc_com)
{
    QString msg = sc_com;

    if ((msg.length() > 0) && (ttyUSB_sc != NULL))
    {
         //   qDebug() << "SendText"<<msg.length();
            msg = msg + "\n";
            QByteArray data(msg.toAscii());
            ttyUSB_sc->write(data);
            // usleep(500);
            QString str;
            int read_num=0;
            while (1)
            {

                        str=ttyUSB_sc->readLine();

                        if(read_num>5)
                        {

           //                 qDebug() << "read_num :"<<read_num<<"length:"<<str.length();
                            read_num=0;
                            break;//while()
                        }
                        else
                        {
                            read_num++;
                        }
           //             qDebug() << "ttyUSB_sc->readLine()"<<"str.isEmpty()"<<str.isEmpty();


                        if(str.isEmpty())
                        {

                        }
                        else
                        {
           //                 qDebug()<<str<<"length:"<<str.length();
                            break;
                        }
                        #ifndef windows_demo
                        usleep(200);
                        #endif  //windows_demo

            }
            return str;
    }//if ((msg.length() > 0) && (ttyUSB_sc != NULL))
    return "";
}

void Dialog::ReadFile()
{
   // qDebug() << "Widget::ReadFile()";

    QString str;
    while ((str = ttyUSB_sc->readLine()) != NULL)
    {
     //   qDebug() << str;
        //ui->text->append(str);
    }
}


void Dialog::OnLogTimer()
{
#ifdef LOG_OPEN
    m_log.Begin();

    m_log.Log("Time:" + GetDateStr() + " " + GetTimeStr() + "\n");
    m_log.Log("CommunicateErr:" + QString::number(CLog::m_nCommErr) + "\n");
    m_log.Log("ErrPackageNum:"+ QString::number(CLog::m_nErrPackage) + "\n");
    m_log.Log("TimeSkipNum:" + QString::number(CLog::m_nTimeSkip) + "\n");
    if(UpdateDataTimer.isActive())
        m_log.Log("UpdateDataTimer is Active.\n");
    else
        m_log.Log("UpdateDataTimer is Dead.\n");
    m_log.Log("Memory info:\n");
    system("vmstat>>/root/mem.txt");
    string memInfoStr, tmpstr;
    fstream fs;
    fs.open("/root/mem.txt",ios_base::in);
    while(!fs.eof())
    {
        getline(fs, tmpstr, '\n');
        memInfoStr += tmpstr + "\n";
    }
    fs.close();
    system("rm -f /root/mem.txt");

    m_log.Log(QString(memInfoStr.c_str()) + "\n\n");

    m_log.End();
#endif
}


//  read hmi power id
void Dialog::OnTimer30s()
{



#ifndef windows_demo
    QString read_str;

   OpenPort();
   read_str=SendText("!#75");
   if(read_str.isEmpty())
   {

   }
   else
   {
       QByteArray data(read_str.toAscii());
       for (int i = 0; i < data.length(); i++)
       {
           //data.at(i);
           test_tempdata[16+i]=data.at(i);
       }

   }

   ClosePort();


#endif  //windows_demo

}
void Dialog::OnTimer5min()
{
    isScreenClosed = true;
    //qDebug("close screen");
    system("xset s 12000");
    timer5min.stop();
}


void Dialog::C2Hmorethan3sFunc()
{
    QDateTime dateTimeSystem;
    QDateTime dateTimeCcu;
    QDate date( CTALL_Year_U8+2000, CTALL_Month_U8, CTALL_Day_U8 );
    QTime time( CTALL_Hour_U8, CTALL_Minite_U8, CTALL_Second_U8 );
    dateTimeCcu.setDate(date);
    dateTimeCcu.setTime(time);
    if((bool(dateTimeCcu.date().year() > 1999) && bool(dateTimeCcu.date().year() < 2038)))
    {
        int timeDiff = ( dateTimeCcu.toTime_t()-dateTimeSystem.currentDateTime().toTime_t());
        //qDebug()<< "CCU TIME: " <<dateTimeCcu.toTime_t() << "IDU TIME: " <<dateTimeSystem.currentDateTime().toTime_t()<<"diff: "<<timeDiff;
        if(bool(bool(timeDiff<-6 )||bool(timeDiff>6))  )
        {
            if(timer6sfortiming.isActive())
            {

            }else
            {
                timer6sfortiming.start(10000);//10s delay
    #ifdef USE_MVB_DATA
                if(ATC_time_temp1<2038 && ATC_time_temp1 > 1999)
                {
                    SetSystemTime(CTALL_Year_U8+2000,CTALL_Month_U8,CTALL_Day_U8,CTALL_Hour_U8,CTALL_Minite_U8,CTALL_Second_U8);
                }
    #endif
            }
    }



};

//    dateTimeCcu.setDate(date);
//    dateTimeCcu.setTime(time);
//    ATC_time_temp1 = CTALL_Year_U8+2000;
//    ATC_time_temp2 = CTALL_Month_U8;
//    ATC_time_temp3 = CTALL_Day_U8;
//    ATC_time_temp4 = CTALL_Hour_U8;
//    ATC_time_temp5 = CTALL_Minite_U8;
//    ATC_time_temp6 = CTALL_Second_U8;
}

void Dialog::OpenPort()
{
#ifndef windows_demo
    // qDebug() << "OpenPort";

     ttyUSB_sc = new QFile("/dev/ttyUSB_SC", this);
 //    connect(ttyUSB_sc, SIGNAL(readyRead()), this, SLOT(ReadFile()));
     if (!ttyUSB_sc->open(QIODevice::ReadWrite))
     {
 //        qDebug() <<"Open port failed\n";
         free(ttyUSB_sc);
         ttyUSB_sc = NULL;
         return;
     }
#endif  //windows_demo


}


void Dialog::ClosePort()
{
#ifndef windows_demo
    // close
    if (ttyUSB_sc != NULL)
    {

        ttyUSB_sc->close();
    //    qDebug()<<"closeport";
        ttyUSB_sc = NULL;

    }
#endif  //windows_demo

}

#ifndef windows_demo




int Dialog::InitSerialPort()
{

    MODEMDEVICE = "/dev/ttyUSB_SC";


    if ((fd = ::open(MODEMDEVICE, O_RDWR | O_NOCTTY | O_NONBLOCK)) < 0)
    {
       // qDebug() << "InitSerialPort not ok! fd="<<fd;
        return 1;

    }
    //qDebug() << "InitSerialPort  ok! fd="<<fd;
    return 0;
}

void Dialog::CloseSerialPort()
{
    tcflush(fd, TCIOFLUSH);
    ::close(fd);
    isOpen = false;
}

int Dialog::ComWrite(char *writeData, int len)
{
    mutexWrite.lock();
    int result = 0;
    if (len > 0)
    {
        if (fd != -1)
        {
            result = write(fd, writeData, len);
        }
    }
    mutexWrite.unlock();
    return result;
}

int Dialog::ComRead(char *readData)
{
    mutexRead.lock();
    int nread = 0;
    if (fd != -1)
    {
        nread = read(fd, readData,100);
       // qDebug() << "read() nread ="<<nread;

    }
    mutexRead.unlock();
    return nread;
}
//读报警和关机温度
void Dialog::BackLightCtrl()
{

            char cmd[20] ; // cmd 75,读报警和关机温度
            for(int i=0;i<20;i++)
            {
                    cmd[i]=0;
            }
            cmd[0] = 0x1B;
            cmd[1] = 0x23;
            cmd[2] = 0x37;
            cmd[3] = 0x35;
            cmd[4] = 0x0D;
            int len = 0;
            //     system("setserial /dev/ttyS2 irq 10");
            if(InitSerialPort() != 0 )
            return;
            if( ComWrite( cmd, 5 ) == 5 )
            {
                    while(1)//while 1
                    {
                        len = ComRead( cmd );
                        test_tempdata[30]=len;
                        usleep(200);
                        if(len>0)
                        {
                            for(int i=0;i<8;i++)
                            {
                                    test_tempdata[32+i]=cmd[i];
                            }
                            while(1) //while 2
                            {
                                len = ComRead( cmd );
                                usleep(200);
                                if(len>0)
                                {
                                        test_tempdata[31]=len;
                                        for(int i=0;i<len;i++)
                                        {
                                                test_tempdata[40+i]=cmd[i];
                                        }
                                        while(1)//while 3
                                        {
                                                len = ComRead( cmd );
                                                usleep(200);
                                                test_tempdata[48]=len;
                                                if(len>0)
                                                {
                                                        //test_tempdata[31]=len;
                                                        for(int i=0;i<len;i++)
                                                        {
                                                            test_tempdata[48+i]=cmd[i];
                                                        }
                                                        break;
                                                }
                                        }
                                        break;
                                }
                            }// end  while 2
                            break;
                        }//if(len>0)

                        
                    }//end while 1
             } //if( ComWrite( cmd, 5 ) == 5 )
             usleep(200);
             CloseSerialPort();
}
void Dialog::SetWarningTemperature()
{
    char cmd[] = {0x1B,0x23,0x32,0x39,0x2C,0x38,0x30,0x0D}; // cmd 29,temperatue 80

    if(InitSerialPort() != 0 )
        return;
    ComWrite(cmd, sizeof(cmd)/sizeof(char));
    usleep(200);
    CloseSerialPort();
}
// set HMI in Tc1 or Tc2 ? and set IP address
void Dialog::HMI_Initial_Set()
{
//        char cmd[20] ; // cmd 94,device address
//        cmd[0] = 0x1B;
//        cmd[1] = 0x23;
//        cmd[2] = 0x39;
//        cmd[3] = 0x34;
//        cmd[4] = 0x0D;
//        int len = 0;
//        int timer1 = 0;
//        int power_id_ok=0;

//        //system("setserial /dev/ttyS2 irq 10");
//        if(InitSerialPort() != 0 )
//        {
//            return;
//        }
//        //读电源ID编码3次，有返回值则跳出for循环
//        for(int i=0;i<3;i++)
//        {
//                timer1=0;
//                if( ComWrite( cmd, 5 ) == 5 )
//                {
//                    //发送读取电源编码命令成功，则进入循环等待h8返回的数据
//                    while(1)
//                    {
//                        len = ComRead( cmd );
//                        usleep(300);

//                        if(timer1>180)
//                        {
//                            break;    //while
//                        }
//                        else
//                        {
//                            timer1++;
//                        }
//                        if( len==8 )
//                        {
//                            for(int j=0;j<len;j++)
//                            {
//                                test_tempdata[j]=cmd[j];
//                            }
//                            if( cmd[1]==0x01 && cmd[2]==0x23 && cmd[3]==0x39 && cmd[4]==0x34 && cmd[5]==0x2C )
//                            {
//                                if((cmd[6]==0x31)||(cmd[6]==0x30))
//                                {
//                                    if(cmd[6]==0x31)
//                                    {
//                                        TC1_HMI=1;
//                                        TC2_HMI=0;
//                                        system("ifconfig eth0 10.10.25.21");
//                                        //
//                                        SetINIInfo("/HMI/TC1_HMI", QString::number(TC1_HMI));
//                                        SetINIInfo("/HMI/TC2_HMI", QString::number(TC2_HMI));
//                                        power_id_ok=1;
//                                    }
//                                    if(cmd[6]==0x30)
//                                    {
//                                        TC2_HMI=1;
//                                        TC1_HMI=0;
//                                        system("ifconfig eth0 10.10.25.23");
//                                        //
//                                        SetINIInfo("/HMI/TC1_HMI", QString::number(TC1_HMI));
//                                        SetINIInfo("/HMI/TC2_HMI", QString::number(TC2_HMI));
//                                        power_id_ok=1;
//                                    }
//                                }

//                            }
//                            break;   //while
//                        }
////                        else    //if( len==8 )
////                        {
////                            break;   //while
////                        }

//                    }

//                    if(power_id_ok==1)
//                    {
//                        test_tempdata[64]=i;
//                        test_tempdata[65]=power_id_ok;
//                        test_tempdata[66]=timer1;
//                        break;   //for
//                    }
//                }
//                else
//                {
//                    usleep(300);
//                    //continue;
//                }
//        }
//        //没有正确读到电源编码，则使用上次正确读取编码时的数值
//        if(power_id_ok==0)
//        {
//            if(TC1_HMI_ini==1)
//            {
//                TC1_HMI=1;
//                TC2_HMI=0;
//                system("ifconfig eth0 10.10.25.21");
//            }
//            else
//            {
//                if(TC2_HMI_ini==1)
//                {
//                        TC2_HMI=1;
//                        TC1_HMI=0;
//                        system("ifconfig eth0 10.10.25.23");
//                }
//                else
//                {
//                    TC2_HMI=0;
//                    TC1_HMI=0;
//                }
//            }

//            //test_tempdata[64]=i;
//            test_tempdata[65]=power_id_ok;
//            test_tempdata[66]=timer1;

//        }
//        usleep(200);
//        CloseSerialPort();
}






int Dialog::read_h8_response(int fd)
{

    int offset, n;

    for (offset=0;;) {
        test_tempdata[21]+=1;
        test_tempdata[18]=sizeof(report);
        n=read(fd, report+offset, 8);

        test_tempdata[28]=offset;
        test_tempdata[29]=n;

        if (n <= 0) {
            test_tempdata[19]+=1;
            if ((n < 0) && (errno == EINTR)) continue;
            return 0;
        }  // end if
        if ((offset == 0) && (n == 1)) {
            test_tempdata[20]+=1;
            if ((report[0] == '\006') || (report[0] == '\025')) {
                return 1;
            } // end if
            return 0;
        } // end
        offset+=n;

            report[offset]=0;
        if (report[offset-1] == '\n')
        {
            break;
            test_tempdata[22]+=1;
        }

    } // end for
    test_tempdata[23]+=1;
    return offset;
    // test answer

//    printf("\nout:");
//    for(n=0;n<offset;n++)
//        printf("%x(%c)--",report[n],report[n]);
//    printf("\n");

//        return 0;
}
#endif  //windows_demo

void Dialog::OnTimer6sfortiming()
{
    timer6sfortiming.stop();
}
void Dialog::doLogicFault()
{
    // 延时逻辑6s 空压机故障
    static int aircmptimer1,aircmptimer2;
    if(!(DICT_M1DI1AirComUseful_B1))
    {
        if(aircmptimer1++ > 40)
        {
            aircmptimer1 = 0;
            aircmperr1 = true;
        }
    }
    else
    {
        aircmperr1 = false;
        aircmptimer1 = 0;
    }
    if(!(DICT_M2DI1AirComUseful_B1))
    {
        if(aircmptimer2++ > 40)
        {
            aircmptimer2 = 0;
            aircmperr2 = true;
        }
    }
    else
    {
        aircmperr2 = false;
        aircmptimer2 = 0;
    }
    // 延时2s 24V电源故障
    static int V24vtimer1,V24vtimer2;
    if(!(DICT_TC1DI3DC24_B1))
    {
        if(V24vtimer1++ > 10)
        {
            V24vtimer1 = 0;
            V24verr1 = true;
        }
    }
    else
    {
        V24verr1 = false;
        V24vtimer1 = 0;
    }
    if(!(DICT_TC2DI3DC24_B1))
    {
        if(V24vtimer2++ > 10)
        {
            V24vtimer2 = 0;
            V24verr2 = true;
        }
    }
    else
    {
        V24verr2 = false;
        V24vtimer2 = 0;
    }
    //延时1s 火灾报警
    static int Firetimer1,Firetimer2,Firetimer3,Firetimer4,Firetimer5,Firetimer6;
    if(!(DICT_Tc1DI1FireFault_B1))
    {
        if(Firetimer1++ > 10)
        {
            Firetimer1 = 0;
            Fireerr1 = true;
        }
    }
    else
    {
        Fireerr1 = false;
        Firetimer1 = 0;
    }
    if(!(DICT_MP1DI1FireFault_B1))
    {
        if(Firetimer2++ > 10)
        {
            Firetimer2 = 0;
            Fireerr2 = true;
        }
    }
    else
    {
        Fireerr2 = false;
        Firetimer2 = 0;
    }
    if(!(DICT_M1DI1FireFault_B1))
    {
        if(Firetimer3++ > 10)
        {
            Firetimer3 = 0;
            Fireerr3 = true;
        }
    }
    else
    {
        Fireerr3 = false;
        Firetimer3 = 0;
    }
    if(!(DICT_M2DI1FireFault_B1))
    {
        if(Firetimer4++ > 10)
        {
            Firetimer4 = 0;
            Fireerr4 = true;
        }
    }
    else
    {
        Fireerr4 = false;
        Firetimer4 = 0;
    }
    if(!(DICT_MP2DI1FireFault_B1))
    {
        if(Firetimer5++ > 10)
        {
            Firetimer5 = 0;
            Fireerr5 = true;
        }
    }
    else
    {
        Fireerr5 = false;
        Firetimer5 = 0;
    }
    if(!(DICT_Tc2DI1FireFault_B1))
    {
        if(Firetimer6++ > 10)
        {
            Firetimer6 = 0;
            Fireerr6 = true;
        }
    }
    else
    {
        Fireerr6 = false;
        Firetimer6 = 0;
    }
    //2 bc both err 20s delay
    static int bcbothfaulterrtimer = 0;
    if(bool(CTHMI_CatenaryVoltage_U16 > 1200))
    {
        if(bcbothfaulterrtimer++ > 100)
        {
            if(bool(g_dataBuffer_WH_Display[1744+10]&bit5))
            {
                BCbothfaulterr = true;
            }
            else
            {
                BCbothfaulterr = false;
            }
            bcbothfaulterrtimer = 120;

        }
    }
    else
    {
        BCbothfaulterr = false;
        bcbothfaulterrtimer = 0;
    }
}
