#ifndef CRUNWARNINGPAGE_H
#define CRUNWARNINGPAGE_H

#include <QWidget>
#include "CGlobal.h"

namespace Ui {
    class CRunWarningPage;
}

class CRunWarningPage : public QWidget
{
    Q_OBJECT

public:
    explicit CRunWarningPage(QWidget *parent = 0);
    ~CRunWarningPage();
    void wariningstr(QString str);
    void setwarningcolor(int color);
    void showbutton(bool flg);
    void showEvent(QShowEvent *);
    bool m_isclose;
private:
    Ui::CRunWarningPage *ui;
    int m_mode;
private slots:
    void on_pushButton_pressed();
signals:
    void sendclose(bool b);
};

#endif // CRUNWARNINGPAGE_H
