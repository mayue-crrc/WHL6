#include "C_Page_Clear_Record.h"


ROMDATA g_PicRom_ResetRunRecord[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    //D_COMMON_PAGE_HEADER(QObject::trUtf8("运行记录清零"))
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("记录\n清零") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WH
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
//    {"",                            D_FONT_BOLD(6),      QRect( 50, 100, 700,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect( 100, 130, 600,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect( 100, 165, 600,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect( 100, 200, 600,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect( 100, 235, 600,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },

    {"",                            D_FONT_BOLD(6),      QRect( 100, 270, 600,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect( 100, 305, 600,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },

    {"",                            D_FONT_BOLD(6),      QRect( 100, 340, 600,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    //{"",                            D_FONT_BOLD(6),      QRect( 100, 375, 600,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },

    //   {"",                            D_FONT_BOLD(6),      QRect( 50, 375, 701,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
   // {"",                            D_FONT_BOLD(6),      QRect( 100, 410, 600,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
   // {"",                            D_FONT_BOLD(6),      QRect( 100, 445, 600,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },

    {"",                            D_FONT_BOLD(6),      QRect(100, 130, 1,  210),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect(260, 130, 1,  210),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect(500, 130, 1,  210),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect(700, 130, 1,  210),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },

    {QObject::trUtf8("记录项目"),               D_FONT_BOLD(8),       QRect( 100, 130, 159, 30),            Qt::white,                Qt::transparent,          CONTROL_LABEL,         ID_IGNORE    },
    {QObject::trUtf8("记录开始时刻"),            D_FONT_BOLD(8),        QRect(261, 130, 239, 30),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
    {QObject::trUtf8("记录容量"),               D_FONT_BOLD(8),        QRect(501, 130, 149, 30),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },

    {QObject::trUtf8("检修里程"),               D_FONT_BOLD(8),       QRect( 100, 166, 159, 34),            Qt::black,                Qt::gray,                 CONTROL_LABEL,        ID_PIBCR_BUTTON_CHECKDISTANCE      },
    {QObject::trUtf8(""),                   D_FONT_BOLD(8),        QRect(261, 166, 239, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,          ID_PIBCR_LABEL_REDTIME1     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),        QRect(501, 166, 149, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDVOLUME1   },
    {QObject::trUtf8("km "),                   D_FONT_BOLD(8),        QRect(650, 166,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },

    {QObject::trUtf8("牵引能耗"),               D_FONT_BOLD(8),       QRect( 100, 201, 159, 34),            Qt::black,                Qt::gray,                 CONTROL_LABEL,         ID_PIBCR_BUTTON_TRACTIONENERGY      },
    {QObject::trUtf8(""),                   D_FONT_BOLD(8),        QRect(261, 201, 239, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,          ID_PIBCR_LABEL_REDTIME2     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),        QRect(501, 201, 149, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDVOLUME2   },
    {QObject::trUtf8("kwh "),                   D_FONT_BOLD(8),        QRect(650, 201,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },

//    {QObject::trUtf8("制动能耗"),               D_FONT_BOLD(8),       QRect( 100, 236, 159, 34),            Qt::black,                Qt::gray,                 CONTROL_LABEL,         ID_PIBCR_BUTTON_BRAKEENERGY      },
//    {QObject::trUtf8(""),                   D_FONT_BOLD(8),        QRect(261, 236, 239, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDTIME3     },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),        QRect(501, 236, 149, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDVOLUME3   },
//    {QObject::trUtf8("kwh"),                   D_FONT_BOLD(8),        QRect(650, 236,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },

    {QObject::trUtf8("辅助能耗"),               D_FONT_BOLD(8),       QRect( 100, 236, 159, 34),            Qt::black,                Qt::gray,                 CONTROL_LABEL,         ID_PIBCR_BUTTON_ASSENERGY   },
    {QObject::trUtf8(""),                   D_FONT_BOLD(8),        QRect(261, 236, 239, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDTIME4    },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),        QRect(501, 236, 149, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDVOLUME4   },
    {QObject::trUtf8("kwh "),                   D_FONT_BOLD(8),        QRect(650, 236,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },

    {QObject::trUtf8("TC1空压机工作时间"),       D_FONT_BOLD(6),       QRect( 100, 271, 159, 34),            Qt::black,                Qt::gray,                 CONTROL_LABEL,         ID_PIBCR_BUTTON_WORKTIME1   },
    {QObject::trUtf8(""),                   D_FONT_BOLD(8),        QRect(261, 271, 239, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDTIME5     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),        QRect(501, 271, 149, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDVOLUME5   },
    {QObject::trUtf8("min "),                   D_FONT_BOLD(8),        QRect(650, 271,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },

    {QObject::trUtf8("TC2空压机工作时间"),       D_FONT_BOLD(6),       QRect( 100, 306, 159, 34),            Qt::black,                Qt::gray,                 CONTROL_LABEL,         ID_PIBCR_BUTTON_WORKTIME2   },
    {QObject::trUtf8(""),                   D_FONT_BOLD(8),        QRect(261, 306, 239, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDTIME6     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),        QRect(501, 306, 149, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDVOLUME6   },
    {QObject::trUtf8("min "),                   D_FONT_BOLD(8),        QRect(650, 306,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },


    //    {QObject::trUtf8("运行总里程"),             D_FONT_BOLD(7),       QRect( 51, 131, 139, 34),            Qt::black,                Qt::gray,                 CONTROL_LABEL,         ID_PIBCR_BUTTON_MILEAGE     },
    //    {QObject::trUtf8("记录状态"),               D_FONT_BOLD(8),       QRect(190, 130, 110, 30),            Qt::white,                Qt::transparent,          CONTROL_LABEL,         ID_IGNORE   },
//    {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),       QRect(190, 165, 110, 35),            Qt::white,                Qt::transparent,          CONTROL_LABEL,         ID_IGNORE   },
//    {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),       QRect(190, 200, 110, 69),            Qt::white,                Qt::transparent,          CONTROL_LABEL,         ID_IGNORE   },
//    {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),       QRect(190, 270, 110, 69),            Qt::white,                Qt::transparent,          CONTROL_LABEL,         ID_IGNORE   },
//    {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),       QRect(190, 340, 110, 69),            Qt::white,                Qt::transparent,          CONTROL_LABEL,         ID_IGNORE   },
//    {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),       QRect(190, 410, 110, 35),            Qt::white,                Qt::transparent,          CONTROL_LABEL,         ID_IGNORE   },

   //    {QObject::trUtf8(""),                      D_FONT_BOLD(8),        QRect(301, 131, 279, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDTIME1     },

   //    {QObject::trUtf8(""),                      D_FONT_BOLD(8),        QRect(581, 131, 119, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDVOLUME1   },

//    {QObject::trUtf8("km "),                   D_FONT_BOLD(8),        QRect(700, 130,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
//    {QObject::trUtf8("kwh"),                   D_FONT_BOLD(8),        QRect(650, 200,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
//    {QObject::trUtf8("kwh"),                   D_FONT_BOLD(8),        QRect(650, 235,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
//    {QObject::trUtf8("h  "),                   D_FONT_BOLD(8),        QRect(650, 270,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
//    {QObject::trUtf8("%  "),                   D_FONT_BOLD(8),        QRect(650, 305,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
//    {QObject::trUtf8("h  "),                   D_FONT_BOLD(8),        QRect(650, 340,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
//    {QObject::trUtf8("%  "),                   D_FONT_BOLD(8),        QRect(650, 375,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
//    {QObject::trUtf8("kwh"),                   D_FONT_BOLD(8),        QRect(650, 410,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },

    {QObject::trUtf8("请在车辆重新上电后，选择需要重新累加的数据，然后按[清零]键。"),D_FONT_BOLD(8), QRect( 25, 400, 600, 30),      Qt::white,               Qt::transparent,         CONTROL_LABEL,          ID_IGNORE   },
    {QObject::trUtf8("清   零"),                D_FONT_BOLD(8),        QRect( 25, 450, 100,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,         ID_PIBCR_BUTTON_CLEAR      },


};
int g_ResetRunRecordRomLen = sizeof(g_PicRom_ResetRunRecord)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CResetRunRecordPage,CPage)
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
  //      ON_BTNCLK(ID_PIBCR_BUTTON_MILEAGE,OnMileageBtnBtnClk)
        ON_BTNCLK(ID_PIBCR_BUTTON_CHECKDISTANCE, OnCheckDistanceBtnClk)
        ON_BTNCLK(ID_PIBCR_BUTTON_TRACTIONENERGY,OnTractionEnergyBtnClk)
        //ON_BTNCLK(ID_PIBCR_BUTTON_BRAKEENERGY,OnBrakeEnergyBtnClk)
        ON_BTNCLK(ID_PIBCR_BUTTON_ASSENERGY,OnAssenergyBtnClk)
        ON_BTNCLK(ID_PIBCR_BUTTON_WORKTIME1,OnWorkTime1BtnClk)
        ON_BTNCLK(ID_PIBCR_BUTTON_WORKTIME2,OnWorkTime2BtnClk)

        ON_BTNCLK(ID_PIBCR_BUTTON_CLEAR,OnClearBtnClk)
        ON_BTNCLK(ID_LABEL_REALTIMEFAULTCONFIRM, OnRealtimefaultBtnClk)
END_MESSAGE_MAP()

CResetRunRecordPage::CResetRunRecordPage()
{
}

void CResetRunRecordPage::OnUpdatePage()
{


    UpdateReset_RunRecord();

    if (m_bReset)
    {
        static int times = 0;
        times++;
        if (times%times_n == 0)
        {
            clear_record_timer--;
            if ( clear_record_timer == 0 )
            {
                times = 0;
                m_bReset = false;
                ((CButton*)GetDlgItem(ID_PIBCR_BUTTON_CLEAR))->ChangeButtonState(LBUTTON_UP);
                clear_record_timer = 3;


               HMiCT_ClearServiceDistance_B1 = false;
               HMiCT_ClearTractionCost_B1 = false;
               HMCT_SingleBrakePowerSet_B1 = false;
               HMiCT_ClearAuxCost_B1 = false;
               HMiCT_ClearERMAP1Time_B1 = false;
               HMiCT_ClearERMAP2Time_B1 = false;

               HMiCT_SetFlagChecker_U8=0x55;

            }
        }
    }
    UpdateRealtimefaults();
}

void CResetRunRecordPage::OnInitPage()
{
     ((CButton*)GetDlgItem(ID_PIBCR_BUTTON_CLEAR))->m_bAutoUpState = false;
     //OnMileageBtnBtnClk();
     OnCheckDistanceBtnClk();
}

void CResetRunRecordPage::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN12))->SetCtrlText(QObject::trUtf8(""));
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
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返  回"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("退   出"));
#endif

   //  GetDlgItem(ID_PIBCR_LABEL_REDTIME7)->SetCtrlText(g_runtime2);

     m_bReset = false;
     clear_record_timer = 3;
     ((CButton*)GetDlgItem(ID_PIBCR_BUTTON_CLEAR))->ChangeButtonState(LBUTTON_UP);

     this->InitPageHeader();
}
void CResetRunRecordPage::UpdateRealtimefaults()
{
    if ( g_realtimeFaultsbarList.size()>0)
    {
        {
            ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTPOS ))->ShowLabel();
            ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCODE ))->ShowLabel();
            ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->ShowLabel();
            g_romidx = g_realtimeFaultsbarList[g_faultcount].nRomIndex;
            int code = g_faultsrom[g_romidx].code;
            int nameidx = FindFaultsNameTableIndex(code);
            if(nameidx<0)
            {
                QMessageBox::warning(NULL,
                                             "error",
                                             QString("An Error at: \nFile:") +__FILE__+ QString("   Line:") +QString::number(__LINE__)+
                                              QObject::trUtf8("  故障代码无效：")+QString::number(code ,16).toUpper()+QObject::trUtf8("  请联系TMS调试人员!"),
                                             QMessageBox::Ok,QMessageBox::Ok);
                return;

            }
            if (1 == g_faultsrom[g_romidx].level)
            {
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetCtrlBKColor(Qt::red);
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetCtrlText(QObject::trUtf8("故障"));
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetTxtColor(Qt::white);

            }
            else if (2 == g_faultsrom[g_romidx].level)
            {
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetCtrlBKColor(Qt::yellow);
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetTxtColor(Qt::black);
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetCtrlText(QObject::trUtf8("故障"));
            }
            else if (4 == g_faultsrom[g_romidx].level)
            {
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetCtrlBKColor(Qt::blue);
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetCtrlText(QObject::trUtf8("事件"));
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetTxtColor(Qt::white);
            }
            else if (3 == g_faultsrom[g_romidx].level)
            {
//                g_realtimeFaultsbarList.removeAt(g_faultcount);
//                if(g_faultcount>0)
//                g_faultcount--;
//                return;
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetCtrlBKColor(Qt::white);
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetCtrlText(QObject::trUtf8("故障"));
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetTxtColor(Qt::black);
            }
            ((CButton*)GetDlgItem(ID_LABEL_REALTIMEFAULTCONFIRM))->ShowButton();
            //((CButton*)GetDlgItem(ID_LABEL_REALTIMEFAULTCONFIRMALL))->ShowButton();

            ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTPOS ))->SetCtrlText(GetCarriageString(g_faultsrom[g_romidx].pos));
            ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCODE ))->SetCtrlText(QString::number(code,16));

            ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULT ))->SetCtrlText(g_faultsinforom[nameidx].name);
            if(g_faulttiemr++>13)
            {
                g_faulttiemr = 0;
                if(++g_faultcount >= g_realtimeFaultsbarList.size())
                {
                    g_faultcount = 0;
                }
            }
        }
    }else
    {
        //(CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULT)->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULT))->HideLabel();
        ((CButton*)GetDlgItem(ID_LABEL_REALTIMEFAULTCONFIRM))->HideButton();
        ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTPOS ))->HideLabel();
        ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCODE ))->HideLabel();
        ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->HideLabel();
        //((CButton*)GetDlgItem(ID_LABEL_REALTIMEFAULTCONFIRMALL))->HideButton();
    }
}

void CResetRunRecordPage::OnRealtimefaultBtnClk()
{
    g_faultsrom[g_romidx].confirm = true;
    g_realtimeFaultsbarList.removeAt(g_faultcount);
    if(g_faultcount>0)
    g_faultcount--;
    //m_faultcount--;

}

#ifdef PAGE_BUTTON_BAR_NEW
        void CResetRunRecordPage::OnComBtn12Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn2Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn3Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn4Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn5Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn6Clk()
        {

        }
        void CResetRunRecordPage::OnComBtn7Clk()
        {

        }
        void CResetRunRecordPage::OnComBtn8Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn9Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn10Clk()
        {

        }
        void CResetRunRecordPage::OnComBtn11Clk()
        {


        }
        void CResetRunRecordPage::OnComBtn1Clk()
        {
//            HMiCT_ClearServiceDistance_B1 = false;
//            HMiCT_ClearTractionCost_B1 = false;
//            HMCT_SingleBrakePowerSet_B1 = false;
//            HMiCT_ClearAuxCost_B1 = false;
//            HMiCT_ClearERMAP1Time_B1 = false;
//            HMiCT_ClearERMAP2Time_B1 = false;
            HMiCT_ClearERMAP1Time_B1 = false;
            HMiCT_ClearERMAP2Time_B1 = false;
            HMiCT_ClearTractionCost_B1 = false;
            HMiCT_ClearServiceDistance_B1 = false;
            HMiCT_ClearAuxCost_B1 = false;
            ChangePage(PAGE_INDEX_MAINTAIN);
            m_bReset =false;
        }
#else
        void CResetRunRecordPage::OnComBtn1Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn2Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn3Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn4Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn5Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
        }

#endif




void CResetRunRecordPage::OnCheckDistanceBtnClk()
{
    clear_run_color = 1;

    UpdateCheckDistanceBtn(ID_PIBCR_BUTTON_CHECKDISTANCE, clear_run_color);
    UpdateTractionEnergyBtn(ID_PIBCR_BUTTON_TRACTIONENERGY,clear_run_color);
    //UpdateBrakeEnergyBtn(ID_PIBCR_BUTTON_BRAKEENERGY ,clear_run_color);
    UpdateAssenergyBtn(ID_PIBCR_BUTTON_ASSENERGY,clear_run_color);
    UpdateWorkTime1Btn(ID_PIBCR_BUTTON_WORKTIME1,clear_run_color);
    UpdateWorkTime2Btn(ID_PIBCR_BUTTON_WORKTIME2,clear_run_color);

}

void CResetRunRecordPage::OnTractionEnergyBtnClk()
{
    clear_run_color = 2;

    UpdateCheckDistanceBtn(ID_PIBCR_BUTTON_CHECKDISTANCE, clear_run_color);
    UpdateTractionEnergyBtn(ID_PIBCR_BUTTON_TRACTIONENERGY,clear_run_color);
    //UpdateBrakeEnergyBtn(ID_PIBCR_BUTTON_BRAKEENERGY ,clear_run_color);
    UpdateAssenergyBtn(ID_PIBCR_BUTTON_ASSENERGY,clear_run_color);
    UpdateWorkTime1Btn(ID_PIBCR_BUTTON_WORKTIME1,clear_run_color);
    UpdateWorkTime2Btn(ID_PIBCR_BUTTON_WORKTIME2,clear_run_color);
}
void CResetRunRecordPage::OnBrakeEnergyBtnClk()
{
//    clear_run_color = 3;

//    UpdateCheckDistanceBtn(ID_PIBCR_BUTTON_CHECKDISTANCE, clear_run_color);
//    UpdateTractionEnergyBtn(ID_PIBCR_BUTTON_TRACTIONENERGY,clear_run_color);
//    UpdateBrakeEnergyBtn(ID_PIBCR_BUTTON_BRAKEENERGY ,clear_run_color);
//    UpdateAssenergyBtn(ID_PIBCR_BUTTON_ASSENERGY,clear_run_color);
//    UpdateWorkTime1Btn(ID_PIBCR_BUTTON_WORKTIME1,clear_run_color);
//    UpdateWorkTime2Btn(ID_PIBCR_BUTTON_WORKTIME2,clear_run_color);
}
void CResetRunRecordPage::OnAssenergyBtnClk()
{
    clear_run_color = 4;

    UpdateCheckDistanceBtn(ID_PIBCR_BUTTON_CHECKDISTANCE, clear_run_color);
    UpdateTractionEnergyBtn(ID_PIBCR_BUTTON_TRACTIONENERGY,clear_run_color);
    //UpdateBrakeEnergyBtn(ID_PIBCR_BUTTON_BRAKEENERGY ,clear_run_color);
    UpdateAssenergyBtn(ID_PIBCR_BUTTON_ASSENERGY,clear_run_color);
    UpdateWorkTime1Btn(ID_PIBCR_BUTTON_WORKTIME1,clear_run_color);
    UpdateWorkTime2Btn(ID_PIBCR_BUTTON_WORKTIME2,clear_run_color);
}
void CResetRunRecordPage::OnWorkTime1BtnClk()
{
    clear_run_color = 5;
    UpdateCheckDistanceBtn(ID_PIBCR_BUTTON_CHECKDISTANCE, clear_run_color);
    UpdateTractionEnergyBtn(ID_PIBCR_BUTTON_TRACTIONENERGY,clear_run_color);
    //UpdateBrakeEnergyBtn(ID_PIBCR_BUTTON_BRAKEENERGY ,clear_run_color);
    UpdateAssenergyBtn(ID_PIBCR_BUTTON_ASSENERGY,clear_run_color);
    UpdateWorkTime1Btn(ID_PIBCR_BUTTON_WORKTIME1,clear_run_color);
    UpdateWorkTime2Btn(ID_PIBCR_BUTTON_WORKTIME2,clear_run_color);
}

void CResetRunRecordPage::OnWorkTime2BtnClk()
{
    clear_run_color = 6;

    UpdateCheckDistanceBtn(ID_PIBCR_BUTTON_CHECKDISTANCE, clear_run_color);
    UpdateTractionEnergyBtn(ID_PIBCR_BUTTON_TRACTIONENERGY,clear_run_color);
    //UpdateBrakeEnergyBtn(ID_PIBCR_BUTTON_BRAKEENERGY ,clear_run_color);
    UpdateAssenergyBtn(ID_PIBCR_BUTTON_ASSENERGY,clear_run_color);
    UpdateWorkTime1Btn(ID_PIBCR_BUTTON_WORKTIME1,clear_run_color);
    UpdateWorkTime2Btn(ID_PIBCR_BUTTON_WORKTIME2,clear_run_color);
}



void CResetRunRecordPage::OnClearBtnClk()
{
    m_bReset = true;
    clear_record_timer=3;

    if ( clear_run_color == 1 )
    {

        HMiCT_ClearServiceDistance_B1 = true;
        HMiCT_SetFlagChecker_U8=0xaa;

    }
    if ( (clear_run_color == 2)&&(CTHM_ClaarVVVFECEnable_B1) )
    {
        HMiCT_ClearTractionCost_B1 = true;
        HMiCT_SetFlagChecker_U8=0xaa;

    }
//    if ( (clear_run_color == 3)&&(CTHM_ClaarVVVFECEnable_B1)  )
//    {
//        HMiCT_ClearTractionCost_B1 = true;
//        //HMCT_SingleBrakePowerSet_U32 = 0;
//        HMiCT_SetFlagChecker_U8=0xaa;


//    }
    if ( (clear_run_color == 4)&&(CTHM_ClearSIVECEnable_B1) )
    {
        HMiCT_ClearAuxCost_B1 = true;
        //HMCT_SingleSivPowerSet_U32 = 0;
        HMiCT_SetFlagChecker_U8=0xaa;

    }
    if(clear_run_color==5)
    {
        HMiCT_ClearERMAP1Time_B1 = true;
        HMiCT_SetFlagChecker_U8=0xaa;


    }
    if(clear_run_color==6)
    {

        HMiCT_ClearERMAP2Time_B1 = true;
        HMiCT_SetFlagChecker_U8=0xaa;
    }
}

void CResetRunRecordPage::UpdateReset_RunRecord()
{


    run_record_date1 = StrFromInt( DTiCT_ServiceDistanceYear_U8+ 2000, 10 )
               + "-" + StrFromInt( DTiCT_ServiceDistanceMonth_U8, 10 )
               + "-" + StrFromInt( DTiCT_ServiceDistanceDay_U8, 10 );
    run_record_date2 = StrFromInt( DTiCT_VVVFECYear_U8 + 2000, 10 )
               + "-" + StrFromInt( DTiCT_VVVFECMonth_U8, 10 )
               + "-" + StrFromInt( DTiCT_VVVFECDay_U8, 10 );
//    run_record_date3 = StrFromInt( DTiCT_DBEngyYear_U8 + 2000, 10 )
//               + "-" + StrFromInt( DTiCT_DBEngyMonth_U8, 10 )
//               + "-" + StrFromInt( DTiCT_DBEngyDay_U8, 10 );
    run_record_date4 = StrFromInt( DTHM_SivPower_Year_U8  + 2000, 10 )
               + "-" + StrFromInt( DTHM_SivPower_Month_U8 , 10 )
               + "-" + StrFromInt( DTHM_SivPower_Day_U8 , 10 );
    run_record_date5 = StrFromInt( DTHM_AP1Time_Year_U8 + 2000, 10 )
               + "-" + StrFromInt( DTHM_AP1Time_Month_U8 , 10 )
               + "-" + StrFromInt( DTHM_AP1Time_Day_U8 , 10 );
    run_record_date6 = StrFromInt( DTHM_AP2Time_Year_U8 + 2000, 10 )
               + "-" + StrFromInt( DTHM_AP2Time_Month_U8 , 10 )
               + "-" + StrFromInt( DTHM_AP2Time_Day_U8 , 10 );


    SetRRun_Record_TimeLabelString(ID_PIBCR_LABEL_REDTIME1, run_record_date1);
    SetRRun_Record_LabelString_long2(ID_PIBCR_LABEL_REDVOLUME1,DTiCT_ServiceDistance_U32);


    SetRRun_Record_TimeLabelString(ID_PIBCR_LABEL_REDTIME2, run_record_date2);
    SetRRun_Record_LabelString_long(ID_PIBCR_LABEL_REDVOLUME2,DTiCT_VVVFEngyConsumption_U32);


//    SetRRun_Record_TimeLabelString(ID_PIBCR_LABEL_REDTIME3, run_record_date3);
//    SetRRun_Record_LabelString_long(ID_PIBCR_LABEL_REDVOLUME3, DTiCT_DBEngy_U32);


    SetRRun_Record_TimeLabelString(ID_PIBCR_LABEL_REDTIME4, run_record_date4);
    SetRRun_Record_LabelString_long(ID_PIBCR_LABEL_REDVOLUME4,DTiCT_SIVEngyConsumption_U32);


    SetRRun_Record_TimeLabelString(ID_PIBCR_LABEL_REDTIME5, run_record_date5);
    SetRRun_Record_LabelString_long(ID_PIBCR_LABEL_REDVOLUME5,  DTiCT_AP1RunningTime_U32);


    SetRRun_Record_TimeLabelString(ID_PIBCR_LABEL_REDTIME6, run_record_date6);
    SetRRun_Record_LabelString_long(ID_PIBCR_LABEL_REDVOLUME6, DTiCT_AP2RunningTime_U32);




//    run_record_date2 = StrFromInt( ERM_F01_7 / 256 + 2000, 10 )
//                       + "-" + StrFromInt( ERM_F01_8 % 256, 10 )
//                       + "-" + StrFromInt( ERM_F01_8 / 256, 10 );
//    run_record_date3 = StrFromInt( ERM_F01_9 % 256 + 2000, 10 )
//                       + "-" + StrFromInt( ERM_F01_9 / 256, 10 )
//                       + "-" + StrFromInt( ERM_F01_10 % 256, 10 );
//    run_record_date4 = StrFromInt( ERM_F01_10 / 256 + 2000, 10 )
//                       + "-" + StrFromInt( ERM_F01_11 % 256, 10 )
//                       + "-" + StrFromInt( ERM_F01_11 / 256, 10 );
//    run_record_date5 = StrFromInt( ERM_F01_12 % 256 + 2000, 10 )
//                       + "-" + StrFromInt( ERM_F01_12 / 256, 10 )
//                       + "-" + StrFromInt( ERM_F01_13 % 256, 10 );
//    run_record_date6 = StrFromInt( ERM_F01_13 / 256 + 2000, 10 )
//                       + "-" + StrFromInt( ERM_F01_14 % 256, 10 )
//                       + "-" + StrFromInt( ERM_F01_14 / 256, 10 );
//    run_record_date1 = StrFromInt( ERM_F01_15 % 256 + 2000, 10 )
//                       + "-" + StrFromInt( ERM_F01_15 / 256, 10 )
//                       + "-" + StrFromInt( ERM_F01_16 % 256, 10 );
//    run_record_date2=StrFromInt( BCU_selftest_data5/256+2000, 10 )+"-"+StrFromInt( BCU_selftest_data5%256, 10 )+"-"+StrFromInt( BCU_selftest_data6/256, 10 );
//    run_record_date3=StrFromInt( BCU_selftest_data6%256+2000, 10 )+"-"+StrFromInt( BCU_selftest_data7/256, 10 )+"-"+StrFromInt( BCU_selftest_data7%256, 10 );
//    run_record_date4=StrFromInt( BCU_selftest_data8/256+2000, 10 )+"-"+StrFromInt( BCU_selftest_data8%256, 10 )+"-"+StrFromInt( BCU_selftest_data9/256, 10 );
//    run_record_date5=StrFromInt( BCU_selftest_data9%256+2000, 10 )+"-"+StrFromInt( BCU_selftest_data10/256, 10 )+"-"+StrFromInt( BCU_selftest_data10%256, 10 );
//    run_record_date6=StrFromInt( BCU_selftest_data11/256+2000, 10 )+"-"+StrFromInt( BCU_selftest_data11%256, 10 )+"-"+StrFromInt( BCU_selftest_data12/256, 10 );
//    run_record_date1=StrFromInt( BCU_selftest_data12%256+2000, 10 )+"-"+StrFromInt( BCU_selftest_data13/256, 10 )+"-"+StrFromInt( BCU_selftest_data13%256, 10 );

//    run_record_distance=run_record_data1*65536+run_record_data2;
//    run_record_today_distance=(run_record_data3*65536+run_record_data4);

//    run_record_distance = ERM_F00_2 * 65536 + ERM_F00_1;
//    //检修里程
//    run_record_today_distance = ERM_F00_4  + ERM_F00_3* 65536;

//    SetRRun_Record_TimeLabelString(ID_PIBCR_LABEL_REDTIME1,run_record_date1);
//    SetRRun_Record_LabelString(ID_PIBCR_LABEL_REDVOLUME1,run_record_distance);

//    SetRRun_Record_TimeLabelString(ID_PIBCR_LABEL_REDTIME2,run_record_date2);
//    SetRRun_Record_LabelString(ID_PIBCR_LABEL_REDVOLUME2,ERM_F00_6);
//    SetRRun_Record_LabelString(ID_PIBCR_LABEL_REDVOLUME3,ERM_F00_7);

//    SetRRun_Record_TimeLabelString(ID_PIBCR_LABEL_REDTIME4,run_record_date5);
//    SetRRun_Record_LabelString(ID_PIBCR_LABEL_REDVOLUME4,ERM_F00_9);
//    SetRRun_Record_LabelString(ID_PIBCR_LABEL_REDVOLUME8,ERM_F02_8%256);

//    SetRRun_Record_TimeLabelString(ID_PIBCR_LABEL_REDTIME5,run_record_date6);
//    SetRRun_Record_LabelString(ID_PIBCR_LABEL_REDVOLUME5,ERM_F00_10);
//    SetRRun_Record_LabelString(ID_PIBCR_LABEL_REDVOLUME9,ERM_F02_8/256);

//    SetRRun_Record_TimeLabelString(ID_PIBCR_LABEL_REDTIME6,run_record_date4);
//    SetRRun_Record_LabelString(ID_PIBCR_LABEL_REDVOLUME6,ERM_F00_8);

//    SetRRun_Record_TimeLabelString(ID_PIBCR_LABEL_REDTIME7,run_record_date1);
//    SetRun_Record_LabelString_long(ID_PIBCR_LABEL_REDVOLUME7,run_record_today_distance);

    return;
}

//void CResetRunRecordPage::UpdateMileageBtn(int id, int colorVal)
//{
//    if ( clear_run_color == 0 )
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
//    }
//    return;
//}



void CResetRunRecordPage::UpdateCheckDistanceBtn(int id, int colorVal)
{
    if ( clear_run_color == 1 )
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }

    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
    return;
}
void CResetRunRecordPage::UpdateTractionEnergyBtn(int id, int colorVal)
{
    if ( clear_run_color == 2 )
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
    return;
}
void CResetRunRecordPage::UpdateBrakeEnergyBtn(int id, int colorVal)
{
    if ( clear_run_color == 3 )
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
    return;
}
void CResetRunRecordPage::UpdateAssenergyBtn(int id, int colorVal)
{
    if ( clear_run_color == 4 )
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }

    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
    return;
}

void CResetRunRecordPage::UpdateWorkTime1Btn(int id, int colorVal)
{
    if ( clear_run_color == 5 )
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
    return;
}

void CResetRunRecordPage::UpdateWorkTime2Btn(int id, int colorVal)
{
    if ( clear_run_color == 6 )
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
    return;
}



//void CResetRunRecordPage::SetRRun_Record_TimeLabelString(int id, QString StringVal)
//{
//    ((CLabel *)GetDlgItem(id))->SetCtrlText(StringVal);

//    return;
//}

//void CResetRunRecordPage::SetRRun_Record_LabelString(int id, int DataVal)
//{
//     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));

//     return;
//}



void CResetRunRecordPage::SetRRun_Record_LabelString_long(int id, unsigned long DataVal)
{
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));
}

void CResetRunRecordPage::SetRRun_Record_LabelString_long2(int id, unsigned long DataVal)
{
    double data;
    data = DataVal*0.1;
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(data,'f',1));
}

void CResetRunRecordPage::SetRRun_Record_TimeLabelString(int id, QString StringVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(StringVal);

}

