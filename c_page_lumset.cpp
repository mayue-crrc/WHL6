#include "c_page_lumset.h"
#include "cwarningdialog.h"


ROMDATA g_PicRom_lumset[] =
{
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WHHELP
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    D_COMMON_PAGE_HEADER(QObject::trUtf8("亮度调节") )
    {QObject::trUtf8("-"),                   D_FONT_BOLD(20),      QRect(100, 250,  60,  60),          Qt::black,                Qt::gray,          CONTROL_BUTTON,          ID_PIBLUM_LABEL_MINUS        },
    {QObject::trUtf8("+"),                   D_FONT_BOLD(20),      QRect(640, 250,  60,  60),          Qt::black,                Qt::gray,          CONTROL_BUTTON,          ID_PIBLUM_LABEL_PLUS        },
    {QObject::trUtf8(""),                    D_FONT_BOLD(20),      QRect(170, 270,  453,  20),          Qt::black,                Qt::gray,          CONTROL_LABEL,          ID_PIBLUM_LABEL_BACKBAR        },
    {QObject::trUtf8(""),                    D_FONT_BOLD(20),      QRect(170, 270,  1,  20),          Qt::black,                Qt::yellow,          CONTROL_LABEL,          ID_PIBLUM_LABEL_BARVALUE        },

    {QObject::trUtf8("手动调节"),                   D_FONT_BOLD(10),      QRect(200, 350,  80,  40),          Qt::black,                Qt::gray,          CONTROL_BUTTON,          ID_PIBLUM_LABEL_MANUAL        },
    {QObject::trUtf8("自动调节"),                   D_FONT_BOLD(10),      QRect(540, 350,  80,  40),          Qt::black,                Qt::gray,          CONTROL_BUTTON,          ID_PIBLUM_LABEL_AUTO        },

};
int g_lumsetRomLen = sizeof(g_PicRom_lumset)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(C_Page_Lumset,CPage)
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
        ON_BTNCLK(ID_PIBLUM_LABEL_MINUS, OnlumminusClk)
        ON_BTNCLK(ID_PIBLUM_LABEL_PLUS, OnlumplusClk)
        ON_BTNCLK(ID_PIBLUM_LABEL_MANUAL, OnlummaunalClk)
        ON_BTNCLK(ID_PIBLUM_LABEL_AUTO, OnlumautoClk)


END_MESSAGE_MAP()

C_Page_Lumset::C_Page_Lumset()
{
    m_automode = true;

    QString path = qApp->applicationDirPath();
    QString fileName = path + "/system.ini";
    QFile inifile( fileName );
    if( inifile.exists( fileName ) )
    {
        if( inifile.setPermissions( QFile::WriteOther | QFile::ReadOther ) )
        {
            QSettings *settings = new QSettings( fileName, QSettings::IniFormat );

            m_initvalue = ( settings->value( "/LightSet/LightValue" ).toInt() );
            delete settings;
        }
    }
    else
    {
        CWarningDialog wDlg;
        wDlg.SetWarningStr(QSTR("system.ini文件不存在！"));
        wDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        wDlg.exec();
    }
}

void C_Page_Lumset::OnUpdatePage()
{
    int tmp = float(m_initvalue)/255*580;
    if(m_automode)
    {
        H8::getH8()->setBrightness(0);
        ((CButton *)GetDlgItem(ID_PIBLUM_LABEL_AUTO))->ChangeButtonState(LBUTTON_DOWN);
        ((CButton *)GetDlgItem(ID_PIBLUM_LABEL_MANUAL))->ChangeButtonState(LBUTTON_UP);
    }else
    {
        ((CLabel*)GetDlgItem(ID_PIBLUM_LABEL_BACKBAR))->SetCtrlText("");
        ((CLabel*)GetDlgItem(ID_PIBLUM_LABEL_BARVALUE))->SetCtrlRect(QRect(215, 345,  tmp,  25));
        H8::getH8()->setBrightness(m_initvalue );
        ((CButton *)GetDlgItem(ID_PIBLUM_LABEL_AUTO))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_PIBLUM_LABEL_MANUAL))->ChangeButtonState(LBUTTON_DOWN);
        QSettings* ConfigIniRead = new QSettings("./system.ini",QSettings::IniFormat,0);
        ConfigIniRead->setValue("/LightSet/LightValue",QString::number(m_initvalue));
        delete ConfigIniRead;
    }


}

void C_Page_Lumset::OnInitPage()
{
    ((CButton *)GetDlgItem(ID_PIBLUM_LABEL_AUTO))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton *)GetDlgItem(ID_PIBLUM_LABEL_MANUAL))->ChangeButtonState(LBUTTON_UP);

}

void C_Page_Lumset::OnShowPage()
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
    ((CButton *)GetDlgItem(IDLB_COM_BTN12))->SetCtrlText(QObject::trUtf8(""));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("下一页"));
#endif
    ((CButton *)GetDlgItem(ID_PIBLUM_LABEL_MANUAL))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBLUM_LABEL_AUTO))->m_bAutoUpState = false;

    this->InitPageHeader();
}

#ifdef PAGE_BUTTON_BAR_NEW
        void C_Page_Lumset::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
        }

        void C_Page_Lumset::OnComBtn2Clk()
        {

        }

        void C_Page_Lumset::OnComBtn3Clk()
        {

        }

        void C_Page_Lumset::OnComBtn4Clk()
        {

        }

        void C_Page_Lumset::OnComBtn5Clk()
        {

        }

        void C_Page_Lumset::OnComBtn6Clk()
        {

        }
        void C_Page_Lumset::OnComBtn7Clk()
        {

        }

        void C_Page_Lumset::OnComBtn8Clk()
        {
        }
        void C_Page_Lumset::OnComBtn9Clk()
        {
        }
        void C_Page_Lumset::OnComBtn10Clk()
        {

        }
        void C_Page_Lumset::OnComBtn11Clk()
        {

        }
        void C_Page_Lumset::OnComBtn12Clk()
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

void C_Page_Lumset::OnlumplusClk()
{
    if(!m_automode)
    {
        if(m_initvalue < 235)
        m_initvalue += 20;
    }


}
void C_Page_Lumset::OnlumminusClk()
{
    if(!m_automode)
    {
        if(m_initvalue>20)
        {
            m_initvalue -= 20;
        }
    }
}
void C_Page_Lumset::OnlumautoClk()
{
    m_automode = true;

}
void C_Page_Lumset::OnlummaunalClk()
{
    m_automode = false;

}
