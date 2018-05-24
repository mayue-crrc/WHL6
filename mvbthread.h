#ifndef MvbThread_H
#define MvbThread_H
#include <QtGui/QApplication>
#include <QThread>
#include <QByteArray>
#include <QMutex>
#include <QWaitCondition>
#include <QTimer>


#include <QFile>
#include <QDir>
#include <QDateTime>
#include <QTextStream>
//#define DEBUG

#ifdef DEBUG
#include <QVariant>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#endif
#include "DataBuffer.h"
#include "PixyTypes.h"
#include "PixyMvbLib.h"


class MvbThread : public QThread
{
    Q_OBJECT
public:
    MvbThread();
    ~MvbThread();
    void render();
    //UNSIGNED8 sendData[128];
signals:

public slots:

private:
    bool restart;
    bool abort;
    QWaitCondition condition;
    QMutex mutex;




    //src
    PIXYMVB_Data srcPortData021; // MVB test
    PIXYMVB_Data srcPortData023; // MVB test

    PIXYMVB_Data snkPortData020; // MVB test
    

    PIXYMVB_Data srcPortData200;
    PIXYMVB_Data srcPortData201;
    PIXYMVB_Data srcPortData202;
    PIXYMVB_Data srcPortData203;

    PIXYMVB_Data srcPortData280;
    PIXYMVB_Data srcPortData281;
    PIXYMVB_Data srcPortData282;
    PIXYMVB_Data srcPortData283;

    PIXYMVB_Data srcPortData310;
    PIXYMVB_Data srcPortData311;
    PIXYMVB_Data srcPortData312;
    PIXYMVB_Data srcPortData313;

    PIXYMVB_Data srcPortData320;
    PIXYMVB_Data srcPortData321;
    PIXYMVB_Data srcPortData322;
    PIXYMVB_Data srcPortData323;
    //snk

    PIXYMVB_Data snkPortDataf;
    PIXYMVB_Data snkPortData1;
    PIXYMVB_Data snkPortData2;

	
    PIXYMVB_Data snkPortData100;
    PIXYMVB_Data snkPortData110;         //MVB(Tc1)_CCU_1
    PIXYMVB_Data snkPortData111;         //MVB(Tc1)_CCU_2
    PIXYMVB_Data snkPortData112;         //MVB(Tc1)_CCU_3
    PIXYMVB_Data snkPortData120;         //MVB(Mp1)_CCU_1
    PIXYMVB_Data snkPortData121;         //MVB(Mp1)_CCU_2
    PIXYMVB_Data snkPortData130;         //MVB(M1)_CCU_1
    PIXYMVB_Data snkPortData131;         //MVB(M1)_CCU_2
    PIXYMVB_Data snkPortData140;         //MVB(M2)_CCU_1
    PIXYMVB_Data snkPortData141;         //MVB(M2)_CCU_2
    PIXYMVB_Data snkPortData150;         //MVB(Mp2)_CCU_1
    PIXYMVB_Data snkPortData151;         //MVB(Mp2)_CCU_2
    PIXYMVB_Data snkPortData160;         //MVB(Tc2)_CCU_1
    PIXYMVB_Data snkPortData161;         //MVB(Tc2)_CCU_2
    PIXYMVB_Data snkPortData162;         //MVB(Tc2)_CCU_3

    PIXYMVB_Data snkPortData118;
    PIXYMVB_Data snkPortData128;
    PIXYMVB_Data snkPortData138;
    PIXYMVB_Data snkPortData148;
    PIXYMVB_Data snkPortData158;
    PIXYMVB_Data snkPortData168;




    PIXYMVB_Data snkPortData210;         //ERM1_CCU_1
    PIXYMVB_Data snkPortData211;         //ERM1_CCU_2
    PIXYMVB_Data snkPortData212;         //ERM1_CCU_3
    PIXYMVB_Data snkPortData213;         //ERM1_CCU_4

    PIXYMVB_Data snkPortData220;         //ERM2_CCU_1
    PIXYMVB_Data snkPortData221;         //ERM2_CCU_2
    PIXYMVB_Data snkPortData222;         //ERM2_CCU_3
    PIXYMVB_Data snkPortData223;         //ERM2_CCU_4

    PIXYMVB_Data snkPortData218;
    PIXYMVB_Data snkPortData228;


    PIXYMVB_Data snkPortData310;         //HMI1_CCU_1
    PIXYMVB_Data snkPortData311;         //HMI1_CCU_2
    PIXYMVB_Data snkPortData312;         //HMI1_CCU_3
    PIXYMVB_Data snkPortData313;         //HMI1_CCU_4

    PIXYMVB_Data snkPortData320;         //HMI2_CCU_1
    PIXYMVB_Data snkPortData321;         //HMI2_CCU_2
    PIXYMVB_Data snkPortData322;         //HMI2_CCU_3
    PIXYMVB_Data snkPortData323;         //HMI2_CCU_4

    PIXYMVB_Data snkPortData308;
    PIXYMVB_Data snkPortData309;
    PIXYMVB_Data snkPortData318;
    PIXYMVB_Data snkPortData328;



    PIXYMVB_Data snkPortData510;         //BCU(Tc1)_CCU_1
    PIXYMVB_Data snkPortData511;         //BCU(Tc1)_CCU_2
    PIXYMVB_Data snkPortData512;         //BCU(Tc1)_CCU_3
    PIXYMVB_Data snkPortData513;         //BCU(Tc1)_CCU_4
    PIXYMVB_Data snkPortData514;         //BCU(Tc1)_CCU_5
    PIXYMVB_Data snkPortData515;         //Spare
    PIXYMVB_Data snkPortData520;         //BCU(M1)_CCU_1
    PIXYMVB_Data snkPortData521;         //BCU(M1)_CCU_2
    PIXYMVB_Data snkPortData522;         //BCU(M1)_CCU_3
    PIXYMVB_Data snkPortData523;         //BCU(M1)_CCU_4
    PIXYMVB_Data snkPortData524;         //BCU(M1)_CCU_5
    PIXYMVB_Data snkPortData525;         //Spare
    PIXYMVB_Data snkPortData530;         //BCU(M2)_CCU_1
    PIXYMVB_Data snkPortData531;         //BCU(M2)_CCU_2
    PIXYMVB_Data snkPortData532;         //BCU(M2)_CCU_3
    PIXYMVB_Data snkPortData533;         //BCU(M2)_CCU_4
    PIXYMVB_Data snkPortData534;         //BCU(M2)_CCU_5
    PIXYMVB_Data snkPortData535;         //Spare
    PIXYMVB_Data snkPortData540;         //BCU(Tc2)_CCU_1
    PIXYMVB_Data snkPortData541;         //BCU(Tc2)_CCU_2
    PIXYMVB_Data snkPortData542;         //BCU(Tc2)_CCU_3
    PIXYMVB_Data snkPortData543;         //BCU(Tc2)_CCU_4
    PIXYMVB_Data snkPortData544;         //BCU(Tc2)_CCU_5
    PIXYMVB_Data snkPortData545;         //Spare

    PIXYMVB_Data snkPortData508;


    PIXYMVB_Data snkPortData610;         //TCU(Mp1)_CCU_1
    PIXYMVB_Data snkPortData611;         //TCU(Mp1)_CCU_2
    PIXYMVB_Data snkPortData612;         //Spare
    PIXYMVB_Data snkPortData620;         //TCU(M1)_CCU_1
    PIXYMVB_Data snkPortData621;         //TCU(M1)_CCU_2
    PIXYMVB_Data snkPortData622;         //Spare
    PIXYMVB_Data snkPortData630;         //TCU(M2)_CCU_1
    PIXYMVB_Data snkPortData631;         //TCU(M2)_CCU_2
    PIXYMVB_Data snkPortData632;         //Spare
    PIXYMVB_Data snkPortData640;         //TCU(Mp2)_CCU_1
    PIXYMVB_Data snkPortData641;         //TCU(Mp2)_CCU_2
    PIXYMVB_Data snkPortData642;         //Spare

    PIXYMVB_Data snkPortData618;
    PIXYMVB_Data snkPortData628;
    PIXYMVB_Data snkPortData638;
    PIXYMVB_Data snkPortData648;



    PIXYMVB_Data snkPortData710;         //ACU(Tc1)_CCU_1
    PIXYMVB_Data snkPortData720;         //ACU(Tc2)_CCU_1
    PIXYMVB_Data snkPortData730;         //Spare
    PIXYMVB_Data snkPortData740;         //Spare

    PIXYMVB_Data snkPortData718;
    PIXYMVB_Data snkPortData728;


    PIXYMVB_Data snkPortData810;         //EDCU1(Tc1)_CCU_1
    PIXYMVB_Data snkPortData811;         //EDCU1(Tc1)_CCU_2
    PIXYMVB_Data snkPortData820;         //EDCU2(Tc1)_CCU_1
    PIXYMVB_Data snkPortData821;         //EDCU2(Tc1)_CCU_2
    PIXYMVB_Data snkPortData830;         //EDCU3(Mp1)_CCU_1
    PIXYMVB_Data snkPortData831;         //EDCU3(Mp1)_CCU_2
    PIXYMVB_Data snkPortData840;         //EDCU4(Mp1)_CCU_1
    PIXYMVB_Data snkPortData841;         //EDCU4(Mp1)_CCU_2
    PIXYMVB_Data snkPortData850;         //EDCU5(M1)_CCU_1
    PIXYMVB_Data snkPortData851;         //EDCU5(M1)_CCU_2
    PIXYMVB_Data snkPortData860;         //EDCU6(M1)_CCU_1
    PIXYMVB_Data snkPortData861;         //EDCU6(M1)_CCU_2
    PIXYMVB_Data snkPortData870;         //EDCU7(M2)_CCU_1
    PIXYMVB_Data snkPortData871;         //EDCU7(M2)_CCU_2
    PIXYMVB_Data snkPortData880;         //EDCU8(M2)_CCU_1
    PIXYMVB_Data snkPortData881;         //EDCU8(M2)_CCU_2
    PIXYMVB_Data snkPortData890;         //EDCU9(Mp2)_CCU_1
    PIXYMVB_Data snkPortData891;         //EDCU9(Mp2)_CCU_2
    PIXYMVB_Data snkPortData8A0;         //EDCU10(Mp2)_CCU_1
    PIXYMVB_Data snkPortData8A1;         //EDCU10(Mp2)_CCU_2
    PIXYMVB_Data snkPortData8B0;         //EDCU11(Tc2)_CCU_1
    PIXYMVB_Data snkPortData8B1;         //EDCU11(Tc2)_CCU_2
    PIXYMVB_Data snkPortData8C0;         //EDCU12(Tc2)_CCU_1
    PIXYMVB_Data snkPortData8C1;         //EDCU12(Tc2)_CCU_2

    PIXYMVB_Data snkPortData808;



    PIXYMVB_Data snkPortData910;         //HVAC(Tc1)_CCU
    PIXYMVB_Data snkPortData920;         //HVAC(Mp1)_CCU
    PIXYMVB_Data snkPortData930;         //HVAC(M1)_CCU
    PIXYMVB_Data snkPortData940;         //HVAC(M2)_CCU
    PIXYMVB_Data snkPortData950;         //HVAC(Mp2)_CCU
    PIXYMVB_Data snkPortData960;         //HVAC(Tc2)_CCU

    PIXYMVB_Data snkPortData918;
    PIXYMVB_Data snkPortData928;
    PIXYMVB_Data snkPortData938;
    PIXYMVB_Data snkPortData948;
    PIXYMVB_Data snkPortData958;
    PIXYMVB_Data snkPortData968;


    PIXYMVB_Data snkPortDataA10;         //ATC_CCU
    PIXYMVB_Data snkPortDataA11;         //Spare
    PIXYMVB_Data snkPortDataA20;         //Spare
    PIXYMVB_Data snkPortDataA21;         //Spare

    PIXYMVB_Data snkPortDataA18;


    PIXYMVB_Data snkPortDataB10;         //PIS1(Tc1)_CCU
    PIXYMVB_Data snkPortDataB11;
    PIXYMVB_Data snkPortDataB20;         //PIS2(Tc2)_CCU
    PIXYMVB_Data snkPortDataB21;
//
    PIXYMVB_Data snkPortDataB08;

    PIXYMVB_Data snkPortDataC10;         //RTU1(Tc1)_CCU
    PIXYMVB_Data snkPortDataC20;         //RTU2(Tc2)_CCU

    PIXYMVB_Data snkPortDataC08;
    PIXYMVB_Data snkPortDataC18;        //CCU-RTU1
    PIXYMVB_Data snkPortDataC28;        //CCU-RTU2

    PIXYMVB_Data snkPortDataD10;         //REC1(Tc1)_CCU
    PIXYMVB_Data snkPortDataD20;         //REC2(Tc2)_CCU

    PIXYMVB_Data snkPortDataD18;         //-CCU-REC1(Tc1)
    PIXYMVB_Data snkPortDataD28;         //-CCU-REC2(Tc2)

    //--------------------函数区---------------------------------------------
    bool init();
    void run();
    UNSIGNED16 highbyteLowbyteExchange( const UNSIGNED16 wordData );
#ifdef DEBUG
    void writeDebugLog( const QString str, const SIGNED16 state );
#endif
};

#endif // MvbThread_H
