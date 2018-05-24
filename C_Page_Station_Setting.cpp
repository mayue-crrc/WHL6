#include "C_Page_Station_Setting.h"

#include "CStationSettingPage.h"

ROMDATA g_PicRom_InitialSetting[] =
{
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WHHELP
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

#ifdef PAGE_HEADER_NEW
    //D_COMMON_PAGE_HEADER_NEW(QObject::trUtf8("初始设定") )
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("初始\n设定") )

#endif

#ifdef PAGE_HEADER_OLD

    D_COMMON_PAGE_HEADER(QObject::trUtf8("初始设定"))
    D_COMMON_PAGE_BUTTON_BAR

#endif


    {QObject::trUtf8("始发站 "),                  D_FONT_BOLD(8),      QRect(150, 150, 100, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_ORIGINATOR         },
    {QObject::trUtf8("终点站"),                   D_FONT_BOLD(8),      QRect(150, 250, 100, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_TERMINUS           },
    {QObject::trUtf8("西苑"),                    D_FONT_BOLD(8),      QRect(290, 150, 150, 40),           Qt::white,                Qt::blue,                CONTROL_EDIT,             ID_PIBIS_EDIT_NEWORIGINATOR        },
    {QObject::trUtf8("俸伯"),                    D_FONT_BOLD(8),      QRect(290, 250, 150, 40),           Qt::white,                Qt::blue,                CONTROL_EDIT,             ID_PIBIS_EDIT_NEWTERMINUS          },
    {QObject::trUtf8(""),                        D_FONT_BOLD(8),      QRect(480, 150, 150, 40),           Qt::white,                Qt::black,               CONTROL_EDIT,             ID_PIBIS_EDIT_CURRENTORIGINATOR    },
    {QObject::trUtf8(""),                        D_FONT_BOLD(8),      QRect(480, 250, 150, 40),           Qt::white,                Qt::black,               CONTROL_EDIT,             ID_PIBIS_EDIT_CURRENTTERMINUS      },
    {QObject::trUtf8("新设定值"),                 D_FONT_BOLD(8),      QRect(290, 100, 150, 40),           Qt::white,                Qt::transparent,         CONTROL_LABEL,            ID_IGNORE       },
    {QObject::trUtf8("当前设定值"),               D_FONT_BOLD(8),      QRect(480, 100, 150, 40),           Qt::white,                Qt::transparent,         CONTROL_LABEL,            ID_IGNORE        },
//    {QObject::trUtf8("方向确认"),                 D_FONT_BOLD(8),      QRect(545, 500, 100, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_DIRECTIONCONFIRM    },
//    {QObject::trUtf8("预留设定"),                 D_FONT_BOLD(8),      QRect(675, 500, 100, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_RESERVESET          },
    {QObject::trUtf8("请设定以上各条后，按右下角[确认]键。\n等待[确认]按钮弹起，且当前设定值与新设定值一致时，表明设置生效。\n选择手动/自动模式，默认为自动模式"),D_FONT_BOLD(8), QRect( 50, 430, 700, 50),  Qt::white, Qt::black, CONTROL_LABEL, ID_PIBIS_LABEL_EXPLAIN  },


    {QObject::trUtf8("模式选择"),                 D_FONT_BOLD(8),      QRect(150, 340, 100, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,                ID_IGNORE  },
    {QObject::trUtf8("自动模式"),                 D_FONT_BOLD(8),      QRect(290, 340, 150, 40),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCAUTOMODE_BTN     },
    {QObject::trUtf8("手动模式"),                 D_FONT_BOLD(8),      QRect(480, 340, 150, 40),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBCMANUALMODE_BTN      },
//    {"",                   D_DEFAULT_FONT,      QRect(  460, 325, 20,    3), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },
//    {"",                   D_DEFAULT_FONT,      QRect(  560, 325, 20,    3), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },
//    {"",                   D_DEFAULT_FONT,      QRect(  350+30, 510, 220,    3), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },
//    {"",                   D_DEFAULT_FONT,      QRect(  350+30, 415, 3,    80), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },
//    {"",                   D_DEFAULT_FONT,      QRect(  350+170, 415, 3,    80), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },

};
int g_InitialSettingRomLen = sizeof(g_PicRom_InitialSetting)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CInitialSettingPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
#ifdef PAGE_BUTTON_BAR_NEW
        ON_BTNCLK(IDLB_COM_BTN7, OnComBtn7Clk)
        ON_BTNCLK(IDLB_COM_BTN8, OnComBtn8Clk)
        ON_BTNCLK(IDLB_COM_BTN9, OnComBtn9Clk)
        ON_BTNCLK(IDLB_COM_BTN10, OnComBtn10Clk)
        ON_BTNCLK(IDLB_COM_BTN11, OnComBtn11Clk)
        ON_BTNCLK(IDLB_COM_BTN12, OnComBtn12Clk)
#endif
//        ON_BTNCLK(ID_PIBIS_BUTTON_DIRECTIONCONFIRM, OnDirectConfirmBtnClk)
//        ON_BTNCLK(ID_PIBIS_BUTTON_RESERVESET, OnReserveSetBtnClk)
        ON_BTNCLK(ID_PIBIS_BUTTON_ORIGINATOR, OnStartStationClk)
        ON_BTNCLK(ID_PIBIS_BUTTON_TERMINUS, OnEndStationClk)
        ON_BTNCLK(ID_PIBCAUTOMODE_BTN, OnBtnAutoMode)
        ON_BTNCLK(ID_PIBCMANUALMODE_BTN, OnBtnManualMode)
END_MESSAGE_MAP()

CInitialSettingPage::CInitialSettingPage()
{
   //  ((CButton*)GetDlgItem(IDLB_COM_BTN8))->m_bAutoUpState = false;
}


void CInitialSettingPage::OnUpdatePage()
{
    if (m_bConfirmDown)
    {
        static quint32 times= 0;
        times++;

        if (times%times_n == 0)
        {
            command_valid_timer--;
            if (command_valid_timer <= 0)
            {
                //BitSet( HMI_send_data28, 8, 0);
                HMiCT_SAVEFirstStation_B1 = false;
                HMiCT_SAVELastStation_B1 = false;
                HMiCT_StationIDFirst_U8 = 0;
                HMiCT_StationIDLast_U8 = 0;
                HMiCT_SetFlagChecker_U8 = 0x55;
                updateStationName();
                ((CButton*)GetDlgItem(IDLB_COM_BTN12))->ChangeButtonState(LBUTTON_UP);
                ((CButton*)GetDlgItem(IDLB_COM_BTN12))->ChangeButtonAutoUpState(true);
                m_bConfirmDown = false;
                times = 0;
            }
        }
    }else
    {

    }
}

void CInitialSettingPage::OnInitPage()
{
    ((CLabel *)GetDlgItem(ID_PIBIS_LABEL_EXPLAIN))->SetAlignment(Qt::AlignLeft);
    ((CButton*)GetDlgItem(IDLB_COM_BTN6))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBCAUTOMODE_BTN))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_PIBCAUTOMODE_BTN))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBCMANUALMODE_BTN))->m_bAutoUpState = false;
}

void CInitialSettingPage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返  回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN9))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN10))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN11))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN12))->SetCtrlText(QObject::trUtf8("确  认"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("确   认"));
#endif

    updateStationName();

    m_bConfirmDown = false;
    command_valid_timer = 4;
    this->InitPageHeader();
}

#ifdef PAGE_BUTTON_BAR_NEW
        void CInitialSettingPage::OnComBtn1Clk()
        {
            // ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_DIRECTIONCONFIRM))->ChangeButtonState(LBUTTON_UP);
             m_bConfirmDown = false;
             HMiCT_StationIDFirst_U8 = 0;
             HMiCT_StationIDLast_U8 = 0;
             HMiCT_SAVEFirstStation_B1 = false;
             HMiCT_SAVELastStation_B1 = false;
             HMiCT_SetFlagChecker_U8 = 0x55;
            ChangePage(PAGE_INDEX_MAINTAIN);
        }

        void CInitialSettingPage::OnComBtn2Clk()
        {

        }

        void CInitialSettingPage::OnComBtn3Clk()
        {

        }

        void CInitialSettingPage::OnComBtn4Clk()
        {

        }

        void CInitialSettingPage::OnComBtn5Clk()
        {

        }

        void CInitialSettingPage::OnComBtn6Clk()
        {

        }
        void CInitialSettingPage::OnComBtn7Clk()
        {

        }
        void CInitialSettingPage::OnComBtn8Clk()
        {

        }

        void CInitialSettingPage::OnComBtn9Clk()
        {

        }

        void CInitialSettingPage::OnComBtn10Clk()
        {

        }
        void CInitialSettingPage::OnComBtn11Clk()
        {

        }
        void CInitialSettingPage::OnComBtn12Clk()
        {
           ((CButton*)GetDlgItem(IDLB_COM_BTN12))->ChangeButtonAutoUpState(false);

            m_bConfirmDown = true;
        //    if (command_valid_timer==0)
        //    {
                HMiCT_StationIDFirst_U8 = station_start;
                HMiCT_StationIDLast_U8 = station_end;
                HMiCT_SAVEFirstStation_B1 = true;
                HMiCT_SAVELastStation_B1 = true;
                HMiCT_SetFlagChecker_U8 = 0xaa;
                BitSet( HMI_send_data28, 8, 1);
                command_valid_timer=4;
               ((CButton*)GetDlgItem(IDLB_COM_BTN12))->ChangeButtonState(LBUTTON_DOWN);
        //    }
        }
#else
        void CInitialSettingPage::OnComBtn1Clk()
        {
           // ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_DIRECTIONCONFIRM))->ChangeButtonState(LBUTTON_UP);
            m_bConfirmDown = false;
            ChangePage(PAGE_INDEX_MAIN);
        }

        void CInitialSettingPage::OnComBtn2Clk()
        {

        }

        void CInitialSettingPage::OnComBtn3Clk()
        {

        }

        void CInitialSettingPage::OnComBtn4Clk()
        {

        }

        void CInitialSettingPage::OnComBtn5Clk()
        {

        }

        void CInitialSettingPage::OnComBtn6Clk()
        {
            m_bConfirmDown = true;
        //    if (command_valid_timer==0)
        //    {
                HMI_send_data22=station_start;
                HMI_send_data23=station_end;
                BitSet( HMI_send_data25, 16, 1);
                command_valid_timer=4;
        //    }
        }
#endif



void CInitialSettingPage::OnBtnAutoMode()
{
    ((CButton *)GetDlgItem(ID_PIBCAUTOMODE_BTN))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_PIBCAUTOMODE_BTN))->ChangeButtonAutoUpState(false);
    ((CButton *)GetDlgItem(ID_PIBCMANUALMODE_BTN))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PIBCMANUALMODE_BTN))->ChangeButtonAutoUpState(true);
    HMiCT_PISMODE_B1 = false;
}
void CInitialSettingPage::OnBtnManualMode()
{
    ((CButton *)GetDlgItem(ID_PIBCAUTOMODE_BTN))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PIBCAUTOMODE_BTN))->ChangeButtonAutoUpState(true);
    ((CButton *)GetDlgItem(ID_PIBCMANUALMODE_BTN))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_PIBCMANUALMODE_BTN))->ChangeButtonAutoUpState(false);
    HMiCT_PISMODE_B1 = true;

}
void CInitialSettingPage::OnDirectConfirmBtnClk()
{
    //ChangePage(PAGE_INDEX_DIRECTIONCONFIRM);
}

void CInitialSettingPage::OnReserveSetBtnClk()
{
    //ChangePage(PAGE_INDEX_RESERVESETTING);
}

void CInitialSettingPage::OnStartStationClk()
{
    CStationSettingPage* pPage = (CStationSettingPage*)GetPage(PAGE_INDEX_STATIONSETTING);
    pPage->m_nStationFlg = STATIONFLG_START;

    ChangePage(PAGE_INDEX_STATIONSETTING);
}

void CInitialSettingPage::OnEndStationClk()
{
    CStationSettingPage* pPage = (CStationSettingPage*)GetPage(PAGE_INDEX_STATIONSETTING);
    pPage->m_nStationFlg = STATIONFLG_END;

    ChangePage(PAGE_INDEX_STATIONSETTING);
}

QString CInitialSettingPage::GetStationNameByID(int nStationID)
{
    QString retStr = "- -";



        if (nStationID == 101)
        {
            retStr = QObject::trUtf8("东风公司");
        }
        if (nStationID == 102)
        {
            retStr = QObject::trUtf8("车城东路");
        }
        if (nStationID == 103)
        {
            retStr = QObject::trUtf8("江城大道");
        }
        if (nStationID == 104)
        {
            retStr = QObject::trUtf8("老关村");
        }
        if (nStationID == 105)
        {
            retStr = QObject::trUtf8("国博中心南");
        }
        if (nStationID == 106)
        {
            retStr = QObject::trUtf8("国博中心北");
        }
        if (nStationID == 107)
        {
            retStr = QObject::trUtf8("前进村");
        }
        if (nStationID == 108)
        {
            retStr = QObject::trUtf8("建港路");
        }
        if (nStationID == 109)
        {
            retStr = QObject::trUtf8("马鹦路");
        }
        if (nStationID == 110)
        {
            retStr = QObject::trUtf8("钟家村");
        }
        if (nStationID == 111)
        {
            retStr = QObject::trUtf8("琴台");
        }
        if (nStationID == 112)
        {
            retStr = QObject::trUtf8("武胜路");
        }
        if (nStationID == 113)
        {
            retStr = QObject::trUtf8("汉正街");
        }
        if (nStationID == 114)
        {
            retStr = QObject::trUtf8("六渡桥");
        }
        if (nStationID == 115)
        {
            retStr = QObject::trUtf8("江汉路");
        }
        if (nStationID == 116)
        {
            retStr = QObject::trUtf8("大智路");
        }
        if (nStationID == 117)
        {
            retStr = QObject::trUtf8("苗栗路");
        }
        if (nStationID == 118)
        {
            retStr = QObject::trUtf8("香港路");
        }
        if (nStationID == 119)
        {
            retStr = QObject::trUtf8("三眼桥");
        }
        if (nStationID == 120)
        {
            retStr = QObject::trUtf8("唐家墩");
        }
        if (nStationID == 121)
        {
            retStr = QObject::trUtf8("石桥");
        }
        if (nStationID == 122)
        {
            retStr = QObject::trUtf8("杨汊湖");
        }
        if (nStationID == 123)
        {
            retStr = QObject::trUtf8("常青花园");
        }
        if (nStationID == 124)
        {
            retStr = QObject::trUtf8("轻工大学");
        }
        if (nStationID == 125)
        {
            retStr = QObject::trUtf8("园博园北");
        }
        if (nStationID == 126)
        {
            retStr = QObject::trUtf8("金银湖");
        }
        if (nStationID == 127)
        {
            retStr = QObject::trUtf8("金银湖公园");
        }





    return retStr;
}

void CInitialSettingPage::updateStationName()
{
    station_start_display = GetStationNameByID(station_start);
    station_end_display = GetStationNameByID(station_end);
    station_start_ccu = GetStationNameByID(CTHM_FirstStationID_U8);
    station_end_ccu = GetStationNameByID(CTHM_LastStationID_U8);

    GetDlgItem(ID_PIBIS_EDIT_NEWORIGINATOR)->SetCtrlText(station_start_display);
    GetDlgItem(ID_PIBIS_EDIT_NEWTERMINUS)->SetCtrlText(station_end_display);
    GetDlgItem(ID_PIBIS_EDIT_CURRENTORIGINATOR)->SetCtrlText(station_start_ccu);
    GetDlgItem(ID_PIBIS_EDIT_CURRENTTERMINUS)->SetCtrlText(station_end_ccu);
}
