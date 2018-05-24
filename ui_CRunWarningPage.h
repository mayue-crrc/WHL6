/********************************************************************************
** Form generated from reading UI file 'CRunWarningPage.ui'
**
** Created: Mon Jul 25 14:12:07 2016
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRUNWARNINGPAGE_H
#define UI_CRUNWARNINGPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CRunWarningPage
{
public:
    QLabel *CRunWarningPage_background;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *CRunWarningPage)
    {
        if (CRunWarningPage->objectName().isEmpty())
            CRunWarningPage->setObjectName(QString::fromUtf8("CRunWarningPage"));
        CRunWarningPage->resize(430, 370);
        CRunWarningPage->setStyleSheet(QString::fromUtf8(""));
        CRunWarningPage_background = new QLabel(CRunWarningPage);
        CRunWarningPage_background->setObjectName(QString::fromUtf8("CRunWarningPage_background"));
        CRunWarningPage_background->setGeometry(QRect(0, 0, 430, 370));
        CRunWarningPage_background->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(CRunWarningPage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 300, 98, 41));
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton->setStyleSheet(QString::fromUtf8("font: 75 bold 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(216, 216, 216);"));
        label = new QLabel(CRunWarningPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 50, 351, 211));
        label->setStyleSheet(QString::fromUtf8("font: 75 bold 38px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(0, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(CRunWarningPage);

        QMetaObject::connectSlotsByName(CRunWarningPage);
    } // setupUi

    void retranslateUi(QWidget *CRunWarningPage)
    {
        CRunWarningPage->setWindowTitle(QApplication::translate("CRunWarningPage", "Form", 0, QApplication::UnicodeUTF8));
        CRunWarningPage_background->setText(QString());
        pushButton->setText(QApplication::translate("CRunWarningPage", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CRunWarningPage: public Ui_CRunWarningPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRUNWARNINGPAGE_H
