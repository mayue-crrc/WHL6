#include "cfaultscommonprocess.h"
#include "CGlobal.h"
#include "DataBuffer.h"
#include <qdatetime.h>
#include <qapplication.h>
#include <fstream>
#include "CPage.h"
#include <QDir>

extern vector<CPage*>  g_PageVec;

CFaultsCommonProcess::CFaultsCommonProcess()
{
}

ST_HISTORY_FAULTS_LIST g_historyFaultsList;
ST_HISTORY_CONDITION_FILTER g_historyConditionFilter;
ST_REALTIME_CONDITION_FILTER g_realTimeConditionFilter;

//ST_DATETIME g_realtime_faults_datetime_array[1500];

int g_RealTimeFaultsNum = 0;
int g_RealTimeFaultsNumold = 0;

ST_FAULT_INFO g_faultsinforom[] =
{
    //{0x1101,QObject::trUtf8("制动半列都不在线"),                             QObject::trUtf8("请检查BCU硬件及相应接线")},
    //{0x1101,QObject::trUtf8("HMI离线"),                             QObject::trUtf8("TCMS显示屏离线; \n检查HMI设备及通信线路;")},
    {0x1101,QObject::trUtf8("Tc1_RIOM离线"),QObject::trUtf8("Tc1_RIOM设备损坏或通信故障"),  QObject::trUtf8("检查Tc1_RIOM设备及通信线路")},
    {0x1102,QObject::trUtf8("Tc2_RIOM离线"),QObject::trUtf8("Tc1_RIOM设备损坏或通信故障"),  QObject::trUtf8("检查Tc2_RIOM设备及通信线路")},
    {0x1103,QObject::trUtf8("Mp1_RIOM离线"),QObject::trUtf8("Mp1_RIOM设备损坏或通信故障"),  QObject::trUtf8("检查Mp1_RIOM设备及通信线路")},
    {0x1104,QObject::trUtf8("Mp2_RIOM离线"),QObject::trUtf8("Mp2_RIOM设备损坏或通信故障"),  QObject::trUtf8("检查Mp2_RIOM设备及通信线路")},
    {0x1105,QObject::trUtf8("M1_RIOM离线"),QObject::trUtf8("M1_RIOM设备损坏或通信故障"),   QObject::trUtf8("检查M1_RIOM设备及通信线路")},
    {0x1106,QObject::trUtf8("M2_RIOM离线"),QObject::trUtf8("M2_RIOM设备损坏或通信故障"),   QObject::trUtf8("检查M2_RIOM设备及通信线路")},
    {0x1107,QObject::trUtf8("Tc1_CCU离线"),QObject::trUtf8("Tc1_CCU设备损坏或通信故障"),  QObject::trUtf8("n检查Tc1_CCU设备及通信线路")},
    {0x1108,QObject::trUtf8("Tc2_CCU离线"),QObject::trUtf8("Tc2_CCU设备损坏或通信故障"),  QObject::trUtf8("检查Tc2_CCU设备及通信线路")},
    {0x1109,QObject::trUtf8("Mp1_DCU离线"),QObject::trUtf8("Mp1_DCU设备损坏或通信故障"),  QObject::trUtf8("检查Mp1_DCU设备及通信线路")},
    {0x1110,QObject::trUtf8("Mp2_DCU离线"),QObject::trUtf8("Mp2_DCUM设备损坏或通信故障"),  QObject::trUtf8("检查Mp2_DCU设备及通信线路")},
    {0x1111,QObject::trUtf8("M1_DCU离线"),QObject::trUtf8("M1_DCU设备损坏或通信故障"),  QObject::trUtf8("检查M1_DCU设备及通信线路")},
    {0x1112,QObject::trUtf8("M2_DCU离线"),QObject::trUtf8("M2_DCU设备损坏或通信故障"),  QObject::trUtf8("检查M2_DCU设备及通信线路")},
    {0x1113,QObject::trUtf8("Tc1_BCU离线"),QObject::trUtf8("Tc1_BCU设备损坏或通信故障"),  QObject::trUtf8("检查Tc1_BCU设备及通信线路")},
    {0x1114,QObject::trUtf8("Tc2_BCU离线"),QObject::trUtf8("Tc2_BCU设备损坏或通信故障"),  QObject::trUtf8("检查Tc2_BCU设备及通信线路")},
    {0x1115,QObject::trUtf8("M1_BCU离线"),QObject::trUtf8("M1_BCU设备损坏或通信故障"),  QObject::trUtf8("检查M1_BCU设备及通信线路")},
    {0x1116,QObject::trUtf8("M2_BCU离线"),QObject::trUtf8("M2_BCU设备损坏或通信故障"),  QObject::trUtf8("检查M2_BCU设备及通信线路")},
    {0x1117,QObject::trUtf8("Tc1_ACU离线"),QObject::trUtf8("Tc1_ACU设备损坏或通信故障"),  QObject::trUtf8("检查Tc1_SIV设备及通信线路")},
    {0x1118,QObject::trUtf8("Tc2_ACU离线"),QObject::trUtf8("Tc2_ACU设备损坏或通信故障"),  QObject::trUtf8("检查Tc2_SIV设备及通信线路")},
    {0x1119,QObject::trUtf8("Tc1_ATC离线"),QObject::trUtf8("Tc1_ATC设备损坏或通信故障"),  QObject::trUtf8("检查Tc1_ATC设备及通信线路")},
    {0x1120,QObject::trUtf8("Tc1_ERM离线"),QObject::trUtf8("Tc1_ERM设备损坏或通信故障"),  QObject::trUtf8("检查Tc1_ERM设备及通信线路")},
    {0x1121,QObject::trUtf8("Tc2_ERM离线"),QObject::trUtf8("Tc2_ERM设备损坏或通信故障"),  QObject::trUtf8("检查Tc2_ERM设备及通信线路")},
    {0x1122,QObject::trUtf8("Tc1_PIS离线"),QObject::trUtf8("Tc1_PIS设备损坏或通信故障"),  QObject::trUtf8("检查Tc1_PIS设备及通信线路")},
    {0x1123,QObject::trUtf8("Tc2_PIS离线"),QObject::trUtf8("Tc2_PIS设备损坏或通信故障"),  QObject::trUtf8("检查Tc2_PIS设备及通信线路")},
    {0x1124,QObject::trUtf8("Tc1_EDCU1离线"),QObject::trUtf8("Tc1_EDCU1设备损坏或通信故障"),  QObject::trUtf8("检查Tc1_EDCU1设备及通信线路")},
    {0x1125,QObject::trUtf8("Tc1_EDCU2离线"),QObject::trUtf8("Tc1_EDCU2设备损坏或通信故障"),  QObject::trUtf8("检查Tc1_EDCU2设备及通信线路")},
    {0x1126,QObject::trUtf8("Mp1_EDCU3离线"),QObject::trUtf8("Mp1_EDCU3设备损坏或通信故障"),  QObject::trUtf8("检查Mp1_EDCU3设备及通信线路")},
    {0x1127,QObject::trUtf8("Mp1_EDCU4离线"),QObject::trUtf8("Mp1_EDCU4设备损坏或通信故障"),  QObject::trUtf8("检查Mp1_EDCU4设备及通信线路")},
    {0x1128,QObject::trUtf8("M1_EDCU5离线"),QObject::trUtf8("M1_EDCU5设备损坏或通信故障"),  QObject::trUtf8("检查M1_EDCU5设备及通信线路")},
    {0x1129,QObject::trUtf8("M1_EDCU6离线"),QObject::trUtf8("M1_EDCU6设备损坏或通信故障"),  QObject::trUtf8("检查M1_EDCU6设备及通信线路")},
    {0x1130,QObject::trUtf8("M2_EDCU7离线"),QObject::trUtf8("M2_EDCU7设备损坏或通信故障"),  QObject::trUtf8("检查M2_EDCU7设备及通信线路")},
    {0x1131,QObject::trUtf8("M2_EDCU8离线"),QObject::trUtf8("M2_EDCU8设备损坏或通信故障"),  QObject::trUtf8("检查M2_EDCU8设备及通信线路")},
    {0x1132,QObject::trUtf8("Mp2_EDCU9离线"),QObject::trUtf8("Mp2_EDCU9设备损坏或通信故障"),  QObject::trUtf8("检查Mp2_EDCU9设备及通信线路")},
    {0x1133,QObject::trUtf8("Mp2_EDCU10离线"),QObject::trUtf8("Mp2_EDCU10设备损坏或通信故障"),  QObject::trUtf8("检查Mp2_EDCU10设备及通信线路")},
    {0x1134,QObject::trUtf8("Tc2_EDCU11离线"),QObject::trUtf8("Tc2_EDCU11设备损坏或通信故障"),  QObject::trUtf8("检查Tc2_EDCU11设备及通信线路")},
    {0x1135,QObject::trUtf8("Tc2_EDCU12离线"),QObject::trUtf8("Tc2_EDCU12设备损坏或通信故障"),  QObject::trUtf8("检查Tc2_EDCU12设备及通信线路")},
    {0x1136,QObject::trUtf8("Tc1_HVAC离线"),QObject::trUtf8("Tc1_HVAC设备损坏或通信故障"),  QObject::trUtf8("检查Tc1_HVAC设备及通信线路")},
    {0x1137,QObject::trUtf8("Tc2_HVAC离线"),QObject::trUtf8("Tc2_HVAC设备损坏或通信故障"),  QObject::trUtf8("检查Tc2_HVAC设备及通信线路")},
    {0x1138,QObject::trUtf8("Mp1_HVAC离线"),QObject::trUtf8("Mp1_HVAC设备损坏或通信故障"),  QObject::trUtf8("检查Mp1_HVAC设备及通信线路")},
    {0x1139,QObject::trUtf8("Mp2_HVAC离线"),QObject::trUtf8("Mp2_HVAC设备损坏或通信故障"),  QObject::trUtf8("检查Mp2_HVAC设备及通信线路")},
    {0x1140,QObject::trUtf8("M1_HVAC离线"),QObject::trUtf8("M1_HVAC设备损坏或通信故障"),  QObject::trUtf8("检查M1_HVAC设备及通信线路")},
    {0x1141,QObject::trUtf8("M2_HVAC离线"),QObject::trUtf8("M2_HVAC设备损坏或通信故障"),  QObject::trUtf8("检查M2_HVAC设备及通信线路")},
    {0x1142,QObject::trUtf8("Tc1_HMI离线"),QObject::trUtf8("Tc1_HMI设备损坏或通信故障"),  QObject::trUtf8("检查Tc1_HMI设备及通信线路")},
    {0x1143,QObject::trUtf8("Tc2_HMI离线"),QObject::trUtf8("Tc2_HMI设备损坏或通信故障"),  QObject::trUtf8("检查Tc2_HMI设备及通信线路")},
    {0x1144,QObject::trUtf8("Tc1_REC离线"),QObject::trUtf8("Tc1_REC设备损坏或通信故障"),  QObject::trUtf8("检查Tc1_REC设备及通信线路")},
    {0x1145,QObject::trUtf8("Tc2_REC离线"),QObject::trUtf8("Tc2_REC设备损坏或通信故障"),  QObject::trUtf8("检查Tc2_REC设备及通信线路")},
    {0x1146,QObject::trUtf8("Tc1_CCU离线"),QObject::trUtf8("Tc1_CCU设备损坏或通信故障"),  QObject::trUtf8("检查Tc1_CCU设备及通信线路")},
    {0x1147,QObject::trUtf8("Tc2_CCU离线"),QObject::trUtf8("Tc2_CCU设备损坏或通信故障"),  QObject::trUtf8("检查Tc2_CCU设备及通信线路")},



    {0x2101,QObject::trUtf8("两端采集到牵引信号不一致"),QObject::trUtf8("DI 采集的“牵引”指令冗余信号不一致"),QObject::trUtf8("检查“牵引”列车线")},
    {0x2102,QObject::trUtf8("两端采集到制动信号不一致"),QObject::trUtf8("DI 采集的“制动”指令冗余信号不一致"),QObject::trUtf8("检查“制动”列车线")},
    {0x2104,QObject::trUtf8("两端采集到快速制动信号不一致"),QObject::trUtf8("DI 采集的“快速制动”指令冗余信号不一致"),QObject::trUtf8("检查“快速制动”列车线")},
    {0x2105,QObject::trUtf8("两端采集到向前信号不一致"),QObject::trUtf8("DI 采集的“向前”指令冗余信号不一致"), QObject::trUtf8("检查“向前”列车线")},
    {0x2106,QObject::trUtf8("两端采集到向后信号不一致"),QObject::trUtf8("DI 采集的“向后”指令冗余信号不一致"),QObject::trUtf8("检查“向后”列车线")},
    {0x2107,QObject::trUtf8("两端采集到司机门旁路信号不一致"),QObject::trUtf8("DI 采集的“司机门旁路”指令冗余信号不一致"),QObject::trUtf8("检查“司机门旁路”列车线")},
    {0x2108,QObject::trUtf8("两端采集到门零速监视信号不一致"),QObject::trUtf8("DI 采集的“门零速监视”指令冗余信号不一致"),QObject::trUtf8("检查“门零速监视”列车线")},
    {0x2109,QObject::trUtf8("整车刀开关位不一致"),QObject::trUtf8("DI采集的“刀开关位”指令信号不一致"),QObject::trUtf8("检查“刀开关位”")},
    //{0x2110,QObject::trUtf8("刀开关既不在库用位又不在受电弓位"),QObject::trUtf8("DI采集的“刀开关位”指令信号不一致"),QObject::trUtf8("检查“刀开关位”")},



    {0x3101,QObject::trUtf8("两端司机室激活"), QObject::trUtf8("两侧的 DI 同时采集到了司机室激活信号"),QObject::trUtf8("关闭一端司机钥匙")},
    {0x3102,QObject::trUtf8("向前向后方向都激活"),QObject::trUtf8("DI 同时采集到向前、向后指令"),QObject::trUtf8("检查司控器")},
    {0x3103,QObject::trUtf8("牵引制动均激活"),QObject::trUtf8("DI 同时采集到牵引、制动指令"),QObject::trUtf8("检查司控器")},
    {0x3104,QObject::trUtf8("同时收到开左门与开右门信号"),QObject::trUtf8("DI 同时采集到开左门、开右门信号"),QObject::trUtf8("检查左门使能与右门使能开关")},
    {0x3105,QObject::trUtf8("刀开关状态均无效故障"),QObject::trUtf8("若受电弓位和库用位两个刀开关信号均为高电平则视为刀开关状态监视故障"),QObject::trUtf8("检查刀开关")},
    {0x3206,QObject::trUtf8("空压机1接触器故障"),QObject::trUtf8("如果网络已发出空压机启动命令，在3秒后仍然没有收到空压机接触器反馈信号，则会报“空压机接触器故障”"),QObject::trUtf8("检查空压机")},
    {0x3107,QObject::trUtf8("刀开关状态均有效故障"),QObject::trUtf8("若受电弓位和库用位两个刀开关信号均为低电平则视为刀开关状态监视故障"),QObject::trUtf8("检查刀开关")},
    {0x3108,QObject::trUtf8("空压机故障"),QObject::trUtf8("空压机可用为0"),QObject::trUtf8("检查空压机")},
    {0x3109,QObject::trUtf8("警惕按钮断开"),QObject::trUtf8("速度大于3km/h，非ATO模式，无人警惕按钮持续3s以上为低电平"),QObject::trUtf8("按压无人警惕按钮")},
    {0x3110,QObject::trUtf8("载荷故障"),QObject::trUtf8("检测到载荷信号低于AW0*0.7或高于AW3*1.2"),QObject::trUtf8("检查载荷传感器")},
    {0x3111,QObject::trUtf8("受电弓升弓故障"),QObject::trUtf8("升弓时间超过15s未升弓到位"),QObject::trUtf8("检查受电弓")},
    {0x3112,QObject::trUtf8("受电弓降弓故障"),QObject::trUtf8("降弓时间超过15s未降弓到位"),QObject::trUtf8("检查受电弓")},
    {0x3113,QObject::trUtf8("运输模式传感器故障"),QObject::trUtf8("检测到输入电流小于3.6mA或大于14mA"),QObject::trUtf8("检查运输装置")},
    {0x3214,QObject::trUtf8("DC24V电源模块故障"),QObject::trUtf8("检测到DC24V电源模块故障"),  QObject::trUtf8("检查DC24V电源模块")},    //added by leo 20161025
    {0x3215,QObject::trUtf8("火灾报警器故障"),QObject::trUtf8("检测到火灾报警器故障"),  QObject::trUtf8("检查火灾报警器")},    //added by leo 20161025
    {0x3216,QObject::trUtf8("空压机2接触器故障"),QObject::trUtf8("如果网络已发出空压机启动命令，在3秒后仍然没有收到空压机接触器反馈信号，则会报“空压机接触器故障”"),QObject::trUtf8("检查空压机")},
    {0x3217,QObject::trUtf8("扩展允许继电器故障"),QObject::trUtf8("TCMS发出扩展供电指令后4秒内收不到“扩展供电反馈”信号"),QObject::trUtf8("检查扩展供电接触器")},
    {0x3118,QObject::trUtf8("两台充电机故障"),QObject::trUtf8("检测到两台辅逆DC110V无输出或输出故障"),QObject::trUtf8("检查充电机")},



    //bcu
    //bcu
    {0x5301,QObject::trUtf8("单个网关阀严重故障(TC车架1)"),QObject::trUtf8("本转向架网关阀子系统完全故障"),QObject::trUtf8("C 列车运营至当天结束，不再投入运营。")},
    {0x5302,QObject::trUtf8("单个网关阀严重故障(M车架2)"),QObject::trUtf8("本转向架网关阀子系统完全故障"),QObject::trUtf8("C 列车运营至当天结束，不再投入运营。")},
    {0x5303,QObject::trUtf8("单个网关阀轻微故障(TC车架1)"),QObject::trUtf8("本转向架网关阀需要维护，但是性能没有降低"),QObject::trUtf8("D 无任何限制，仅用作信息提示。")},
    {0x5304,QObject::trUtf8("单个网关阀轻微故障(M车架2)"),QObject::trUtf8("本转向架网关阀需要维护，但是性能没有降低"),QObject::trUtf8("D 无任何限制，仅用作信息提示。")},
    {0x5305,QObject::trUtf8("单个网关阀严重故障(TC车架2)"),QObject::trUtf8("本转向架网关阀子系统完全故障"),QObject::trUtf8("C 列车运营至当天结束，不再投入运营。")},
    {0x5306,QObject::trUtf8("单个网关阀严重故障(MP车架1)"),QObject::trUtf8("本转向架网关阀子系统完全故障"),QObject::trUtf8("C 列车运营至当天结束，不再投入运营。")},
    {0x5307,QObject::trUtf8("单个网关阀严重故障(MP车架2)"),QObject::trUtf8("本转向架网关阀子系统完全故障"),QObject::trUtf8("C 列车运营至当天结束，不再投入运营。")},
    {0x5308,QObject::trUtf8("单个网关阀严重故障(M车架1)"),QObject::trUtf8("本转向架网关阀子系统完全故障"),QObject::trUtf8("C 列车运营至当天结束，不再投入运营。")},
    {0x5309,QObject::trUtf8("单个网关阀轻微故障(TC车架2)"),QObject::trUtf8("本转向架网关阀需要维护，但是性能没有降低"),QObject::trUtf8("D 无任何限制，仅用作信息提示。")},
    {0x5310,QObject::trUtf8("单个网关阀轻微故障(MP车架1)"),QObject::trUtf8("本转向架网关阀需要维护，但是性能没有降低"),QObject::trUtf8("D 无任何限制，仅用作信息提示。")},
    {0x5311,QObject::trUtf8("单个网关阀轻微故障(MP车架2)"),QObject::trUtf8("本转向架网关阀需要维护，但是性能没有降低"),QObject::trUtf8("D 无任何限制，仅用作信息提示。")},
    {0x5312,QObject::trUtf8("单个网关阀轻微故障(M车架1)"),QObject::trUtf8("本转向架网关阀需要维护，但是性能没有降低"),QObject::trUtf8("D 无任何限制，仅用作信息提示。")},
{0x5313,QObject::trUtf8("速度传感器故障(单个)(TC车架1)"),QObject::trUtf8("1转向架1或2轴的速度传感器故障"),QObject::trUtf8("C 列车运营至当天结束，不再投入运营。")},
{0x5314,QObject::trUtf8("速度传感器故障(单个)(TC车架2)"),QObject::trUtf8("2转向架3或4轴的速度传感器故障"),QObject::trUtf8("C 列车运营至当天结束，不再投入运营。")},
{0x5315,QObject::trUtf8("速度传感器故障(单个)(MP车架1)"),QObject::trUtf8("1转向架1或2轴的速度传感器故障"),QObject::trUtf8("C 列车运营至当天结束，不再投入运营。")},
{0x5316,QObject::trUtf8("速度传感器故障(单个)(MP车架2)"),QObject::trUtf8("2转向架3或4轴的速度传感器故障"),QObject::trUtf8("C 列车运营至当天结束，不再投入运营。")},
{0x5317,QObject::trUtf8("速度传感器故障(单个)(M车架1)"),QObject::trUtf8("1转向架1或2轴的速度传感器故障"),QObject::trUtf8("C 列车运营至当天结束，不再投入运营。")},
{0x5318,QObject::trUtf8("速度传感器故障(单个)(M车架2)"),QObject::trUtf8("2转向架3或4轴的速度传感器故障"),QObject::trUtf8("C 列车运营至当天结束，不再投入运营。")},
{0x5219,QObject::trUtf8("速度传感器故障(双个)(TC车架1)"),QObject::trUtf8("1转向架1和2轴的速度传感器故障"),QObject::trUtf8("B 列车正常运营一个往返，然后返回车辆段。")},
{0x5220,QObject::trUtf8("速度传感器故障(双个)(TC车架2)"),QObject::trUtf8("2转向架3和4轴的速度传感器故障"),QObject::trUtf8("B 列车正常运营一个往返，然后返回车辆段。")},
{0x5221,QObject::trUtf8("速度传感器故障(双个)(MP车架1)"),QObject::trUtf8("1转向架1和2轴的速度传感器故障"),QObject::trUtf8("B 列车正常运营一个往返，然后返回车辆段。")},
{0x5222,QObject::trUtf8("速度传感器故障(双个)(MP车架2)"),QObject::trUtf8("2转向架3和4轴的速度传感器故障"),QObject::trUtf8("B 列车正常运营一个往返，然后返回车辆段。")},
{0x5223,QObject::trUtf8("速度传感器故障(双个)(M车架1)"),QObject::trUtf8("1转向架1和2轴的速度传感器故障"),QObject::trUtf8("B 列车正常运营一个往返，然后返回车辆段。")},
{0x5224,QObject::trUtf8("速度传感器故障(双个)(M车架2)"),QObject::trUtf8("2转向架3和4轴的速度传感器故障"),QObject::trUtf8("B 列车正常运营一个往返，然后返回车辆段。")},
{0x5325,QObject::trUtf8("编码器插头不正常障(TC车架1)"),QObject::trUtf8("编码器插头（EP2002阀）不正常或无效。"),QObject::trUtf8("C 列车运营至当天结束，不再投入运营。")},
{0x5326,QObject::trUtf8("编码器插头不正常障(TC车架2)"),QObject::trUtf8("编码器插头（EP2002阀）不正常或无效。"),QObject::trUtf8("C 列车运营至当天结束，不再投入运营。")},
{0x5327,QObject::trUtf8("编码器插头不正常障(MP车架1)"),QObject::trUtf8("编码器插头（EP2002阀）不正常或无效。"),QObject::trUtf8("C 列车运营至当天结束，不再投入运营。")},
{0x5328,QObject::trUtf8("编码器插头不正常障(MP车架2)"),QObject::trUtf8("编码器插头（EP2002阀）不正常或无效。"),QObject::trUtf8("C 列车运营至当天结束，不再投入运营。")},
{0x5329,QObject::trUtf8("编码器插头不正常障(M车架1)"),QObject::trUtf8("编码器插头（EP2002阀）不正常或无效。"),QObject::trUtf8("C 列车运营至当天结束，不再投入运营。")},
{0x5330,QObject::trUtf8("编码器插头不正常障(M车架2)"),QObject::trUtf8("编码器插头（EP2002阀）不正常或无效。"),QObject::trUtf8("C 列车运营至当天结束，不再投入运营。")},
{0x5331,QObject::trUtf8("单个CAN总线故障"),QObject::trUtf8("CAN总线1或者CAN总线2故障。"),QObject::trUtf8("C 列车运营至当天结束，不再投入运营。")},
{0x5132,QObject::trUtf8("CAN总线连接断开"),QObject::trUtf8("CAN总线1和CAN总线2同时故障。"),QObject::trUtf8("A 通常运行到下一站，清客，返回车辆段。 ")},
{0x5233,QObject::trUtf8("载荷检测故障(TC车架1)"),QObject::trUtf8("转向架1载荷受干扰。"),QObject::trUtf8("B 列车正常运营一个往返，然后返回车辆段。")},
{0x5234,QObject::trUtf8("载荷检测故障(TC车架2)"),QObject::trUtf8("转向架2载荷受干扰。"),QObject::trUtf8("B 列车正常运营一个往返，然后返回车辆段。")},
{0x5235,QObject::trUtf8("载荷检测故障(MP车架1)"),QObject::trUtf8("转向架1载荷受干扰。"),QObject::trUtf8("B 列车正常运营一个往返，然后返回车辆段。")},
{0x5236,QObject::trUtf8("载荷检测故障(MP车架2)"),QObject::trUtf8("转向架2载荷受干扰。"),QObject::trUtf8("B 列车正常运营一个往返，然后返回车辆段。")},
{0x5237,QObject::trUtf8("载荷检测故障(M车架1)"),QObject::trUtf8("转向架1载荷受干扰。"),QObject::trUtf8("B 列车正常运营一个往返，然后返回车辆段。")},
{0x5238,QObject::trUtf8("载荷检测故障(M车架2)"),QObject::trUtf8("转向架2载荷受干扰。"),QObject::trUtf8("B 列车正常运营一个往返，然后返回车辆段。")},
{0x5239,QObject::trUtf8("空气制动未缓解(TC车架1)"),QObject::trUtf8("相应转向架的制动无法缓解。"),QObject::trUtf8("B 如果制动经由截断塞门缓解，正常运营一个往返，然后返回车辆段。")},
{0x5240,QObject::trUtf8("空气制动未缓解(TC车架2)"),QObject::trUtf8("相应转向架的制动无法缓解。"),QObject::trUtf8("B 如果制动经由截断塞门缓解，正常运营一个往返，然后返回车辆段。")},
{0x5241,QObject::trUtf8("空气制动未缓解(MP车架1)"),QObject::trUtf8("相应转向架的制动无法缓解。"),QObject::trUtf8("B 如果制动经由截断塞门缓解，正常运营一个往返，然后返回车辆段。")},
{0x5242,QObject::trUtf8("空气制动未缓解(MP车架2)"),QObject::trUtf8("相应转向架的制动无法缓解。"),QObject::trUtf8("B 如果制动经由截断塞门缓解，正常运营一个往返，然后返回车辆段。")},
{0x5243,QObject::trUtf8("空气制动未缓解(M车架1)"),QObject::trUtf8("相应转向架的制动无法缓解。"),QObject::trUtf8("B 如果制动经由截断塞门缓解，正常运营一个往返，然后返回车辆段。")},
{0x5244,QObject::trUtf8("空气制动未缓解(M车架2)"),QObject::trUtf8("相应转向架的制动无法缓解。"),QObject::trUtf8("B 如果制动经由截断塞门缓解，正常运营一个往返，然后返回车辆段。")},
{0x5145,QObject::trUtf8("速度检测一般故障"),QObject::trUtf8("速度检测不正常。"),QObject::trUtf8("A 通常运行到下一站，清客，返回车辆段。")},

{0x5246,QObject::trUtf8("制动力不足检测(TC)"),QObject::trUtf8("一个车上至少有一个转向架上的制动缸压力低于要求的制动缸压力。"),QObject::trUtf8("B 如果制动经由截断塞门缓解，正常运营一个往返，然后返回车辆段。")},
{0x5247,QObject::trUtf8("制动力不足检测(MP车)"),QObject::trUtf8("一个车上至少有一个转向架上的制动缸压力低于要求的制动缸压力。"),QObject::trUtf8("B 如果制动经由截断塞门缓解，正常运营一个往返，然后返回车辆段。")},
{0x5248,QObject::trUtf8("制动力不足检测(M车)"),QObject::trUtf8("一个车上至少有一个转向架上的制动缸压力低于要求的制动缸压力。"),QObject::trUtf8("B 如果制动经由截断塞门缓解，正常运营一个往返，然后返回车辆段。")},

{0x5349,QObject::trUtf8("轴防滑保护临时被禁止(TC车轴1)"),QObject::trUtf8("1转向架1轴检测到防滑保护不正常"),QObject::trUtf8("D 无任何限制，仅用作信息提示。")},
{0x5350,QObject::trUtf8("轴防滑保护临时被禁止(TC车轴2)"),QObject::trUtf8("1转向架2轴检测到防滑保护不正常"),QObject::trUtf8("D 无任何限制，仅用作信息提示。")},
{0x5351,QObject::trUtf8("轴防滑保护临时被禁止(TC车轴3)"),QObject::trUtf8("2转向架3轴检测到防滑保护不正常"),QObject::trUtf8("D 无任何限制，仅用作信息提示。")},
{0x5352,QObject::trUtf8("轴防滑保护临时被禁止(TC车轴4)"),QObject::trUtf8("2转向架4轴检测到防滑保护不正常"),QObject::trUtf8("D 无任何限制，仅用作信息提示。")},
{0x5353,QObject::trUtf8("轴防滑保护临时被禁止(MP车轴1)"),QObject::trUtf8("1转向架1轴检测到防滑保护不正常"),QObject::trUtf8("D 无任何限制，仅用作信息提示。")},
{0x5354,QObject::trUtf8("轴防滑保护临时被禁止(MP车轴2)"),QObject::trUtf8("1转向架2轴检测到防滑保护不正常"),QObject::trUtf8("D 无任何限制，仅用作信息提示。")},
{0x5355,QObject::trUtf8("轴防滑保护临时被禁止(MP车轴3)"),QObject::trUtf8("2转向架3轴检测到防滑保护不正常"),QObject::trUtf8("D 无任何限制，仅用作信息提示。")},
{0x5356,QObject::trUtf8("轴防滑保护临时被禁止(MP车轴4)"),QObject::trUtf8("2转向架4轴检测到防滑保护不正常"),QObject::trUtf8("D 无任何限制，仅用作信息提示。")},
{0x5357,QObject::trUtf8("轴防滑保护临时被禁止(M车轴1)"),QObject::trUtf8("1转向架1轴检测到防滑保护不正常"),QObject::trUtf8("D 无任何限制，仅用作信息提示。")},
{0x5358,QObject::trUtf8("轴防滑保护临时被禁止(M车轴2)"),QObject::trUtf8("1转向架2轴检测到防滑保护不正常"),QObject::trUtf8("D 无任何限制，仅用作信息提示。")},
{0x5359,QObject::trUtf8("轴防滑保护临时被禁止(M车轴3)"),QObject::trUtf8("2转向架3轴检测到防滑保护不正常"),QObject::trUtf8("D 无任何限制，仅用作信息提示。")},
{0x5360,QObject::trUtf8("轴防滑保护临时被禁止(M车轴4)"),QObject::trUtf8("2转向架4轴检测到防滑保护不正常"),QObject::trUtf8("D 无任何限制，仅用作信息提示。")},
{0x5161,QObject::trUtf8("大事件"),QObject::trUtf8("CAN单元级别的事件，被认为是大故障。"),QObject::trUtf8("A 通常运行到下一站，清客，返回车辆段。")},
{0x5262,QObject::trUtf8("中等事件"),QObject::trUtf8("CAN单元级别的事件，被认为是中等故障。"),QObject::trUtf8("B 如果制动经由截断塞门缓解，正常运营一个往返，然后返回车辆段。")},
{0x5363,QObject::trUtf8("小事件"),QObject::trUtf8("CAN单元级别的事件，被认为是小故障。"),QObject::trUtf8("C 列车运营至当天结束，不再投入运营。")},
//DCU

{0x6101,QObject::trUtf8("架线过电流"),QObject::trUtf8("架线过电流"),QObject::trUtf8("请按复位按钮")},
{0x6102,QObject::trUtf8("变流失败（IGBT故障）"),QObject::trUtf8("变流失败（IGBT故障）"),QObject::trUtf8("请按复位按钮")},
{0x6203,QObject::trUtf8("电机过电流"),QObject::trUtf8("变流失败（IGBT故障）"),QObject::trUtf8("关闭牵引,关闭制动")},
{0x6204,QObject::trUtf8("相不平衡"),QObject::trUtf8("输出三相不平衡"),QObject::trUtf8("关闭牵引,关闭制动")},
{0x6205,QObject::trUtf8("充电故障"),QObject::trUtf8("充电不良"),QObject::trUtf8("关闭牵引,关闭制动")},
{0x6106,QObject::trUtf8("门极电源低电压"),QObject::trUtf8("门极电源低电压"),QObject::trUtf8("请按复位按钮")},
{0x6107,QObject::trUtf8("控制电源低电压"),QObject::trUtf8("控制电源低电压"),QObject::trUtf8("请按复位按钮")},
{0x6308,QObject::trUtf8("滤波电容低电压"),QObject::trUtf8("直流低电压"),QObject::trUtf8("牵引状态:自动复位,制动状态: 关闭制动")},
{0x6109,QObject::trUtf8("看门狗超时（main CPU）"),QObject::trUtf8("看门狗超时 (main CPU)"),QObject::trUtf8("请按复位按钮")},
{0x6310,QObject::trUtf8("滤波电容过电压"),QObject::trUtf8("直流过电压"),QObject::trUtf8("关闭牵引,关闭制动")},
{0x6311,QObject::trUtf8("空转"),QObject::trUtf8("检测到空转"),QObject::trUtf8("自动复位")},
{0x6312,QObject::trUtf8("滑行"),QObject::trUtf8("检测到滑行"),QObject::trUtf8("关闭制动")},
{0x6113,QObject::trUtf8("BCH故障"),QObject::trUtf8("制动斩波器故障"),QObject::trUtf8("请按复位按钮")},
{0x6314,QObject::trUtf8("架线低电压"),QObject::trUtf8("架线低电压"),QObject::trUtf8("牵引状态:自动复位,制动状态: 关闭制动")},
{0x6315,QObject::trUtf8("接地"),QObject::trUtf8("接地"),QObject::trUtf8("关闭制动")},
{0x6116,QObject::trUtf8("LB1无法断开"),QObject::trUtf8("LB1粘连"),QObject::trUtf8("请按复位按钮")},
{0x6117,QObject::trUtf8("LB2无法闭合"),QObject::trUtf8("LB2无法闭合"),QObject::trUtf8("请按复位按钮")},
{0x6318,QObject::trUtf8("检测到车轮反转"),QObject::trUtf8("检测到车轮反转"),QObject::trUtf8("关闭牵引,关闭制动")},
{0x6119,QObject::trUtf8("LB1无法闭合"),QObject::trUtf8("LB1无法闭合"),QObject::trUtf8("请按复位按钮")},
{0x6320,QObject::trUtf8("蓄电池低电压"),QObject::trUtf8("蓄电池低电压"),QObject::trUtf8("自动复位")},
{0x6121,QObject::trUtf8("手柄级位输入异常"),QObject::trUtf8("手柄级位输入异常"),QObject::trUtf8("请按复位按钮")},
{0x6122,QObject::trUtf8("CPU故障"),QObject::trUtf8("CPU故障"),QObject::trUtf8("请按复位按钮")},
{0x6123,QObject::trUtf8("保护设定值异常"),QObject::trUtf8("保护设定值异常"),QObject::trUtf8("请按复位按钮")},
{0x6124,QObject::trUtf8("看门狗超时(CO-CPU)"),QObject::trUtf8("看门狗超时(CO-CPU)"),QObject::trUtf8("请按复位按钮")},
{0x6325,QObject::trUtf8("制动电阻器冷却系统故障过温或风量不足"),QObject::trUtf8("制动电阻器异常"),QObject::trUtf8("关闭制动")},
{0x6326,QObject::trUtf8("逆变器过温"),QObject::trUtf8("逆变器过温"),QObject::trUtf8("自动复位")},
{0x6327,QObject::trUtf8("传送异常"),QObject::trUtf8("传送异常"),QObject::trUtf8("自动复位")},
{0x6128,QObject::trUtf8("Mp1车牵引无高压"),QObject::trUtf8("牵引系统在升弓状态下检测到无高压"),QObject::trUtf8("请按复位按钮，若故障不消除回段后检查主隔离箱等高压设备。")},
{0x6129,QObject::trUtf8("M1车牵引无高压"),QObject::trUtf8("牵引系统在升弓状态下检测到无高压"),QObject::trUtf8("请按复位按钮，若故障不消除回段后检查主隔离箱等高压设备。")},
{0x6130,QObject::trUtf8("M2车牵引无高压"),QObject::trUtf8("牵引系统在升弓状态下检测到无高压"),QObject::trUtf8("请按复位按钮，若故障不消除回段后检查主隔离箱等高压设备。")},
{0x6131,QObject::trUtf8("Mp2车牵引无高压"),QObject::trUtf8("牵引系统在升弓状态下检测到无高压"),QObject::trUtf8("请按复位按钮，若故障不消除回段后检查主隔离箱等高压设备。")},

//SIV
{0x7101,QObject::trUtf8("UV线电压过压（硬件）"),QObject::trUtf8("输出UV相电压过压"),QObject::trUtf8("检查三相交流滤波电容是否损坏，功率模块是否异常；检查电压传感器是否损坏。")},
{0x7102,QObject::trUtf8("VW线电压过压（硬件）"),QObject::trUtf8("输出VW相电压过压"),QObject::trUtf8("检查三相交流滤波电容是否损坏，功率模块是否异常；检查电压传感器是否损坏。")},
{0x7103,QObject::trUtf8("WU线电压过压（硬件）"),QObject::trUtf8("输出WU相电压过压"),QObject::trUtf8("检查三相交流滤波电容是否损坏；检查电压传感器是否损坏。")},
{0x7104,QObject::trUtf8("U相输出过流（硬件）"),QObject::trUtf8("交流U相电流过流"),QObject::trUtf8("检查负载是否异常（短路或负载功率过大），功率模块和主变压器箱内部是否异常（相间或相地断路情况）；检查电流传感器是否损坏。")},
{0x7105,QObject::trUtf8("V相输出过流（硬件）"),QObject::trUtf8("交流V相电流过流"),QObject::trUtf8("检查负载是否异常（短路或负载功率过大），功率模块和主变压器箱内部是否异常（相间或相地断路情况）；检查电流传感器是否损坏。")},
{0x7106,QObject::trUtf8("W相输出过流（硬件）"),QObject::trUtf8("交流W相电流过流"),QObject::trUtf8("检查负载是否异常（短路或负载功率过大），功率模块和主变压器箱内部是否异常（相间或相地断路情况）；检查电流传感器是否损坏。")},
{0x7107,QObject::trUtf8("母线电压硬件过压"),QObject::trUtf8("直流电容上电压过压"),QObject::trUtf8("检查功率模块的电容是否损坏；检查输入电网电压是否过高；检查电压传感器是否损坏。")},
{0x7108,QObject::trUtf8("电网电压硬件过压"),QObject::trUtf8("电网输入电压过压"),QObject::trUtf8("检查输入电网电压是否过高；检查电压传感器是否损坏。")},
{0x7109,QObject::trUtf8("PDP保护（硬件）"),QObject::trUtf8("硬件故障汇总"),QObject::trUtf8("该故障伴随其他故障产生，需要具体查找故障细节。")},
{0x7110,QObject::trUtf8("控制电压硬件欠压"),QObject::trUtf8("输入控制电压欠压"),QObject::trUtf8("检查控制电压传感器是否故障；检查输入电压是否正常。")},
{0x7111,QObject::trUtf8("U相IGBT过流（硬件）"),QObject::trUtf8("交流U相IGBT电流过流"),QObject::trUtf8("检查功率模块和主变压器箱内部是否异常（相间或相地断路情况）；检查IGBT电流传感器是否损坏。")},
{0x7112,QObject::trUtf8("V相IGBT过流（硬件）"),QObject::trUtf8("交流V相IGBT电流过流"),QObject::trUtf8("检查功率模块和主变压器箱内部是否异常（相间或相地断路情况）；检查IGBT电流传感器是否损坏。")},
{0x7113,QObject::trUtf8("W相IGBT过流（硬件）"),QObject::trUtf8("交流W相IGBT电流过流"),QObject::trUtf8("检查功率模块和主变压器箱内部是否异常（相间或相地断路情况）；检查IGBT电流传感器是否损坏。")},
{0x7114,QObject::trUtf8("U相IGBT故障（硬件）"),QObject::trUtf8("功率模块U相IGBT故障"),QObject::trUtf8("检查功率模块U相驱动板是否异常；检查DET56基板是否异常。")},
{0x7115,QObject::trUtf8("V相IGBT故障（硬件）"),QObject::trUtf8("功率模块V相IGBT故障"),QObject::trUtf8("检查功率模块V相驱动板是否异常；检查DET56基板是否异常。")},
{0x7116,QObject::trUtf8("W相IGBT故障（硬件）"),QObject::trUtf8("功率模块W相IGBT故障"),QObject::trUtf8("检查功率模块W相驱动板是否异常；检查DET56基板是否异常。")},
{0x7217,QObject::trUtf8("母线电压软件过压"),QObject::trUtf8("直流电容上软件电压过压"),QObject::trUtf8("检查电压电感器是否异常；检查电网输入电压是否过高。")},
{0x7218,QObject::trUtf8("散热器PT100过温"),QObject::trUtf8("功率模块温度过高"),QObject::trUtf8("检查功率模块PT100引线是否接好；检查功率模块是否损坏；")},
{0x7219,QObject::trUtf8("输出过流（有效值）"),QObject::trUtf8("交流输出电流软件过流"),QObject::trUtf8("检查电流传感器是否损坏；检查负载是否过大；")},
{0x7220,QObject::trUtf8("输出一般过压"),QObject::trUtf8("交流输出电流软件一般过压"),QObject::trUtf8("检查是否有大负载突投；检查电压传感器是否损坏；")},
{0x7221,QObject::trUtf8("输出严重过压"),QObject::trUtf8("交流输出电流软件严重过流"),QObject::trUtf8("检查是否有大负载突投；检查电压传感器是否损坏；")},
{0x7222,QObject::trUtf8("母线过流"),QObject::trUtf8("交流输出电流软件一般欠压"),QObject::trUtf8("检查是否有大负载突投；检查是否有输出短路情况；检查电压传感器是否损坏；")},
{0x7223,QObject::trUtf8("输出过流（瞬时值）"),QObject::trUtf8("交流输出电流软件严重欠压"),QObject::trUtf8("检查是否有大负载突投；检查是否有输出短路情况；检查电压传感器是否损坏；")},
{0x7224,QObject::trUtf8("一般过载"),QObject::trUtf8("负载超过1.5倍"),QObject::trUtf8("检查负载是否过大，超过1.5倍；")},
{0x7225,QObject::trUtf8("严重过载"),QObject::trUtf8("负载超过2倍"),QObject::trUtf8("检查负载是否过大，超过2倍；")},
//{0x7226,QObject::trUtf8("频率异常"),QObject::trUtf8("输出频率异常"),QObject::trUtf8("检查输出负载是否严重不平衡；")},
{0x7227,QObject::trUtf8("三相输出不平衡"),QObject::trUtf8("三相缺相保护"),QObject::trUtf8("检查三相负载是否严重不平衡；检查相间和相地是否有短路情况；")},
//{0x7228,QObject::trUtf8("充电接触器故障，充电失败"),QObject::trUtf8("预充电接触器故障"),QObject::trUtf8("检查线路是否接好；检查充电接触器是否有粘黏情况；检查辅助触点是否损坏；")},
{0x7229,QObject::trUtf8("IGBT电流过流（瞬时值）"),QObject::trUtf8("IGBT瞬时电流过大"),QObject::trUtf8("检查功率模块是否损坏；检查负载是否过大；检查IGBT电流传感器是否损坏；")},
{0x7230,QObject::trUtf8("冷却风机故障"),QObject::trUtf8("风机电流过大"),QObject::trUtf8("检查风机是否损坏；检查风机互感器是否损坏；")},
{0x7231,QObject::trUtf8("IGBT电流过流（有效值）"),QObject::trUtf8("IGBT有限值电流过大"),QObject::trUtf8("检查功率模块是否损坏；检查负载是否过大；检查IGBT电流传感器是否损坏；")},
{0x7232,QObject::trUtf8("AVR电源故障"),QObject::trUtf8("功率模块供电AVR电源故障"),QObject::trUtf8("检查AVR电源是否损坏；")},
{0x7233,QObject::trUtf8("母线欠压"),QObject::trUtf8("直流电容电压欠压"),QObject::trUtf8("检查电网电压是否欠压；检查直流电容是否损坏；")},
{0x7334,QObject::trUtf8("母线过压"),QObject::trUtf8("直流电容电压过压"),QObject::trUtf8("检查电网电压是否过压；")},
{0x7335,QObject::trUtf8("主接触器未吸合"),QObject::trUtf8("预充电接触器故障"),QObject::trUtf8("检查线路是否接好；检查充电接触器是否有粘黏情况；检查辅助触点是否损坏；")},
{0x7336,QObject::trUtf8("充电接触器未吸合"),QObject::trUtf8("充电接触器故障"),QObject::trUtf8("检查线路是否接好；检查充电接触器是否有粘黏情况；检查辅助触点是否损坏；")},
{0x7337,QObject::trUtf8("输出接触器未吸合"),QObject::trUtf8("输出接触器故障"),QObject::trUtf8("检查线路是否接好；检查输出接触器是否有粘黏情况；检查辅助触点是否损坏；")},
{0x7338,QObject::trUtf8("快放电接触器未吸合"),QObject::trUtf8("快放电接触器故障"),QObject::trUtf8("检查线路是否接好；检查快放电接触器是否有粘黏情况；检查辅助触点是否损坏")},
{0x7339,QObject::trUtf8("HSCB未吸合"),QObject::trUtf8("HSCB故障"),QObject::trUtf8("检查线路是否接好；检查HSCB是否有粘黏情况；检查辅助触点是否损坏；")},
//{0x7340,QObject::trUtf8("外部停机指令有效"),QObject::trUtf8("外部停机指令"),QObject::trUtf8("TCMS接收的停机命令")},
{0x7341,QObject::trUtf8("控制电压欠压"),QObject::trUtf8("控制电压电源欠压"),QObject::trUtf8("检查控制电压输入是否正常；检查电压传感器是否损坏。")},
{0x7342,QObject::trUtf8("控制电压过压"),QObject::trUtf8("控制电压电源过压"),QObject::trUtf8("检查控制电压输入是否正常；检查电压传感器是否损坏。")},
{0x7343,QObject::trUtf8("风机接触器未吸合"),QObject::trUtf8("风机接触器故障"),QObject::trUtf8("检查线路是否接好；检查风机接触器是否有粘黏情况；检查辅助触点是否损坏；")},
{0x7344,QObject::trUtf8("风机空开未吸合"),QObject::trUtf8("风机空开故障"),QObject::trUtf8("检查风机空开是否闭合；检查辅助触点是否损坏；")},
{0x7345,QObject::trUtf8("电网过压"),QObject::trUtf8("电网电压过压"),QObject::trUtf8("检查电网电压电感器是否异常；检查电网输入电压是否过高。")},
{0x7346,QObject::trUtf8("预充电未完成 "),QObject::trUtf8("预充电过程后网压与母线电压之差超过120V "),QObject::trUtf8("检查输入电压与母线电压传感器及相关检测电路")},

//HVAC
{0x9201,QObject::trUtf8("紧急逆变器故障"),QObject::trUtf8("紧急通风逆变器保护或不能正常输出"),QObject::trUtf8("请检查紧急通风逆变器，故障排除后，重新启动空调系统")},
{0x9202,QObject::trUtf8("1-1通风机过载故障"),QObject::trUtf8("电机电流超限，通风机热继电器动作。"),QObject::trUtf8("检查通风机，故障排除后，手动复位热继电器，并重新启动空调系统")},
{0x9203,QObject::trUtf8("1-1冷凝风机过载故障"),QObject::trUtf8("电机电流超限，冷凝风机热继电器动作。"),QObject::trUtf8("检查冷凝风机，故障排除后，重新启动空调系统")},
{0x9204,QObject::trUtf8("1-1压缩机高压故障"),QObject::trUtf8("制冷系统管路压力过高"),QObject::trUtf8("检查制冷系统，故障排除后，重新启动空调系统")},
{0x9205,QObject::trUtf8("1-1压缩机低压故障"),QObject::trUtf8("制冷系统管路压力过低"),QObject::trUtf8("检查制冷系统，故障排除后，重新启动空调系统")},
{0x9206,QObject::trUtf8("1-1压缩机排气温度故障"),QObject::trUtf8("压缩机排气温度过高"),QObject::trUtf8("检查制冷系统，故障排除后，重新启动空调系统")},
{0x9207,QObject::trUtf8("1-1压缩机过载故障"),QObject::trUtf8("电机电流超限，压缩机热继电器动作"),QObject::trUtf8("检查压缩机，故障排除后，重新启动空调系统")},
{0x9208,QObject::trUtf8("1-2通风机过载故障"),QObject::trUtf8("电机电流超限，通风机热继电器动作。"),QObject::trUtf8("检查通风机，故障排除后，手动复位热继电器，并重新启动空调系统")},
{0x9209,QObject::trUtf8("1-2冷凝风机过载故障"),QObject::trUtf8("电机电流超限，冷凝风机热继电器动作。"),QObject::trUtf8("检查冷凝风机，故障排除后，重新启动空调系统")},
{0x9210,QObject::trUtf8("1-2压缩机高压故障"),QObject::trUtf8("制冷系统管路压力过高"),QObject::trUtf8("检查制冷系统，故障排除后，重新启动空调系统")},
{0x9211,QObject::trUtf8("1-2压缩机低压故障"),QObject::trUtf8("制冷系统管路压力过低"),QObject::trUtf8("检查制冷系统，故障排除后，重新启动空调系统")},
{0x9212,QObject::trUtf8("1-2压缩机排气温度故障"),QObject::trUtf8("压缩机排气温度过高"),QObject::trUtf8("检查制冷系统，故障排除后，重新启动空调系统")},
{0x9213,QObject::trUtf8("1-2压缩机过载故障"),QObject::trUtf8("电机电流超限，压缩机热继电器动作"),QObject::trUtf8("检查压缩机，故障排除后，重新启动空调系统")},
{0x9214,QObject::trUtf8("2-1通风机过载故障"),QObject::trUtf8("电机电流超限，通风机热继电器动作。"),QObject::trUtf8("检查通风机，故障排除后，手动复位热继电器，并重新启动空调系统")},
{0x9215,QObject::trUtf8("2-1冷凝风机过载故障"),QObject::trUtf8("电机电流超限，冷凝风机热继电器动作。"),QObject::trUtf8("检查冷凝风机，故障排除后，重新启动空调系统")},
{0x9216,QObject::trUtf8("2-1压缩机高压故障"),QObject::trUtf8("制冷系统管路压力过高"),QObject::trUtf8("检查制冷系统，故障排除后，重新启动空调系统")},
{0x9217,QObject::trUtf8("2-1压缩机低压故障"),QObject::trUtf8("制冷系统管路压力过低"),QObject::trUtf8("检查制冷系统，故障排除后，重新启动空调系统")},
{0x9218,QObject::trUtf8("2-1压缩机排气温度故障"),QObject::trUtf8("压缩机排气温度过高"),QObject::trUtf8("检查制冷系统，故障排除后，重新启动空调系统")},
{0x9219,QObject::trUtf8("2-1压缩机过载故障"),QObject::trUtf8("电机电流超限，压缩机热继电器动作"),QObject::trUtf8("检查压缩机，故障排除后，重新启动空调系统")},
{0x9220,QObject::trUtf8("2-2通风机过载故障"),QObject::trUtf8("电机电流超限，通风机热继电器动作。"),QObject::trUtf8("检查通风机，故障排除后，手动复位热继电器，并重新启动空调系统")},
{0x9221,QObject::trUtf8("2-2冷凝风机过载故障"),QObject::trUtf8("电机电流超限，冷凝风机热继电器动作。"),QObject::trUtf8("检查冷凝风机，故障排除后，重新启动空调系统")},
{0x9222,QObject::trUtf8("2-2压缩机高压故障"),QObject::trUtf8("制冷系统管路压力过高"),QObject::trUtf8("检查制冷系统，故障排除后，重新启动空调系统")},
{0x9223,QObject::trUtf8("2-2压缩机低压故障"),QObject::trUtf8("制冷系统管路压力过低"),QObject::trUtf8("检查制冷系统，故障排除后，重新启动空调系统")},
{0x9224,QObject::trUtf8("2-2压缩机排气温度故障"),QObject::trUtf8("压缩机排气温度过高"),QObject::trUtf8("检查制冷系统，故障排除后，重新启动空调系统")},
{0x9225,QObject::trUtf8("2-2压缩机过载故障"),QObject::trUtf8("电机电流超限，压缩机热继电器动作"),QObject::trUtf8("检查压缩机，故障排除后，重新启动空调系统")},
{0x9226,QObject::trUtf8("机组1主回路断路器脱扣"),QObject::trUtf8("机组1主回路断路器跳闸"),QObject::trUtf8("如非人为操作，请检查空调主回路绝缘电阻，故障排除后，重新启动空调系统")},
{0x9227,QObject::trUtf8("机组2主回路断路器脱扣"),QObject::trUtf8("机组2主回路断路器跳闸"),QObject::trUtf8("如非人为操作，请检查空调主回路绝缘电阻，故障排除后，重新启动空调系统")},
{0x9228,QObject::trUtf8("客室电热断路器脱扣"),QObject::trUtf8("客室电热主回路断路器跳闸"),QObject::trUtf8("如非人为操作，请检查空调主回路绝缘电阻，故障排除后，重新启动空调系统")},
{0x9329,QObject::trUtf8("1-1送风传感器故障"),QObject::trUtf8("传感器温度超出正常的测量范围或接线短路、断路"),QObject::trUtf8("检查温度传感器接线及阻值，故障排除后，重新启动空调系统")},
{0x9330,QObject::trUtf8("1-2送风传感器故障"),QObject::trUtf8("传感器温度超出正常的测量范围或接线短路、断路"),QObject::trUtf8("检查温度传感器接线及阻值，故障排除后，重新启动空调系统")},
{0x9331,QObject::trUtf8("1号机组回风传感器故障（在车上）"),QObject::trUtf8("传感器温度超出正常的测量范围或接线短路、断路"),QObject::trUtf8("检查温度传感器接线及阻值，故障排除后，重新启动空调系统")},
{0x9332,QObject::trUtf8("1号机组新风传感器故障"),QObject::trUtf8("传感器温度超出正常的测量范围或接线短路、断路"),QObject::trUtf8("检查温度传感器接线及阻值，故障排除后，重新启动空调系统")},
{0x9333,QObject::trUtf8("2-1送风传感器故障"),QObject::trUtf8("传感器温度超出正常的测量范围或接线短路、断路"),QObject::trUtf8("检查温度传感器接线及阻值，故障排除后，重新启动空调系统")},
{0x9334,QObject::trUtf8("2-2送风传感器故障"),QObject::trUtf8("传感器温度超出正常的测量范围或接线短路、断路"),QObject::trUtf8("检查温度传感器接线及阻值，故障排除后，重新启动空调系统")},
{0x9335,QObject::trUtf8("2号机组回风传感器故障（在车上）"),QObject::trUtf8("传感器温度超出正常的测量范围或接线短路、断路"),QObject::trUtf8("检查温度传感器接线及阻值，故障排除后，重新启动空调系统")},
{0x9336,QObject::trUtf8("2号机组新风传感器故障"),QObject::trUtf8("传感器温度超出正常的测量范围或接线短路、断路"),QObject::trUtf8("检查温度传感器接线及阻值，故障排除后，重新启动空调系统")},
{0x9337,QObject::trUtf8("1-1新风阀故障"),QObject::trUtf8("风阀没有打开/关闭到正确位置"),QObject::trUtf8("检查阀体机械结构及电气接线，故障排除后，重新启动空调系统")},
{0x9338,QObject::trUtf8("1-2新风阀故障"),QObject::trUtf8("风阀没有打开/关闭到正确位置"),QObject::trUtf8("检查阀体机械结构及电气接线，故障排除后，重新启动空调系统")},
{0x9339,QObject::trUtf8("1-1回风阀故障"),QObject::trUtf8("风阀没有打开/关闭到正确位置"),QObject::trUtf8("检查阀体机械结构及电气接线，故障排除后，重新启动空调系统")},
{0x9340,QObject::trUtf8("1-2回风阀故障"),QObject::trUtf8("风阀没有打开/关闭到正确位置"),QObject::trUtf8("检查阀体机械结构及电气接线，故障排除后，重新启动空调系统")},
{0x9341,QObject::trUtf8("2-1新风阀故障"),QObject::trUtf8("风阀没有打开/关闭到正确位置"),QObject::trUtf8("检查阀体机械结构及电气接线，故障排除后，重新启动空调系统")},
{0x9342,QObject::trUtf8("2-2新风阀故障"),QObject::trUtf8("风阀没有打开/关闭到正确位置"),QObject::trUtf8("检查阀体机械结构及电气接线，故障排除后，重新启动空调系统")},
{0x9343,QObject::trUtf8("2-1回风阀故障"),QObject::trUtf8("风阀没有打开/关闭到正确位置"),QObject::trUtf8("检查阀体机械结构及电气接线，故障排除后，重新启动空调系统")},
{0x9344,QObject::trUtf8("2-2回风阀故障"),QObject::trUtf8("风阀没有打开/关闭到正确位置"),QObject::trUtf8("检查阀体机械结构及电气接线，故障排除后，重新启动空调系统")},

//ATC
{0xA201,QObject::trUtf8("ATC设备不可用"),QObject::trUtf8("ATC设备故障，不具备运营功能"),QObject::trUtf8("重启ATC设备")},
{0xA302,QObject::trUtf8("ATC设备部分可用"),QObject::trUtf8("ATC设备部分故障，但不影响列车运营"),QObject::trUtf8("仅作为提示")},

//PIS M/S
{0xB101,QObject::trUtf8("ACSU1通信故障"),QObject::trUtf8("TC1广播主机通信故障"),QObject::trUtf8("检查广播主机各模块，检查列车总线，电源复位")},
{0xB102,QObject::trUtf8("ACSU2通信故障"),QObject::trUtf8("TC2广播主机通信故障"),QObject::trUtf8("检查广播主机各模块，检查列车总线，电源复位")},
{0xB203,QObject::trUtf8("PACU1通信故障"),QObject::trUtf8("客室1广播分机通信故障"),QObject::trUtf8("检查列车总线，电源复位")},
{0xB204,QObject::trUtf8("PACU2通信故障"),QObject::trUtf8("客室2广播分机通信故障"),QObject::trUtf8("检查列车总线，电源复位")},
{0xB205,QObject::trUtf8("PACU3通信故障"),QObject::trUtf8("客室3广播分机通信故障"),QObject::trUtf8("检查列车总线，电源复位")},
{0xB206,QObject::trUtf8("PACU4通信故障"),QObject::trUtf8("客室4广播分机通信故障"),QObject::trUtf8("检查列车总线，电源复位")},
{0xB207,QObject::trUtf8("PACU5通信故障"),QObject::trUtf8("客室5广播分机通信故障"),QObject::trUtf8("检查列车总线，电源复位")},
{0xB208,QObject::trUtf8("PACU6通信故障"),QObject::trUtf8("客室6广播分机通信故障"),QObject::trUtf8("检查列车总线，电源复位")},
{0xB309,QObject::trUtf8("PECU11通信故障"),QObject::trUtf8("客室1乘客紧急通话器1通信故障"),QObject::trUtf8("检查客室总线，电源复位")},
{0xB310,QObject::trUtf8("PECU12通信故障"),QObject::trUtf8("客室1乘客紧急通话器2通信故障"),QObject::trUtf8("检查客室总线，电源复位")},
{0xB311,QObject::trUtf8("PECU21通信故障"),QObject::trUtf8("客室2乘客紧急通话器1通信故障"),QObject::trUtf8("检查客室总线，电源复位")},
{0xB312,QObject::trUtf8("PECU22通信故障"),QObject::trUtf8("客室2乘客紧急通话器2通信故障"),QObject::trUtf8("检查客室总线，电源复位")},
{0xB313,QObject::trUtf8("PECU31通信故障"),QObject::trUtf8("客室3乘客紧急通话器1通信故障"),QObject::trUtf8("检查客室总线，电源复位")},
{0xB314,QObject::trUtf8("PECU32通信故障"),QObject::trUtf8("客室3乘客紧急通话器2通信故障"),QObject::trUtf8("检查客室总线，电源复位")},
{0xB315,QObject::trUtf8("PECU41通信故障"),QObject::trUtf8("客室4乘客紧急通话器1通信故障"),QObject::trUtf8("检查客室总线，电源复位")},
{0xB316,QObject::trUtf8("PECU42通信故障"),QObject::trUtf8("客室4乘客紧急通话器2通信故障"),QObject::trUtf8("检查客室总线，电源复位")},
{0xB317,QObject::trUtf8("PECU51通信故障"),QObject::trUtf8("客室5乘客紧急通话器1通信故障"),QObject::trUtf8("检查客室总线，电源复位")},
{0xB318,QObject::trUtf8("PECU52通信故障"),QObject::trUtf8("客室5乘客紧急通话器2通信故障"),QObject::trUtf8("检查客室总线，电源复位")},
{0xB319,QObject::trUtf8("PECU61通信故障"),QObject::trUtf8("客室6乘客紧急通话器1通信故障"),QObject::trUtf8("检查客室总线，电源复位")},
{0xB320,QObject::trUtf8("PECU62通信故障"),QObject::trUtf8("客室6乘客紧急通话器2通信故障"),QObject::trUtf8("检查客室总线，电源复位")},

//EDCU
{0x8101,QObject::trUtf8("本节车2个主门控器EDCU均故障"),QObject::trUtf8("请检查：1、相应的门控器是否带电；2、通信插头连接是否正确牢固；3、相应门地址设置是否正确"),QObject::trUtf8("1级故障，列车在最近一站停靠、疏散乘客，空车返回基地。")},
{0x8302,QObject::trUtf8("主门控器为部分主或主门控器故障"),QObject::trUtf8("请检查1、相应的门控器是否带电；2、通信插头连接正确牢固；3相应门地址设置是否正确"),QObject::trUtf8("隔离并断电此门，3级故障")},
{0x8303,QObject::trUtf8("1门紧急解锁"),QObject::trUtf8("如乘客误操作，需立刻处理"),QObject::trUtf8("如乘客误操作，需立刻处理")},
{0x8304,QObject::trUtf8("1门电机开路"),QObject::trUtf8("请检查电机和其线是否连接牢固"),QObject::trUtf8("请隔离此门")},
{0x8305,QObject::trUtf8("1门电机过流"),QObject::trUtf8("请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞"),QObject::trUtf8("请隔离此门")},
{0x8306,QObject::trUtf8("1门板开关故障"),QObject::trUtf8("请检查门板开关"),QObject::trUtf8("请隔离此门")},
{0x8307,QObject::trUtf8("1门锁闭开关故障"),QObject::trUtf8("请检查锁闭开关"),QObject::trUtf8("请隔离此门")},
{0x8308,QObject::trUtf8("1门电磁铁故障"),QObject::trUtf8("请检查电磁铁和其接线"),QObject::trUtf8("请隔离此门")},
{0x8309,QObject::trUtf8("1门编码器故障"),QObject::trUtf8("请检查编码器和其接线"),QObject::trUtf8("请隔离此门")},
{0x830A,QObject::trUtf8("1门开关门超时"),QObject::trUtf8("请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x830B,QObject::trUtf8("1门输出短路"),QObject::trUtf8("请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；3、蜂鸣器和其接线是否有故障"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x830C,QObject::trUtf8("1门绿色环线故障"),QObject::trUtf8("请检查：绿色环线是否有故障"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x830D,QObject::trUtf8("2门紧急解锁"),QObject::trUtf8("如乘客误操作，需立刻处理"),QObject::trUtf8("如乘客误操作，需立刻处理")},
{0x830E,QObject::trUtf8("2门电机开路"),QObject::trUtf8("请检查电机和其线是否连接牢固"),QObject::trUtf8("请隔离此门")},
{0x830F,QObject::trUtf8("2门电机过流"),QObject::trUtf8("请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞"),QObject::trUtf8("请隔离此门")},
{0x8310,QObject::trUtf8("2门板开关故障"),QObject::trUtf8("请检查门板开关"),QObject::trUtf8("请隔离此门")},
{0x8311,QObject::trUtf8("2门锁闭开关故障"),QObject::trUtf8("请检查锁闭开关"),QObject::trUtf8("请隔离此门")},
{0x8312,QObject::trUtf8("2门电磁铁故障"),QObject::trUtf8("请检查电磁铁和其接线"),QObject::trUtf8("请隔离此门")},
{0x8313,QObject::trUtf8("2门编码器故障"),QObject::trUtf8("请检查编码器和其接线"),QObject::trUtf8("请隔离此门")},
{0x8314,QObject::trUtf8("2门开关门超时"),QObject::trUtf8("请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x8315,QObject::trUtf8("2门输出短路"),QObject::trUtf8("请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；3、蜂鸣器和其接线是否有故障"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x8316,QObject::trUtf8("2门绿色环线故障"),QObject::trUtf8("请检查：绿色环线是否有故障"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x8317,QObject::trUtf8("3门紧急解锁"),QObject::trUtf8("如乘客误操作，需立刻处理"),QObject::trUtf8("如乘客误操作，需立刻处理")},
{0x8318,QObject::trUtf8("3门电机开路"),QObject::trUtf8("请检查电机和其线是否连接牢固"),QObject::trUtf8("请隔离此门")},
{0x8319,QObject::trUtf8("3门电机过流"),QObject::trUtf8("请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞"),QObject::trUtf8("请隔离此门")},
{0x831A,QObject::trUtf8("3门板开关故障"),QObject::trUtf8("请检查门板开关"),QObject::trUtf8("请隔离此门")},
{0x831B,QObject::trUtf8("3门锁闭开关故障"),QObject::trUtf8("请检查锁闭开关"),QObject::trUtf8("请隔离此门")},
{0x831C,QObject::trUtf8("3门电磁铁故障"),QObject::trUtf8("请检查电磁铁和其接线"),QObject::trUtf8("请隔离此门")},
{0x831D,QObject::trUtf8("3门编码器故障"),QObject::trUtf8("请检查编码器和其接线"),QObject::trUtf8("请隔离此门")},
{0x831E,QObject::trUtf8("3门开关门超时"),QObject::trUtf8("请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x831F,QObject::trUtf8("3门输出短路"),QObject::trUtf8("请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；3、蜂鸣器和其接线是否有故障"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x8320,QObject::trUtf8("3门绿色环线故障"),QObject::trUtf8("请检查：绿色环线是否有故障"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x8321,QObject::trUtf8("4门紧急解锁"),QObject::trUtf8("如乘客误操作，需立刻处理"),QObject::trUtf8("如乘客误操作，需立刻处理")},
{0x8322,QObject::trUtf8("4门电机开路"),QObject::trUtf8("请检查电机和其线是否连接牢固"),QObject::trUtf8("请隔离此门")},
{0x8323,QObject::trUtf8("4门电机过流"),QObject::trUtf8("请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞"),QObject::trUtf8("请隔离此门")},
{0x8324,QObject::trUtf8("4门板开关故障"),QObject::trUtf8("请检查门板开关"),QObject::trUtf8("请隔离此门")},
{0x8325,QObject::trUtf8("4门锁闭开关故障"),QObject::trUtf8("请检查锁闭开关"),QObject::trUtf8("请隔离此门")},
{0x8326,QObject::trUtf8("4门电磁铁故障"),QObject::trUtf8("请检查电磁铁和其接线"),QObject::trUtf8("请隔离此门")},
{0x8327,QObject::trUtf8("4门编码器故障"),QObject::trUtf8("请检查编码器和其接线"),QObject::trUtf8("请隔离此门")},
{0x8328,QObject::trUtf8("4门开关门超时"),QObject::trUtf8("请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x8329,QObject::trUtf8("4门输出短路"),QObject::trUtf8("请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；3、蜂鸣器和其接线是否有故障"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x832A,QObject::trUtf8("4门绿色环线故障"),QObject::trUtf8("请检查：绿色环线是否有故障"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x832B,QObject::trUtf8("5门紧急解锁"),QObject::trUtf8("如乘客误操作，需立刻处理"),QObject::trUtf8("如乘客误操作，需立刻处理")},
{0x832C,QObject::trUtf8("5门电机开路"),QObject::trUtf8("请检查电机和其线是否连接牢固"),QObject::trUtf8("请隔离此门")},
{0x832D,QObject::trUtf8("5门电机过流"),QObject::trUtf8("请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞"),QObject::trUtf8("请隔离此门")},
{0x832E,QObject::trUtf8("5门板开关故障"),QObject::trUtf8("请检查门板开关"),QObject::trUtf8("请隔离此门")},
{0x832F,QObject::trUtf8("5门锁闭开关故障"),QObject::trUtf8("请检查锁闭开关"),QObject::trUtf8("请隔离此门")},
{0x8330,QObject::trUtf8("5门电磁铁故障"),QObject::trUtf8("请检查电磁铁和其接线"),QObject::trUtf8("请隔离此门")},
{0x8331,QObject::trUtf8("5门编码器故障"),QObject::trUtf8("请检查编码器和其接线"),QObject::trUtf8("请隔离此门")},
{0x8332,QObject::trUtf8("5门开关门超时"),QObject::trUtf8("请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x8333,QObject::trUtf8("5门输出短路"),QObject::trUtf8("请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；3、蜂鸣器和其接线是否有故障"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x8334,QObject::trUtf8("5门绿色环线故障"),QObject::trUtf8("请检查：绿色环线是否有故障"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x8335,QObject::trUtf8("6门紧急解锁"),QObject::trUtf8("如乘客误操作，需立刻处理"),QObject::trUtf8("如乘客误操作，需立刻处理")},
{0x8336,QObject::trUtf8("6门电机开路"),QObject::trUtf8("请检查电机和其线是否连接牢固"),QObject::trUtf8("请隔离此门")},
{0x8337,QObject::trUtf8("6门电机过流"),QObject::trUtf8("请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞"),QObject::trUtf8("请隔离此门")},
{0x8338,QObject::trUtf8("6门板开关故障"),QObject::trUtf8("请检查门板开关"),QObject::trUtf8("请隔离此门")},
{0x8339,QObject::trUtf8("6门锁闭开关故障"),QObject::trUtf8("请检查锁闭开关"),QObject::trUtf8("请隔离此门")},
{0x833A,QObject::trUtf8("6门电磁铁故障"),QObject::trUtf8("请检查电磁铁和其接线"),QObject::trUtf8("请隔离此门")},
{0x833B,QObject::trUtf8("6门编码器故障"),QObject::trUtf8("请检查编码器和其接线"),QObject::trUtf8("请隔离此门")},
{0x833C,QObject::trUtf8("6门开关门超时"),QObject::trUtf8("请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x833D,QObject::trUtf8("6门输出短路"),QObject::trUtf8("请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；3、蜂鸣器和其接线是否有故障"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x833E,QObject::trUtf8("6门绿色环线故障"),QObject::trUtf8("请检查：绿色环线是否有故障"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x833F,QObject::trUtf8("7门紧急解锁"),QObject::trUtf8("如乘客误操作，需立刻处理"),QObject::trUtf8("如乘客误操作，需立刻处理")},
{0x8340,QObject::trUtf8("7门电机开路"),QObject::trUtf8("请检查电机和其线是否连接牢固"),QObject::trUtf8("请隔离此门")},
{0x8341,QObject::trUtf8("7门电机过流"),QObject::trUtf8("请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞"),QObject::trUtf8("请隔离此门")},
{0x8342,QObject::trUtf8("7门板开关故障"),QObject::trUtf8("请检查门板开关"),QObject::trUtf8("请隔离此门")},
{0x8343,QObject::trUtf8("7门锁闭开关故障"),QObject::trUtf8("请检查锁闭开关"),QObject::trUtf8("请隔离此门")},
{0x8344,QObject::trUtf8("7门电磁铁故障"),QObject::trUtf8("请检查电磁铁和其接线"),QObject::trUtf8("请隔离此门")},
{0x8345,QObject::trUtf8("7门编码器故障"),QObject::trUtf8("请检查编码器和其接线"),QObject::trUtf8("请隔离此门")},
{0x8346,QObject::trUtf8("7门开关门超时"),QObject::trUtf8("请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x8347,QObject::trUtf8("7门输出短路"),QObject::trUtf8("请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；3、蜂鸣器和其接线是否有故障"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x8348,QObject::trUtf8("7门绿色环线故障"),QObject::trUtf8("请检查：绿色环线是否有故障"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x8349,QObject::trUtf8("8门紧急解锁"),QObject::trUtf8("如乘客误操作，需立刻处理"),QObject::trUtf8("如乘客误操作，需立刻处理")},
{0x834A,QObject::trUtf8("8门电机开路"),QObject::trUtf8("请检查电机和其线是否连接牢固"),QObject::trUtf8("请隔离此门")},
{0x834B,QObject::trUtf8("8门电机过流"),QObject::trUtf8("请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞"),QObject::trUtf8("请隔离此门")},
{0x834C,QObject::trUtf8("8门板开关故障"),QObject::trUtf8("请检查门板开关"),QObject::trUtf8("请隔离此门")},
{0x834D,QObject::trUtf8("8门锁闭开关故障"),QObject::trUtf8("请检查锁闭开关"),QObject::trUtf8("请隔离此门")},
{0x834E,QObject::trUtf8("8门电磁铁故障"),QObject::trUtf8("请检查电磁铁和其接线"),QObject::trUtf8("请隔离此门")},
{0x834F,QObject::trUtf8("8门编码器故障"),QObject::trUtf8("请检查编码器和其接线"),QObject::trUtf8("请隔离此门")},
{0x8350,QObject::trUtf8("8门开关门超时"),QObject::trUtf8("请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x8351,QObject::trUtf8("8门输出短路"),QObject::trUtf8("请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；3、蜂鸣器和其接线是否有故障"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x8352,QObject::trUtf8("8门绿色环线故障"),QObject::trUtf8("请检查：绿色环线是否有故障"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x8353,QObject::trUtf8("9门紧急解锁"),QObject::trUtf8("如乘客误操作，需立刻处理"),QObject::trUtf8("如乘客误操作，需立刻处理")},
{0x8354,QObject::trUtf8("9门电机开路"),QObject::trUtf8("请检查电机和其线是否连接牢固"),QObject::trUtf8("请隔离此门")},
{0x8355,QObject::trUtf8("9门电机过流"),QObject::trUtf8("请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞"),QObject::trUtf8("请隔离此门")},
{0x8356,QObject::trUtf8("9门板开关故障"),QObject::trUtf8("请检查门板开关"),QObject::trUtf8("请隔离此门")},
{0x8357,QObject::trUtf8("9门锁闭开关故障"),QObject::trUtf8("请检查锁闭开关"),QObject::trUtf8("请隔离此门")},
{0x8358,QObject::trUtf8("9门电磁铁故障"),QObject::trUtf8("请检查电磁铁和其接线"),QObject::trUtf8("请隔离此门")},
{0x8359,QObject::trUtf8("9门编码器故障"),QObject::trUtf8("请检查编码器和其接线"),QObject::trUtf8("请隔离此门")},
{0x835A,QObject::trUtf8("9门开关门超时"),QObject::trUtf8("请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x835B,QObject::trUtf8("9门输出短路"),QObject::trUtf8("请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；3、蜂鸣器和其接线是否有故障"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x835C,QObject::trUtf8("9门绿色环线故障"),QObject::trUtf8("请检查：绿色环线是否有故障"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x835D,QObject::trUtf8("10门紧急解锁"),QObject::trUtf8("如乘客误操作，需立刻处理"),QObject::trUtf8("如乘客误操作，需立刻处理")},
{0x835E,QObject::trUtf8("10门电机开路"),QObject::trUtf8("请检查电机和其线是否连接牢固"),QObject::trUtf8("请隔离此门")},
{0x835F,QObject::trUtf8("10门电机过流"),QObject::trUtf8("请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞"),QObject::trUtf8("请隔离此门")},
{0x8360,QObject::trUtf8("10门板开关故障"),QObject::trUtf8("请检查门板开关"),QObject::trUtf8("请隔离此门")},
{0x8361,QObject::trUtf8("10门锁闭开关故障"),QObject::trUtf8("请检查锁闭开关"),QObject::trUtf8("请隔离此门")},
{0x8362,QObject::trUtf8("10门电磁铁故障"),QObject::trUtf8("请检查电磁铁和其接线"),QObject::trUtf8("请隔离此门")},
{0x8363,QObject::trUtf8("10门编码器故障"),QObject::trUtf8("请检查编码器和其接线"),QObject::trUtf8("请隔离此门")},
{0x8364,QObject::trUtf8("10门开关门超时"),QObject::trUtf8("请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x8365,QObject::trUtf8("10门输出短路"),QObject::trUtf8("请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；3、蜂鸣器和其接线是否有故障"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},
{0x8366,QObject::trUtf8("10门绿色环线故障"),QObject::trUtf8("请检查：绿色环线是否有故障"),QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门")},

//REC
{0xD201,QObject::trUtf8("整流装置切除"),QObject::trUtf8("整流装置因故障或手动切除"),QObject::trUtf8("若因故障切除请回段检查故障")},
{0xD202,QObject::trUtf8("输入快熔故障"),QObject::trUtf8("整流装置输入快熔FU1反馈断开"),QObject::trUtf8("1、更换FUSE2  2、检查FUSE2辅助触点的接线  3、更换信号板")},
{0xD303,QObject::trUtf8("充电接触器故障"),QObject::trUtf8("充电接触器无法跳开或闭合"),QObject::trUtf8("1、更换输入二极管或快熔 2、检查KM2控制电源线  3、更换母线电压传感器TV2")},
{0xD304,QObject::trUtf8("未启动下主接触器故障"),QObject::trUtf8("主接触器无法闭合"),QObject::trUtf8("1、检查控制线、反馈线  2、更换信号板")},
{0xD305,QObject::trUtf8("母线欠压"),QObject::trUtf8("TV2检测值低于开关要求"),QObject::trUtf8("1、 外部因素  2、 更换车辆上辅助输入快熔  3、 更换输入二极管D1 4、更换电网电压传感器TV1")},
{0xD306,QObject::trUtf8("母线过压"),QObject::trUtf8("TV2检测值高于开关要求"),QObject::trUtf8("1、 外部因素  2、 更换信号板  3、 更换电压传感器TV2")},
{0xD307,QObject::trUtf8("母线过压（硬件）"),QObject::trUtf8("TV2检测值高于开关要求"),QObject::trUtf8("1、 外部因素  2、 更换信号板  3、 更换电压传感器TV2")},
{0xD308,QObject::trUtf8("网压过压"),QObject::trUtf8("TV1检测值高于启动要求"),QObject::trUtf8("1、 外部因素  2、 更换信号板  3、 更换电压传感器TV1")},
{0xD309,QObject::trUtf8("输出电压传感器故障"),QObject::trUtf8("发脉冲后TV3检测不到电压"),QObject::trUtf8("1、 更换电压传感器TV3  2、 更换信号板  ")},
{0xD310,QObject::trUtf8("充电电流传感器故障"),QObject::trUtf8("长时间内检测不到充放电电流"),QObject::trUtf8("1、 更换电流传感器TA2  2、 更换信号板 ")},
{0xD311,QObject::trUtf8("整流装置过温"),QObject::trUtf8("功率模块温度继电器跳开"),QObject::trUtf8("1、可自动恢复，但需确认风道是否堵塞，风量是否满足冷却要求；如果温度冷却后故障依然无法清楚，检查接线是否断开，更换温度继电器")},
{0xD312,QObject::trUtf8("驱动故障（总）"),QObject::trUtf8("驱动板反馈驱动故障"),QObject::trUtf8("1、重启后恢复；2、驱动板自身故障")},
{0xD313,QObject::trUtf8("网压欠压（不传）"),QObject::trUtf8("TV1检测值低于启动要求"),QObject::trUtf8("1、 外部因素  2、 更换信号板  3、 更换电压传感器TV1")},
{0xD314,QObject::trUtf8("蓄电池传感器故障"),QObject::trUtf8("蓄电池温度检测值超过合理值"),QObject::trUtf8("1、更换蓄电池温度传感器；2、更换信号板")},
{0xD315,QObject::trUtf8("原边过流"),QObject::trUtf8("TA1超过设定值"),QObject::trUtf8("重启后可以恢复")},
{0xD316,QObject::trUtf8("原边过流（硬件）"),QObject::trUtf8("TA1超过设定值"),QObject::trUtf8("重启后可以恢复")},
{0xD317,QObject::trUtf8("充电过流"),QObject::trUtf8("TA2超过设定值"),QObject::trUtf8("1、确认充电电流保护值设置正确；2、更换信号板或电流传感器")},
{0xD318,QObject::trUtf8("总电流过流"),QObject::trUtf8("TA2和TA3的和值超过设定值"),QObject::trUtf8("1、确认充电电流保护值设置正确；2、 更换信号板或电流传感器")},
{0xD319,QObject::trUtf8("输出过压"),QObject::trUtf8("TV3检测值高于设定值"),QObject::trUtf8("1、重启后可以恢复；2、确认输出电压保护值设置正确；3、更换信号板  ")},
{0xD320,QObject::trUtf8("输出过压（硬件）"),QObject::trUtf8("TV3检测值高于设定值"),QObject::trUtf8("1、重启后可以恢复； 2、 更换信号板")},
{0xD321,QObject::trUtf8("蓄电池过温"),QObject::trUtf8("蓄电池温度检测值超过设定值"),QObject::trUtf8("1、可自动恢复，但需确认风道是否堵塞，风量是否满足冷却要求；如果温度冷却后故障依然无法清楚，检查接线是否断开，更换温度传感器或信号板")},
{0xD322,QObject::trUtf8("输出短路"),QObject::trUtf8("启动时发生输出短路"),QObject::trUtf8("三次之内，自动恢复；超过三次，需要重启恢复")},
{0xD323,QObject::trUtf8("Can通讯故障"),QObject::trUtf8("检测不到网络生命信号"),QObject::trUtf8("1、确认IDU屏幕上对应的整流装置网关是否变红。变红确认故障。检查网关对外接线或更换网关。2、CANC线确认DB9接头无松动、无缩针；3、更换信号板或网关；")},
{0xD324,QObject::trUtf8("负载过流（硬件）"),QObject::trUtf8("TA3检测值超过设定值"),QObject::trUtf8("三次之内，自动恢复；超过三次，需要重启恢复")},
{0xD325,QObject::trUtf8("散热器过温（软件）"),QObject::trUtf8("散热器热偶检测超过设定值"),QObject::trUtf8("1、可自动恢复，但需确认风道是否堵塞，风量是否满足冷却要求；如果温度冷却后故障依然无法清楚，检查接线是否断开，更换温度传感器或信号板")},
{0xD326,QObject::trUtf8("驱动故障反馈1"),QObject::trUtf8("驱动板反馈驱动故障"),QObject::trUtf8("1、重启后恢复；2、驱动板自身故障")},
{0xD327,QObject::trUtf8("驱动故障反馈2"),QObject::trUtf8("驱动板反馈驱动故障"),QObject::trUtf8("1、重启后恢复；2、驱动板自身故障")},
{0xD328,QObject::trUtf8("驱动故障反馈3"),QObject::trUtf8("驱动板反馈驱动故障"),QObject::trUtf8("1、重启后恢复；2、驱动板自身故障")},
{0xD329,QObject::trUtf8("驱动故障反馈4"),QObject::trUtf8("驱动板反馈驱动故障"),QObject::trUtf8("1、重启后恢复；2、驱动板自身故障")},


{0xE401,QObject::trUtf8("火灾报警"),QObject::trUtf8("本车有火灾报警"),QObject::trUtf8("")},
{0xE402,QObject::trUtf8("司机室门旁路"),QObject::trUtf8("旁路开关闭合"),QObject::trUtf8("")},
{0xE403,QObject::trUtf8("车钩监视旁路"),QObject::trUtf8("旁路开关闭合"),QObject::trUtf8("")},
{0xE404,QObject::trUtf8("允许升弓旁路"),QObject::trUtf8("旁路开关闭合"),QObject::trUtf8("")},
{0xE405,QObject::trUtf8("扩展供电请求"),QObject::trUtf8("用于扩展供电，高电平有效，当该为高电平时TCMS集控空调减载，减载完成后输出扩展供电允许信号"),QObject::trUtf8("")},
{0xE406,QObject::trUtf8("500kPa命令"),QObject::trUtf8("用于运输时的制动控制。运输装置发出了500KPa命令。"),QObject::trUtf8("")},
{0xE407,QObject::trUtf8("总风压力可用旁路"),QObject::trUtf8("旁路开关闭合"),QObject::trUtf8("")},
{0xE408,QObject::trUtf8("强迫泵风"),QObject::trUtf8("给出强迫泵风命令"),QObject::trUtf8("")},
{0xE409,QObject::trUtf8("电池欠压"),QObject::trUtf8("本端蓄电池欠压"),QObject::trUtf8("")},
{0xE410,QObject::trUtf8("所有制动缓解旁路"),QObject::trUtf8("旁路开关闭合"),QObject::trUtf8("")},
{0xE411,QObject::trUtf8("停放制动旁路"),QObject::trUtf8("旁路开关闭合"),QObject::trUtf8("")},
{0xE412,QObject::trUtf8("门关好旁路"),QObject::trUtf8("旁路开关闭合"),QObject::trUtf8("")},
{0xE413,QObject::trUtf8("警惕旁路"),QObject::trUtf8("旁路开关闭合"),QObject::trUtf8("")},
{0xE415,QObject::trUtf8("Tc车摩擦制动2切除"),QObject::trUtf8("0表示切除"),QObject::trUtf8("")},
{0xE416,QObject::trUtf8("Tc车摩擦制动1切除"),QObject::trUtf8("0表示切除"),QObject::trUtf8("")},
{0xE417,QObject::trUtf8("RM模式（限制人工模式-信号限速25km/h）"),QObject::trUtf8("用于运输时的制动控制。运输装置发出了500KPa命令。"),QObject::trUtf8("")},
{0xE414,QObject::trUtf8("摩擦制动切除"),QObject::trUtf8("0表示切除"),QObject::trUtf8("")},
{0xE418,QObject::trUtf8("ATC切除"),QObject::trUtf8("高电平表示ATC切除"),QObject::trUtf8("")},
{0xE419,QObject::trUtf8("刀开关库用位"),QObject::trUtf8("1表示列车所有刀开关在“库用”位。库用且供电时，HMI上有图标提示司机。"),QObject::trUtf8("")},
{0xE420,QObject::trUtf8("本弓隔离"),QObject::trUtf8("旁路开关闭合"),QObject::trUtf8("")},
{0xE421,QObject::trUtf8("脚踏泵隔离"),QObject::trUtf8("0代表隔离"),QObject::trUtf8("")},
{0xE422,QObject::trUtf8("Mp车摩擦制动2切除"),QObject::trUtf8("0表示切除"),QObject::trUtf8("")},
{0xE423,QObject::trUtf8("Mp车摩擦制动1切除"),QObject::trUtf8("0表示切除"),QObject::trUtf8("")},
{0xE424,QObject::trUtf8("总风压力低"),QObject::trUtf8("总风压力低"),QObject::trUtf8("")},
{0xE426,QObject::trUtf8("M车摩擦制动2切除"),QObject::trUtf8("1：表示扩展供电接触器已闭合"),QObject::trUtf8("")},
{0xE427,QObject::trUtf8("M车摩擦制动1切除"),QObject::trUtf8("0表示切除"),QObject::trUtf8("")},
{0xE425,QObject::trUtf8("扩展供电已闭合状态"),QObject::trUtf8("0表示切除"),QObject::trUtf8("")},
{0xE428,QObject::trUtf8("空压机持续工作超过20分钟"),QObject::trUtf8("空压机持续工作超过20分钟"),QObject::trUtf8("")},
{0xE429,QObject::trUtf8("BCU自检失败"),QObject::trUtf8("BCU自检失败"),QObject::trUtf8("")},

{0xE430,QObject::trUtf8("转向架1Bsr低"),QObject::trUtf8("0 = 正常 1 = Bsr低"),QObject::trUtf8("")},
{0xE431,QObject::trUtf8("转向架2Bsr低"),QObject::trUtf8("0 = 正常 1 = Bsr低"),QObject::trUtf8("")},
{0xE432,QObject::trUtf8("紧急制动1:列车启动70m以内时，车门打开"),QObject::trUtf8("列车启动70m以内时，车门打开"),QObject::trUtf8("")},
{0xE433,QObject::trUtf8("紧急制动2:在列车运行过程中，速度大于1.5km/h，转换方向"),QObject::trUtf8("在列车运行过程中，速度大于1.5km/h，转换方向"),QObject::trUtf8("")},
{0xE434,QObject::trUtf8("紧急制动3:任意一端的紧急停车按钮动作"),QObject::trUtf8("任意一端的紧急停车按钮动作"),QObject::trUtf8("")},
{0xE435,QObject::trUtf8("紧急制动4:警惕按钮计时器 3s后紧急制动"),QObject::trUtf8("警惕按钮计时器 3s后紧急制动"),QObject::trUtf8("")},
{0xE436,QObject::trUtf8("主风管压力低"),QObject::trUtf8("0 = 压力正常 1 = 压力低"),QObject::trUtf8("")},
{0xE437,QObject::trUtf8("转向架1隔离"),QObject::trUtf8("0 = 未隔离 1 = 隔离"),QObject::trUtf8("")},
{0xE438,QObject::trUtf8("转向架2隔离"),QObject::trUtf8("0 = 未隔离 1 = 隔离"),QObject::trUtf8("")},
{0xE439,QObject::trUtf8("紧急制动5:速度超过85km/h时紧急制动"),QObject::trUtf8("速度超过85km/h时紧急制动"),QObject::trUtf8("")},
{0xE440,QObject::trUtf8("紧急制动6:停放缓解旁路运行距离超过2000m"),QObject::trUtf8("停放缓解旁路运行距离超过2000m"),QObject::trUtf8("")},
{0xE441,QObject::trUtf8("紧急制动7:气制动缓解旁路运行距离超过2000m"),QObject::trUtf8("气制动缓解旁路运行距离超过2000m"),QObject::trUtf8("")},
{0xE442,QObject::trUtf8("紧急制动8:超过当前限速值5km/h"),QObject::trUtf8("超过当前限速值5km/h"),QObject::trUtf8("")},
{0xE443,QObject::trUtf8("自检间断测超过24小时"),QObject::trUtf8("1 = 自检时间超过24小时"),QObject::trUtf8("")},
{0xE444,QObject::trUtf8("自检时间间隔超过26小时"),QObject::trUtf8("1 = 超过26小时"),QObject::trUtf8("")},
{0xE445,QObject::trUtf8("EMR(紧急模式)"),QObject::trUtf8(""),QObject::trUtf8("")},
{0xE446,QObject::trUtf8("ACU停止运行"),QObject::trUtf8("辅助设备停止运行"),QObject::trUtf8("")},
//{0xE447,QObject::trUtf8("门1紧急解锁"),QObject::trUtf8(""),QObject::trUtf8("")},
//{0xE448,QObject::trUtf8("门2紧急解锁"),QObject::trUtf8(""),QObject::trUtf8("")},
//{0xE449,QObject::trUtf8("门3紧急解锁"),QObject::trUtf8(""),QObject::trUtf8("")},
//{0xE450,QObject::trUtf8("门4紧急解锁"),QObject::trUtf8(""),QObject::trUtf8("")},
//{0xE451,QObject::trUtf8("门5紧急解锁"),QObject::trUtf8(""),QObject::trUtf8("")},
//{0xE452,QObject::trUtf8("门6紧急解锁"),QObject::trUtf8(""),QObject::trUtf8("")},
//{0xE453,QObject::trUtf8("门7紧急解锁"),QObject::trUtf8(""),QObject::trUtf8("")},
//{0xE454,QObject::trUtf8("门8紧急解锁"),QObject::trUtf8(""),QObject::trUtf8("")},
//{0xE455,QObject::trUtf8("门9紧急解锁"),QObject::trUtf8(""),QObject::trUtf8("")},
//{0xE456,QObject::trUtf8("门10紧急解锁"),QObject::trUtf8(""),QObject::trUtf8("")},
{0xE457,QObject::trUtf8("门1隔离"),QObject::trUtf8(""),QObject::trUtf8("")},
{0xE458,QObject::trUtf8("门2隔离"),QObject::trUtf8(""),QObject::trUtf8("")},
{0xE459,QObject::trUtf8("门3隔离"),QObject::trUtf8(""),QObject::trUtf8("")},
{0xE460,QObject::trUtf8("门4隔离"),QObject::trUtf8(""),QObject::trUtf8("")},
{0xE461,QObject::trUtf8("门5隔离"),QObject::trUtf8(""),QObject::trUtf8("")},
{0xE462,QObject::trUtf8("门6隔离"),QObject::trUtf8(""),QObject::trUtf8("")},
{0xE463,QObject::trUtf8("门7隔离"),QObject::trUtf8(""),QObject::trUtf8("")},
{0xE464,QObject::trUtf8("门8隔离"),QObject::trUtf8(""),QObject::trUtf8("")},
{0xE465,QObject::trUtf8("门9隔离"),QObject::trUtf8(""),QObject::trUtf8("")},
{0xE466,QObject::trUtf8("门10隔离"),QObject::trUtf8(""),QObject::trUtf8("")},
{0xE467,QObject::trUtf8("受电弓升起"),QObject::trUtf8(""),QObject::trUtf8("")},
{0xE468,QObject::trUtf8("受电弓落弓"),QObject::trUtf8(""),QObject::trUtf8("")},
{0xE469,QObject::trUtf8("司机室1激活"),QObject::trUtf8(""),QObject::trUtf8("")},
{0xE470,QObject::trUtf8("司机室2激活"),QObject::trUtf8(""),QObject::trUtf8("")},
{0xE471,QObject::trUtf8("紧急停车按钮"),QObject::trUtf8("0=紧急制动"),QObject::trUtf8("")},
{0xE472,QObject::trUtf8("ATC切除"),QObject::trUtf8("1=切除"),QObject::trUtf8("")},
{0xE473,QObject::trUtf8("DCU切除"),QObject::trUtf8("1=切除"),QObject::trUtf8("")},
{0xE474,QObject::trUtf8("紧急牵引模式激活"),QObject::trUtf8("四个TCU有一个发1=激活"),QObject::trUtf8("")},
{0xE475,QObject::trUtf8("慢行模式激活"),QObject::trUtf8("1=激活"),QObject::trUtf8("")},
{0xE476,QObject::trUtf8("门零速旁路"),QObject::trUtf8("旁路开关闭合"),QObject::trUtf8("")},


};

int g_faultsInfoRomLen = sizeof(g_faultsinforom)/sizeof(ST_FAULT_INFO);

FAULTS_ROM_DATA g_faultsrom[]={




//    int code;
//    char level;
//    char pos;
//    int word;
//    int bit;
//    bool flg;
//    bool confirm;
//    bool confirm_flg;
//    E_FAULTS_CATEGORY category;
//    {0x1101,  1,  D_POS_A,1872,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1101,  1,  D_POS_F,1872,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0x1101,  1,  D_POS_A,   1872,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0x1102,  1,  D_POS_F,   1872,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1103,  1,  D_POS_B,   1872,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1104,  1,  D_POS_E,   1872,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1105,  1,  D_POS_C,   1872,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1106,  1,  D_POS_D,   1872,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1107,  1,  D_POS_A,  1872,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1108,  1,  D_POS_F,  1872,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1109,  1,  D_POS_B,  1872,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1110,  1,  D_POS_E,  1872,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1111,  1,  D_POS_C,  1872,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1112,  1,  D_POS_D,   1872,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1113,  1,  D_POS_A,   4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1114,  1,  D_POS_F,  52,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1115,  1,  D_POS_C,  53,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1116,  1,  D_POS_D,   4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1117,  1,  D_POS_A,   4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1118,  1,  D_POS_F,   4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1119,  1,  D_POS_A,  52,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1120,  1,  D_POS_A,  53,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1121,  1,  D_POS_F,  54,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1122,  1,  D_POS_A,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1123,  1,  D_POS_F,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    {0x1124,  1,  D_POS_A,   4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1125,  1,  D_POS_A,   4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1126,  1,  D_POS_B,   4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1127,  1,  D_POS_B,  52,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1128,  1,  D_POS_C,  53,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1129,  1,  D_POS_C,  54,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1130,  1,  D_POS_D,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1131,  1,  D_POS_D,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1132,  1,  D_POS_E,  54,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1133,  1,  D_POS_E,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1134,  1,  D_POS_F,   4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1135,  1,  D_POS_F,   4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1136,  1,  D_POS_A,   4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1137,  1,  D_POS_F,  52,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1138,  1,  D_POS_B,  53,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1139,  1,  D_POS_E,  54,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1140,  1,  D_POS_C,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1141,  1,  D_POS_D,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

{0x1142,  1,  D_POS_A,  54,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
{0x1143,  1,  D_POS_F,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
{0x1144,  1,  D_POS_A,  54,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
{0x1145,  1,  D_POS_F,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },




    //信号冗余故障
    {0x2101,  1,  D_POS_TRAIN, 256,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x2102,  1,  D_POS_TRAIN, 256,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x2104,  1,  D_POS_TRAIN, 256,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x2105,  1,  D_POS_TRAIN, 256,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x2106,  1,  D_POS_TRAIN, 256,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x2107,  1,  D_POS_TRAIN, 256,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x2108,  1,  D_POS_TRAIN, 256,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x2109,  1,  D_POS_TRAIN, 256,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    //{0x2110,  1,  D_POS_A, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    //{0x2110,  1,  D_POS_F, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
     //信号逻辑故障
    {0x3101,  1,  D_POS_TRAIN, 257,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x3102,  1,  D_POS_TRAIN, 257,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x3103,  1,  D_POS_TRAIN, 257,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x3104,  1,  D_POS_TRAIN, 257,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x3105,  1,  D_POS_TRAIN, 256,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x3206,  1,  D_POS_TRAIN, 256,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x3107,  1,  D_POS_TRAIN, 256,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x3108,  1,  D_POS_A,  4,     bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x3108,  1,  D_POS_F,  4,     bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x3109,  1,  D_POS_TRAIN, 257,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x3110,  1,  D_POS_TRAIN, 257,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x3111,  1,  D_POS_B, 1872,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x3112,  1,  D_POS_B, 1872,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x3111,  1,  D_POS_E, 1872,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x3112,  1,  D_POS_E, 1872,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x3113,  1,  D_POS_A, 1873,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x3113,  1,  D_POS_F, 1873,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x3214,  2,  D_POS_A,  4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },    //added by leo 20161025
    {0x3214,  2,  D_POS_F,  4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },    //added by leo 20161025
    {0x3215,  2,  D_POS_A,  4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },    //added by leo 20161025
    {0x3215,  2,  D_POS_B,  4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },    //added by leo 20161025
    {0x3215,  2,  D_POS_C,  4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },    //added by leo 20161025
    {0x3215,  2,  D_POS_D,  4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },    //added by leo 20161025
    {0x3215,  2,  D_POS_E,  4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },    //added by leo 20161025
    {0x3215,  2,  D_POS_F,  4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },    //added by leo 20161025
    {0x3216,  1,  D_POS_TRAIN, 257,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x3217,  1,  D_POS_TRAIN, 1872+1,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },
    {0x3118,  1,  D_POS_TRAIN, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS    },

    //BCU
    {0x5331,  3,  D_POS_A, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x5132,  1,  D_POS_A, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //BCU_TC1
    {0x5301,  3,  D_POS_A, 533,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5303,  3,  D_POS_A, 533,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5305,  3,  D_POS_A, 533,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5309,  3,  D_POS_A, 533,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5325,  3,  D_POS_A, 534,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5326,  3,  D_POS_A, 534,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5233,  2,  D_POS_A, 531,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5234,  2,  D_POS_A, 531,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5239,  2,  D_POS_A, 531,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5240,  2,  D_POS_A, 531,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5145,  1,  D_POS_A, 532,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5246,  2,  D_POS_A, 532,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5349,  3,  D_POS_A, 543,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5350,  3,  D_POS_A, 543,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5351,  3,  D_POS_A, 543,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5352,  3,  D_POS_A, 543,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5161,  1,  D_POS_A, 532,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5313,  3,  D_POS_A, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5314,  3,  D_POS_A, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5262,  2,  D_POS_A, 533,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5363,  3,  D_POS_A, 533,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5219,  2,  D_POS_A, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5220,  2,  D_POS_A, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },

    //BCU_MP1
{0x5306,  3,  D_POS_B, 533,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5307,  3,  D_POS_B, 534,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5310,  3,  D_POS_B, 534,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5311,  3,  D_POS_B, 534,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5327,  3,  D_POS_B, 534,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5328,  3,  D_POS_B, 534,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5235,  2,  D_POS_B, 531,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5236,  2,  D_POS_B, 531,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5241,  2,  D_POS_B, 531,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5242,  2,  D_POS_B, 531,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5247,  2,  D_POS_B, 532,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5353,  3,  D_POS_B, 543,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5354,  3,  D_POS_B, 543,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5355,  3,  D_POS_B, 543,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5356,  3,  D_POS_B, 543,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5315,  3,  D_POS_B, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5316,  3,  D_POS_B, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5221,  2,  D_POS_B, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5222,  2,  D_POS_B, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },


    //BCU_M1
    {0x5302,  3,  D_POS_C, 534,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5304,  3,  D_POS_C, 534,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5308,  3,  D_POS_C, 534,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5312,  3,  D_POS_C, 534,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5329,  3,  D_POS_C, 534,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5330,  3,  D_POS_C, 534,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5237,  2,  D_POS_C, 531,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5238,  2,  D_POS_C, 531,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5243,  2,  D_POS_C, 531,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5244,  2,  D_POS_C, 531,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5248,  2,  D_POS_C, 532,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5357,  3,  D_POS_C, 543,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5358,  3,  D_POS_C, 543,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5359,  3,  D_POS_C, 543,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5360,  3,  D_POS_C, 543,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5317,  3,  D_POS_C, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5318,  3,  D_POS_C, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5223,  2,  D_POS_C, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5224,  2,  D_POS_C, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },

    //BCU_M2
    {0x5302,  3,  D_POS_D, 534+192,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5304,  3,  D_POS_D, 534+192,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5308,  3,  D_POS_D, 534+192,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5312,  3,  D_POS_D, 534+192,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5329,  3,  D_POS_D, 534+192,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5330,  3,  D_POS_D, 534+192,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5237,  2,  D_POS_D, 531+192,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5238,  2,  D_POS_D, 531+192,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5243,  2,  D_POS_D, 531+192,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5244,  2,  D_POS_D, 531+192,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5248,  2,  D_POS_D, 532+192,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5357,  3,  D_POS_D, 543+192,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5358,  3,  D_POS_D, 543+192,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5359,  3,  D_POS_D, 543+192,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5360,  3,  D_POS_D, 543+192,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5317,  3,  D_POS_D, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5318,  3,  D_POS_D, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5223,  2,  D_POS_D, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5224,  2,  D_POS_D, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },

    //BCU_MP1
{0x5306,  3,  D_POS_E, 533+192,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5307,  3,  D_POS_E, 534+192,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5310,  3,  D_POS_E, 534+192,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5311,  3,  D_POS_E, 534+192,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5327,  3,  D_POS_E, 534+192,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5328,  3,  D_POS_E, 534+192,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5235,  2,  D_POS_E, 531+192,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5236,  2,  D_POS_E, 531+192,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5241,  2,  D_POS_E, 531+192,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5242,  2,  D_POS_E, 531+192,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5247,  2,  D_POS_E, 532+192,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5353,  3,  D_POS_E, 543+192,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5354,  3,  D_POS_E, 543+192,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5355,  3,  D_POS_E, 543+192,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5356,  3,  D_POS_E, 543+192,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5315,  3,  D_POS_E, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5316,  3,  D_POS_E, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5221,  2,  D_POS_E, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5222,  2,  D_POS_E, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },


    //BCU_TC2
    {0x5301,  3,  D_POS_F, 533+192,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5303,  3,  D_POS_F, 533+192,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5305,  3,  D_POS_F, 533+192,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5309,  3,  D_POS_F, 533+192,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5325,  3,  D_POS_F, 534+192,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5326,  3,  D_POS_F, 534+192,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5233,  2,  D_POS_F, 531+192,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5234,  2,  D_POS_F, 531+192,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5239,  2,  D_POS_F, 531+192,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5240,  2,  D_POS_F, 531+192,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5145,  1,  D_POS_F, 532+192,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5246,  2,  D_POS_F, 532+192,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5349,  3,  D_POS_F, 543+192,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5350,  3,  D_POS_F, 543+192,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5351,  3,  D_POS_F, 543+192,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5352,  3,  D_POS_F, 543+192,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5161,  1,  D_POS_F, 532+192,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5313,  3,  D_POS_F, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5314,  3,  D_POS_F, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5363,  3,  D_POS_F, 533+192,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5262,  2,  D_POS_F, 533+192,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5219,  2,  D_POS_F, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
{0x5220,  2,  D_POS_F, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },

//DCU

//DCU TC1
{0x6101,  1,  D_POS_B, 855,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6102,  1,  D_POS_B, 855,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6203,  2,  D_POS_B, 855,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6204,  2,  D_POS_B, 855,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6205,  2,  D_POS_B, 855,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6106,  1,  D_POS_B, 855,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6107,  1,  D_POS_B, 855,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6308,  3,  D_POS_B, 855,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6109,  1,  D_POS_B, 856,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6310,  3,  D_POS_B, 855,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6311,  3,  D_POS_B, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6312,  3,  D_POS_B, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6113,  1,  D_POS_B, 856,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6314,  3,  D_POS_B, 855,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6315,  3,  D_POS_B, 855,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6116,  1,  D_POS_B, 856,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6117,  1,  D_POS_B, 856,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6318,  3,  D_POS_B, 856,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6119,  1,  D_POS_B, 855,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6320,  3,  D_POS_B, 856,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6121,  1,  D_POS_B, 856,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6122,  1,  D_POS_B, 856,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6123,  1,  D_POS_B, 856,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6124,  1,  D_POS_B, 856,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6325,  3,  D_POS_B, 256,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6326,  3,  D_POS_B, 855,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6128,  1,  D_POS_B, 257,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },

//DCU M1
{0x6101,  1,  D_POS_C, 855+48,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6102,  1,  D_POS_C, 855+48,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6203,  2,  D_POS_C, 855+48,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6204,  2,  D_POS_C, 855+48,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6205,  2,  D_POS_C, 855+48,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6106,  1,  D_POS_C, 855+48,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6107,  1,  D_POS_C, 855+48,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6308,  3,  D_POS_C, 855+48,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6109,  1,  D_POS_C, 856+48,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6310,  3,  D_POS_C, 855+48,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6311,  3,  D_POS_C, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6312,  3,  D_POS_C, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6113,  1,  D_POS_C, 856+48,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6314,  3,  D_POS_C, 855+48,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6315,  3,  D_POS_C, 855+48,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6116,  1,  D_POS_C, 856+48,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6117,  1,  D_POS_C, 856+48,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6318,  3,  D_POS_C, 856+48,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6119,  1,  D_POS_C, 855+48,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6320,  3,  D_POS_C, 856+48,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6121,  1,  D_POS_C, 856+48,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6122,  1,  D_POS_C, 856+48,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6123,  1,  D_POS_C, 856+48,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6124,  1,  D_POS_C, 856+48,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6325,  3,  D_POS_C, 256,      bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6326,  3,  D_POS_C, 855+48,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6129,  1,  D_POS_C, 257,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },

//DCU M2
{0x6101,  1,  D_POS_D, 855+96,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6102,  1,  D_POS_D, 855+96,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6203,  2,  D_POS_D, 855+96,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6204,  2,  D_POS_D, 855+96,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6205,  2,  D_POS_D, 855+96,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6106,  1,  D_POS_D, 855+96,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6107,  1,  D_POS_D, 855+96,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6308,  3,  D_POS_D, 855+96,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6109,  1,  D_POS_D, 856+96,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6310,  3,  D_POS_D, 855+96,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6311,  3,  D_POS_D, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6312,  3,  D_POS_D, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6113,  1,  D_POS_D, 856+96,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6314,  3,  D_POS_D, 855+96,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6315,  3,  D_POS_D, 855+96,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6116,  1,  D_POS_D, 856+96,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6117,  1,  D_POS_D, 856+96,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6318,  3,  D_POS_D, 856+96,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6119,  1,  D_POS_D, 855+96,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6320,  3,  D_POS_D, 856+96,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6121,  1,  D_POS_D, 856+96,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6122,  1,  D_POS_D, 856+96,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6123,  1,  D_POS_D, 856+96,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6124,  1,  D_POS_D, 856+96,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6325,  3,  D_POS_D, 256,      bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6326,  3,  D_POS_D, 855+96,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6130,  1,  D_POS_D, 257,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },


//DCU TC2
{0x6101,  1,  D_POS_E, 855+144,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6102,  1,  D_POS_E, 855+144,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6203,  2,  D_POS_E, 855+144,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6204,  2,  D_POS_E, 855+144,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6205,  2,  D_POS_E, 855+144,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6106,  1,  D_POS_E, 855+144,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6107,  1,  D_POS_E, 855+144,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6308,  3,  D_POS_E, 855+144,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6109,  1,  D_POS_E, 856+144,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6310,  3,  D_POS_E, 855+144,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6311,  3,  D_POS_E, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6312,  3,  D_POS_E, 4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6113,  1,  D_POS_E, 856+144,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6314,  3,  D_POS_E, 855+144,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6315,  3,  D_POS_E, 855+144,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6116,  1,  D_POS_E, 856+144,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6117,  1,  D_POS_E, 856+144,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6318,  3,  D_POS_E, 856+144,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6119,  1,  D_POS_E, 855+144,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6320,  3,  D_POS_E, 856+144,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6121,  1,  D_POS_E, 856+144,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6122,  1,  D_POS_E, 856+144,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6123,  1,  D_POS_E, 856+144,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6124,  1,  D_POS_E, 856+144,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6325,  3,  D_POS_E, 256,       bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6326,  3,  D_POS_E, 855+144,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x6131,  1,  D_POS_E, 257,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },

//ACU

//TC1
{0x7101,  1,  D_POS_A,   1052,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7102,  1,  D_POS_A,   1052,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7103,  1,  D_POS_A,   1052,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7104,  1,  D_POS_A,   1052,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7105,  1,  D_POS_A,   1052,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7106,  1,  D_POS_A,   1052,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7107,  1,  D_POS_A,   1052,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7108,  1,  D_POS_A,   1052,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7109,  1,  D_POS_A,   1052,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7110,  1,  D_POS_A,   1052,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7111,  1,  D_POS_A,   1052,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7112,  1,  D_POS_A,   1052,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7113,  1,  D_POS_A,   1052,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7114,  1,  D_POS_A,   1052,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7115,  1,  D_POS_A,   1052,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7116,  1,  D_POS_A,   1052,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7217,  2,  D_POS_A,   1053,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7218,  2,  D_POS_A,   1053,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7219,  2,  D_POS_A,   1053,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7220,  2,  D_POS_A,   1053,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7221,  2,  D_POS_A,   1053,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7222,  2,  D_POS_A,   1053,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7223,  2,  D_POS_A,   1053,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7224,  2,  D_POS_A,   1053,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7225,  2,  D_POS_A,   1053,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
//{0x7226,  2,  D_POS_A,   1053,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7227,  2,  D_POS_A,   1053,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
//{0x7228,  2,  D_POS_A,   1053,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7229,  2,  D_POS_A,   1053,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7230,  2,  D_POS_A,   1053,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7231,  2,  D_POS_A,   1053,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7232,  2,  D_POS_A,   1053,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7233,  2,  D_POS_A,   1054,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7334,  3,  D_POS_A,   1054,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7335,  3,  D_POS_A,   1054,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7336,  3,  D_POS_A,   1054,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7337,  3,  D_POS_A,   1054,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7338,  3,  D_POS_A,   1054,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7339,  3,  D_POS_A,   1054,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
//{0x7340,  3,  D_POS_A,   1054,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7341,  3,  D_POS_A,   1054,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7342,  3,  D_POS_A,   1054,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7343,  3,  D_POS_A,   1054,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7344,  3,  D_POS_A,   1054,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7345,  3,  D_POS_A,   1054,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7346,  3,  D_POS_A,   1054,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },

//TC2
{0x7101,  1,  D_POS_F,   1052+16,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7102,  1,  D_POS_F,   1052+16,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7103,  1,  D_POS_F,   1052+16,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7104,  1,  D_POS_F,   1052+16,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7105,  1,  D_POS_F,   1052+16,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7106,  1,  D_POS_F,   1052+16,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7107,  1,  D_POS_F,   1052+16,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7108,  1,  D_POS_F,   1052+16,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7109,  1,  D_POS_F,   1052+16,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7110,  1,  D_POS_F,   1052+16,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7111,  1,  D_POS_F,   1052+16,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7112,  1,  D_POS_F,   1052+16,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7113,  1,  D_POS_F,   1052+16,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7114,  1,  D_POS_F,   1052+16,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7115,  1,  D_POS_F,   1052+16,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7116,  1,  D_POS_F,   1052+16,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7217,  2,  D_POS_F,   1053+16,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7218,  2,  D_POS_F,   1053+16,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7219,  2,  D_POS_F,   1053+16,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7220,  2,  D_POS_F,   1053+16,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7221,  2,  D_POS_F,   1053+16,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7222,  2,  D_POS_F,   1053+16,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7223,  2,  D_POS_F,   1053+16,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7224,  2,  D_POS_F,   1053+16,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7225,  2,  D_POS_F,   1053+16,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
//{0x7226,  2,  D_POS_F,   1053+16,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7227,  2,  D_POS_F,   1053+16,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
//{0x7228,  2,  D_POS_F,   1053+16,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7229,  2,  D_POS_F,   1053+16,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7230,  2,  D_POS_F,   1053+16,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7231,  2,  D_POS_F,   1053+16,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7232,  2,  D_POS_F,   1053+16,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7233,  2,  D_POS_F,   1054+16,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7334,  3,  D_POS_F,   1054+16,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7335,  3,  D_POS_F,   1054+16,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7336,  3,  D_POS_F,   1054+16,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7337,  3,  D_POS_F,   1054+16,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7338,  3,  D_POS_F,   1054+16,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7339,  3,  D_POS_F,   1054+16,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
//{0x7340,  3,  D_POS_F,   1054+16,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7341,  3,  D_POS_F,   1054+16,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7342,  3,  D_POS_F,   1054+16,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7343,  3,  D_POS_F,   1054+16,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7344,  3,  D_POS_F,   1054+16,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7345,  3,  D_POS_F,   1054+16,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
{0x7346,  3,  D_POS_F,   1054+16,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
//EDCU
    //TC1
    {0x8101,  1,  D_POS_A,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8302,  3,  D_POS_A,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8303,  3,  D_POS_A,   1105,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8304,  3,  D_POS_A,   1121,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8305,  3,  D_POS_A,   1121,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8306,  3,  D_POS_A,   1121,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8307,  3,  D_POS_A,   1121,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8308,  3,  D_POS_A,   1121,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8309,  3,  D_POS_A,   1121,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x830A,  3,  D_POS_A,   1121,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x830B,  3,  D_POS_A,   1121,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x830C,  3,  D_POS_A,   1121,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x830D,  3,  D_POS_A,   1105+1,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR2
    {0x830E,  3,  D_POS_A,   1121+1,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x830F,  3,  D_POS_A,   1121+1,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8310,  3,  D_POS_A,   1121+1,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8311,  3,  D_POS_A,   1121+1,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8312,  3,  D_POS_A,   1121+1,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8313,  3,  D_POS_A,   1121+1,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8314,  3,  D_POS_A,   1121+1,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8315,  3,  D_POS_A,   1121+1,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8316,  3,  D_POS_A,   1121+1,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8317,  3,  D_POS_A,   1105+2,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR3
    {0x8318,  3,  D_POS_A,   1121+2,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8319,  3,  D_POS_A,   1121+2,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831A,  3,  D_POS_A,   1121+2,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831B,  3,  D_POS_A,   1121+2,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831C,  3,  D_POS_A,   1121+2,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831D,  3,  D_POS_A,   1121+2,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831E,  3,  D_POS_A,   1121+2,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831F,  3,  D_POS_A,   1121+2,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8320,  3,  D_POS_A,   1121+2,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8321,  3,  D_POS_A,   1105+3,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR4
    {0x8322,  3,  D_POS_A,   1121+3,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8323,  3,  D_POS_A,   1121+3,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8324,  3,  D_POS_A,   1121+3,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8325,  3,  D_POS_A,   1121+3,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8326,  3,  D_POS_A,   1121+3,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8327,  3,  D_POS_A,   1121+3,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8328,  3,  D_POS_A,   1121+3,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8329,  3,  D_POS_A,   1121+3,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832A,  3,  D_POS_A,   1121+3,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832B,  3,  D_POS_A,   1105+4,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR5
    {0x832C,  3,  D_POS_A,   1121+4,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832D,  3,  D_POS_A,   1121+4,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832E,  3,  D_POS_A,   1121+4,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832F,  3,  D_POS_A,   1121+4,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8330,  3,  D_POS_A,   1121+4,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8331,  3,  D_POS_A,   1121+4,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8332,  3,  D_POS_A,   1121+4,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8333,  3,  D_POS_A,   1121+4,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8334,  3,  D_POS_A,   1121+4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8335,  3,  D_POS_A,   1105+5,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR6
    {0x8336,  3,  D_POS_A,   1121+5,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8337,  3,  D_POS_A,   1121+5,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8338,  3,  D_POS_A,   1121+5,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8339,  3,  D_POS_A,   1121+5,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833A,  3,  D_POS_A,   1121+5,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833B,  3,  D_POS_A,   1121+5,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833C,  3,  D_POS_A,   1121+5,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833D,  3,  D_POS_A,   1121+5,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833E,  3,  D_POS_A,   1121+5,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833F,  3,  D_POS_A,   1105+6,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR7
    {0x8340,  3,  D_POS_A,   1121+6,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8341,  3,  D_POS_A,   1121+6,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8342,  3,  D_POS_A,   1121+6,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8343,  3,  D_POS_A,   1121+6,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8344,  3,  D_POS_A,   1121+6,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8345,  3,  D_POS_A,   1121+6,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8346,  3,  D_POS_A,   1121+6,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8347,  3,  D_POS_A,   1121+6,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8348,  3,  D_POS_A,   1121+6,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8349,  3,  D_POS_A,   1105+7,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR8
    {0x834A,  3,  D_POS_A,   1121+7,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834B,  3,  D_POS_A,   1121+7,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834C,  3,  D_POS_A,   1121+7,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834D,  3,  D_POS_A,   1121+7,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834E,  3,  D_POS_A,   1121+7,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834F,  3,  D_POS_A,   1121+7,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8350,  3,  D_POS_A,   1121+7,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8351,  3,  D_POS_A,   1121+7,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8352,  3,  D_POS_A,   1121+7,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8353,  3,  D_POS_A,   1105+8,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR9
    {0x8354,  3,  D_POS_A,   1121+8,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8355,  3,  D_POS_A,   1121+8,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8356,  3,  D_POS_A,   1121+8,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8357,  3,  D_POS_A,   1121+8,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8358,  3,  D_POS_A,   1121+8,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8359,  3,  D_POS_A,   1121+8,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835A,  3,  D_POS_A,   1121+8,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835B,  3,  D_POS_A,   1121+8,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835C,  3,  D_POS_A,   1121+8,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835D,  3,  D_POS_A,   1105+9,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR10
    {0x835E,  3,  D_POS_A,   1121+9,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835F,  3,  D_POS_A,   1121+9,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8360,  3,  D_POS_A,   1121+9,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8361,  3,  D_POS_A,   1121+9,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8362,  3,  D_POS_A,   1121+9,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8363,  3,  D_POS_A,   1121+9,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8364,  3,  D_POS_A,   1121+9,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8365,  3,  D_POS_A,   1121+9,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8366,  3,  D_POS_A,   1121+9,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    //MP1
    {0x8101,  1,  D_POS_B,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8302,  3,  D_POS_B,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8303,  3,  D_POS_B,   1105+64,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8304,  3,  D_POS_B,   1121+64,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8305,  3,  D_POS_B,   1121+64,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8306,  3,  D_POS_B,   1121+64,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8307,  3,  D_POS_B,   1121+64,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8308,  3,  D_POS_B,   1121+64,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8309,  3,  D_POS_B,   1121+64,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x830A,  3,  D_POS_B,   1121+64,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x830B,  3,  D_POS_B,   1121+64,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x830C,  3,  D_POS_B,   1121+64,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x830D,  3,  D_POS_B,   1105+64+1,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR2
    {0x830E,  3,  D_POS_B,   1121+64+1,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x830F,  3,  D_POS_B,   1121+64+1,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8310,  3,  D_POS_B,   1121+64+1,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8311,  3,  D_POS_B,   1121+64+1,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8312,  3,  D_POS_B,   1121+64+1,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8313,  3,  D_POS_B,   1121+64+1,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8314,  3,  D_POS_B,   1121+64+1,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8315,  3,  D_POS_B,   1121+64+1,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8316,  3,  D_POS_B,   1121+64+1,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8317,  3,  D_POS_B,   1105+64+2,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR3
    {0x8318,  3,  D_POS_B,   1121+64+2,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8319,  3,  D_POS_B,   1121+64+2,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831A,  3,  D_POS_B,   1121+64+2,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831B,  3,  D_POS_B,   1121+64+2,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831C,  3,  D_POS_B,   1121+64+2,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831D,  3,  D_POS_B,   1121+64+2,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831E,  3,  D_POS_B,   1121+64+2,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831F,  3,  D_POS_B,   1121+64+2,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8320,  3,  D_POS_B,   1121+64+2,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8321,  3,  D_POS_B,   1105+64+3,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR4
    {0x8322,  3,  D_POS_B,   1121+64+3,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8323,  3,  D_POS_B,   1121+64+3,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8324,  3,  D_POS_B,   1121+64+3,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8325,  3,  D_POS_B,   1121+64+3,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8326,  3,  D_POS_B,   1121+64+3,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8327,  3,  D_POS_B,   1121+64+3,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8328,  3,  D_POS_B,   1121+64+3,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8329,  3,  D_POS_B,   1121+64+3,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832A,  3,  D_POS_B,   1121+64+3,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832B,  3,  D_POS_B,   1105+64+4,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR5
    {0x832C,  3,  D_POS_B,   1121+64+4,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832D,  3,  D_POS_B,   1121+64+4,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832E,  3,  D_POS_B,   1121+64+4,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832F,  3,  D_POS_B,   1121+64+4,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8330,  3,  D_POS_B,   1121+64+4,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8331,  3,  D_POS_B,   1121+64+4,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8332,  3,  D_POS_B,   1121+64+4,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8333,  3,  D_POS_B,   1121+64+4,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8334,  3,  D_POS_B,   1121+64+4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8335,  3,  D_POS_B,   1105+64+5,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR6
    {0x8336,  3,  D_POS_B,   1121+64+5,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8337,  3,  D_POS_B,   1121+64+5,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8338,  3,  D_POS_B,   1121+64+5,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8339,  3,  D_POS_B,   1121+64+5,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833A,  3,  D_POS_B,   1121+64+5,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833B,  3,  D_POS_B,   1121+64+5,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833C,  3,  D_POS_B,   1121+64+5,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833D,  3,  D_POS_B,   1121+64+5,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833E,  3,  D_POS_B,   1121+64+5,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833F,  3,  D_POS_B,   1105+64+6,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR7
    {0x8340,  3,  D_POS_B,   1121+64+6,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8341,  3,  D_POS_B,   1121+64+6,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8342,  3,  D_POS_B,   1121+64+6,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8343,  3,  D_POS_B,   1121+64+6,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8344,  3,  D_POS_B,   1121+64+6,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8345,  3,  D_POS_B,   1121+64+6,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8346,  3,  D_POS_B,   1121+64+6,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8347,  3,  D_POS_B,   1121+64+6,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8348,  3,  D_POS_B,   1121+64+6,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8349,  3,  D_POS_B,   1105+64+7,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR8
    {0x834A,  3,  D_POS_B,   1121+64+7,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834B,  3,  D_POS_B,   1121+64+7,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834C,  3,  D_POS_B,   1121+64+7,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834D,  3,  D_POS_B,   1121+64+7,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834E,  3,  D_POS_B,   1121+64+7,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834F,  3,  D_POS_B,   1121+64+7,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8350,  3,  D_POS_B,   1121+64+7,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8351,  3,  D_POS_B,   1121+64+7,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8352,  3,  D_POS_B,   1121+64+7,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8353,  3,  D_POS_B,   1105+64+8,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR9
    {0x8354,  3,  D_POS_B,   1121+64+8,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8355,  3,  D_POS_B,   1121+64+8,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8356,  3,  D_POS_B,   1121+64+8,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8357,  3,  D_POS_B,   1121+64+8,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8358,  3,  D_POS_B,   1121+64+8,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8359,  3,  D_POS_B,   1121+64+8,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835A,  3,  D_POS_B,   1121+64+8,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835B,  3,  D_POS_B,   1121+64+8,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835C,  3,  D_POS_B,   1121+64+8,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835D,  3,  D_POS_B,   1105+64+9,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR10
    {0x835E,  3,  D_POS_B,   1121+64+9,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835F,  3,  D_POS_B,   1121+64+9,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8360,  3,  D_POS_B,   1121+64+9,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8361,  3,  D_POS_B,   1121+64+9,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8362,  3,  D_POS_B,   1121+64+9,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8363,  3,  D_POS_B,   1121+64+9,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8364,  3,  D_POS_B,   1121+64+9,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8365,  3,  D_POS_B,   1121+64+9,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8366,  3,  D_POS_B,   1121+64+9,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    //M1
    {0x8101,  1,  D_POS_C,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8302,  3,  D_POS_C,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8303,  3,  D_POS_C,   1105+128,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8304,  3,  D_POS_C,   1121+128,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8305,  3,  D_POS_C,   1121+128,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8306,  3,  D_POS_C,   1121+128,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8307,  3,  D_POS_C,   1121+128,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8308,  3,  D_POS_C,   1121+128,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8309,  3,  D_POS_C,   1121+128,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x830A,  3,  D_POS_C,   1121+128,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x830B,  3,  D_POS_C,   1121+128,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x830C,  3,  D_POS_C,   1121+128,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x830D,  3,  D_POS_C,   1105+128+1,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR2
    {0x830E,  3,  D_POS_C,   1121+128+1,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x830F,  3,  D_POS_C,   1121+128+1,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8310,  3,  D_POS_C,   1121+128+1,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8311,  3,  D_POS_C,   1121+128+1,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8312,  3,  D_POS_C,   1121+128+1,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8313,  3,  D_POS_C,   1121+128+1,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8314,  3,  D_POS_C,   1121+128+1,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8315,  3,  D_POS_C,   1121+128+1,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8316,  3,  D_POS_C,   1121+128+1,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8317,  3,  D_POS_C,   1105+128+2,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR3
    {0x8318,  3,  D_POS_C,   1121+128+2,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8319,  3,  D_POS_C,   1121+128+2,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831A,  3,  D_POS_C,   1121+128+2,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831B,  3,  D_POS_C,   1121+128+2,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831C,  3,  D_POS_C,   1121+128+2,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831D,  3,  D_POS_C,   1121+128+2,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831E,  3,  D_POS_C,   1121+128+2,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831F,  3,  D_POS_C,   1121+128+2,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8320,  3,  D_POS_C,   1121+128+2,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8321,  3,  D_POS_C,   1105+128+3,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR4
    {0x8322,  3,  D_POS_C,   1121+128+3,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8323,  3,  D_POS_C,   1121+128+3,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8324,  3,  D_POS_C,   1121+128+3,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8325,  3,  D_POS_C,   1121+128+3,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8326,  3,  D_POS_C,   1121+128+3,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8327,  3,  D_POS_C,   1121+128+3,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8328,  3,  D_POS_C,   1121+128+3,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8329,  3,  D_POS_C,   1121+128+3,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832A,  3,  D_POS_C,   1121+128+3,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832B,  3,  D_POS_C,   1105+128+4,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR5
    {0x832C,  3,  D_POS_C,   1121+128+4,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832D,  3,  D_POS_C,   1121+128+4,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832E,  3,  D_POS_C,   1121+128+4,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832F,  3,  D_POS_C,   1121+128+4,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8330,  3,  D_POS_C,   1121+128+4,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8331,  3,  D_POS_C,   1121+128+4,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8332,  3,  D_POS_C,   1121+128+4,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8333,  3,  D_POS_C,   1121+128+4,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8334,  3,  D_POS_C,   1121+128+4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8335,  3,  D_POS_C,   1105+128+5,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR6
    {0x8336,  3,  D_POS_C,   1121+128+5,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8337,  3,  D_POS_C,   1121+128+5,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8338,  3,  D_POS_C,   1121+128+5,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8339,  3,  D_POS_C,   1121+128+5,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833A,  3,  D_POS_C,   1121+128+5,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833B,  3,  D_POS_C,   1121+128+5,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833C,  3,  D_POS_C,   1121+128+5,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833D,  3,  D_POS_C,   1121+128+5,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833E,  3,  D_POS_C,   1121+128+5,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833F,  3,  D_POS_C,   1105+128+6,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR7
    {0x8340,  3,  D_POS_C,   1121+128+6,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8341,  3,  D_POS_C,   1121+128+6,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8342,  3,  D_POS_C,   1121+128+6,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8343,  3,  D_POS_C,   1121+128+6,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8344,  3,  D_POS_C,   1121+128+6,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8345,  3,  D_POS_C,   1121+128+6,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8346,  3,  D_POS_C,   1121+128+6,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8347,  3,  D_POS_C,   1121+128+6,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8348,  3,  D_POS_C,   1121+128+6,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8349,  3,  D_POS_C,   1105+128+7,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR8
    {0x834A,  3,  D_POS_C,   1121+128+7,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834B,  3,  D_POS_C,   1121+128+7,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834C,  3,  D_POS_C,   1121+128+7,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834D,  3,  D_POS_C,   1121+128+7,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834E,  3,  D_POS_C,   1121+128+7,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834F,  3,  D_POS_C,   1121+128+7,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8350,  3,  D_POS_C,   1121+128+7,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8351,  3,  D_POS_C,   1121+128+7,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8352,  3,  D_POS_C,   1121+128+7,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8353,  3,  D_POS_C,   1105+128+8,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR9
    {0x8354,  3,  D_POS_C,   1121+128+8,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8355,  3,  D_POS_C,   1121+128+8,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8356,  3,  D_POS_C,   1121+128+8,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8357,  3,  D_POS_C,   1121+128+8,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8358,  3,  D_POS_C,   1121+128+8,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8359,  3,  D_POS_C,   1121+128+8,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835A,  3,  D_POS_C,   1121+128+8,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835B,  3,  D_POS_C,   1121+128+8,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835C,  3,  D_POS_C,   1121+128+8,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835D,  3,  D_POS_C,   1105+128+9,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR10
    {0x835E,  3,  D_POS_C,   1121+128+9,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835F,  3,  D_POS_C,   1121+128+9,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8360,  3,  D_POS_C,   1121+128+9,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8361,  3,  D_POS_C,   1121+128+9,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8362,  3,  D_POS_C,   1121+128+9,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8363,  3,  D_POS_C,   1121+128+9,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8364,  3,  D_POS_C,   1121+128+9,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8365,  3,  D_POS_C,   1121+128+9,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8366,  3,  D_POS_C,   1121+128+9,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    //M2
    {0x8101,  1,  D_POS_D,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8302,  3,  D_POS_D,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8303,  3,  D_POS_D,   1105+192,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8304,  3,  D_POS_D,   1121+192,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8305,  3,  D_POS_D,   1121+192,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8306,  3,  D_POS_D,   1121+192,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8307,  3,  D_POS_D,   1121+192,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8308,  3,  D_POS_D,   1121+192,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8309,  3,  D_POS_D,   1121+192,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x830A,  3,  D_POS_D,   1121+192,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x830B,  3,  D_POS_D,   1121+192,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x830C,  3,  D_POS_D,   1121+192,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x830D,  3,  D_POS_D,   1105+192+1,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR2
    {0x830E,  3,  D_POS_D,   1121+192+1,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x830F,  3,  D_POS_D,   1121+192+1,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8310,  3,  D_POS_D,   1121+192+1,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8311,  3,  D_POS_D,   1121+192+1,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8312,  3,  D_POS_D,   1121+192+1,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8313,  3,  D_POS_D,   1121+192+1,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8314,  3,  D_POS_D,   1121+192+1,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8315,  3,  D_POS_D,   1121+192+1,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8316,  3,  D_POS_D,   1121+192+1,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8317,  3,  D_POS_D,   1105+192+2,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR3
    {0x8318,  3,  D_POS_D,   1121+192+2,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8319,  3,  D_POS_D,   1121+192+2,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831A,  3,  D_POS_D,   1121+192+2,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831B,  3,  D_POS_D,   1121+192+2,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831C,  3,  D_POS_D,   1121+192+2,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831D,  3,  D_POS_D,   1121+192+2,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831E,  3,  D_POS_D,   1121+192+2,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831F,  3,  D_POS_D,   1121+192+2,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8320,  3,  D_POS_D,   1121+192+2,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8321,  3,  D_POS_D,   1105+192+3,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR4
    {0x8322,  3,  D_POS_D,   1121+192+3,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8323,  3,  D_POS_D,   1121+192+3,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8324,  3,  D_POS_D,   1121+192+3,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8325,  3,  D_POS_D,   1121+192+3,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8326,  3,  D_POS_D,   1121+192+3,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8327,  3,  D_POS_D,   1121+192+3,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8328,  3,  D_POS_D,   1121+192+3,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8329,  3,  D_POS_D,   1121+192+3,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832A,  3,  D_POS_D,   1121+192+3,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832B,  3,  D_POS_D,   1105+192+4,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR5
    {0x832C,  3,  D_POS_D,   1121+192+4,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832D,  3,  D_POS_D,   1121+192+4,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832E,  3,  D_POS_D,   1121+192+4,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832F,  3,  D_POS_D,   1121+192+4,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8330,  3,  D_POS_D,   1121+192+4,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8331,  3,  D_POS_D,   1121+192+4,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8332,  3,  D_POS_D,   1121+192+4,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8333,  3,  D_POS_D,   1121+192+4,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8334,  3,  D_POS_D,   1121+192+4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8335,  3,  D_POS_D,   1105+192+5,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR6
    {0x8336,  3,  D_POS_D,   1121+192+5,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8337,  3,  D_POS_D,   1121+192+5,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8338,  3,  D_POS_D,   1121+192+5,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8339,  3,  D_POS_D,   1121+192+5,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833A,  3,  D_POS_D,   1121+192+5,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833B,  3,  D_POS_D,   1121+192+5,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833C,  3,  D_POS_D,   1121+192+5,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833D,  3,  D_POS_D,   1121+192+5,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833E,  3,  D_POS_D,   1121+192+5,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833F,  3,  D_POS_D,   1105+192+6,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR7
    {0x8340,  3,  D_POS_D,   1121+192+6,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8341,  3,  D_POS_D,   1121+192+6,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8342,  3,  D_POS_D,   1121+192+6,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8343,  3,  D_POS_D,   1121+192+6,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8344,  3,  D_POS_D,   1121+192+6,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8345,  3,  D_POS_D,   1121+192+6,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8346,  3,  D_POS_D,   1121+192+6,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8347,  3,  D_POS_D,   1121+192+6,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8348,  3,  D_POS_D,   1121+192+6,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8349,  3,  D_POS_D,   1105+192+7,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR8
    {0x834A,  3,  D_POS_D,   1121+192+7,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834B,  3,  D_POS_D,   1121+192+7,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834C,  3,  D_POS_D,   1121+192+7,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834D,  3,  D_POS_D,   1121+192+7,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834E,  3,  D_POS_D,   1121+192+7,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834F,  3,  D_POS_D,   1121+192+7,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8350,  3,  D_POS_D,   1121+192+7,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8351,  3,  D_POS_D,   1121+192+7,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8352,  3,  D_POS_D,   1121+192+7,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8353,  3,  D_POS_D,   1105+192+8,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR9
    {0x8354,  3,  D_POS_D,   1121+192+8,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8355,  3,  D_POS_D,   1121+192+8,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8356,  3,  D_POS_D,   1121+192+8,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8357,  3,  D_POS_D,   1121+192+8,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8358,  3,  D_POS_D,   1121+192+8,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8359,  3,  D_POS_D,   1121+192+8,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835A,  3,  D_POS_D,   1121+192+8,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835B,  3,  D_POS_D,   1121+192+8,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835C,  3,  D_POS_D,   1121+192+8,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835D,  3,  D_POS_D,   1105+192+9,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR10
    {0x835E,  3,  D_POS_D,   1121+192+9,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835F,  3,  D_POS_D,   1121+192+9,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8360,  3,  D_POS_D,   1121+192+9,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8361,  3,  D_POS_D,   1121+192+9,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8362,  3,  D_POS_D,   1121+192+9,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8363,  3,  D_POS_D,   1121+192+9,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8364,  3,  D_POS_D,   1121+192+9,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8365,  3,  D_POS_D,   1121+192+9,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8366,  3,  D_POS_D,   1121+192+9,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    //MP2
    {0x8101,  1,  D_POS_E,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8302,  3,  D_POS_E,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8303,  3,  D_POS_E,   1105+256,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8304,  3,  D_POS_E,   1121+256,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8305,  3,  D_POS_E,   1121+256,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8306,  3,  D_POS_E,   1121+256,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8307,  3,  D_POS_E,   1121+256,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8308,  3,  D_POS_E,   1121+256,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8309,  3,  D_POS_E,   1121+256,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x830A,  3,  D_POS_E,   1121+256,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x830B,  3,  D_POS_E,   1121+256,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x830C,  3,  D_POS_E,   1121+256,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x830D,  3,  D_POS_E,   1105+256+1,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR2
    {0x830E,  3,  D_POS_E,   1121+256+1,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x830F,  3,  D_POS_E,   1121+256+1,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8310,  3,  D_POS_E,   1121+256+1,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8311,  3,  D_POS_E,   1121+256+1,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8312,  3,  D_POS_E,   1121+256+1,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8313,  3,  D_POS_E,   1121+256+1,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8314,  3,  D_POS_E,   1121+256+1,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8315,  3,  D_POS_E,   1121+256+1,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8316,  3,  D_POS_E,   1121+256+1,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8317,  3,  D_POS_E,   1105+256+2,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR3
    {0x8318,  3,  D_POS_E,   1121+256+2,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8319,  3,  D_POS_E,   1121+256+2,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831A,  3,  D_POS_E,   1121+256+2,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831B,  3,  D_POS_E,   1121+256+2,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831C,  3,  D_POS_E,   1121+256+2,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831D,  3,  D_POS_E,   1121+256+2,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831E,  3,  D_POS_E,   1121+256+2,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831F,  3,  D_POS_E,   1121+256+2,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8320,  3,  D_POS_E,   1121+256+2,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8321,  3,  D_POS_E,   1105+256+3,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR4
    {0x8322,  3,  D_POS_E,   1121+256+3,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8323,  3,  D_POS_E,   1121+256+3,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8324,  3,  D_POS_E,   1121+256+3,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8325,  3,  D_POS_E,   1121+256+3,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8326,  3,  D_POS_E,   1121+256+3,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8327,  3,  D_POS_E,   1121+256+3,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8328,  3,  D_POS_E,   1121+256+3,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8329,  3,  D_POS_E,   1121+256+3,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832A,  3,  D_POS_E,   1121+256+3,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832B,  3,  D_POS_E,   1105+256+4,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR5
    {0x832C,  3,  D_POS_E,   1121+256+4,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832D,  3,  D_POS_E,   1121+256+4,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832E,  3,  D_POS_E,   1121+256+4,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832F,  3,  D_POS_E,   1121+256+4,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8330,  3,  D_POS_E,   1121+256+4,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8331,  3,  D_POS_E,   1121+256+4,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8332,  3,  D_POS_E,   1121+256+4,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8333,  3,  D_POS_E,   1121+256+4,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8334,  3,  D_POS_E,   1121+256+4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8335,  3,  D_POS_E,   1105+256+5,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR6
    {0x8336,  3,  D_POS_E,   1121+256+5,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8337,  3,  D_POS_E,   1121+256+5,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8338,  3,  D_POS_E,   1121+256+5,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8339,  3,  D_POS_E,   1121+256+5,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833A,  3,  D_POS_E,   1121+256+5,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833B,  3,  D_POS_E,   1121+256+5,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833C,  3,  D_POS_E,   1121+256+5,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833D,  3,  D_POS_E,   1121+256+5,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833E,  3,  D_POS_E,   1121+256+5,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833F,  3,  D_POS_E,   1105+256+6,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR7
    {0x8340,  3,  D_POS_E,   1121+256+6,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8341,  3,  D_POS_E,   1121+256+6,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8342,  3,  D_POS_E,   1121+256+6,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8343,  3,  D_POS_E,   1121+256+6,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8344,  3,  D_POS_E,   1121+256+6,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8345,  3,  D_POS_E,   1121+256+6,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8346,  3,  D_POS_E,   1121+256+6,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8347,  3,  D_POS_E,   1121+256+6,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8348,  3,  D_POS_E,   1121+256+6,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8349,  3,  D_POS_E,   1105+256+7,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR8
    {0x834A,  3,  D_POS_E,   1121+256+7,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834B,  3,  D_POS_E,   1121+256+7,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834C,  3,  D_POS_E,   1121+256+7,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834D,  3,  D_POS_E,   1121+256+7,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834E,  3,  D_POS_E,   1121+256+7,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834F,  3,  D_POS_E,   1121+256+7,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8350,  3,  D_POS_E,   1121+256+7,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8351,  3,  D_POS_E,   1121+256+7,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8352,  3,  D_POS_E,   1121+256+7,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8353,  3,  D_POS_E,   1105+256+8,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR9
    {0x8354,  3,  D_POS_E,   1121+256+8,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8355,  3,  D_POS_E,   1121+256+8,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8356,  3,  D_POS_E,   1121+256+8,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8357,  3,  D_POS_E,   1121+256+8,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8358,  3,  D_POS_E,   1121+256+8,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8359,  3,  D_POS_E,   1121+256+8,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835A,  3,  D_POS_E,   1121+256+8,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835B,  3,  D_POS_E,   1121+256+8,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835C,  3,  D_POS_E,   1121+256+8,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835D,  3,  D_POS_E,   1105+256+9,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR10
    {0x835E,  3,  D_POS_E,   1121+256+9,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835F,  3,  D_POS_E,   1121+256+9,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8360,  3,  D_POS_E,   1121+256+9,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8361,  3,  D_POS_E,   1121+256+9,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8362,  3,  D_POS_E,   1121+256+9,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8363,  3,  D_POS_E,   1121+256+9,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8364,  3,  D_POS_E,   1121+256+9,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8365,  3,  D_POS_E,   1121+256+9,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8366,  3,  D_POS_E,   1121+256+9,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    //TC2
    {0x8101,  1,  D_POS_F,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8302,  3,  D_POS_F,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8303,  3,  D_POS_F,   1105+320,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8304,  3,  D_POS_F,   1121+320,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8305,  3,  D_POS_F,   1121+320,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8306,  3,  D_POS_F,   1121+320,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8307,  3,  D_POS_F,   1121+320,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8308,  3,  D_POS_F,   1121+320,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x8309,  3,  D_POS_F,   1121+320,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x830A,  3,  D_POS_F,   1121+320,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x830B,  3,  D_POS_F,   1121+320,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x830C,  3,  D_POS_F,   1121+320,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR1
    {0x830D,  3,  D_POS_F,   1105+320+1,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR2
    {0x830E,  3,  D_POS_F,   1121+320+1,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x830F,  3,  D_POS_F,   1121+320+1,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8310,  3,  D_POS_F,   1121+320+1,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8311,  3,  D_POS_F,   1121+320+1,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8312,  3,  D_POS_F,   1121+320+1,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8313,  3,  D_POS_F,   1121+320+1,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8314,  3,  D_POS_F,   1121+320+1,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8315,  3,  D_POS_F,   1121+320+1,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8316,  3,  D_POS_F,   1121+320+1,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8317,  3,  D_POS_F,   1105+320+2,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR3
    {0x8318,  3,  D_POS_F,   1121+320+2,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8319,  3,  D_POS_F,   1121+320+2,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831A,  3,  D_POS_F,   1121+320+2,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831B,  3,  D_POS_F,   1121+320+2,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831C,  3,  D_POS_F,   1121+320+2,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831D,  3,  D_POS_F,   1121+320+2,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831E,  3,  D_POS_F,   1121+320+2,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x831F,  3,  D_POS_F,   1121+320+2,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8320,  3,  D_POS_F,   1121+320+2,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8321,  3,  D_POS_F,   1105+320+3,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR4
    {0x8322,  3,  D_POS_F,   1121+320+3,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8323,  3,  D_POS_F,   1121+320+3,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8324,  3,  D_POS_F,   1121+320+3,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8325,  3,  D_POS_F,   1121+320+3,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8326,  3,  D_POS_F,   1121+320+3,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8327,  3,  D_POS_F,   1121+320+3,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8328,  3,  D_POS_F,   1121+320+3,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8329,  3,  D_POS_F,   1121+320+3,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832A,  3,  D_POS_F,   1121+320+3,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832B,  3,  D_POS_F,   1105+320+4,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR5
    {0x832C,  3,  D_POS_F,   1121+320+4,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832D,  3,  D_POS_F,   1121+320+4,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832E,  3,  D_POS_F,   1121+320+4,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x832F,  3,  D_POS_F,   1121+320+4,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8330,  3,  D_POS_F,   1121+320+4,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8331,  3,  D_POS_F,   1121+320+4,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8332,  3,  D_POS_F,   1121+320+4,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8333,  3,  D_POS_F,   1121+320+4,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8334,  3,  D_POS_F,   1121+320+4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8335,  3,  D_POS_F,   1105+320+5,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR6
    {0x8336,  3,  D_POS_F,   1121+320+5,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8337,  3,  D_POS_F,   1121+320+5,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8338,  3,  D_POS_F,   1121+320+5,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8339,  3,  D_POS_F,   1121+320+5,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833A,  3,  D_POS_F,   1121+320+5,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833B,  3,  D_POS_F,   1121+320+5,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833C,  3,  D_POS_F,   1121+320+5,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833D,  3,  D_POS_F,   1121+320+5,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833E,  3,  D_POS_F,   1121+320+5,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x833F,  3,  D_POS_F,   1105+320+6,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR7
    {0x8340,  3,  D_POS_F,   1121+320+6,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8341,  3,  D_POS_F,   1121+320+6,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8342,  3,  D_POS_F,   1121+320+6,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8343,  3,  D_POS_F,   1121+320+6,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8344,  3,  D_POS_F,   1121+320+6,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8345,  3,  D_POS_F,   1121+320+6,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8346,  3,  D_POS_F,   1121+320+6,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8347,  3,  D_POS_F,   1121+320+6,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8348,  3,  D_POS_F,   1121+320+6,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8349,  3,  D_POS_F,   1105+320+7,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR8
    {0x834A,  3,  D_POS_F,   1121+320+7,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834B,  3,  D_POS_F,   1121+320+7,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834C,  3,  D_POS_F,   1121+320+7,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834D,  3,  D_POS_F,   1121+320+7,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834E,  3,  D_POS_F,   1121+320+7,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x834F,  3,  D_POS_F,   1121+320+7,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8350,  3,  D_POS_F,   1121+320+7,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8351,  3,  D_POS_F,   1121+320+7,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8352,  3,  D_POS_F,   1121+320+7,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8353,  3,  D_POS_F,   1105+320+8,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR9
    {0x8354,  3,  D_POS_F,   1121+320+8,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8355,  3,  D_POS_F,   1121+320+8,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8356,  3,  D_POS_F,   1121+320+8,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8357,  3,  D_POS_F,   1121+320+8,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8358,  3,  D_POS_F,   1121+320+8,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8359,  3,  D_POS_F,   1121+320+8,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835A,  3,  D_POS_F,   1121+320+8,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835B,  3,  D_POS_F,   1121+320+8,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835C,  3,  D_POS_F,   1121+320+8,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835D,  3,  D_POS_F,   1105+320+9,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },//DOOR10
    {0x835E,  3,  D_POS_F,   1121+320+9,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x835F,  3,  D_POS_F,   1121+320+9,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8360,  3,  D_POS_F,   1121+320+9,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8361,  3,  D_POS_F,   1121+320+9,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8362,  3,  D_POS_F,   1121+320+9,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8363,  3,  D_POS_F,   1121+320+9,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8364,  3,  D_POS_F,   1121+320+9,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8365,  3,  D_POS_F,   1121+320+9,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x8366,  3,  D_POS_F,   1121+320+9,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//HVAC
//TC1
    {0x9201,  2,  D_POS_A,   1494,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9202,  2,  D_POS_A,   1494,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9203,  2,  D_POS_A,   1494,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9204,  2,  D_POS_A,   1494,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9205,  2,  D_POS_A,   1494,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9206,  2,  D_POS_A,   1494,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9207,  2,  D_POS_A,   1494,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9208,  2,  D_POS_A,   1495,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9209,  2,  D_POS_A,   1495,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9210,  2,  D_POS_A,   1495,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9211,  2,  D_POS_A,   1495,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9212,  2,  D_POS_A,   1495,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9213,  2,  D_POS_A,   1495,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9214,  2,  D_POS_A,   1495,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9215,  2,  D_POS_A,   1495,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9216,  2,  D_POS_A,   1495,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9217,  2,  D_POS_A,   1495,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9218,  2,  D_POS_A,   1495,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9219,  2,  D_POS_A,   1495,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9220,  2,  D_POS_A,   1495,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9221,  2,  D_POS_A,   1495,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9222,  2,  D_POS_A,   1495,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9223,  2,  D_POS_A,   1495,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9224,  2,  D_POS_A,   1496,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9225,  2,  D_POS_A,   1496,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9226,  2,  D_POS_A,   1496,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9227,  2,  D_POS_A,   1496,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9228,  2,  D_POS_A,   1496,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9329,  3,  D_POS_A,   1496,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9330,  3,  D_POS_A,   1496,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9331,  3,  D_POS_A,   1496,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9332,  3,  D_POS_A,   1496,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9333,  3,  D_POS_A,   1496,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9334,  3,  D_POS_A,   1496,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9335,  3,  D_POS_A,   1496,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9336,  3,  D_POS_A,   1496,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9337,  3,  D_POS_A,   1496,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9338,  3,  D_POS_A,   1496,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9339,  3,  D_POS_A,   1496,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9340,  3,  D_POS_A,   1497,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9341,  3,  D_POS_A,   1497,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9342,  3,  D_POS_A,   1497,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9343,  3,  D_POS_A,   1497,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9344,  3,  D_POS_A,   1497,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },

//MP1
    {0x9201,  2,  D_POS_B,   1494+16,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9202,  2,  D_POS_B,   1494+16,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9203,  2,  D_POS_B,   1494+16,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9204,  2,  D_POS_B,   1494+16,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9205,  2,  D_POS_B,   1494+16,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9206,  2,  D_POS_B,   1494+16,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9207,  2,  D_POS_B,   1494+16,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9208,  2,  D_POS_B,   1495+16,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9209,  2,  D_POS_B,   1495+16,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9210,  2,  D_POS_B,   1495+16,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9211,  2,  D_POS_B,   1495+16,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9212,  2,  D_POS_B,   1495+16,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9213,  2,  D_POS_B,   1495+16,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9214,  2,  D_POS_B,   1495+16,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9215,  2,  D_POS_B,   1495+16,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9216,  2,  D_POS_B,   1495+16,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9217,  2,  D_POS_B,   1495+16,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9218,  2,  D_POS_B,   1495+16,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9219,  2,  D_POS_B,   1495+16,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9220,  2,  D_POS_B,   1495+16,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9221,  2,  D_POS_B,   1495+16,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9222,  2,  D_POS_B,   1495+16,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9223,  2,  D_POS_B,   1495+16,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9224,  2,  D_POS_B,   1496+16,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9225,  2,  D_POS_B,   1496+16,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9226,  2,  D_POS_B,   1496+16,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9227,  2,  D_POS_B,   1496+16,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9228,  2,  D_POS_B,   1496+16,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9329,  3,  D_POS_B,   1496+16,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9330,  3,  D_POS_B,   1496+16,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9331,  3,  D_POS_B,   1496+16,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9332,  3,  D_POS_B,   1496+16,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9333,  3,  D_POS_B,   1496+16,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9334,  3,  D_POS_B,   1496+16,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9335,  3,  D_POS_B,   1496+16,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9336,  3,  D_POS_B,   1496+16,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9337,  3,  D_POS_B,   1496+16,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9338,  3,  D_POS_B,   1496+16,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9339,  3,  D_POS_B,   1496+16,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9340,  3,  D_POS_B,   1497+16,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9341,  3,  D_POS_B,   1497+16,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9342,  3,  D_POS_B,   1497+16,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9343,  3,  D_POS_B,   1497+16,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9344,  3,  D_POS_B,   1497+16,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },

    //M1
    {0x9201,  2,  D_POS_C,   1494+32,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9202,  2,  D_POS_C,   1494+32,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9203,  2,  D_POS_C,   1494+32,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9204,  2,  D_POS_C,   1494+32,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9205,  2,  D_POS_C,   1494+32,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9206,  2,  D_POS_C,   1494+32,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9207,  2,  D_POS_C,   1494+32,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9208,  2,  D_POS_C,   1495+32,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9209,  2,  D_POS_C,   1495+32,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9210,  2,  D_POS_C,   1495+32,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9211,  2,  D_POS_C,   1495+32,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9212,  2,  D_POS_C,   1495+32,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9213,  2,  D_POS_C,   1495+32,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9214,  2,  D_POS_C,   1495+32,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9215,  2,  D_POS_C,   1495+32,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9216,  2,  D_POS_C,   1495+32,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9217,  2,  D_POS_C,   1495+32,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9218,  2,  D_POS_C,   1495+32,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9219,  2,  D_POS_C,   1495+32,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9220,  2,  D_POS_C,   1495+32,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9221,  2,  D_POS_C,   1495+32,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9222,  2,  D_POS_C,   1495+32,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9223,  2,  D_POS_C,   1495+32,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9224,  2,  D_POS_C,   1496+32,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9225,  2,  D_POS_C,   1496+32,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9226,  2,  D_POS_C,   1496+32,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9227,  2,  D_POS_C,   1496+32,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9228,  2,  D_POS_C,   1496+32,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9329,  3,  D_POS_C,   1496+32,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9330,  3,  D_POS_C,   1496+32,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9331,  3,  D_POS_C,   1496+32,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9332,  3,  D_POS_C,   1496+32,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9333,  3,  D_POS_C,   1496+32,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9334,  3,  D_POS_C,   1496+32,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9335,  3,  D_POS_C,   1496+32,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9336,  3,  D_POS_C,   1496+32,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9337,  3,  D_POS_C,   1496+32,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9338,  3,  D_POS_C,   1496+32,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9339,  3,  D_POS_C,   1496+32,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9340,  3,  D_POS_C,   1497+32,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9341,  3,  D_POS_C,   1497+32,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9342,  3,  D_POS_C,   1497+32,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9343,  3,  D_POS_C,   1497+32,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9344,  3,  D_POS_C,   1497+32,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    //M2
    {0x9201,  2,  D_POS_D,   1494+48,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9202,  2,  D_POS_D,   1494+48,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9203,  2,  D_POS_D,   1494+48,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9204,  2,  D_POS_D,   1494+48,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9205,  2,  D_POS_D,   1494+48,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9206,  2,  D_POS_D,   1494+48,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9207,  2,  D_POS_D,   1494+48,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9208,  2,  D_POS_D,   1495+48,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9209,  2,  D_POS_D,   1495+48,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9210,  2,  D_POS_D,   1495+48,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9211,  2,  D_POS_D,   1495+48,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9212,  2,  D_POS_D,   1495+48,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9213,  2,  D_POS_D,   1495+48,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9214,  2,  D_POS_D,   1495+48,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9215,  2,  D_POS_D,   1495+48,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9216,  2,  D_POS_D,   1495+48,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9217,  2,  D_POS_D,   1495+48,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9218,  2,  D_POS_D,   1495+48,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9219,  2,  D_POS_D,   1495+48,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9220,  2,  D_POS_D,   1495+48,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9221,  2,  D_POS_D,   1495+48,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9222,  2,  D_POS_D,   1495+48,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9223,  2,  D_POS_D,   1495+48,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9224,  2,  D_POS_D,   1496+48,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9225,  2,  D_POS_D,   1496+48,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9226,  2,  D_POS_D,   1496+48,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9227,  2,  D_POS_D,   1496+48,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9228,  2,  D_POS_D,   1496+48,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9329,  3,  D_POS_D,   1496+48,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9330,  3,  D_POS_D,   1496+48,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9331,  3,  D_POS_D,   1496+48,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9328,  3,  D_POS_D,   1496+48,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9333,  3,  D_POS_D,   1496+48,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9334,  3,  D_POS_D,   1496+48,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9335,  3,  D_POS_D,   1496+48,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9336,  3,  D_POS_D,   1496+48,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9337,  3,  D_POS_D,   1496+48,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9338,  3,  D_POS_D,   1496+48,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9339,  3,  D_POS_D,   1496+48,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9340,  3,  D_POS_D,   1497+48,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9341,  3,  D_POS_D,   1497+48,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9342,  3,  D_POS_D,   1497+48,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9343,  3,  D_POS_D,   1497+48,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9344,  3,  D_POS_D,   1497+48,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    //MP2
    {0x9201,  2,  D_POS_E,   1494+64,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9202,  2,  D_POS_E,   1494+64,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9203,  2,  D_POS_E,   1494+64,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9204,  2,  D_POS_E,   1494+64,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9205,  2,  D_POS_E,   1494+64,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9206,  2,  D_POS_E,   1494+64,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9207,  2,  D_POS_E,   1494+64,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9208,  2,  D_POS_E,   1495+64,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9209,  2,  D_POS_E,   1495+64,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9210,  2,  D_POS_E,   1495+64,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9211,  2,  D_POS_E,   1495+64,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9212,  2,  D_POS_E,   1495+64,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9213,  2,  D_POS_E,   1495+64,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9214,  2,  D_POS_E,   1495+64,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9215,  2,  D_POS_E,   1495+64,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9216,  2,  D_POS_E,   1495+64,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9217,  2,  D_POS_E,   1495+64,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9218,  2,  D_POS_E,   1495+64,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9219,  2,  D_POS_E,   1495+64,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9220,  2,  D_POS_E,   1495+64,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9221,  2,  D_POS_E,   1495+64,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9222,  2,  D_POS_E,   1495+64,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9223,  2,  D_POS_E,   1495+64,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9224,  2,  D_POS_E,   1496+64,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9225,  2,  D_POS_E,   1496+64,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9226,  2,  D_POS_E,   1496+64,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9227,  2,  D_POS_E,   1496+64,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9228,  2,  D_POS_E,   1496+64,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9329,  3,  D_POS_E,   1496+64,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9330,  3,  D_POS_E,   1496+64,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9331,  3,  D_POS_E,   1496+64,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9328,  3,  D_POS_E,   1496+64,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9333,  3,  D_POS_E,   1496+64,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9334,  3,  D_POS_E,   1496+64,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9335,  3,  D_POS_E,   1496+64,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9336,  3,  D_POS_E,   1496+64,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9337,  3,  D_POS_E,   1496+64,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9338,  3,  D_POS_E,   1496+64,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9339,  3,  D_POS_E,   1496+64,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9340,  3,  D_POS_E,   1497+64,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9341,  3,  D_POS_E,   1497+64,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9342,  3,  D_POS_E,   1497+64,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9343,  3,  D_POS_E,   1497+64,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9344,  3,  D_POS_E,   1497+64,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    //TC2
    {0x9201,  2,  D_POS_F,   1494+80,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9202,  2,  D_POS_F,   1494+80,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9203,  2,  D_POS_F,   1494+80,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9204,  2,  D_POS_F,   1494+80,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9205,  2,  D_POS_F,   1494+80,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9206,  2,  D_POS_F,   1494+80,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9207,  2,  D_POS_F,   1494+80,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9208,  2,  D_POS_F,   1495+80,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9209,  2,  D_POS_F,   1495+80,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9210,  2,  D_POS_F,   1495+80,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9211,  2,  D_POS_F,   1495+80,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9212,  2,  D_POS_F,   1495+80,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9213,  2,  D_POS_F,   1495+80,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9214,  2,  D_POS_F,   1495+80,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9215,  2,  D_POS_F,   1495+80,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9216,  2,  D_POS_F,   1495+80,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9217,  2,  D_POS_F,   1495+80,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9218,  2,  D_POS_F,   1495+80,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9219,  2,  D_POS_F,   1495+80,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9220,  2,  D_POS_F,   1495+80,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9221,  2,  D_POS_F,   1495+80,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9222,  2,  D_POS_F,   1495+80,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9223,  2,  D_POS_F,   1495+80,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9224,  2,  D_POS_F,   1496+80,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9225,  2,  D_POS_F,   1496+80,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9226,  2,  D_POS_F,   1496+80,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9227,  2,  D_POS_F,   1496+80,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9228,  2,  D_POS_F,   1496+80,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9329,  3,  D_POS_F,   1496+80,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9330,  3,  D_POS_F,   1496+80,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9331,  3,  D_POS_F,   1496+80,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9328,  3,  D_POS_F,   1496+80,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9333,  3,  D_POS_F,   1496+80,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9334,  3,  D_POS_F,   1496+80,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9335,  3,  D_POS_F,   1496+80,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9336,  3,  D_POS_F,   1496+80,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9337,  3,  D_POS_F,   1496+80,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9338,  3,  D_POS_F,   1496+80,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9339,  3,  D_POS_F,   1496+80,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9340,  3,  D_POS_F,   1497+80,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9341,  3,  D_POS_F,   1497+80,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9342,  3,  D_POS_F,   1497+80,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9343,  3,  D_POS_F,   1497+80,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },
    {0x9344,  3,  D_POS_F,   1497+80,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_HVAC   },

//ATC
    {0xA201,  2,  D_POS_A,   1586,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_ATC   },
    {0xA302,  3,  D_POS_A,   1586,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_ATC   },
//PIS

{0xB101,  1,  D_POS_A,   1658,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_PIS   },
{0xB102,  1,  D_POS_F,   1658,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_PIS   },
{0xB203,  2,  D_POS_A,   1658,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_PIS   },
{0xB204,  2,  D_POS_B,   1658,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_PIS   },
{0xB205,  2,  D_POS_C,   1658,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_PIS   },
{0xB206,  2,  D_POS_D,   1658,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_PIS   },
{0xB207,  2,  D_POS_E,   1658,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_PIS   },
{0xB208,  2,  D_POS_F,   1658,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_PIS   },
{0xB309,  3,  D_POS_A,   1659,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_PIS   },
{0xB310,  3,  D_POS_A,   1659,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_PIS   },
{0xB311,  3,  D_POS_B,   1659,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_PIS   },
{0xB312,  3,  D_POS_B,   1659,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_PIS   },
{0xB313,  3,  D_POS_C,   1659,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_PIS   },
{0xB314,  3,  D_POS_C,   1659,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_PIS   },
{0xB315,  3,  D_POS_D,   1660,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_PIS   },
{0xB316,  3,  D_POS_D,   1660,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_PIS   },
{0xB317,  3,  D_POS_E,   1660,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_PIS   },
{0xB318,  3,  D_POS_E,   1660,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_PIS   },
{0xB319,  3,  D_POS_F,   1660,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_PIS   },
{0xB320,  3,  D_POS_F,   1660,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_PIS   },



//EVENT
    //TRAIN
    {0xE432, 4,  D_POS_TRAIN,   1840+13,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },//PORT218 ERM1
    {0xE433, 4,  D_POS_TRAIN,   1840+13,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },//PORT218 ERM1
    {0xE434, 4,  D_POS_TRAIN,   1840+13,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },//PORT218 ERM1
    {0xE435, 4,  D_POS_TRAIN,   1840+13,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },//PORT218 ERM1
    {0xE439, 4,  D_POS_TRAIN,   1840+13,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },//PORT218 ERM1
    {0xE440, 4,  D_POS_TRAIN,   1840+13,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },//PORT218 ERM1
    {0xE441, 4,  D_POS_TRAIN,   1840+13,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },//PORT218 ERM1
    {0xE442, 4,  D_POS_TRAIN,   1840+13,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },//PORT218 ERM1

    //TC1
    {0xE401, 4,  D_POS_A,   32+10,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE402, 4,  D_POS_A,   32+10,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE403, 4,  D_POS_A,   32+11,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE404, 4,  D_POS_A,   32+11,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE405, 4,  D_POS_A,   32+11,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE406, 4,  D_POS_A,   32+12,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE407, 4,  D_POS_A,   32+12,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE408, 4,  D_POS_A,   32+12,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE409, 4,  D_POS_A,   32+13,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE410, 4,  D_POS_A,   32+14,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE411, 4,  D_POS_A,   32+14,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE412, 4,  D_POS_A,   32+14,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE413, 4,  D_POS_A,   32+14,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE414, 4,  D_POS_A,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE415, 4,  D_POS_A,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE416, 4,  D_POS_A,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE417, 4,  D_POS_A,   2208+11,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE418, 4,  D_POS_A,   2208+11,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE429, 4,  D_POS_A,   496+15,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE430, 4,  D_POS_A,   512+9,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE431, 4,  D_POS_A,   512+9,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE436, 4,  D_POS_A,   512+11,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE437, 4,  D_POS_A,   512+12,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE438, 4,  D_POS_A,   512+12,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE443, 4,  D_POS_A,   528+5,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE444, 4,  D_POS_A,   528+5,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE446, 4,  D_POS_A,   1040+11,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
//    {0xE447, 4,  D_POS_A,   1104+1,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE448, 4,  D_POS_A,   1104+2,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE449, 4,  D_POS_A,   1104+3,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE450, 4,  D_POS_A,   1104+4,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE451, 4,  D_POS_A,   1104+5,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE452, 4,  D_POS_A,   1104+6,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE453, 4,  D_POS_A,   1104+7,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE454, 4,  D_POS_A,   1104+8,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE455, 4,  D_POS_A,   1104+9,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE456, 4,  D_POS_A,   1104+10,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE457, 4,  D_POS_A,   1104+1,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE458, 4,  D_POS_A,   1104+2,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE459, 4,  D_POS_A,   1104+3,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE460, 4,  D_POS_A,   1104+4,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE461, 4,  D_POS_A,   1104+5,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE462, 4,  D_POS_A,   1104+6,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE463, 4,  D_POS_A,   1104+7,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE464, 4,  D_POS_A,   1104+8,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE465, 4,  D_POS_A,   1104+9,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE466, 4,  D_POS_A,   1104+10,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE469, 4,  D_POS_A,   1872+8,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE470, 4,  D_POS_A,   1872+8,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE471, 4,  D_POS_A,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE475, 4,  D_POS_A,   2208+11,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE476, 4,  D_POS_A,   32+11,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },

    //MP1
    {0xE401, 4,  D_POS_B,   64+10,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE414, 4,  D_POS_B,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE419, 4,  D_POS_B,   64+10,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE420, 4,  D_POS_B,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE421, 4,  D_POS_B,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE422, 4,  D_POS_B,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE423, 4,  D_POS_B,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE430, 4,  D_POS_B,   512+9,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE431, 4,  D_POS_B,   512+9,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE437, 4,  D_POS_B,   512+12,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE438, 4,  D_POS_B,   512+12,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE445, 4,  D_POS_B,   848+10,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCU   },
//    {0xE447, 4,  D_POS_B,   1168+1,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE448, 4,  D_POS_B,   1168+2,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE449, 4,  D_POS_B,   1168+3,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE450, 4,  D_POS_B,   1168+4,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE451, 4,  D_POS_B,   1168+5,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE452, 4,  D_POS_B,   1168+6,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE453, 4,  D_POS_B,   1168+7,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE454, 4,  D_POS_B,   1168+8,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE455, 4,  D_POS_B,   1168+9,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE456, 4,  D_POS_B,   1168+10,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE457, 4,  D_POS_B,   1168+1,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE458, 4,  D_POS_B,   1168+2,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE459, 4,  D_POS_B,   1168+3,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE460, 4,  D_POS_B,   1168+4,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE461, 4,  D_POS_B,   1168+5,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE462, 4,  D_POS_B,   1168+6,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE463, 4,  D_POS_B,   1168+7,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE464, 4,  D_POS_B,   1168+8,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE465, 4,  D_POS_B,   1168+9,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE466, 4,  D_POS_B,   1168+10,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE467, 4,  D_POS_B,   64+10,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE468, 4,  D_POS_B,   64+10,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE473, 4,  D_POS_B,   4,       bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU  },

    //M1
    {0xE401, 4,  D_POS_C,   96+10,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE414, 4,  D_POS_C,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE424, 4,  D_POS_C,   96+10,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE425, 4,  D_POS_C,   96+11,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE426, 4,  D_POS_C,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE427, 4,  D_POS_C,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE428, 4,  D_POS_C,   256,      bit5,   false,  false, true,  E_FAULTS_CATEGORY_ALL   },
    {0xE430, 4,  D_POS_C,   512+9,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE431, 4,  D_POS_C,   512+9,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE437, 4,  D_POS_C,   512+12,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE438, 4,  D_POS_C,   512+13,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE445, 4,  D_POS_C,   896+10,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCU   },
//    {0xE447, 4,  D_POS_C,   1232+1,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE448, 4,  D_POS_C,   1232+2,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE449, 4,  D_POS_C,   1232+3,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE450, 4,  D_POS_C,   1232+4,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE451, 4,  D_POS_C,   1232+5,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE452, 4,  D_POS_C,   1232+6,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE453, 4,  D_POS_C,   1232+7,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE454, 4,  D_POS_C,   1232+8,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE455, 4,  D_POS_C,   1232+9,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE456, 4,  D_POS_C,   1232+10,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE457, 4,  D_POS_C,   1232+1,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE458, 4,  D_POS_C,   1232+2,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE459, 4,  D_POS_C,   1232+3,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE460, 4,  D_POS_C,   1232+4,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE461, 4,  D_POS_C,   1232+5,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE462, 4,  D_POS_C,   1232+6,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE463, 4,  D_POS_C,   1232+7,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE464, 4,  D_POS_C,   1232+8,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE465, 4,  D_POS_C,   1232+9,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE466, 4,  D_POS_C,   1232+10,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE473, 4,  D_POS_C,   4,       bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU  },

    //M2
    {0xE401, 4,  D_POS_D,   128+10,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE414, 4,  D_POS_D,   4,   bit0,  false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE424, 4,  D_POS_D,   128+10,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    //{0xE425, 4,  D_POS_D,   128+11,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE426, 4,  D_POS_D,   4,   bit0,  false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE427, 4,  D_POS_D,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE430, 4,  D_POS_D,   704+9,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE431, 4,  D_POS_D,   704+9,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE437, 4,  D_POS_D,   704+12,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE438, 4,  D_POS_D,   704+13,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE445, 4,  D_POS_D,   944+10,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCU   },
//    {0xE447, 4,  D_POS_D,   1296+1,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE448, 4,  D_POS_D,   1296+2,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE449, 4,  D_POS_D,   1296+3,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE450, 4,  D_POS_D,   1296+4,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE451, 4,  D_POS_D,   1296+5,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE452, 4,  D_POS_D,   1296+6,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE453, 4,  D_POS_D,   1296+7,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE454, 4,  D_POS_D,   1296+8,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE455, 4,  D_POS_D,   1296+9,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE456, 4,  D_POS_D,   1296+10,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE457, 4,  D_POS_D,   1296+1,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE458, 4,  D_POS_D,   1296+2,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE459, 4,  D_POS_D,   1296+3,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE460, 4,  D_POS_D,   1296+4,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE461, 4,  D_POS_D,   1296+5,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE462, 4,  D_POS_D,   1296+6,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE463, 4,  D_POS_D,   1296+7,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE464, 4,  D_POS_D,   1296+8,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE465, 4,  D_POS_D,   1296+9,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE466, 4,  D_POS_D,   1296+10,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE473, 4,  D_POS_D,   4,       bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU  },

    //MP2
    {0xE401, 4,  D_POS_E,   160+10,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE414, 4,  D_POS_E,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE419, 4,  D_POS_E,   160+10,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE420, 4,  D_POS_E,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE421, 4,  D_POS_E,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE422, 4,  D_POS_E,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE423, 4,  D_POS_E,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE430, 4,  D_POS_E,   704+9,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE431, 4,  D_POS_E,   704+9,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE437, 4,  D_POS_E,   704+12,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE438, 4,  D_POS_E,   704+12,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE445, 4,  D_POS_E,   992+10,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCU   },
//    {0xE447, 4,  D_POS_E,   1360+1,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE448, 4,  D_POS_E,   1360+2,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE449, 4,  D_POS_E,   1360+3,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE450, 4,  D_POS_E,   1360+4,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE451, 4,  D_POS_E,   1360+5,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE452, 4,  D_POS_E,   1360+6,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE453, 4,  D_POS_E,   1360+7,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE454, 4,  D_POS_E,   1360+8,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE455, 4,  D_POS_E,   1360+9,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE456, 4,  D_POS_E,   1360+10,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE457, 4,  D_POS_E,   1360+1,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE458, 4,  D_POS_E,   1360+2,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE459, 4,  D_POS_E,   1360+3,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE460, 4,  D_POS_E,   1360+4,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE461, 4,  D_POS_E,   1360+5,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE462, 4,  D_POS_E,   1360+6,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE463, 4,  D_POS_E,   1360+7,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE464, 4,  D_POS_E,   1360+8,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE465, 4,  D_POS_E,   1360+9,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE466, 4,  D_POS_E,   1360+10,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE467, 4,  D_POS_E,   160+10,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE468, 4,  D_POS_E,   160+10,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE473, 4,  D_POS_E,   4,       bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU  },

    //TC2
    {0xE401, 4,  D_POS_F,   192+10,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE402, 4,  D_POS_F,   192+10,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE403, 4,  D_POS_F,   192+11,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE404, 4,  D_POS_F,   192+11,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE405, 4,  D_POS_F,   192+11,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE406, 4,  D_POS_F,   192+12,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE407, 4,  D_POS_F,   192+12,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE408, 4,  D_POS_F,   192+12,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE409, 4,  D_POS_F,   192+13,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE410, 4,  D_POS_F,   192+14,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE411, 4,  D_POS_F,   192+14,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE412, 4,  D_POS_F,   192+14,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE413, 4,  D_POS_F,   192+14,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE414, 4,  D_POS_F,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE415, 4,  D_POS_F,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE416, 4,  D_POS_F,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE417, 4,  D_POS_F,   2224+11,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE418, 4,  D_POS_F,   2224+11,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE429, 4,  D_POS_F,   688+15,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE430, 4,  D_POS_F,   704+9,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE431, 4,  D_POS_F,   704+9,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE436, 4,  D_POS_F,   704+11,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE437, 4,  D_POS_F,   704+12,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE438, 4,  D_POS_F,   704+12,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE443, 4,  D_POS_F,   720+5,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE444, 4,  D_POS_F,   720+5,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_BCU   },
    {0xE446, 4,  D_POS_F,   1056+11,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_ACU   },
//    {0xE447, 4,  D_POS_F,   1424+1,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE448, 4,  D_POS_F,   1424+2,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE449, 4,  D_POS_F,   1424+3,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE450, 4,  D_POS_F,   1424+4,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE451, 4,  D_POS_F,   1424+5,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE452, 4,  D_POS_F,   1424+6,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE453, 4,  D_POS_F,   1424+7,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE454, 4,  D_POS_F,   1424+8,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE455, 4,  D_POS_F,   1424+9,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0xE456, 4,  D_POS_F,   1424+10,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE457, 4,  D_POS_F,   1424+1,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE458, 4,  D_POS_F,   1424+2,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE459, 4,  D_POS_F,   1424+3,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE460, 4,  D_POS_F,   1424+4,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE461, 4,  D_POS_F,   1424+5,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE462, 4,  D_POS_F,   1424+6,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE463, 4,  D_POS_F,   1424+7,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE464, 4,  D_POS_F,   1424+8,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE465, 4,  D_POS_F,   1424+9,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE466, 4,  D_POS_F,   1424+10,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0xE471, 4,  D_POS_F,   4,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE475, 4,  D_POS_F,   2224+11,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0xE476, 4,  D_POS_F,   192+11,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },


//REC
    //TC1
    {0xD201, 2,  D_POS_A,   2275,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD202, 2,  D_POS_A,   2275,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD303, 3,  D_POS_A,   2275,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD304, 3,  D_POS_A,   2275,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD305, 3,  D_POS_A,   2275,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD306, 3,  D_POS_A,   2275,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD307, 3,  D_POS_A,   2275,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD308, 3,  D_POS_A,   2275,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD309, 3,  D_POS_A,   2275,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD310, 3,  D_POS_A,   2275,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD311, 3,  D_POS_A,   2275,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD312, 3,  D_POS_A,   2275,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD313, 3,  D_POS_A,   2275,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD314, 3,  D_POS_A,   2275,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD315, 3,  D_POS_A,   2276,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD316, 3,  D_POS_A,   2276,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD317, 3,  D_POS_A,   2276,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD318, 3,  D_POS_A,   2276,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD319, 3,  D_POS_A,   2276,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD320, 3,  D_POS_A,   2276,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD321, 3,  D_POS_A,   2276,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD322, 3,  D_POS_A,   2276,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD323, 3,  D_POS_A,   2276,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD324, 3,  D_POS_A,   2276,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD325, 3,  D_POS_A,   2276,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD326, 3,  D_POS_A,   2276,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD327, 3,  D_POS_A,   2276,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD328, 3,  D_POS_A,   2276,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD329, 3,  D_POS_A,   2276,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    //TC2
    {0xD201, 2,  D_POS_F,   2275+16,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD202, 2,  D_POS_F,   2275+16,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD303, 3,  D_POS_F,   2275+16,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD304, 3,  D_POS_F,   2275+16,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD305, 3,  D_POS_F,   2275+16,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD306, 3,  D_POS_F,   2275+16,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD307, 3,  D_POS_F,   2275+16,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD308, 3,  D_POS_F,   2275+16,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD309, 3,  D_POS_F,   2275+16,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD310, 3,  D_POS_F,   2275+16,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD311, 3,  D_POS_F,   2275+16,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD312, 3,  D_POS_F,   2275+16,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD313, 3,  D_POS_F,   2275+16,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD314, 3,  D_POS_F,   2275+16,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD315, 3,  D_POS_F,   2276+16,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD316, 3,  D_POS_F,   2276+16,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD317, 3,  D_POS_F,   2276+16,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD318, 3,  D_POS_F,   2276+16,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD319, 3,  D_POS_F,   2276+16,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD320, 3,  D_POS_F,   2276+16,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD321, 3,  D_POS_F,   2276+16,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD322, 3,  D_POS_F,   2276+16,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD323, 3,  D_POS_F,   2276+16,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD324, 3,  D_POS_F,   2276+16,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD325, 3,  D_POS_F,   2276+16,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD326, 3,  D_POS_F,   2276+16,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD327, 3,  D_POS_F,   2276+16,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD328, 3,  D_POS_F,   2276+16,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_REC   },
    {0xD329, 3,  D_POS_F,   2276+16,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_REC   },





};

int g_faultsRomLen = sizeof(g_faultsrom)/sizeof(FAULTS_ROM_DATA);


bool FaultsVerdict(FAULTS_ROM_DATA *pdata)
{

    if ((pdata->code >= 0x1101) && (pdata->code <= 0x1248))
    {
//        if (0x1101 == pdata->code)
//        {
//            if (((D_POS_A == pdata->pos) && g_485_comm_err_flg1)
//                || ((D_POS_F == pdata->pos) && g_485_comm_err_flg2))
//            {
//                return true;
//            }
//        }        else

        if (0x1101 == pdata->code)
        {
            if (  (D_POS_A == pdata->pos) &&  g_riom1_gw123_comm_err_flg)
            {
                return true;
            }
        }
        else if (0x1102 == pdata->code)
        {
            if (  (D_POS_F == pdata->pos) &&  g_riom6_gw123_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1103 == pdata->code)
        {
            if (  (D_POS_B == pdata->pos) &&  g_riom2_gw123_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1104 == pdata->code)
        {
            if (  (D_POS_E == pdata->pos) &&  g_riom5_gw123_comm_err_flg)
            {
                return true;
            }
        }
        else if (0x1105 == pdata->code)
        {
            if (  (D_POS_C == pdata->pos) &&  g_riom3_gw123_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1106 == pdata->code)
        {
            if (  (D_POS_D == pdata->pos) &&  g_riom4_gw123_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1107 == pdata->code)
        {
            if (  (D_POS_A == pdata->pos) && !(CTHM_CCU1On_B1))//  g_ccu1_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1108 == pdata->code)
        {
            if (  (D_POS_F == pdata->pos) &&  !(CTHM_CCU2On_B1))// g_ccu2_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1109 == pdata->code)
        {
            if (  (D_POS_B == pdata->pos) &&  g_tcu1_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1110 == pdata->code)
        {
            if (  (D_POS_E == pdata->pos) &&  g_tcu4_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1111 == pdata->code)
        {
            if (  (D_POS_C == pdata->pos) &&  g_tcu2_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1112 == pdata->code)
        {
            if (  (D_POS_D == pdata->pos) &&  g_tcu3_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1113 == pdata->code)
        {
            if (  (D_POS_A == pdata->pos) &&  g_bcu1_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1114 == pdata->code)
        {
            if (  (D_POS_F == pdata->pos) &&  g_bcu4_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1115 == pdata->code)
        {
            if (  (D_POS_C == pdata->pos) &&  g_bcu2_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1116 == pdata->code)
        {
            if (  (D_POS_D == pdata->pos) &&  g_bcu3_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1117 == pdata->code)
        {
            if (  (D_POS_A == pdata->pos) &&  g_acu1_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1118 == pdata->code)
        {
            if (  (D_POS_F == pdata->pos) &&  g_acu2_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1119 == pdata->code)
        {
            if (  (D_POS_A == pdata->pos) &&  g_atc1_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1120 == pdata->code)
        {
            if (  (D_POS_A == pdata->pos) &&  g_erm1_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1121 == pdata->code)
        {
            if (  (D_POS_F == pdata->pos) &&  g_erm2_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1122 == pdata->code)
        {
            if (  (D_POS_A == pdata->pos) &&  g_pis1_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1123 == pdata->code)
        {
            if (  (D_POS_F == pdata->pos) &&  g_pis2_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1124 == pdata->code)
        {
            if (  (D_POS_A == pdata->pos) &&  g_door1_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1125 == pdata->code)
        {
            if (  (D_POS_A == pdata->pos) &&  g_door2_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1126 == pdata->code)
        {
            if (  (D_POS_B == pdata->pos) &&  g_door3_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1127 == pdata->code)
        {
            if (  (D_POS_B == pdata->pos) &&  g_door4_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1128 == pdata->code)
        {
            if (  (D_POS_C == pdata->pos) &&  g_door5_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1129 == pdata->code)
        {
            if (  (D_POS_C == pdata->pos) &&  g_door6_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1130 == pdata->code)
        {
            if (  (D_POS_D == pdata->pos) &&  g_door7_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1131 == pdata->code)
        {
            if (  (D_POS_D == pdata->pos) &&  g_door8_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1132 == pdata->code)
        {
            if (  (D_POS_E == pdata->pos) &&  g_door9_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1133 == pdata->code)
        {
            if (  (D_POS_E == pdata->pos) &&  g_door10_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1134 == pdata->code)
        {
            if (  (D_POS_F == pdata->pos) &&  g_door11_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1135 == pdata->code)
        {
            if (  (D_POS_F == pdata->pos) &&  g_door12_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1136 == pdata->code)
        {
            if (  (D_POS_A == pdata->pos) &&  g_hvac1_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1137 == pdata->code)
        {
            if (  (D_POS_F == pdata->pos) &&  g_hvac6_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1138 == pdata->code)
        {
            if (  (D_POS_B == pdata->pos) &&  g_hvac2_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1139 == pdata->code)
        {
            if (  (D_POS_E == pdata->pos) &&  g_hvac5_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1140 == pdata->code)
        {
            if (  (D_POS_C == pdata->pos) &&  g_hvac3_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1141 == pdata->code)
        {
            if (  (D_POS_D == pdata->pos) &&  g_hvac4_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1142 == pdata->code)
        {
            if (  (D_POS_A == pdata->pos) &&  g_hmi1_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1143 == pdata->code)
        {
            if (  (D_POS_F == pdata->pos) &&  g_hmi2_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1144 == pdata->code)
        {
            if (  (D_POS_A == pdata->pos) &&  g_rec1_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1145 == pdata->code)
        {
            if (  (D_POS_F == pdata->pos) &&  g_rec2_comm_err_flg         )
            {
                return true;
            }
        }

    }

    else if((pdata->code >= 0x2100) && (pdata->code <= 0x3300))
    {



//        if (0x3101 == pdata->code)
//        {
//            if (bool(DICT_TC2DI1CabActive_B1)&&bool(DICT_TC1DI1CabActive_B1))
//            {
//                return true;
//            }
//        }
//        else if (0x3103 == pdata->code)
//        {

//            if (
//                bool(DICT_TC1DI1Brk_B1||DICT_TC2DI1Brk_B1||DICT_TC1DI2Brk_B1||DICT_TC2DI2Brk_B1)&&
//                bool(DICT_TC1DI1Traction_B1||DICT_TC2DI1Traction_B1||DICT_TC1DI2Traction_B1||DICT_TC2DI2Traction_B1))
//            {
//                return true;
//            }
//        }
//        else if (0x3102 == pdata->code)
//        {
//            if (bool(DICT_TC1DI1Forward_B1||DICT_TC2DI1Backward_B1)&&bool(DICT_TC1DI1Backward_B1||DICT_TC2DI1Forward_B1))
//            {
//                return true;
//            }
//        }
//        else if (0x3104 == pdata->code)
//        {
//            if (bool(DICT_TC2DI4LtDrOpen_B1||DICT_TC1DI4RtDrOpen_B1)&&bool(DICT_TC1DI4LtDrOpen_B1||DICT_TC2DI4RtDrOpen_B1))
//            {
//                return true;
//            }
//        }
//        else
        if (0x3108 == pdata->code)
        {
            if(aircmperr1 && (pdata->pos == D_POS_A))
            {

                return true;

            }
            if(aircmperr2 && (pdata->pos == D_POS_F))
            {
                return true;
            }

        }
        else if (0x3214 == pdata->code) //add by leo 20161025 following
            {

                if ((D_POS_F == pdata->pos) &&  V24verr2 && bool(CTHM_TC2RIOMGWOn_B1)  && bool(CTHM_TC2DI3On_B1))
                {

                    return true;
                }
                else if ((D_POS_A == pdata->pos) && V24verr1 && bool(CTHM_TC1RIOMGWOn_B1) && bool(CTHM_TC1DI3On_B1))
                {
                    return true;
                }
            }
         else if (0x3215 == pdata->code)
            {

                if (    (D_POS_A == pdata->pos) &&  Fireerr1 && (CTHM_TC1RIOMGWOn_B1) &&(CTHM_TC1DI1On_B1)  )
                {
                    return true;
                }
                else if (  (D_POS_B == pdata->pos) && Fireerr2 && (CTHM_Mp1RIOMGWOn_B1) &&(CTHM_MP1DI1On_B1) )
                {
                    return true;
                }
                else if (  (D_POS_C == pdata->pos) && Fireerr3 && (CTHM_M1RIOMGWOn_B1)  &&(CTHM_M1DI1On_B1) )
                {
                    return true;
                }
                else if (  (D_POS_D == pdata->pos) && Fireerr4 && (CTHM_M2RIOMGWOn_B1)  &&(CTHM_M2DI1On_B1) )
                {
                    return true;
                }
                else if (  (D_POS_E == pdata->pos) && Fireerr5 && (CTHM_Mp2RIOMGWOn_B1) &&(CTHM_MP2DI1On_B1) )
                {
                    return true;
                }
                else if (  (D_POS_F == pdata->pos) && Fireerr6 && (CTHM_TC2RIOMGWOn_B1)  &&(CTHM_TC2DI1On_B1))
                {
                    return true;
                }
            }
         else if (0x3118 == pdata->code)
         {

             if((D_POS_TRAIN == pdata->pos) &&  BCbothfaulterr &&  bool(CTHMI_CatenaryVoltage_U16 > 1200) )
             {
                 return true;
             }
         }


        else if (0 != (g_dataBuffer_WH_Display[pdata->word] & pdata->bit))
        {

            return true;
        }

    }
    else if((pdata->code >= 0x5100) && (pdata->code <= 0x5399))
    {
        if ( (pdata->pos == D_POS_A )&& (0x5219 == pdata->code))
        {
            if (bool(g_dataBuffer_WH_Display[509]&bit8)&&bool(g_dataBuffer_WH_Display[509]&bit9))
            {
                return true;
            }
        }else if((pdata->pos == D_POS_F )&& (0x5219 == pdata->code))
        {
            if (bool(g_dataBuffer_WH_Display[509+192]&bit8)&&bool(g_dataBuffer_WH_Display[509+192]&bit9))
            {
                return true;
            }
        }
        else if((pdata->pos == D_POS_A )&& (0x5220 == pdata->code))
        {
            if (bool(g_dataBuffer_WH_Display[509]&bit10)&&bool(g_dataBuffer_WH_Display[509]&bit11))
            {
                return true;
            }
        }
        else if((pdata->pos == D_POS_F )&& (0x5220 == pdata->code))
        {
            if (bool(g_dataBuffer_WH_Display[509+192]&bit10)&&bool(g_dataBuffer_WH_Display[509+192]&bit11))
            {
                return true;
            }
        }
        else if ( (pdata->pos == D_POS_B )&& (0x5221 == pdata->code))
        {
            if (bool(g_dataBuffer_WH_Display[509]&bit12)&&bool(g_dataBuffer_WH_Display[509]&bit13))
            {
                return true;
            }
        }else if((pdata->pos == D_POS_E )&& (0x5221 == pdata->code))
        {
            if (bool(g_dataBuffer_WH_Display[509+192]&bit12)&&bool(g_dataBuffer_WH_Display[509+192]&bit13))
            {
                return true;
            }
        }
        else if((pdata->pos == D_POS_B )&& (0x5222 == pdata->code))
        {
            if (bool(g_dataBuffer_WH_Display[509]&bit14)&&bool(g_dataBuffer_WH_Display[509]&bit15))
            {
                return true;
            }
        }
        else if((pdata->pos == D_POS_E )&& (0x5222 == pdata->code))
        {
            if (bool(g_dataBuffer_WH_Display[509+192]&bit14)&&bool(g_dataBuffer_WH_Display[509+192]&bit15))
            {
                return true;
            }
        }
        else if ( (pdata->pos == D_POS_C )&& (0x5223 == pdata->code))
        {
            if (bool(g_dataBuffer_WH_Display[510]&bit0)&&bool(g_dataBuffer_WH_Display[510]&bit1))
            {
                return true;
            }
        }else if((pdata->pos == D_POS_D )&& (0x5223 == pdata->code))
        {
            if (bool(g_dataBuffer_WH_Display[510+192]&bit0)&&bool(g_dataBuffer_WH_Display[510+192]&bit1))
            {
                return true;
            }
        }
        else if((pdata->pos == D_POS_C)&& (0x5224 == pdata->code))
        {
            if (bool(g_dataBuffer_WH_Display[510]&bit2)&&bool(g_dataBuffer_WH_Display[510]&bit3))
            {
                return true;
            }
        }
        else if((pdata->pos == D_POS_D)&& (0x5224 == pdata->code))
        {
            if (bool(g_dataBuffer_WH_Display[510+192]&bit2)&&bool(g_dataBuffer_WH_Display[510+192]&bit3))
            {
                return true;
            }
        }
        else if ( (pdata->pos == D_POS_A )&& (0x5313 == pdata->code))
        {
            if (bool(g_dataBuffer_WH_Display[509]&bit8)||bool(g_dataBuffer_WH_Display[509]&bit9))
            {
                return true;
            }
        }else if((pdata->pos == D_POS_F )&& (0x5313 == pdata->code))
        {
            if (bool(g_dataBuffer_WH_Display[509+192]&bit8)||bool(g_dataBuffer_WH_Display[509+192]&bit9))
            {
                return true;
            }
        }
        else if((pdata->pos == D_POS_A )&& (0x5314 == pdata->code))
        {
            if (bool(g_dataBuffer_WH_Display[509]&bit10)||bool(g_dataBuffer_WH_Display[509]&bit11))
            {
                return true;
            }
        }
        else if((pdata->pos == D_POS_F )&& (0x5314 == pdata->code))
        {
            if (bool(g_dataBuffer_WH_Display[509+192]&bit10)||bool(g_dataBuffer_WH_Display[509+192]&bit11))
            {
                return true;
            }
        }
        else if ( (pdata->pos == D_POS_B )&& (0x5315 == pdata->code))
        {
            if (bool(g_dataBuffer_WH_Display[509]&bit12)||bool(g_dataBuffer_WH_Display[509]&bit13))
            {
                return true;
            }
        }else if((pdata->pos == D_POS_E )&& (0x5315 == pdata->code))
        {
            if (bool(g_dataBuffer_WH_Display[509+192]&bit12)||bool(g_dataBuffer_WH_Display[509+192]&bit13))
            {
                return true;
            }
        }
        else if((pdata->pos == D_POS_B )&& (0x5316 == pdata->code))
        {
            if (bool(g_dataBuffer_WH_Display[509]&bit14)||bool(g_dataBuffer_WH_Display[509]&bit15))
            {
                return true;
            }
        }
        else if((pdata->pos == D_POS_E )&& (0x5316 == pdata->code))
        {
            if (bool(g_dataBuffer_WH_Display[509+192]&bit14)||bool(g_dataBuffer_WH_Display[509+192]&bit15))
            {
                return true;
            }
        }
        else if ( (pdata->pos == D_POS_C )&& (0x5317 == pdata->code))
        {
            if (bool(g_dataBuffer_WH_Display[510]&bit0)||bool(g_dataBuffer_WH_Display[510]&bit1))
            {
                return true;
            }
        }else if((pdata->pos == D_POS_D )&& (0x5317 == pdata->code))
        {
            if (bool(g_dataBuffer_WH_Display[510+192]&bit0)||bool(g_dataBuffer_WH_Display[510+192]&bit1))
            {
                return true;
            }
        }
        else if((pdata->pos == D_POS_C)&& (0x5318 == pdata->code))
        {
            if (bool(g_dataBuffer_WH_Display[510]&bit2)||bool(g_dataBuffer_WH_Display[510]&bit3))
            {
                return true;
            }
        }
        else if((pdata->pos == D_POS_D)&& (0x5318 == pdata->code))
        {
            if (bool(g_dataBuffer_WH_Display[510+192]&bit2)||bool(g_dataBuffer_WH_Display[510+192]&bit3))
            {
                return true;
            }
        }
        else if((0x5331 == pdata->code))
        {
            if ((pdata->pos == D_POS_A)&& bool(g_dataBuffer_WH_Display[526]&bit10)||bool(g_dataBuffer_WH_Display[526]&bit11))
            {
                return true;
            }
        }
        else if((0x5331 == pdata->code))
        {
            if ((pdata->pos == D_POS_F)&& bool(g_dataBuffer_WH_Display[526+192]&bit10)||bool(g_dataBuffer_WH_Display[526+192]&bit11))
            {
                return true;
            }
        }
        else if((0x5132 == pdata->code))
        {
            if ((pdata->pos == D_POS_A)&& bool(g_dataBuffer_WH_Display[526]&bit11)&&bool(g_dataBuffer_WH_Display[526]&bit10))
            {
                return true;
            }
        }
        else if((0x5132 == pdata->code))
        {
            if ((pdata->pos == D_POS_F)&& bool(g_dataBuffer_WH_Display[526+192]&bit10)&&bool(g_dataBuffer_WH_Display[526+192]&bit11))
            {
                return true;
            }
        }
        else if (0 != (g_dataBuffer_WH_Display[pdata->word] & pdata->bit))
        {
            return true;
        }
    }
    else if((pdata->code >= 0x6100) && (pdata->code <= 0x6399))
    {
        if(pdata->code == 0x6311)
        {
            if(CTHMI_Traction_B1)
            {
                if(bool(g_dataBuffer_WH_Display[855]&bit11)&&(pdata->pos == D_POS_B))
                {
                    return true;
                }
                if(bool(g_dataBuffer_WH_Display[855+48]&bit11)&&(pdata->pos == D_POS_C))
                {
                    return true;
                }
                if(bool(g_dataBuffer_WH_Display[855+96]&bit11)&&(pdata->pos == D_POS_D))
                {
                    return true;
                }
                if(bool(g_dataBuffer_WH_Display[855+144]&bit11)&&(pdata->pos == D_POS_E))
                {
                    return true;
                }
            }
        }
        else if(pdata->code == 0x6312)
        {
            if(CTHMI_Brake_B1)
            {
                if(bool(g_dataBuffer_WH_Display[855]&bit11)&&(pdata->pos == D_POS_B))
                {
                    return true;
                }
                if(bool(g_dataBuffer_WH_Display[855+48]&bit11)&&(pdata->pos == D_POS_C))
                {
                    return true;
                }
                if(bool(g_dataBuffer_WH_Display[855+96]&bit11)&&(pdata->pos == D_POS_D))
                {
                    return true;
                }
                if(bool(g_dataBuffer_WH_Display[855+144]&bit11)&&(pdata->pos == D_POS_E))
                {
                    return true;
                }
            }
        }
        else if (0 != (g_dataBuffer_WH_Display[pdata->word] & pdata->bit))
        {
            return true;
        }

    }
    else if((pdata->code >= 0x8100) && (pdata->code <= 0x8399))
    {
        if(pdata->code == 0x8101)// add 10s delay
        {
            if( bool(pdata->pos == D_POS_A)&&
               (((bool(g_dataBuffer_MVB[1118]/256 == 0)&&bool (CTHMI_EDCU1On_B1)) ||(bool(g_dataBuffer_MVB[1118+32]/256 == 0)&& bool(CTHMI_EDCU2On_B1)))||
               (!bool (CTHMI_EDCU1On_B1)&&!bool (CTHMI_EDCU2On_B1))))
            {
                return true;
            }
            else if( bool(pdata->pos == D_POS_B)&&
                    (((bool(g_dataBuffer_MVB[1118+64]/256 == 0)&&bool (CTHMI_EDCU3On_B1)) ||(bool(g_dataBuffer_MVB[1118+96]/256 == 0)&& bool(CTHMI_EDCU4On_B1)))||
                    (!bool (CTHMI_EDCU3On_B1)&&!bool (CTHMI_EDCU4On_B1))))
            {
                return true;
            }
            else if( bool(pdata->pos == D_POS_C)&&
                    (((bool(g_dataBuffer_MVB[1118+128]/256 == 0)&&bool (CTHMI_EDCU5On_B1)) ||(bool(g_dataBuffer_MVB[1118+160]/256 == 0)&& bool(CTHMI_EDCU6On_B1)))||
                    (!bool (CTHMI_EDCU5On_B1)&&!bool (CTHMI_EDCU6On_B1))))
            {
                return true;
            }
            else if( bool(pdata->pos == D_POS_D)&&
                    (((bool(g_dataBuffer_MVB[1118+192]/256 == 0)&&bool (CTHMI_EDCU7On_B1)) ||(bool(g_dataBuffer_MVB[1118+244]/256 == 0)&& bool(CTHMI_EDCU8On_B1)))||
                    (!bool (CTHMI_EDCU7On_B1)&&!bool (CTHMI_EDCU8On_B1))))
            {
                return true;
            }
            else if( bool(pdata->pos == D_POS_E)&&
                    (((bool(g_dataBuffer_MVB[1118+256]/256 == 0)&&bool (CTHMI_EDCU9On_B1)) ||(bool(g_dataBuffer_MVB[1118+288]/256 == 0)&& bool(CTHMI_EDCU10On_B1)))||
                    (!bool (CTHMI_EDCU10On_B1)&&!bool (CTHMI_EDCU9On_B1))))
            {
                return true;
            }
            else if( bool(pdata->pos == D_POS_F)&&
                    (((bool(g_dataBuffer_MVB[1118+320]/256 == 0)&&bool (CTHMI_EDCU11On_B1)) ||(bool(g_dataBuffer_MVB[1118+352]/256 == 0)&& bool(CTHMI_EDCU12On_B1)))||
                    (!bool (CTHMI_EDCU11On_B1)&&!bool (CTHMI_EDCU12On_B1))))
            {
                return true;
            }
        }
        else if(pdata->code == 0x8302)
        {
            if(((bool(g_dataBuffer_MVB[1118]/256 == 3)  &&  bool (CTHMI_EDCU1On_B1))||(bool(g_dataBuffer_MVB[1118+32]/256 == 3)  &&  bool (CTHMI_EDCU2On_B1)))&&bool(pdata->pos == D_POS_A))
            {
                return true;
            }
            else if(((bool(g_dataBuffer_MVB[1118+64]/256 == 3)  &&  bool (CTHMI_EDCU3On_B1))||(bool(g_dataBuffer_MVB[1118+96]/256 == 3)  &&  bool (CTHMI_EDCU4On_B1)))&&bool(pdata->pos == D_POS_B))
            {
                return true;
            }
            else if(((bool(g_dataBuffer_MVB[1118+128]/256 == 3)  &&  bool (CTHMI_EDCU5On_B1))||(bool(g_dataBuffer_MVB[1118+160]/256 == 3)  &&  bool (CTHMI_EDCU6On_B1)))&&bool(pdata->pos == D_POS_C))
            {
                return true;
            }
            else if(((bool(g_dataBuffer_MVB[1118+192]/256 == 3)  &&  bool (CTHMI_EDCU7On_B1))||(bool(g_dataBuffer_MVB[1118+224]/256 == 3)  &&  bool (CTHMI_EDCU8On_B1)))&&bool(pdata->pos == D_POS_D))
            {
                return true;
            }
            else if(((bool(g_dataBuffer_MVB[1118+256]/256 == 3)  &&  bool (CTHMI_EDCU9On_B1))||(bool(g_dataBuffer_MVB[1118+288]/256 == 3)  &&  bool (CTHMI_EDCU10On_B1)))&&bool(pdata->pos == D_POS_E))
            {
                return true;
            }
            else if(((bool(g_dataBuffer_MVB[1118+320]/256 == 3)  &&  bool (CTHMI_EDCU11On_B1))||(bool(g_dataBuffer_MVB[1118+352]/256 == 3)  &&  bool (CTHMI_EDCU12On_B1)))&&bool(pdata->pos == D_POS_F))
            {
                return true;
            }
        }else if(0 != (g_dataBuffer_WH_Display[pdata->word] & pdata->bit))
        {
            return true;
        }
    }
    else if((pdata->code >= 0xE100) && (pdata->code <= 0xE499))
    {
        if(pdata->code == 0xE414)
        {
            if((D_POS_A == pdata->pos)&&(!bool(g_dataBuffer_WH_Display[2218]&bit13)) )
            {
                return true;
            }
            else if((D_POS_B == pdata->pos)&&(!bool(g_dataBuffer_WH_Display[64+10]&bit13)) )
            {
                return true;
            }
            else if((D_POS_C == pdata->pos)&&(!bool(g_dataBuffer_WH_Display[96+10]&bit13)) )
            {
                return true;
            }
            else if((D_POS_D == pdata->pos)&&(!bool(g_dataBuffer_WH_Display[128+10]&bit13)) )
            {
                return true;
            }
            else if((D_POS_E == pdata->pos)&&(!bool(g_dataBuffer_WH_Display[160+10]&bit13)) )
            {
                return true;
            }
            else if((D_POS_F == pdata->pos)&&(!bool(g_dataBuffer_WH_Display[2234]&bit13)) )
            {
                return true;
            }
        }
        else if(pdata->code == 0xE415)
        {
            if((D_POS_A == pdata->pos)&&(!bool(g_dataBuffer_WH_Display[2218]&bit12)) )
            {
                return true;
            }
            else if((D_POS_F == pdata->pos)&&(!bool(g_dataBuffer_WH_Display[2234]&bit12)) )
            {
                return true;
            }
        }
        else if(pdata->code == 0xE416)
        {
            if((D_POS_A == pdata->pos)&&(!bool(g_dataBuffer_WH_Display[2218]&bit11)) )
            {
                return true;
            }
            else if((D_POS_F == pdata->pos)&&(!bool(g_dataBuffer_WH_Display[2234]&bit11)) )
            {
                return true;
            }
        }
        else if(pdata->code == 0xE420)
        {
            if((D_POS_B == pdata->pos)&&(!bool(g_dataBuffer_WH_Display[64+10]&bit11)) )
            {
                return true;
            }
            else if((D_POS_E == pdata->pos)&&(!bool(g_dataBuffer_WH_Display[160+10]&bit11)) )
            {
                return true;
            }
        }
        else if(pdata->code == 0xE421)
        {
            if((D_POS_B == pdata->pos)&&(!bool(g_dataBuffer_WH_Display[64+11]&bit5)) )
            {
                return true;
            }
            else if((D_POS_E == pdata->pos)&&(!bool(g_dataBuffer_WH_Display[160+11]&bit5)) )
            {
                return true;
            }
        }
        else if(pdata->code == 0xE422)
        {
            if((D_POS_B == pdata->pos)&&(!bool(g_dataBuffer_WH_Display[64+11]&bit1)) )
            {
                return true;
            }
            else if((D_POS_E == pdata->pos)&&(!bool(g_dataBuffer_WH_Display[160+11]&bit1)) )
            {
                return true;
            }
        }
        else if(pdata->code == 0xE423)
        {
            if((D_POS_B == pdata->pos)&&(!bool(g_dataBuffer_WH_Display[64+11]&bit0)) )
            {
                return true;
            }
            else if((D_POS_E == pdata->pos)&&(!bool(g_dataBuffer_WH_Display[160+11]&bit0)) )
            {
                return true;
            }
        }
        else if(pdata->code == 0xE426)
        {
            if((D_POS_C == pdata->pos)&&(!bool(g_dataBuffer_WH_Display[96+11]&bit1)) )
            {
                return true;
            }
            else if((D_POS_D == pdata->pos)&&(!bool(g_dataBuffer_WH_Display[128+11]&bit1)) )
            {
                return true;
            }
        }
        else if(pdata->code == 0xE427)
        {
            if((D_POS_C == pdata->pos)&&(!bool(g_dataBuffer_WH_Display[96+11]&bit0)) )
            {
                return true;
            }
            else if((D_POS_D == pdata->pos)&&(!bool(g_dataBuffer_WH_Display[128+11]&bit0)) )
            {
                return true;
            }
        }
        else if(pdata->code == 0xE471)
        {
            if((D_POS_A == pdata->pos)&&(!bool(g_dataBuffer_WH_Display[32+13]&bit12)) )
            {
                return true;
            }
            else if((D_POS_F == pdata->pos)&&(!bool(g_dataBuffer_WH_Display[192+13]&bit12)) )
            {
                return true;
            }
        }else if(pdata->code == 0xE473)
        {
            if((D_POS_B == pdata->pos)&&(TR1CT_IsolateCommand_B1 || TR1CT_DCUCutOut_B1) )
            {
                return true;
            }
            else if((D_POS_C == pdata->pos)&&(TR2CT_IsolateCommand_B1 || TR2CT_DCUCutOut_B1) )
            {
                return true;
            }
            else if((D_POS_D == pdata->pos)&&(TR3CT_IsolateCommand_B1 || TR3CT_DCUCutOut_B1) )
            {
                return true;
            }
            else if((D_POS_E == pdata->pos)&&(TR4CT_IsolateCommand_B1 || TR4CT_DCUCutOut_B1) )
            {
                return true;
            }

        }
        else if (0 != (g_dataBuffer_WH_Display[pdata->word] & pdata->bit))
        {
            return true;
        }

    }
    else if (0 != (g_dataBuffer_WH_Display[pdata->word] & pdata->bit))
    {

        return true;
    }

    return false;
}

void AddNewFaultRecordToHistoryList(ST_HISTORY_FAULT_INFO &newinfo)
{
    if (g_historyFaultsList.curIdx < D_HISTORY_FAULT_LIST_MAX_CNT)
    {
        g_historyFaultsList.curIdx += 1;
    }
    else
    {
        g_historyFaultsList.curIdx = 1;
    }

    CheckIndexRange(g_historyFaultsList.curIdx, __LINE__);

    g_historyFaultsList.list[g_historyFaultsList.curIdx] = newinfo;

    if (g_historyFaultsList.cnt < D_HISTORY_FAULT_LIST_MAX_CNT)
    {
        g_historyFaultsList.cnt += 1;
    }

    CheckIndexRange(g_historyFaultsList.cnt, __LINE__);
}

int GetHistoryFaultsListCount()
{
    return g_historyFaultsList.cnt;
}

ST_HISTORY_FAULT_INFO * GetHistoryFaultInfoAt(int num)
{
    ASSERT(num <= D_HISTORY_FAULT_LIST_MAX_CNT);

    ST_HISTORY_FAULT_INFO *pdata = NULL;

    int i;
    int index = g_historyFaultsList.curIdx;

    CheckIndexRange(g_historyFaultsList.cnt, __LINE__);

    if(index < 1)
        index = g_historyFaultsList.cnt;

    for (i = 0; i < num; i++)
    {
        if (1 >= index)
        {
            index = g_historyFaultsList.cnt;
        }
        else
        {
            index -= 1;
        }
    }

    CheckIndexRange(index, __LINE__);

    pdata = &g_historyFaultsList.list[index];

    return pdata;
}

void HistoryFaultsLoad()
{
        QString pathStr = qApp->applicationDirPath() + "/record/";
        QDir dir(pathStr);
        if(!dir.exists())
            dir.mkdir(pathStr);
    QString appPath = QApplication::applicationDirPath();
    QString fName = appPath + "/record/FaultsHistory.dat";

    fstream fs;
    fs.open(fName.toStdString().c_str(), ios_base::in);
    if (!fs.is_open())
    {
        return ;
    }
    fs.read((char*)&g_historyFaultsList, sizeof(g_historyFaultsList));

    fs.close();
}

QString HistoryFaultsOutput()
{
    QString pathStr = qApp->applicationDirPath() + "/record/";
    QDir dir(pathStr);
    if(!dir.exists())
        dir.mkdir(pathStr);
    QString appPath = QApplication::applicationDirPath();
    QString fName = appPath + "/record/FaultsHistory.dat";

    ////////////test
    QString fNametest = appPath + "/record/FaultsHistorytest.txt";

    fstream fst;
    fst.open(fNametest.toStdString().c_str(), ios_base::out);
    if (!fst.is_open())
    {
        return "";
        qDebug()<< "fail to open";
    }

    char linebuff[100];
    int i = 0;
    ST_DATETIME datetime;
    FAULTS_ROM_DATA *pdata = &g_faultsrom[g_historyFaultsList.list[i].romIdx];

    for (i=0; i<g_historyFaultsList.cnt; i++)
    {
        memset(linebuff, 0, sizeof(linebuff));
        datetime = g_historyFaultsList.list[i].start_datetime;
        sprintf(linebuff,"%4d,%02d,%02d,%02d,%02d,%02d,%x,%d,%d\n",
                     datetime.year, datetime.month, datetime.day,
                     datetime.hour, datetime.minute, datetime.second,
                     g_faultsrom[g_historyFaultsList.list[i].romIdx].code,
                     g_faultsrom[g_historyFaultsList.list[i].romIdx].pos,
                     g_faultsrom[g_historyFaultsList.list[i].romIdx].level

//                     g_historyFaultsList.list[i].carID,
//                     g_historyFaultsList.list[i].nIDType,
//                     g_historyFaultsList.list[i].lID ,%d,%d,%ld
                     );
        fst.write(linebuff,strlen(linebuff));
    }

    //save current history index.
    //fst.write((char*)&g_historyFaultsList, sizeof(g_historyFaultsList));
    QString curIndex = "curIndex:" + QString::number(g_historyFaultsList.curIdx) + "\n";
    fst.write(curIndex.toStdString().c_str(),curIndex.length());

    fst.close();
    ///////test

    fstream fs;
    fs.open(fName.toStdString().c_str(), ios_base::out);
    if (!fs.is_open())
    {
        return "";
    }

    fs.write((char*)&g_historyFaultsList, sizeof(g_historyFaultsList));

    fs.close();

    return fName;
}

void SearchAndSaveEndDateTime(int idx, QDateTime &datetime)
{
    ST_HISTORY_FAULT_INFO *pdata;
    int i = 0;
    int historyCnt = GetHistoryFaultsListCount();
    int curIndex = g_historyFaultsList.curIdx;

    CheckIndexRange(curIndex, __LINE__);
    CheckIndexRange(historyCnt, __LINE__);

    pdata = &g_historyFaultsList.list[curIndex];

    for (i=0; i<historyCnt; i++)
    {
        if ((idx == pdata->romIdx) && !(pdata->isEnd))
        {
            pdata->isEnd = true;
            pdata->end_datetime.year = datetime.date().year();
            pdata->end_datetime.month = datetime.date().month();
            pdata->end_datetime.day = datetime.date().day();
            pdata->end_datetime.hour = datetime.time().hour();
            pdata->end_datetime.minute = datetime.time().minute();
            pdata->end_datetime.second = datetime.time().second();
            break;
        }
        if (1 >= curIndex)
        {
            curIndex = historyCnt;

            CheckIndexRange(curIndex, __LINE__);

            pdata = &g_historyFaultsList.list[curIndex];
        }
        else
        {
            pdata--;
            curIndex--;
        }
    }
}

int FaultsScanning()
{
    int ret = 0;
    int i;
    FAULTS_ROM_DATA *pdata = &g_faultsrom[0];
    bool found = false;
    QDateTime datetime = QDateTime::currentDateTime();
    int realtimefaultscount = 0;
    ST_HISTORY_FAULT_INFO newinfo;
    for (i=0; i<g_faultsRomLen; i++)
    {

        if (FaultsVerdict(pdata))
        {

            if (pdata->flg)
            {   // if it's already exist
                // then leave it alone
            }
            else
            {

                //                if (!AntiShakingProcess(i, true))
                //                {
                //                    pdata++;
                //                    continue;
                //                }
                pdata->flg = true;
                pdata->confirm = false;
                // a new fault occurs
                // create a fault record

                newinfo.romIdx = i;
                newinfo.start_datetime.year = datetime.date().year();
                newinfo.start_datetime.month = datetime.date().month();
                newinfo.start_datetime.day = datetime.date().day();
                newinfo.start_datetime.hour = datetime.time().hour();
                newinfo.start_datetime.minute = datetime.time().minute();
                newinfo.start_datetime.second = datetime.time().second();
                newinfo.isEnd = false;


                // if "found" is true, faults history file saving is needed when the scanning is finished!
                found = true;

                //add fault to real time list

                ST_REALTIME_FAULT_INFO realtimeFault;
                realtimeFault.nRomIndex = i;
                realtimeFault.start_datetime = newinfo.start_datetime;
                if(pdata->level != 3 )
                {
                    g_realtimeFaultsbarList.push_front(realtimeFault);
                }
                //if(pdata->level != 4)
                {
                    AddNewFaultRecordToHistoryList(newinfo);
                    g_realtimeFaultsList.push_front(realtimeFault);

                }
                if(pdata->level == 4)
                {
                    g_eventList.push_back(realtimeFault);
                }
                //g_realtime_faults_datetime_array[i] = newinfo.start_datetime;

                if(g_bScannFault)
                {
                    //show real time fault page
                    if((pdata->level == 1 || pdata->level == 2)
                        && CGlobal::m_nCurPageIndex != PAGE_INDEX_REALTIMEFAULT)
                    {

                        if(pdata->code != 0x120A && pdata->code != 0x120B)
                        {
                            g_backtoprepage = false;
                            SetFaultType(E_FAULTS_TYPE_REALTIME);
                            CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
                            if (pPage == NULL)   return false;
              //              pPage->ChangePage(PAGE_INDEX_REALTIMEFAULT);
                        }
                    }
                }
            }
            if ((1 == pdata->level) || (2 == pdata->level) || (3 == pdata->level))
            {
                if(pdata->level != 3)
                {
                    realtimefaultscount += 1;
                }
                if (-1 == ret)
                {
                    ret = i;
                }
            }
        }
        else
        {
            if (pdata->flg)
            {   // fault disapear
//                if (!AntiShakingProcess(i, false))
//                {
//                    pdata++;
//                    continue;
//                }
                pdata->flg = false;
                pdata->confirm = false;
                // search in the history list and if found, mark it end...
                SearchAndSaveEndDateTime(i, datetime);

                found = true;
                //remove fault from real time list

                     for(int ii = 0; ii < g_realtimeFaultsList.size(); ii++)
                     {
                         if(g_realtimeFaultsList[ii].nRomIndex == i)
                         {
                             g_realtimeFaultsList.removeAt(ii);
                             break;
                         }
                     }


               if(pdata->level != 3 )
               {
                    for(int j = 0; j < g_realtimeFaultsbarList.size(); j++)
                    {
                        if(g_realtimeFaultsbarList[j].nRomIndex == i)
                        {
                            if(g_faultcount>0) {
                                g_faultcount--;
                            }
                            g_realtimeFaultsbarList.removeAt(j);
                            break;
                        }
                    }
               }

            }
        }
        pdata++;
    }
    if (found)                     //set this mark true when the fault is disapper
    {

        g_faultcount = 0;//least fault shows first
        HistoryFaultsOutput();    //insert the fault into historyfault list
    }

    g_RealTimeFaultsNum = realtimefaultscount;
    //qlog g_RealTimeFaultsNumold<<g_RealTimeFaultsNum;
    if(g_RealTimeFaultsNum > g_RealTimeFaultsNumold)
    {
        g_RealTimeFaultsNumold = g_RealTimeFaultsNum;
        return true;
    }else
    {
        g_RealTimeFaultsNumold = g_RealTimeFaultsNum;
        return false;
    }
}

void SetFaultType(E_FAULTS_TYPE type)
{
    g_fault_type = type;
    g_event_type = type;
    switch (type)
    {
    case E_FAULTS_TYPE_HISTORY:
        g_subSystemFaultsTitle = QObject::trUtf8("历史故障");
        break;
    case E_FAULTS_TYPE_TODAY:
        g_subSystemFaultsTitle = QObject::trUtf8("今日故障");
        break;
    case E_FAULTS_TYPE_REALTIME:
        g_subSystemFaultsTitle = QObject::trUtf8("实时故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_ALL;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
//    case E_FAULTS_TYPE_LEVEL3:
//        g_subSystemFaultsTitle = QObject::trUtf8("三级故障");
//        break;
    case E_FAULTS_TYPE_CAB:
        g_subSystemFaultsTitle = QObject::trUtf8("司机室故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_CAB;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_ACU:
        g_subSystemFaultsTitle = QObject::trUtf8("辅助系统故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_ACU;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_BCU:
        g_subSystemFaultsTitle = QObject::trUtf8("制动装置故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_BCU;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_TCU:
        g_subSystemFaultsTitle = QObject::trUtf8("牵引系统故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_TCU;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_HVAC:
        g_subSystemFaultsTitle = QObject::trUtf8("空调设置故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_HVAC;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_ATC:
        g_subSystemFaultsTitle = QObject::trUtf8("ATC故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_ATC;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_PIS:
        g_subSystemFaultsTitle = QObject::trUtf8("PIS故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_PIS;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_TCMS:
        g_subSystemFaultsTitle = QObject::trUtf8("网络故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_TCMS;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_DOOR:
        g_subSystemFaultsTitle = QObject::trUtf8("门故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_DCU;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_TL:
        g_subSystemFaultsTitle = QObject::trUtf8("TL故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_TL;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_FAS:
        g_subSystemFaultsTitle = QObject::trUtf8("烟火故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_FAS;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_RESERVE:
        g_subSystemFaultsTitle = QObject::trUtf8("保留故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_RSV;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    default:
        ASSERT(false);
        break;
    }
}

QString GetCategoryStr(int iGategory)
{
    QString str = "";
    switch(iGategory)
    {
    case E_FAULTS_CATEGORY_CAB:
        str = "CAB";
        break;
    case E_FAULTS_CATEGORY_ACU:
        str = "ACU";
        break;
    case E_FAULTS_CATEGORY_BCU:
        str = "BCU";
        break;
    case E_FAULTS_CATEGORY_TCU:
        str = "DCU";
        break;
    case E_FAULTS_CATEGORY_HVAC:
        str = "HVAC";
        break;
    case E_FAULTS_CATEGORY_ATC:
        str = "ATC";
        break;
    case E_FAULTS_CATEGORY_PIS:
        str = "PIS";
        break;
    case E_FAULTS_CATEGORY_TCMS:
        str = "TCMS";
        break;
    case E_FAULTS_CATEGORY_DCU:
        str = "EDCU";
        break;
    case E_FAULTS_CATEGORY_TL:
        str = "TL";
        break;
    case E_FAULTS_CATEGORY_FAS:
        str = "FAU";
        break;
    case E_FAULTS_CATEGORY_RSV:
        str = "RESERVE";
        break;
    case E_FAULTS_CATEGORY_REC:
        str = "REC";
        break;
    default:
        str = "-";
        break;
    }

    return str;
}

int FindFaultsNameTableIndex(int code)
{
    int idx = -1;
    int i = 0;
    ST_FAULT_INFO *pdata = &g_faultsinforom[0];
    for (i = 0; i < g_faultsInfoRomLen; i++)
    {
        if (code == pdata->code)
        {
            idx = i;
            break;
        }
        pdata++;
    }
    return idx;
}

void HistoryFaultsListInit()
{
    memset(&g_historyFaultsList, 0, sizeof(g_historyFaultsList));
    g_historyConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
    g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;

    HistoryFaultsLoad();
    if(g_historyFaultsList.curIdx < 0 || g_historyFaultsList.curIdx > D_HISTORY_FAULT_LIST_MAX_CNT)
    {
        g_historyFaultsList.curIdx = 0;
    }
}

QString GetCarriageString(char position)
{
    QString str = "- ";
    switch (position)
    {
    case D_POS_A:
        str = "Tc1  ";
        break;
    case D_POS_B:
        str = "Mp1  ";
        break;
    case D_POS_C:
        str = "M1   ";
        break;
    case D_POS_D:
        str = "M2   ";
        break;
    case D_POS_E:
        str = "Mp2  ";
        break;
    case D_POS_F:
        str = "Tc2  ";
        break;
    case D_POS_G:
        str = "-- ";
        break;
    case D_POS_H:
        str = "-- ";
        break;
    case D_POS_TRAIN:
        str = "Train";
        break;
    default:
        break;
    }

    return str;
}

void CheckIndexRange(int& index, int linenum)
{
    bool bError = false;
    if(index < 1)
    {
        index = 1;
        bError = true;
    }
    if(index > D_HISTORY_FAULT_LIST_MAX_CNT)
    {
        index = D_HISTORY_FAULT_LIST_MAX_CNT;
        bError = true;
    }

#ifdef LOG_OPEN
//    if(bError)
//    {
//       QString writeStr = GetDateStr() + " " + GetTimeStr() + ":RangeError at line " + QString::number(linenum) + "\n";
//       fstream fs;
//       fs.open((qApp->applicationDirPath().toStdString() + g_logFileName).c_str(), ios_base::out | ios_base::app);
//       fs.write(writeStr.toStdString().c_str(), writeStr.length());
//       fs.close();
//    }
#endif
}
