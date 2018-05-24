#include "c_page_pisalarmhelp.h"




ROMDATA g_PicRom_pisalarmhelp[] =
{
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WHHELP
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    D_COMMON_PAGE_HEADER(QObject::trUtf8("运行帮助") )

    {QObject::trUtf8("乘客紧急通讯单元故障。"),           D_FONT_BOLD(6),      QRect( 330, 200, 300, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           2         },
    {QObject::trUtf8("乘客紧急通讯单元激活，乘客要求紧急对讲。"),                    D_FONT_BOLD(6),      QRect( 330, 250, 300, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           3         },
    {QObject::trUtf8("乘客紧急通讯单元激活，司机已打开通讯通道。"),                     D_FONT_BOLD(6),      QRect( 330, 300, 300, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           4         },
    {QObject::trUtf8("乘客紧急通讯单元正常，未激活。"),    D_FONT_BOLD(6),      QRect( 330, 350, 300, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           5         },

    {QObject::trUtf8("WHL6EmgCallFault.PNG"),    D_FONT_BOLD(8),      QRect( 280, 200, 30, 30),           Qt::white,                Qt::red,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6EmgCallAct.PNG"),                D_FONT_BOLD(8),      QRect( 280, 250, 30, 30),           Qt::white,                Qt::red,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6EmgCallComm.PNG"),                D_FONT_BOLD(8),      QRect( 280, 300, 30, 30),           Qt::white,                Qt::yellow,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6EmgCallNoAct.PNG"),                   D_FONT_BOLD(8),      QRect( 280, 350, 30, 30),           Qt::white,                Qt::green,                CONTROL_IMAGE,           ID_IGNORE         },

};
int g_pisalarmhelpLen = sizeof(g_PicRom_pisalarmhelp)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(C_Page_PisAlarmHelp,CPage)
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
END_MESSAGE_MAP()

C_Page_PisAlarmHelp::C_Page_PisAlarmHelp()
{
}

void C_Page_PisAlarmHelp::OnUpdatePage()
{

    Update();
}

void C_Page_PisAlarmHelp::OnInitPage()
{

}

void C_Page_PisAlarmHelp::OnShowPage()
{

    ((CLabel *)GetDlgItem(2))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(3))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(4))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(5))->SetAlignment(Qt::AlignLeft);

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
    ((CButton *)GetDlgItem(IDLB_COM_BTN12))->SetCtrlText(QObject::trUtf8(""));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("下一页"));
#endif
    this->InitPageHeader();
}

#ifdef PAGE_BUTTON_BAR_NEW
        void C_Page_PisAlarmHelp::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_PISALARM);
        }

        void C_Page_PisAlarmHelp::OnComBtn2Clk()
        {

        }

        void C_Page_PisAlarmHelp::OnComBtn3Clk()
        {

        }

        void C_Page_PisAlarmHelp::OnComBtn4Clk()
        {

        }

        void C_Page_PisAlarmHelp::OnComBtn5Clk()
        {

        }

        void C_Page_PisAlarmHelp::OnComBtn6Clk()
        {

        }
        void C_Page_PisAlarmHelp::OnComBtn7Clk()
        {

        }

        void C_Page_PisAlarmHelp::OnComBtn8Clk()
        {
        }
        void C_Page_PisAlarmHelp::OnComBtn9Clk()
        {
        }
        void C_Page_PisAlarmHelp::OnComBtn10Clk()
        {

        }
        void C_Page_PisAlarmHelp::OnComBtn11Clk()
        {

        }
        void C_Page_PisAlarmHelp::OnComBtn12Clk()
        {
        }
#else
        void CRunHelp1Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CRunHelp1Page::OnComBtn2Clk()
        {

        }

        void CRunHelp1Page::OnComBtn3Clk()
        {

        }

        void CRunHelp1Page::OnComBtn4Clk()
        {

        }

        void CRunHelp1Page::OnComBtn5Clk()
        {

        }

        void CRunHelp1Page::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_RUNHELP2);
        }

#endif

