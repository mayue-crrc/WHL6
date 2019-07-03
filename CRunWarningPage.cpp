#include "CRunWarningPage.h"
#include "ui_CRunWarningPage.h"

CRunWarningPage::CRunWarningPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CRunWarningPage)
{
    ui->setupUi(this);
    ui->pushButton->hide();
    m_isclose = false;
}

CRunWarningPage::~CRunWarningPage()
{
    delete ui;
}

void CRunWarningPage::on_pushButton_pressed()
{
//    if(m_mode == 1)
//    {
//        Warningconfirm5km = true;
//        Warningconfirm3km = false;
//    }else if(m_mode == 2)
//    {
//        Warningconfirm3km = true;
//        Warningconfirm5km = false;
//    }else
//    {
//        Warningconfirm3km = false;
//        Warningconfirm5km = false;

//    }
    sendclose(true);

    this->close();
}
void CRunWarningPage::wariningstr(QString str)
{
    ui->label->setText(str);
}
void CRunWarningPage::showEvent(QShowEvent *)
{
}
void CRunWarningPage::showbutton(bool flg)
{
    if(flg)
        this->ui->pushButton->show();
    else
        this->ui->pushButton->hide();
}
void CRunWarningPage::setwarningcolor(int color)
{
    if(color == 1)//red
    {
        m_mode = 1;
        ui->CRunWarningPage_background->setStyleSheet("background-color: rgb(255, 0, 0);");
    }else if(color == 2)//yellow
    {
        m_mode = 2;
        ui->CRunWarningPage_background->setStyleSheet("background-color: rgb(255, 255, 0);");

    }
}
