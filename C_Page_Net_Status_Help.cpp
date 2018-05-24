#include "C_Page_Net_Status_Help.h"


ROMDATA g_PicRom_CommStatusHelp[] =
{
    D_COMMON_PAGE_HEADER(QObject::trUtf8("通信状态帮助"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WHHELP
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    {"",                            D_FONT_BOLD(6),      QRect(29, 90, 422,  1),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(29, 130, 422, 1),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(29, 170, 422, 1),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(29, 210, 422, 1),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(29, 250, 422, 1),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(29, 290, 422, 1),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(29, 330, 422, 1),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect( 29, 90, 1, 241),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(276, 90, 1, 241),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(450, 90, 1, 241),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("子系统状态"),              D_FONT_BOLD(8),      QRect( 30, 95,  245, 30),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("工作正常(设备正常且为主机)"), D_FONT_BOLD(8),      QRect( 30, 135, 245, 30),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("待机中(设备正常但为从机)"),   D_FONT_BOLD(8),      QRect( 30, 175, 245, 30),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("通信异常或未上电"),               D_FONT_BOLD(8),      QRect( 30, 215, 245, 30),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("通信异常或未上电"),         D_FONT_BOLD(8),      QRect( 30, 215, 245, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("门网关部分主"),      D_FONT_BOLD(8),      QRect( 30, 255, 245, 30),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("门网关错误或状态位异常"),      D_FONT_BOLD(8),      QRect( 30, 295, 245, 30),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_IGNORE         },
////    {QObject::trUtf8("制动内部CAN通信正常"),      D_FONT_BOLD(8),      QRect( 30, 335, 245, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
////    {QObject::trUtf8("制动内部CAN通信异常"),      D_FONT_BOLD(8),      QRect( 30, 375, 245, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("显示颜色或图形"),           D_FONT_BOLD(8),      QRect( 277, 95, 170, 30),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 322, 135, 80, 30),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCSH_LABEL_WORKNOMAL                       },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 322, 175, 80, 30),           Qt::white,                Qt::yellow,               CONTROL_LABEL,           ID_PIBCSH_LABEL_DORMANCY                        },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 322, 215, 80, 30),           Qt::white,                Qt::white,                  CONTROL_LABEL,           ID_PIBCSH_LABEL_FAULTHAPPEN                     },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 322, 255, 80, 30),           Qt::white,                QColor(255,0,255),               CONTROL_LABEL,           ID_PIBCSH_LABEL_DORMANCY                        },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 322, 295, 80, 30),           Qt::white,                Qt::red,               CONTROL_LABEL,           ID_PIBCSH_LABEL_DORMANCY                        },
////    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 322, 273, 80, 1),           Qt::white,                Qt::white,               CONTROL_LABEL,           ID_PIBCSH_LABEL_DORMANCY                        },

////    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 322, 307, 80, 6),           Qt::white,                Qt::white,                  CONTROL_LABEL,           ID_PIBCSH_LABEL_FAULTHAPPEN                     },
////    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 322, 306, 80, 1),           Qt::white,                Qt::white,               CONTROL_LABEL,           ID_PIBCSH_LABEL_DORMANCY                        },
////    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 322, 313, 80, 1),           Qt::white,                Qt::white,               CONTROL_LABEL,           ID_PIBCSH_LABEL_DORMANCY                        },

////  //  {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 322, 215+80, 80, 30),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_PIBCSH_LABEL_COMMUNICATEABNORMITYORPOWEROFF  },
////    {QObject::trUtf8("BCU"),                  D_FONT_BOLD(8),      QRect( 288, 252+80, 55, 25),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
////    {QObject::trUtf8("BCU"),                  D_FONT_BOLD(8),      QRect( 383, 252+80, 55, 25),           Qt::black,                Qt::yellow,               CONTROL_LABEL,           ID_IGNORE         },
////    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 310, 277+80,  6, 5),            Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
////    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 405, 277+80,  6, 5),            Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
////    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 310, 282+80, 101, 6),           Qt::white,                Qt::darkGreen,            CONTROL_LABEL,           ID_IGNORE         },
////    {QObject::trUtf8("BCU"),                  D_FONT_BOLD(8),      QRect( 288, 292+80, 55, 25),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
////    {QObject::trUtf8("BCU"),                  D_FONT_BOLD(8),      QRect( 383, 292+80, 55, 25),           Qt::black,                Qt::yellow,               CONTROL_LABEL,           ID_IGNORE         },
////    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 310, 317+80,  6, 5),            Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
////    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 405, 317+80,  6, 5),            Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
////    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 310, 322+80, 101, 6),           Qt::white,                Qt::white,                  CONTROL_LABEL,           ID_IGNORE         },

    {"",                           D_FONT_BOLD(6),      QRect(459,  90, 312,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(459, 120, 312,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(459, 150, 312,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(459, 180, 312,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(459, 210, 312,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(459, 240, 312,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(459, 270, 312,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(459, 300, 312,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(459, 330, 312,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(459, 360, 312,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(459, 390, 312,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(459, 420, 312,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(459, 450, 312,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(459, 480, 312,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(459, 510, 312,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                           D_FONT_BOLD(6),      QRect(459, 90,  1, 420),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(651, 90,  1, 420),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(770, 90,  1, 420),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("子系统/设备"),            D_FONT_BOLD(8),      QRect( 460, 95, 192, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("中央控制单元"),           D_FONT_BOLD(8),      QRect( 460, 125, 192, 20),          Qt::white,                Qt::black,           CONTROL_LABEL,                  ID_IGNORE         },
    {QObject::trUtf8("事件记录仪"),             D_FONT_BOLD(8),      QRect( 460, 155, 192, 20),          Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("人机接口单元"),           D_FONT_BOLD(8),      QRect( 460, 185, 192, 20),          Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("牵引控制单元"),           D_FONT_BOLD(8),      QRect( 460, 215, 192, 20),          Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("辅助控制单元"),           D_FONT_BOLD(8),      QRect( 460, 245, 192, 20),          Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("信号系统"),              D_FONT_BOLD(8),      QRect( 460, 275, 192, 20),          Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("旅客信息系统"),           D_FONT_BOLD(8),      QRect( 460, 305, 192, 20),          Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("空调控制系统"),        D_FONT_BOLD(8),      QRect( 460, 335, 192, 20),          Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("制动控制单元"),       D_FONT_BOLD(8),      QRect( 460, 365, 192, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("远程输入输出模块"),           D_FONT_BOLD(8),      QRect( 460, 395, 192, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("电子车门控制单元"),                D_FONT_BOLD(8),      QRect( 460, 425, 192, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("充电机单元"),                D_FONT_BOLD(8),      QRect( 460, 455, 192, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("无线装置"),                D_FONT_BOLD(8),      QRect( 460, 485, 192, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("缩写"),                  D_FONT_BOLD(8),      QRect( 652,  95, 118, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("CCU"),                  D_FONT_BOLD(8),      QRect( 652, 125, 118, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("ERM"),                 D_FONT_BOLD(8),      QRect( 652, 155, 118, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("HMI"),                  D_FONT_BOLD(8),      QRect( 652, 185, 118, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
     {QObject::trUtf8("DCU"),                  D_FONT_BOLD(8),      QRect( 652, 215, 118, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("ACU"),                  D_FONT_BOLD(8),      QRect( 652, 245, 118, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("ATC"),                  D_FONT_BOLD(8),      QRect( 652, 275, 118, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("PIS"),                  D_FONT_BOLD(8),      QRect( 652, 305, 118, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("HVAC"),                 D_FONT_BOLD(8),      QRect( 652, 335, 118, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("BCU"),                  D_FONT_BOLD(8),      QRect( 652, 365, 118, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("RIOM"),                 D_FONT_BOLD(8),      QRect( 652, 395, 118, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("EDCU"),                D_FONT_BOLD(8),      QRect( 652, 425, 118, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("REC"),                D_FONT_BOLD(8),      QRect( 652, 455, 118, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("RTU"),                D_FONT_BOLD(8),      QRect( 652, 485, 118, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
  //  {QObject::trUtf8("备注：0号门为司机室门只在第1和第8节车厢有显示。"),                  D_FONT_BOLD(7),      QRect( 10, 515, 450, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
  //    {QObject::trUtf8("nethelp.bmp"),                  D_FONT_BOLD(8),      QRect( 40, 100, 720, 320),           Qt::white,                Qt::transparent,           CONTROL_IMAGE,           ID_IGNORE         },

};
int g_CommStatusHelpRomLen = sizeof(g_PicRom_CommStatusHelp)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCommStatusHelpPage,CPage)
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

#endif
END_MESSAGE_MAP()

CCommStatusHelpPage::CCommStatusHelpPage()
{
}

void CCommStatusHelpPage::OnUpdatePage()
{

}

void CCommStatusHelpPage::OnInitPage()
{

}

void CCommStatusHelpPage::OnShowPage()
{
//    for(int i=1;i<g_CommStatusHelpRomLen;i++)
//    {

//        if(g_PicRom_CommStatusHelp[i]->nControlType==2)
//        {
//            if(g_PicRom_CommStatusHelp[i].nID<65535)
//            {
//                ((CButton *)GetDlgItem(g_PicRom_CommStatusHelp[i].nID))->SetCtrlText(g_PicRom_CommStatus[i]->showStr);
//            }


//        }

//    }

    //((CLabel *)GetDlgItem( ID_PIBCSH_LABEL_test ))->SetCtrlText(QObject::trUtf8("中央控制单元"));;



    #ifdef PAGE_BUTTON_BAR_NEW
        ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返  回"));
        ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN9))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN10))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN11))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN12))->SetCtrlText("");

    #else
        ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
        ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
    #endif
        this->InitPageHeader();
}

void CCommStatusHelpPage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_COMMSTATUS);
}

void CCommStatusHelpPage::OnComBtn2Clk()
{

}

void CCommStatusHelpPage::OnComBtn3Clk()
{

}

void CCommStatusHelpPage::OnComBtn4Clk()
{

}

void CCommStatusHelpPage::OnComBtn5Clk()
{

}

void CCommStatusHelpPage::OnComBtn6Clk()
{

}

#ifdef PAGE_BUTTON_BAR_NEW
void CCommStatusHelpPage::OnComBtn7Clk()
{

}

void CCommStatusHelpPage::OnComBtn8Clk()
{

}
#endif



