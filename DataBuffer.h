 #ifndef DATABUFFER_H
#define DATABUFFER_H

#include "CGlobal.h"



#define bit0  0x0001
#define bit1  0x0002
#define bit2  0x0004
#define bit3  0x0008
#define bit4  0x0010
#define bit5  0x0020
#define bit6  0x0040
#define bit7  0x0080
#define bit8  0x0100
#define bit9  0x0200
#define bit10 0x0400
#define bit11 0x0800
#define bit12 0x1000
#define bit13 0x2000
#define bit14 0x4000
#define bit15 0x8000

#define Nbit0  0xfffe
#define Nbit1  0xfffd
#define Nbit2  0xfffb
#define Nbit3  0xfff7
#define Nbit4  0xffef
#define Nbit5  0xffdf
#define Nbit6  0xffbf
#define Nbit7  0xff7f
#define Nbit8  0xfeff
#define Nbit9  0xfdff
#define Nbit10 0xfbff
#define Nbit11 0xf7ff
#define Nbit12 0xefff
#define Nbit13 0xdfff
#define Nbit14 0xbfff
#define Nbit15 0x7fff


//***********************WuHan_Line_6_DataBuffer
//0xF    CCU_All
#define CTALL_LifeSign_U16                           highbyteLowbyteExchange(g_dataBuffer_WH_Display[0])
#define CTALL_Year_U8                         g_dataBuffer_WH_Display[1]%256
#define CTALL_Month_U8                        g_dataBuffer_WH_Display[1]/256
#define CTALL_Day_U8                        g_dataBuffer_WH_Display[2]%256
#define CTALL_Hour_U8                        g_dataBuffer_WH_Display[2]/256
#define CTALL_Minite_U8                        g_dataBuffer_WH_Display[3]%256
#define CTALL_Second_U8                        g_dataBuffer_WH_Display[3]/256
#define PUBPORT_SettingTimeEnable_B1           g_dataBuffer_WH_Display[4]& bit7

//0X110  RIOM-CCU
#define GWCT_Tc1GWLifeSign1_U8                      g_dataBuffer_WH_Display[16]%256
#define GWCT_Tc1GWVersion_U8                        g_dataBuffer_WH_Display[16]/256
#define DICT_Tc1DIVersion_U8                        g_dataBuffer_WH_Display[16+1]%256
#define DOCT_Tc1DOVersion_U8                        g_dataBuffer_WH_Display[16+1]/256
#define AICT_Tc1AXVersion_U8                        g_dataBuffer_WH_Display[16+2]%256
#define DICT_Tc1DI1LifeSign_U8                      g_dataBuffer_WH_Display[16+3]%256
#define DICT_Tc1DI2LifeSign_U8                      g_dataBuffer_WH_Display[16+3]/256
#define DICT_Tc1DI3LifeSign_U8                      g_dataBuffer_WH_Display[16+4]%256
#define DICT_Tc1DI4LifeSign_U8                      g_dataBuffer_WH_Display[16+4]/256
#define DOCT_Tc1DO1LifeSign_U8                      g_dataBuffer_WH_Display[16+7]%256
#define DOCT_Tc1DO2LifeSign_U8                      g_dataBuffer_WH_Display[16+7]/256
#define AICT_Tc1AX1LifeSign_U8                      g_dataBuffer_WH_Display[16+9]%256
#define GWCT_Tc1LAT_B1                              g_dataBuffer_WH_Display[16+15]& bit7
#define GWCT_Tc1RLD_B1                              g_dataBuffer_WH_Display[16+15]& bit6

//0x111  RIOM1_CCU
#define RM1CT_AI7_U16                                highbyteLowbyteExchange(g_dataBuffer_WH_Display[32+6])
#define RM1CT_AI8_U16                                highbyteLowbyteExchange(g_dataBuffer_WH_Display[32+7])
#define RM1CT_DIM1DI5_B1                             g_dataBuffer_WH_Display[32+11] & bit4
#define RM1CT_DIM1DI4_B1                             g_dataBuffer_WH_Display[32+11] & bit3
#define AICT_TC1AX1AI7Grade_U16                     g_dataBuffer_WH_Display[32+6]
#define AICT_TC1AX1AI8Grade_U16                     g_dataBuffer_WH_Display[32+7]
#define DICT_Tc1DI1CabRtDr_B1                   g_dataBuffer_WH_Display[32+10] & bit5
#define DICT_Tc1DI1CabLtDr_B1                    g_dataBuffer_WH_Display[32+10] & bit4
#define DICT_Tc1DI1EscapeDrSta_B1                   g_dataBuffer_WH_Display[32+10] & bit6
#define DICT_TC1DI1CabDrBp_B1                       g_dataBuffer_WH_Display[32+10] & bit8
#define DICT_TC1DI1DrZeroBp_B1                       g_dataBuffer_WH_Display[32+11] & bit7
#define DICT_TC1DI1QuickBrk_B1                       g_dataBuffer_WH_Display[32+11] & bit5
#define DICT_TC1DI1Brk_B1                         (!(g_dataBuffer_WH_Display[32+11] & bit4))
#define DICT_TC1DI1Traction_B1                       g_dataBuffer_WH_Display[32+11] & bit3
#define DICT_TC1DI1CabActive_B1                       g_dataBuffer_WH_Display[32+11] & bit2
#define DICT_TC1DI1Backward_B1                       g_dataBuffer_WH_Display[32+11] & bit1
#define DICT_TC1DI1Forward_B1                       g_dataBuffer_WH_Display[32+11] & bit0
#define DICT_TC1DI2CylinderOKBp_B1                  g_dataBuffer_WH_Display[32+12] & bit2
#define DICT_TC1DI2EmgBrk_B1                        g_dataBuffer_WH_Display[32+12] & bit5
#define DICT_TC1DI2PhPmtBp_B1                       g_dataBuffer_WH_Display[32+11] & bit11
#define DICT_TC1DI3AlertBp_B1                       g_dataBuffer_WH_Display[32+14] & bit0
#define DICT_TC1DI3DrClsBp_B1                       g_dataBuffer_WH_Display[32+14] & bit1
#define DICT_TC1DI3ParkBrkBp_B1                     g_dataBuffer_WH_Display[32+14] & bit3
#define DICT_TC1DI3AllBrkRlsBp_B1                   g_dataBuffer_WH_Display[32+14] & bit4
#define DICT_TC1DI3AlertBtn_B1                      g_dataBuffer_WH_Display[32+14] & bit7
#define DICT_Tc1DI1FireFault_B1                  g_dataBuffer_WH_Display[32+10] & bit1    //add by leo 20161025
#define DICT_Tc1DI1FireAlarm_B1                 g_dataBuffer_WH_Display[32+10] & bit0
#define DICT_TC1DI2Brk_B1                       (!(g_dataBuffer_WH_Display[32+12] & bit12))
#define DICT_TC1DI2Traction_B1                    g_dataBuffer_WH_Display[32+12] & bit11
#define DICT_TC1DI3DC24_B1                        g_dataBuffer_WH_Display[32+13] & bit5   //add by leo 20161025

//2018/12/27 add new bcu signals
#define DICT_TC1DI3AirBrk2Rls_B1                      g_dataBuffer_WH_Display[32+13] & bit10
#define DICT_TC1DI3AirBrk1Rls_B1                      g_dataBuffer_WH_Display[32+13] & bit9
#define DICT_TC1DI3ParkBrkRls_B1                      g_dataBuffer_WH_Display[32+13] & bit8
#define DICT_TC1DI4TcFBrkCF_B1                        !(g_dataBuffer_WH_Display[2208+10] & bit13)
#define DICT_TC1DI4TcFBrk2CF_B1                       !(g_dataBuffer_WH_Display[2208+10] & bit12)
#define DICT_TC1DI4TcFBrk1CF_B1                       !(g_dataBuffer_WH_Display[2208+10] & bit11)

#define DICT_MP1DI1MpAirBrk2Rls_B1                     g_dataBuffer_WH_Display[64+11] & bit4
#define DICT_MP1DI1MpAirBrk1Rls_B1                     g_dataBuffer_WH_Display[64+11] & bit3
#define DICT_MP1DI1MpParkBrkRls_B1                      g_dataBuffer_WH_Display[64+11] & bit2
#define DICT_MP1DI1MPFBrk2CF_B1                     !(g_dataBuffer_WH_Display[64+11] & bit1)
#define DICT_MP1DI1MPFBrk1CF_B1                     !(g_dataBuffer_WH_Display[64+11] & bit0)
#define DICT_MP1DI1FrictionBrakeCutOff_B1           !(g_dataBuffer_WH_Display[64+10] & bit15)

#define DICT_M1DI1MAirBrk2Rls_B1                    g_dataBuffer_WH_Display[96+11] & bit4
#define DICT_M1DI1MAirBrk1Rls_B1                    g_dataBuffer_WH_Display[96+11] & bit3
#define DICT_M1DI1MParkBrkRls_B1                    g_dataBuffer_WH_Display[96+11] & bit2
#define DICT_M1DI1MFBrk2CF_B1                    !(g_dataBuffer_WH_Display[96+11] & bit1)
#define DICT_M1DI1MFBrk1CF_B1                    !(g_dataBuffer_WH_Display[96+11] & bit0)
#define DICT_M1DI1MFBrkCF_B1                     !(g_dataBuffer_WH_Display[96+10] & bit13)

#define DICT_M2DI1MAirBrk2Rls_B1                    g_dataBuffer_WH_Display[128+11] & bit4
#define DICT_M2DI1MAirBrk1Rls_B1                    g_dataBuffer_WH_Display[128+11] & bit3
#define DICT_M2DI1MParkBrkRls_B1                    g_dataBuffer_WH_Display[128+11] & bit2
#define DICT_M2DI1MFBrk2CF_B1                    !(g_dataBuffer_WH_Display[128+11] & bit1)
#define DICT_M2DI1MFBrk1CF_B1                    !(g_dataBuffer_WH_Display[128+11] & bit0)
#define DICT_M2DI1MFBrkCF_B1                     !(g_dataBuffer_WH_Display[128+10] & bit13)

#define DICT_MP2DI1MpAirBrk2Rls_B1                     g_dataBuffer_WH_Display[160+11] & bit4
#define DICT_MP2DI1MpAirBrk1Rls_B1                     g_dataBuffer_WH_Display[160+11] & bit3
#define DICT_MP2DI1MpParkBrkRls_B1                      g_dataBuffer_WH_Display[160+11] & bit2
#define DICT_MP2DI1MPFBrk2CF_B1                     !(g_dataBuffer_WH_Display[160+11] & bit1)
#define DICT_MP2DI1MPFBrk1CF_B1                     !(g_dataBuffer_WH_Display[160+11] & bit0)
#define DICT_MP2DI1FrictionBrakeCutOff_B1           !(g_dataBuffer_WH_Display[160+10] & bit15)

#define DICT_TC2DI3AirBrk2Rls_B1                      g_dataBuffer_WH_Display[192+13] & bit10
#define DICT_TC2DI3AirBrk1Rls_B1                      g_dataBuffer_WH_Display[192+13] & bit9
#define DICT_TC2DI3ParkBrkRls_B1                      g_dataBuffer_WH_Display[192+13] & bit8
#define DICT_TC2DI4TcFBrkCF_B1                        !(g_dataBuffer_WH_Display[2224+10] & bit13)
#define DICT_TC2DI4TcFBrk2CF_B1                       !(g_dataBuffer_WH_Display[2224+10] & bit12)
#define DICT_TC2DI4TcFBrk1CF_B1                       !(g_dataBuffer_WH_Display[2224+10] & bit11)

//0x112


#define DICT_TC1DI4RtDrClose_B1                      g_dataBuffer_WH_Display[2208+10] & bit10
#define DICT_TC1DI4RtDrOpen_B1                      g_dataBuffer_WH_Display[2208+10] & bit9
#define DICT_TC1DI4LtDrClose_B1                      g_dataBuffer_WH_Display[2208+10] & bit8
#define DICT_TC1DI4LtDrOpen_B1                      g_dataBuffer_WH_Display[2208+11] & bit7
#define DICT_TC1DI4ATCCutoff_B1                     g_dataBuffer_WH_Display[2208+11] & bit2
#define DICT_TC1DI4RMmode_B1                         g_dataBuffer_WH_Display[2208+11] & bit5
#define DICT_TC1DI4SlowMode_B1                       g_dataBuffer_WH_Display[2208+11] & bit0


//0X120
#define GWCT_RIOMMp1GWLfSign1_U8                      g_dataBuffer_WH_Display[48]%256
#define GWCT_RIOMMp1GWVer_U8                        g_dataBuffer_WH_Display[48]/256
#define DICT_RIOMMp1DIVer_U8                        g_dataBuffer_WH_Display[48+1]%256
#define DOCT_RIOMMp1DOVer_U8                        g_dataBuffer_WH_Display[48+1]/256
#define AICT_RIOMMp1AXVer_U8                        g_dataBuffer_WH_Display[48+2]%256
#define DICT_RIOMMp1DI1LfSign_U8                        g_dataBuffer_WH_Display[48+3]%256
#define DOCT_RIOMMp1DO1LfSign_U8                        g_dataBuffer_WH_Display[48+7]%256
#define GWCT_RIOMMp1LAT_B1                              g_dataBuffer_WH_Display[48+15]& bit7
#define GWCT_RIOMMp1RLD_B1                              g_dataBuffer_WH_Display[48+15]& bit6


//0x121
#define RM2CT_DIM1DI2_B1                            g_dataBuffer_WH_Display[64+11] & bit1
#define RM2CT_DIM1DI1_B1                            g_dataBuffer_WH_Display[64+11] & bit0

#define DICT_MP1DI1PoleSWShed_B1                     g_dataBuffer_WH_Display[64+10] & bit15
#define DICT_MP1DI1PoleSWPh_B1                     g_dataBuffer_WH_Display[64+10] & bit14
#define DICT_MP1DI1FireFault_B1                      g_dataBuffer_WH_Display[64+10] & bit1     //add by leo 20161025
#define DICT_MP1DI1FireAlarm_B1                      g_dataBuffer_WH_Display[64+10] & bit0
#define DICT_MP1DI1PhIsolation_B1                      g_dataBuffer_WH_Display[64+10] & bit11
#define DICT_MP1DI1DropPhCommand_B1                      g_dataBuffer_WH_Display[64+10] & bit10
#define DICT_MP1DI1RosePhCommand_B1                      g_dataBuffer_WH_Display[64+10] & bit9
#define DICT_MP1DI1RosePH_B1                             g_dataBuffer_WH_Display[64+11] & bit6
//0X130
#define GWCT_RIOMM1GWLfSign1_U8                      g_dataBuffer_WH_Display[80]%256
#define GWCT_RIOMM1GWVer_U8                        g_dataBuffer_WH_Display[80]/256
#define DICT_RIOMM1DIVer_U8                        g_dataBuffer_WH_Display[80+1]%256
#define DOCT_RIOMM1DOVer_U8                        g_dataBuffer_WH_Display[80+1]/256
#define AICT_RIOMM1AXVer_U8                        g_dataBuffer_WH_Display[80+2]%256
#define DICT_RIOMM1DI1LfSign_U8                        g_dataBuffer_WH_Display[80+3]%256
#define DOCT_RIOMM1DO1LfSign_U8                        g_dataBuffer_WH_Display[80+7]%256
#define GWCT_RIOMM1LAT_B1                              g_dataBuffer_WH_Display[80+15]& bit7
#define GWCT_RIOMM1RLD_B1                              g_dataBuffer_WH_Display[80+15]& bit6


//0x131
#define RM3CT_DIM1DI2_B1                            g_dataBuffer_WH_Display[96+11] & bit1
#define RM3CT_DIM1DI1_B1                            g_dataBuffer_WH_Display[96+11] & bit0
#define DICT_M1DI1AirComRun_B1                      g_dataBuffer_WH_Display[96+10] & bit9
#define DICT_M1DI1AirComUseful_B1                   g_dataBuffer_WH_Display[96+10] & bit10


#define DICT_MiDI1ExtPowerSta_B1                  g_dataBuffer_WH_Display[96+11] & bit5
#define DICT_M1DI1MParkBrkRls_B1                      g_dataBuffer_WH_Display[96+11] & bit2

#define DICT_M1DI1FireFault_B1                      g_dataBuffer_WH_Display[96+10] & bit1    //add by leo 20161025
#define DICT_M1DI1FireAlarm_B1                      g_dataBuffer_WH_Display[96+10] & bit0
//0x140
#define GWCT_RIOMM2GWLfSign1_U8                      g_dataBuffer_WH_Display[112]%256
#define GWCT_RIOMM2GWVer_U8                        g_dataBuffer_WH_Display[112]/256
#define DICT_RIOMM2DIVer_U8                        g_dataBuffer_WH_Display[112+1]%256
#define DOCT_RIOMM2DOVer_U8                        g_dataBuffer_WH_Display[112+1]/256
#define AICT_RIOMM2AXVer_U8                        g_dataBuffer_WH_Display[112+2]%256
#define DICT_RIOMM2DI1LfSign_U8                        g_dataBuffer_WH_Display[112+3]%256
#define DOCT_RIOMM2DO1LfSign_U8                        g_dataBuffer_WH_Display[112+7]%256
#define GWCT_RIOMM2LAT_B1                              g_dataBuffer_WH_Display[112+15]& bit7
#define GWCT_RIOMM2RLD_B1                              g_dataBuffer_WH_Display[112+15]& bit6
//0x141
#define RM4CT_DIM1DI2_B1                            g_dataBuffer_WH_Display[128+11] & bit1
#define RM4CT_DIM1DI1_B1                            g_dataBuffer_WH_Display[128+11] & bit0
#define DICT_M2DI1AirComRun_B1                      g_dataBuffer_WH_Display[128+10] & bit9
#define DICT_M2DI1AirComUseful_B1                   g_dataBuffer_WH_Display[128+10] & bit10
#define DICT_M2DI1ExtPowerSta_B1                  g_dataBuffer_WH_Display[128+11] & bit5
#define DICT_M2DI1MParkBrkRls_B1                      g_dataBuffer_WH_Display[128+11] & bit2

#define DICT_M2DI1FireFault_B1                      g_dataBuffer_WH_Display[128+10] & bit1   //add by leo 20161025
#define DICT_M2DI1FireAlarm_B1                      g_dataBuffer_WH_Display[128+10] & bit0
//0x150
#define GWCT_RIOMMp2GWLfSign1_U8                      g_dataBuffer_WH_Display[144]%256
#define GWCT_RIOMMp2GWVer_U8                        g_dataBuffer_WH_Display[144]/256
#define DICT_RIOMMp2DIVer_U8                        g_dataBuffer_WH_Display[144+1]%256
#define DOCT_RIOMMp2DOVer_U8                        g_dataBuffer_WH_Display[144+1]/256
#define AICT_RIOMMp2AXVer_U8                        g_dataBuffer_WH_Display[144+2]%256
#define DICT_RIOMMp2DI1LfSign_U8                        g_dataBuffer_WH_Display[144+3]%256
#define DOCT_RIOMMp2DO1LfSign_U8                        g_dataBuffer_WH_Display[144+7]%256
#define GWCT_RIOMMp2LAT_B1                              g_dataBuffer_WH_Display[144+15]& bit7
#define GWCT_RIOMMp2RLD_B1                              g_dataBuffer_WH_Display[144+15]& bit6
//0x151
#define RM5CT_DIM1DI2_B1                            g_dataBuffer_WH_Display[160+11] & bit1
#define RM5CT_DIM1DI1_B1                            g_dataBuffer_WH_Display[160+11] & bit0
#define DICT_MP2DI1PoleSWShed_B1                     g_dataBuffer_WH_Display[160+10] & bit15
#define DICT_MP2DI1PoleSWPh_B1                     g_dataBuffer_WH_Display[160+10] & bit14
#define DICT_MP2DI1FireFault_B1                      g_dataBuffer_WH_Display[160+10] & bit1    //add by leo 20161025
#define DICT_MP2DI1FireAlarm_B1                      g_dataBuffer_WH_Display[160+10] & bit0
#define DICT_MP2DI1PhIsolation_B1                      g_dataBuffer_WH_Display[160+10] & bit11
#define DICT_MP2DI1DropPhCommand_B1                      g_dataBuffer_WH_Display[160+10] & bit10
#define DICT_MP2DI1RosePhCommand_B1                      g_dataBuffer_WH_Display[160+10] & bit9
#define DICT_MP2DI1RosePH_B1                             g_dataBuffer_WH_Display[160+11] & bit6
//0x160
#define GWCT_Tc2GWLifeSign1_U8                        g_dataBuffer_WH_Display[176]%256
#define GWCT_Tc2GWVersion_U8                        g_dataBuffer_WH_Display[176]/256
#define DICT_Tc2DIVersion_U8                        g_dataBuffer_WH_Display[176+1]%256
#define DOCT_Tc2DOVersion_U8                        g_dataBuffer_WH_Display[176+1]/256
#define AICT_Tc2AXVersion_U8                        g_dataBuffer_WH_Display[176+2]%256
#define DICT_Tc2DI1LifeSign_U8                      g_dataBuffer_WH_Display[176+3]%256
#define DICT_Tc2DI2LifeSign_U8                      g_dataBuffer_WH_Display[176+3]/256
#define DICT_Tc2DI3LifeSign_U8                      g_dataBuffer_WH_Display[176+4]%256
#define DICT_Tc2DI4LifeSign_U8                      g_dataBuffer_WH_Display[176+4]/256
#define DOCT_Tc2DO1LifeSign_U8                      g_dataBuffer_WH_Display[176+7]%256
#define DOCT_Tc2DO2LifeSign_U8                      g_dataBuffer_WH_Display[176+7]/256
#define AICT_Tc2AX1LifeSign_U8                      g_dataBuffer_WH_Display[176+9]%256
#define GWCT_Tc2LAT_B1                              g_dataBuffer_WH_Display[176+15]& bit7
#define GWCT_Tc2RLD_B1                              g_dataBuffer_WH_Display[176+15]& bit6

//0x161   RIOM6_CCU
#define RM6CT_AI7_U16                               highbyteLowbyteExchange( g_dataBuffer_WH_Display[192+6])
#define RM6CT_AI8_U16                               highbyteLowbyteExchange( g_dataBuffer_WH_Display[192+7])
#define RM6CT_DIM1DI5_B1                             g_dataBuffer_WH_Display[192+11] & bit4
#define RM6CT_DIM1DI4_B1                             g_dataBuffer_WH_Display[192+11] & bit3
#define AICT_TC2AX1AI7Grade_U16                     g_dataBuffer_WH_Display[192+6]
#define AICT_TC2AX1AI8Grade_U16                     g_dataBuffer_WH_Display[192+7]
#define DICT_Tc2DI1CabRtDr_B1                   g_dataBuffer_WH_Display[192+10] & bit5
#define DICT_Tc2DI1CabLtDr_B1                    g_dataBuffer_WH_Display[192+10] & bit4
#define DICT_Tc2DI1EscapeDrSta_B1                   g_dataBuffer_WH_Display[192+10] & bit6
#define DICT_TC2DI1CabDrBp_B1                       g_dataBuffer_WH_Display[192+10] & bit8
#define DICT_TC2DI1DrZeroBp_B1                       g_dataBuffer_WH_Display[192+11] & bit7
#define DICT_TC2DI1QuickBrk_B1                       g_dataBuffer_WH_Display[192+11] & bit5
#define DICT_TC2DI1Brk_B1                            (!(g_dataBuffer_WH_Display[192+11] & bit4))
#define DICT_TC2DI1Traction_B1                       g_dataBuffer_WH_Display[192+11] & bit3
#define DICT_TC2DI1CabActive_B1                       g_dataBuffer_WH_Display[192+11] & bit2
#define DICT_TC2DI1Backward_B1                       g_dataBuffer_WH_Display[192+11] & bit1
#define DICT_TC2DI1Forward_B1                       g_dataBuffer_WH_Display[192+11] & bit0
#define DICT_TC2DI2CylinderOKBp_B1                  g_dataBuffer_WH_Display[192+12] & bit2
#define DICT_TC2DI2EmgBrk_B1                        g_dataBuffer_WH_Display[192+12] & bit5
#define DICT_TC2DI2PhPmtBp_B1                       g_dataBuffer_WH_Display[192+11] & bit11
#define DICT_TC2DI3AlertBp_B1                       g_dataBuffer_WH_Display[192+14] & bit0
#define DICT_TC2DI3DrClsBp_B1                       g_dataBuffer_WH_Display[192+14] & bit1
#define DICT_TC2DI3ParkBrkBp_B1                     g_dataBuffer_WH_Display[192+14] & bit3
#define DICT_TC2DI3AllBrkRlsBp_B1                g_dataBuffer_WH_Display[192+14] & bit4
#define DICT_TC2DI3AlertBtn_B1                      g_dataBuffer_WH_Display[192+14] & bit7
#define DICT_TC2DI2Brk_B1                        (!(g_dataBuffer_WH_Display[192+12] & bit12))
#define DICT_TC2DI2Traction_B1                    g_dataBuffer_WH_Display[192+12] & bit11

#define DICT_Tc2DI1FireFault_B1                      g_dataBuffer_WH_Display[192+10] & bit1       //add by leo  20161025
#define DICT_Tc2DI1FireAlarm_B1                      g_dataBuffer_WH_Display[192+10] & bit0

#define DICT_TC2DI3DC24_B1                         g_dataBuffer_WH_Display[192+13] & bit5   //add by leo 20161025

//0x162


#define DICT_TC2DI4RtDrClose_B1                      g_dataBuffer_WH_Display[2224+10] & bit10
#define DICT_TC2DI4RtDrOpen_B1                      g_dataBuffer_WH_Display[2224+10] & bit9
#define DICT_TC2DI4LtDrClose_B1                      g_dataBuffer_WH_Display[2224+10] & bit8
#define DICT_TC2DI4LtDrOpen_B1                      g_dataBuffer_WH_Display[2224+11] & bit7
#define DICT_TC2DI4RMmode_B1                         g_dataBuffer_WH_Display[2224+11] & bit5
#define DICT_TC2DI4ATCCutoff_B1                     g_dataBuffer_WH_Display[2224+11] & bit2
#define DICT_TC2DI4SlowMode_B1                       g_dataBuffer_WH_Display[2224+11] & bit0


///2I2  ERM-HMI
#define DT1CT_ERMLfSginal_U16                         highbyteLowbyteExchange( g_dataBuffer_MVB[208])
#define DT1CT_ERMSWVer_U8                                g_dataBuffer_MVB[208+4]%256
#define DT1CT_ERMVxWorksVer_U8                           g_dataBuffer_MVB[208+4]/256
#define DT1CT_ERMMVBSWVer_U8                             g_dataBuffer_MVB[208+5]%256
#define DT1CT_ERMSDBVer_U8                               g_dataBuffer_MVB[208+5]/256
#define DT2CT_ERMLfSginal_U16                         highbyteLowbyteExchange( g_dataBuffer_MVB[272])
#define DT2CT_ERMSWVer_U8                                g_dataBuffer_MVB[272+4]%256
#define DT2CT_ERMVxWorksVer_U8                           g_dataBuffer_MVB[272+4]/256
#define DT2CT_ERMMVBSWVer_U8                             g_dataBuffer_MVB[272+5]%256
#define DT2CT_ERMSDBVer_U8                               g_dataBuffer_MVB[272+5]/256

#define DTiCT_RunningKilometers_U32                 Change_BigEen(g_dataBuffer_WH_Display[224])*65536+Change_BigEen(g_dataBuffer_WH_Display[225])
#define DTiCT_VVVFEngyConsumption_U32                 Change_BigEen(g_dataBuffer_WH_Display[226])*65536+Change_BigEen(g_dataBuffer_WH_Display[227])
#define DTiCT_SIVEngyConsumption_U32                 Change_BigEen(g_dataBuffer_WH_Display[228])*65536+Change_BigEen(g_dataBuffer_WH_Display[229])
#define DTiCT_ReEngy_U32                             Change_BigEen(g_dataBuffer_WH_Display[230])*65536+Change_BigEen(g_dataBuffer_WH_Display[231])
#define DTiCT_ServiceDistance_U32                   Change_BigEen(g_dataBuffer_WH_Display[232])*65536+Change_BigEen(g_dataBuffer_WH_Display[233])
#define DTiCT_AP1RunningTime_U32                   Change_BigEen(g_dataBuffer_WH_Display[234])*65536+Change_BigEen(g_dataBuffer_WH_Display[235])
#define DTiCT_AP2RunningTime_U32                   Change_BigEen(g_dataBuffer_WH_Display[236])*65536+Change_BigEen(g_dataBuffer_WH_Display[237])
#define DTiCT_TCMSTotalTime_U32                   Change_BigEen(g_dataBuffer_WH_Display[238])*65536+Change_BigEen(g_dataBuffer_WH_Display[239])
#define DTiCT_DBEngy_U32                         Change_BigEen(g_dataBuffer_WH_Display[252])*65536+Change_BigEen(g_dataBuffer_WH_Display[253])
#define DTHM_Distance_Year_U8                              g_dataBuffer_WH_Display[240]%256
#define DTHM_Distance_Month_U8                             g_dataBuffer_WH_Display[240]/256
#define DTHM_Distance_Day_U8                               g_dataBuffer_WH_Display[241]%256
#define DTiCT_VVVFECYear_U8                              g_dataBuffer_WH_Display[241]/256
#define DTiCT_VVVFECMonth_U8                             g_dataBuffer_WH_Display[242]%256
#define DTiCT_VVVFECDay_U8                               g_dataBuffer_WH_Display[242]/256
#define DTHM_SivPower_Year_U8                              g_dataBuffer_WH_Display[243]%256
#define DTHM_SivPower_Month_U8                             g_dataBuffer_WH_Display[243]/256
#define DTHM_SivPower_Day_U8                               g_dataBuffer_WH_Display[244]%256
#define DTiCT_ReEngyYear_U8                              g_dataBuffer_WH_Display[244]/256
#define DTiCT_ReEngyMonth_U8                             g_dataBuffer_WH_Display[245]%256
#define DTiCT_ReEngyDay_U8                               g_dataBuffer_WH_Display[245]/256
#define DTiCT_ServiceDistanceYear_U8                              g_dataBuffer_WH_Display[246]%256
#define DTiCT_ServiceDistanceMonth_U8                             g_dataBuffer_WH_Display[246]/256
#define DTiCT_ServiceDistanceDay_U8                               g_dataBuffer_WH_Display[247]%256
#define DTHM_AP1Time_Year_U8                              g_dataBuffer_WH_Display[247]/256
#define DTHM_AP1Time_Month_U8                             g_dataBuffer_WH_Display[248]%256
#define DTHM_AP1Time_Day_U8                               g_dataBuffer_WH_Display[248]/256
#define DTHM_AP2Time_Year_U8                              g_dataBuffer_WH_Display[249]%256
#define DTHM_AP2Time_Month_U8                             g_dataBuffer_WH_Display[249]/256
#define DTHM_AP2Time_Day_U8                               g_dataBuffer_WH_Display[250]%256
#define DTHM_RunTime_Year_U8                              g_dataBuffer_WH_Display[250]/256
#define DTHM_RunTime_Month_U8                             g_dataBuffer_WH_Display[251]%256
#define DTHM_RunTime_Day_U8                               g_dataBuffer_WH_Display[251]/256
#define DTiCT_DBEngyYear_U8                               g_dataBuffer_WH_Display[254]%256
#define DTiCT_DBEngyMonth_U8                               g_dataBuffer_WH_Display[254]/256
#define DTiCT_DBEngyDay_U8                               g_dataBuffer_WH_Display[255]%256


#define DTiCT_Tc1ACCFlt_B1                               g_dataBuffer_WH_Display[256]&bit6
#define DTiCT_Tc2ACCFlt_B1                               g_dataBuffer_WH_Display[257]&bit1
#define DTiCT_Mp1PowerFlt_B1                            g_dataBuffer_WH_Display[257]&bit0
#define DTiCT_M1PowerFlt_B1                           g_dataBuffer_WH_Display[257]&bit15
#define DTiCT_M2PowerFlt_B1                           g_dataBuffer_WH_Display[257]&bit14
#define DTiCT_Mp2PowerFlt_B1                           g_dataBuffer_WH_Display[257]&bit13

#define DTiCT_EBActiTC1Bog1_B1                           g_dataBuffer_WH_Display[257]&bit12
#define DTiCT_EBActiTC1Bog2_B1                           g_dataBuffer_WH_Display[257]&bit11
#define DTiCT_EBActiMp1Bog1_B1                           g_dataBuffer_WH_Display[257]&bit10
#define DTiCT_EBActiMp1Bog2_B1                           g_dataBuffer_WH_Display[257]&bit9
#define DTiCT_EBActiM1Bog1_B1                           g_dataBuffer_WH_Display[257]&bit8
#define DTiCT_EBActiM1Bog2_B1                           g_dataBuffer_WH_Display[258]&bit7
#define DTiCT_EBActiTC2Bog1_B1                           g_dataBuffer_WH_Display[258]&bit6
#define DTiCT_EBActiTC2Bog2_B1                           g_dataBuffer_WH_Display[258]&bit5
#define DTiCT_EBActiMp2Bog1_B1                           g_dataBuffer_WH_Display[258]&bit4
#define DTiCT_EBActiMp2Bog2_B1                           g_dataBuffer_WH_Display[258]&bit3
#define DTiCT_EBActiM2Bog1_B1                           g_dataBuffer_WH_Display[258]&bit2
#define DTiCT_EBActiM2Bog2_B1                           g_dataBuffer_WH_Display[258]&bit1

//218 CCU->ERM
#define CTDTi_MRP_U16                               Change_BigEen(g_dataBuffer_WH_Display[1848])
//508 ccu-> bcu
#define CTBR_BrakeDemandForce_I16                    (int16_t)Change_BigEen(g_dataBuffer_WH_Display[1940])

//0x308  CCU_HMI
#define CTHM_CCU1On_B1                             g_dataBuffer_WH_Display[1872] & bit7
#define CTHM_CCU2On_B1                             g_dataBuffer_WH_Display[1872] & bit6
#define CTHM_ERM1On_B1                             g_dataBuffer_WH_Display[1872] & bit5
#define CTHM_ERM2On_B1                             g_dataBuffer_WH_Display[1872] & bit4
#define CTHM_HMI1On_B1                             g_dataBuffer_WH_Display[1872] & bit3
#define CTHM_HMI2On_B1                             g_dataBuffer_WH_Display[1872] & bit2
#define CTHM_MP1BowRaiseErr_B1                     g_dataBuffer_WH_Display[1872] & bit1
#define CTHM_MP1BowDownErr_B1                     g_dataBuffer_WH_Display[1872] & bit0

#define CTHM_TC1RIOMGWOn_B1                             g_dataBuffer_WH_Display[1872] & bit15
#define CTHM_Mp1RIOMGWOn_B1                             g_dataBuffer_WH_Display[1872] & bit14
#define CTHM_M1RIOMGWOn_B1                             g_dataBuffer_WH_Display[1872] & bit13
#define CTHM_M2RIOMGWOn_B1                             g_dataBuffer_WH_Display[1872] & bit12
#define CTHM_Mp2RIOMGWOn_B1                             g_dataBuffer_WH_Display[1872] & bit11
#define CTHM_TC2RIOMGWOn_B1                             g_dataBuffer_WH_Display[1872] & bit10
#define CTHM_MP2BowRaiseErr_B1                     g_dataBuffer_WH_Display[1872] & bit9
#define CTHM_MP2BowDownErr_B1                     g_dataBuffer_WH_Display[1872] & bit8

#define CTHM_TC1DI1On_B1                            g_dataBuffer_WH_Display[1872+1] & bit7
#define CTHM_TC1DI2On_B1                            g_dataBuffer_WH_Display[1872+1] & bit6
#define CTHM_TC1DI3On_B1                            g_dataBuffer_WH_Display[1872+1] & bit5
#define CTHM_TC1DI4On_B1                            g_dataBuffer_WH_Display[1872+1] & bit4
#define CTHM_TC1DO1On_B1                            g_dataBuffer_WH_Display[1872+1] & bit3
#define CTHM_TC1DO2On_B1                            g_dataBuffer_WH_Display[1872+1] & bit2
#define CTHM_TC1AX1On_B1                            g_dataBuffer_WH_Display[1872+1] & bit1

#define CTHM_MP1DI1On_B1                            g_dataBuffer_WH_Display[1872+1] & bit15
#define CTHM_MP1DO1On_B1                            g_dataBuffer_WH_Display[1872+1] & bit14

#define CTHM_SensorErr1_B1                            g_dataBuffer_WH_Display[1872+1] & bit13
#define CTHM_SensorErr2_B1                            g_dataBuffer_WH_Display[1872+1] & bit12

#define CTHM_M1DI1On_B1                             g_dataBuffer_WH_Display[1872+1] & bit11
#define CTHM_M1DO1On_B1                             g_dataBuffer_WH_Display[1872+1] & bit10

#define CTHM_M2DI1On_B1                             g_dataBuffer_WH_Display[1872+2] & bit7
#define CTHM_M2DO1On_B1                             g_dataBuffer_WH_Display[1872+2] & bit6

#define CTHM_MP2DI1On_B1                            g_dataBuffer_WH_Display[1872+2] & bit3
#define CTHM_MP2DO1On_B1                            g_dataBuffer_WH_Display[1872+2] & bit2

#define CTHM_TC2DI1On_B1                            g_dataBuffer_WH_Display[1872+2] & bit15
#define CTHM_TC2DI2On_B1                            g_dataBuffer_WH_Display[1872+2] & bit14
#define CTHM_TC2DI3On_B1                            g_dataBuffer_WH_Display[1872+2] & bit13
#define CTHM_TC2DI4On_B1                            g_dataBuffer_WH_Display[1872+2] & bit12
#define CTHM_TC2DO1On_B1                            g_dataBuffer_WH_Display[1872+2] & bit11
#define CTHM_TC2DO2On_B1                            g_dataBuffer_WH_Display[1872+2] & bit10
#define CTHM_TC2AX1On_B1                            g_dataBuffer_WH_Display[1872+2] & bit9

#define CTHMI_BCU1On_B1                             g_dataBuffer_WH_Display[1872+3] & bit7
#define CTHMI_BCU2On_B1                             g_dataBuffer_WH_Display[1872+3] & bit6
#define CTHMI_BCU3On_B1                             g_dataBuffer_WH_Display[1872+3] & bit5
#define CTHMI_BCU4On_B1                             g_dataBuffer_WH_Display[1872+3] & bit4
#define CTHMI_VVVF1On_B1                            g_dataBuffer_WH_Display[1872+3] & bit3
#define CTHMI_VVVF2On_B1                            g_dataBuffer_WH_Display[1872+3] & bit2
#define CTHMI_VVVF3On_B1                            g_dataBuffer_WH_Display[1872+3] & bit1
#define CTHMI_VVVF4On_B1                            g_dataBuffer_WH_Display[1872+3] & bit0
#define CTHMI_ACU1On_B1                             g_dataBuffer_WH_Display[1872+3] & bit15
#define CTHMI_ACU2On_B1                             g_dataBuffer_WH_Display[1872+3] & bit14
#define CTHMI_REC1On_B1                             g_dataBuffer_WH_Display[1872+3] & bit13
#define CTHMI_REC2On_B1                             g_dataBuffer_WH_Display[1872+3] & bit12
#define CTHMI_EDCU1On_B1                             g_dataBuffer_WH_Display[1872+3] & bit11
#define CTHMI_EDCU2On_B1                             g_dataBuffer_WH_Display[1872+3] & bit10
#define CTHMI_EDCU3On_B1                             g_dataBuffer_WH_Display[1872+3] & bit9
#define CTHMI_EDCU4On_B1                             g_dataBuffer_WH_Display[1872+3] & bit8

#define CTHMI_EDCU5On_B1                             g_dataBuffer_WH_Display[1872+4] & bit7
#define CTHMI_EDCU6On_B1                             g_dataBuffer_WH_Display[1872+4] & bit6
#define CTHMI_EDCU7On_B1                             g_dataBuffer_WH_Display[1872+4] & bit5
#define CTHMI_EDCU8On_B1                             g_dataBuffer_WH_Display[1872+4] & bit4
#define CTHMI_EDCU9On_B1                             g_dataBuffer_WH_Display[1872+4] & bit3
#define CTHMI_EDCU10On_B1                             g_dataBuffer_WH_Display[1872+4] & bit2
#define CTHMI_EDCU11On_B1                             g_dataBuffer_WH_Display[1872+4] & bit1
#define CTHMI_EDCU12On_B1                             g_dataBuffer_WH_Display[1872+4] & bit0
#define CTHMI_PIS1On_B1                             g_dataBuffer_WH_Display[1872+4] & bit15
#define CTHMI_PIS2On_B1                             g_dataBuffer_WH_Display[1872+4] & bit14
#define CTHMI_HVAC1On_B1                            g_dataBuffer_WH_Display[1872+4] & bit13
#define CTHMI_HVAC2On_B1                            g_dataBuffer_WH_Display[1872+4] & bit12
#define CTHMI_HVAC3On_B1                            g_dataBuffer_WH_Display[1872+4] & bit11
#define CTHMI_HVAC4On_B1                            g_dataBuffer_WH_Display[1872+4] & bit10
#define CTHMI_HVAC5On_B1                            g_dataBuffer_WH_Display[1872+4] & bit9
#define CTHMI_HVAC6On_B1                            g_dataBuffer_WH_Display[1872+4] & bit8

#define CTHM_ATC1On_B1                            g_dataBuffer_WH_Display[1872+5] & bit7
#define CTHM_RTU1On_B1                            g_dataBuffer_WH_Display[1872+5] & bit5
#define CTHM_RTU2On_B1                            g_dataBuffer_WH_Display[1872+5] & bit4

#define CTHM_ATC1Active_B1                          g_dataBuffer_WH_Display[1872+8] & bit1
#define CTHM_ATC2Active_B1                          g_dataBuffer_WH_Display[1872+8] & bit0
#define CTHM_PIS1Active_B1                          g_dataBuffer_WH_Display[1872+8] & bit15
#define CTHM_PIS2Active_B1                          g_dataBuffer_WH_Display[1872+8] & bit14
#define CTHM_CCU1Active_B1                          g_dataBuffer_WH_Display[1872+8] & bit11
#define CTHM_CCU2Active_B1                          g_dataBuffer_WH_Display[1872+8] & bit10
#define CTHM_TC1Active_B1                           g_dataBuffer_WH_Display[1872+8] & bit9
#define CTHM_TC2Active_B1                           g_dataBuffer_WH_Display[1872+8] & bit8

#define CTHMI_Traction_B1                           g_dataBuffer_WH_Display[1872+9] & bit7
#define CTHMI_Brake_B1                              g_dataBuffer_WH_Display[1872+9] & bit6
#define CTHM_FastBrake_B1                           g_dataBuffer_WH_Display[1872+9] & bit5
#define CTHM_EmgyBrake_B1                           g_dataBuffer_WH_Display[1872+9] & bit4
#define CTHM_Backward_B1                           g_dataBuffer_WH_Display[1872+9] & bit3
#define CTHM_Forward_B1                           g_dataBuffer_WH_Display[1872+9] & bit2
#define CTHM_ClaarVVVFECEnable_B1                    g_dataBuffer_WH_Display[1872+9] & bit9
#define CTHM_ClearSIVECEnable_B1                    g_dataBuffer_WH_Display[1872+9] & bit8

#define CTHM_ReBrkExist_B1                              g_dataBuffer_WH_Display[1872+9] & bit12
#define CTHM_TestMode_U8                            g_dataBuffer_WH_Display[1872+10] % 256
#define CTHM_Acceleration_I16                   (int16_t)(g_dataBuffer_WH_Display[1872+10]/256*256+g_dataBuffer_WH_Display[1872+11]%256)
#define CTHM_BrkStartSpeed_U16                  (g_dataBuffer_WH_Display[1872+5]/256*256+g_dataBuffer_WH_Display[1872+6]%256)
#define CTHM_BrkDistance_U16                    (g_dataBuffer_WH_Display[1872+6]/256*256+g_dataBuffer_WH_Display[1872+7]%256)
#define CTHM_AcDeDataIsValid_B1                      g_dataBuffer_WH_Display[1872+9] & bit0

#define CTHMI_Grade_U8                              g_dataBuffer_WH_Display[1872+12] % 256
//#define CTHMI_CurrentStation_U8                     g_dataBuffer_WH_Display[1872+12]  / 256
#define CTHMI_TrainSpeed_U16                        (Change_BigEen(g_dataBuffer_WH_Display[1872+13])/10)
#define CTHMI_CatenaryVoltage_U16                   Change_BigEen(g_dataBuffer_WH_Display[1872+14])
#define CTHMI_CatenaryCurrent_U16                   Change_BigEen(g_dataBuffer_WH_Display[1872+15])

//0x309 CCU->HMI
#define CTHM_CCU1SWVer_U8                     g_dataBuffer_WH_Display[1888] % 256
#define CTHM_CCU1MVBVer_U8                     g_dataBuffer_WH_Display[1888] /256
#define CTHM_CCU1SDBVer_U8                     g_dataBuffer_WH_Display[1888+1] % 256
#define CTHM_CCU1VxWorksVer_U8                 g_dataBuffer_WH_Display[1888+1] / 256

#define CTHM_WheelDig1FedBk_U8                      g_dataBuffer_WH_Display[1888+2] % 256
#define CTHM_WheelDig2FedBk_U8                      g_dataBuffer_WH_Display[1888+2] / 256
#define CTHM_WheelDig3FedBk_U8                      g_dataBuffer_WH_Display[1888+3] % 256
#define CTHM_WheelDig4FedBk_U8                      g_dataBuffer_WH_Display[1888+3] / 256
#define CTHM_WheelDig5FedBk_U8                      g_dataBuffer_WH_Display[1888+4] % 256
#define CTHM_WheelDig6FedBk_U8                      g_dataBuffer_WH_Display[1888+4] / 256
#define CTHM_PBReleaseC1_B1                         g_dataBuffer_WH_Display[1888+5] &bit7
#define CTHM_PBReleaseC2_B1                         g_dataBuffer_WH_Display[1888+5] &bit6
#define CTHM_PBReleaseC3_B1                         g_dataBuffer_WH_Display[1888+5] &bit5
#define CTHM_PBReleaseC4_B1                         g_dataBuffer_WH_Display[1888+5] &bit4
#define CTHM_PBReleaseC5_B1                         g_dataBuffer_WH_Display[1888+5] &bit3
#define CTHM_PBReleaseC6_B1                         g_dataBuffer_WH_Display[1888+5] &bit2

#define CTHM_LineNumber_U8                      g_dataBuffer_WH_Display[1888+6] % 256
#define CTHM_TrainNumber_U8                      g_dataBuffer_WH_Display[1888+6] / 256
#define CTHM_FirstStationID_U8                    g_dataBuffer_WH_Display[1888+7] % 256
#define CTHM_LastStationID_U8                    g_dataBuffer_WH_Display[1888+7] / 256
#define CTHM_TrainServiceID_U16                    g_dataBuffer_WH_Display[1888+8]
#define CTHM_TrainSerialD_U16                    g_dataBuffer_WH_Display[1888+9]
#define CTHM_TractionBlock1_B1                  g_dataBuffer_WH_Display[1888+10] &bit7
#define CTHM_TractionBlock2_B1                  g_dataBuffer_WH_Display[1888+10] &bit6
#define CTHM_TractionBlock3_B1                  g_dataBuffer_WH_Display[1888+10] &bit5
#define CTHM_TractionBlock4_B1                  g_dataBuffer_WH_Display[1888+10] &bit4
#define CTHM_TractionBlock5_B1                  g_dataBuffer_WH_Display[1888+10] &bit3
#define CTHM_TractionBlock6_B1                  g_dataBuffer_WH_Display[1888+10] &bit2
#define CTHM_TractionBlock7_B1                  g_dataBuffer_WH_Display[1888+10] &bit1
#define CTHM_TractionBlock8_B1                  g_dataBuffer_WH_Display[1888+10] &bit0
#define CTHM_TractionBlock9_B1                  g_dataBuffer_WH_Display[1888+10] &bit15
#define CTHM_TractionBlock10_B1                  g_dataBuffer_WH_Display[1888+10] &bit14
#define CTHM_TractionBlock11_B1                  g_dataBuffer_WH_Display[1888+10] &bit13
#define CTHM_TractionBlock12_B1                  g_dataBuffer_WH_Display[1888+10] &bit12
#define CTHM_TractionBlock13_B1                  g_dataBuffer_WH_Display[1888+10] &bit11
#define CTHM_TractionBlock14_B1                  g_dataBuffer_WH_Display[1888+10] &bit10
#define CTHM_TractionBlock15_B1                  g_dataBuffer_WH_Display[1888+10] &bit9
#define CTHM_TractionBlock16_B1                  g_dataBuffer_WH_Display[1888+10] &bit8
#define CTHM_TractionBlock17_B1                  g_dataBuffer_WH_Display[1888+11] &bit7
#define CTHM_TractionBlock18_B1                  g_dataBuffer_WH_Display[1888+11] &bit6
#define CTHM_TractionBlock19_B1                  g_dataBuffer_WH_Display[1888+11] &bit5
#define CTHM_TractionBlock20_B1                  g_dataBuffer_WH_Display[1888+11] &bit4
#define CTHM_TractionBlock21_B1                  g_dataBuffer_WH_Display[1888+11] &bit3
#define CTHM_TractionBlock22_B1                  g_dataBuffer_WH_Display[1888+11] &bit2
#define CTHM_TractionBlock23_B1                  g_dataBuffer_WH_Display[1888+11] &bit1
#define CTHM_TractionBlock24_B1                  g_dataBuffer_WH_Display[1888+11] &bit0
#define CTHM_TractionBlock25_B1                  g_dataBuffer_WH_Display[1888+14] &bit1

#define CTHM_CCU2SWVer_U8                     g_dataBuffer_WH_Display[1888+11] / 256
#define CTHM_CCU2MVBVer_U8                     g_dataBuffer_WH_Display[1888+12] % 256
#define CTHM_CCU2SDBVer_U8                     g_dataBuffer_WH_Display[1888+12] / 256
#define CTHM_CCU2VxWorksVer_U8                 g_dataBuffer_WH_Display[1888+13] % 256

#define CTHM_HVAC1ColdHibt_B1                 g_dataBuffer_WH_Display[1888+13]&bit15
#define CTHM_HVAC2ColdHibt_B1                 g_dataBuffer_WH_Display[1888+13]&bit14
#define CTHM_HVAC3ColdHibt_B1                 g_dataBuffer_WH_Display[1888+13]&bit13
#define CTHM_HVAC4ColdHibt_B1                 g_dataBuffer_WH_Display[1888+13]&bit12
#define CTHM_HVAC5ColdHibt_B1                 g_dataBuffer_WH_Display[1888+13]&bit11
#define CTHM_HVAC6ColdHibt_B1                 g_dataBuffer_WH_Display[1888+13]&bit10
#define CTHM_AutoWarmHibt_B1                 g_dataBuffer_WH_Display[1888+13]&bit9
#define CTHM_ColdHibt_B1                 g_dataBuffer_WH_Display[1888+13] &bit8
#define CTHM_TransportMode_B1                 g_dataBuffer_WH_Display[1888+15] &bit8

//318
#define CTHM_TrainPipePressure_U16                highbyteLowbyteExchange( g_dataBuffer_WH_Display[1904])
#define CTHM_TrainPipeRefPressure_U16                highbyteLowbyteExchange( g_dataBuffer_WH_Display[1905])
#define CTHM_PressureRate_U16                     highbyteLowbyteExchange( g_dataBuffer_WH_Display[1906])
#define CTHM_AcDeSpeedMoment_I16                (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[1907])
#define CTHM_AcDeStopVelocity_U16                 highbyteLowbyteExchange( g_dataBuffer_WH_Display[1909])
#define CTHM_TransModeLmtSpd_U8                 ( g_dataBuffer_WH_Display[1910]% 256)
#define CTHM_CCU1GWMVBVer_U8                        g_dataBuffer_Display[1911]%256
#define CTHM_CCU2GWMVBVer_U8                        g_dataBuffer_Display[1911]/256


//  HMI -- HMI
#define HM1CT_LifeSignal_U16                highbyteLowbyteExchange( g_dataBuffer_WH_Display[336])
#define HM1CT_HMISWVerH_U8                     g_dataBuffer_WH_Display[336+1] % 256
#define HM1CT_HMISWVerL_U8                     g_dataBuffer_WH_Display[336+1] / 256
#define HM1CT_SAVETime_B1                     g_dataBuffer_WH_Display[352+5] &bit7
#define HM1CT_Reduce2_B1                g_dataBuffer_WH_Display[352+8] &bit15
#define HM1CT_Reduce1_B1                g_dataBuffer_WH_Display[352+8] &bit14
#define HM1CT_Add1_B1                   g_dataBuffer_WH_Display[352+8] &bit13
#define HM1CT_Add2_B1                   g_dataBuffer_WH_Display[352+8] &bit12
#define HM1CT_UICMode_B1                g_dataBuffer_WH_Display[352+8] &bit11
#define HM1CT_FIRE_B1       (g_dataBuffer_WH_Display[352+5] &bit15)||(g_dataBuffer_WH_Display[352+6] &bit7)||(g_dataBuffer_WH_Display[352+6] &bit15)||(g_dataBuffer_WH_Display[352+7] &bit7)||(g_dataBuffer_WH_Display[352+7] &bit15)||(g_dataBuffer_WH_Display[352+8] &bit7)
#define HM1CT_PREOFF_B1     (g_dataBuffer_WH_Display[352+5] &bit14)||(g_dataBuffer_WH_Display[352+6] &bit6)||(g_dataBuffer_WH_Display[352+6] &bit14)||(g_dataBuffer_WH_Display[352+7] &bit6)||(g_dataBuffer_WH_Display[352+7] &bit14)||(g_dataBuffer_WH_Display[352+8] &bit6)
#define HM1CT_EMVEN_B1      (g_dataBuffer_WH_Display[352+5] &bit13)||(g_dataBuffer_WH_Display[352+6] &bit5)||(g_dataBuffer_WH_Display[352+6] &bit13)||(g_dataBuffer_WH_Display[352+7] &bit5)||(g_dataBuffer_WH_Display[352+7] &bit13)||(g_dataBuffer_WH_Display[352+8] &bit5)
#define HM1CT_VEN_B1        (g_dataBuffer_WH_Display[352+5] &bit12)||(g_dataBuffer_WH_Display[352+6] &bit4)||(g_dataBuffer_WH_Display[352+6] &bit12)||(g_dataBuffer_WH_Display[352+7] &bit4)||(g_dataBuffer_WH_Display[352+7] &bit12)||(g_dataBuffer_WH_Display[352+8] &bit4)
#define HM1CT_AUTO_B1       (g_dataBuffer_WH_Display[352+5] &bit11)||(g_dataBuffer_WH_Display[352+6] &bit3)||(g_dataBuffer_WH_Display[352+6] &bit11)||(g_dataBuffer_WH_Display[352+7] &bit3)||(g_dataBuffer_WH_Display[352+7] &bit11)||(g_dataBuffer_WH_Display[352+8] &bit3)
#define HM1CT_TEST_B1       (g_dataBuffer_WH_Display[352+5] &bit10)||(g_dataBuffer_WH_Display[352+6] &bit2)||(g_dataBuffer_WH_Display[352+6] &bit10)||(g_dataBuffer_WH_Display[352+7] &bit2)||(g_dataBuffer_WH_Display[352+7] &bit10)||(g_dataBuffer_WH_Display[352+8] &bit2)

#define HM2CT_LifeSignal_U16                highbyteLowbyteExchange( g_dataBuffer_WH_Display[400])
#define HM2CT_HMISWVerH_U8                     g_dataBuffer_WH_Display[400+1] % 256
#define HM2CT_HMISWVerL_U8                     g_dataBuffer_WH_Display[400+1] / 256
#define HM2CT_SAVETime_B1                     g_dataBuffer_WH_Display[416+5] &bit7
#define HM2CT_Reduce2_B1                g_dataBuffer_WH_Display[416+8] &bit15
#define HM2CT_Reduce1_B1                g_dataBuffer_WH_Display[416+8] &bit14
#define HM2CT_Add1_B1                   g_dataBuffer_WH_Display[416+8] &bit13
#define HM2CT_Add2_B1                   g_dataBuffer_WH_Display[416+8] &bit12
#define HM2CT_UICMode_B1                g_dataBuffer_WH_Display[416+8] &bit11
#define HM2CT_FIRE_B1       (g_dataBuffer_WH_Display[416+5] &bit15)||(g_dataBuffer_WH_Display[416+6] &bit7)||(g_dataBuffer_WH_Display[416+6] &bit15)||(g_dataBuffer_WH_Display[416+7] &bit7)||(g_dataBuffer_WH_Display[416+7] &bit15)||(g_dataBuffer_WH_Display[416+8] &bit7)
#define HM2CT_PREOFF_B1     (g_dataBuffer_WH_Display[416+5] &bit14)||(g_dataBuffer_WH_Display[416+6] &bit6)||(g_dataBuffer_WH_Display[416+6] &bit14)||(g_dataBuffer_WH_Display[416+7] &bit6)||(g_dataBuffer_WH_Display[416+7] &bit14)||(g_dataBuffer_WH_Display[416+8] &bit6)
#define HM2CT_EMVEN_B1      (g_dataBuffer_WH_Display[416+5] &bit13)||(g_dataBuffer_WH_Display[416+6] &bit5)||(g_dataBuffer_WH_Display[416+6] &bit13)||(g_dataBuffer_WH_Display[416+7] &bit5)||(g_dataBuffer_WH_Display[416+7] &bit13)||(g_dataBuffer_WH_Display[416+8] &bit5)
#define HM2CT_VEN_B1        (g_dataBuffer_WH_Display[416+5] &bit12)||(g_dataBuffer_WH_Display[416+6] &bit4)||(g_dataBuffer_WH_Display[416+6] &bit12)||(g_dataBuffer_WH_Display[416+7] &bit4)||(g_dataBuffer_WH_Display[416+7] &bit12)||(g_dataBuffer_WH_Display[416+8] &bit4)
#define HM2CT_AUTO_B1       (g_dataBuffer_WH_Display[416+5] &bit11)||(g_dataBuffer_WH_Display[416+6] &bit3)||(g_dataBuffer_WH_Display[416+6] &bit11)||(g_dataBuffer_WH_Display[416+7] &bit3)||(g_dataBuffer_WH_Display[416+7] &bit11)||(g_dataBuffer_WH_Display[416+8] &bit3)
#define HM2CT_TEST_B1       (g_dataBuffer_WH_Display[416+5] &bit10)||(g_dataBuffer_WH_Display[416+6] &bit2)||(g_dataBuffer_WH_Display[416+6] &bit10)||(g_dataBuffer_WH_Display[416+7] &bit2)||(g_dataBuffer_WH_Display[416+7] &bit10)||(g_dataBuffer_WH_Display[416+8] &bit2)

//0x610 DCU(Mp1)_CCU_1
#define TR1CT_GWLfSign_U8                           g_dataBuffer_WH_Display[848] / 256
#define TR1CT_GWSWVerx_U8                           g_dataBuffer_WH_Display[848+1] / 256
#define TR1CT_GWSWVery_U8                           g_dataBuffer_WH_Display[848+2] % 256
#define TR1CT_GWSWVerz_U8                           g_dataBuffer_WH_Display[848+2] / 256

#define TR1CT_DCUCode0CWSD_B1                          g_dataBuffer_WH_Display[656+192+7] & bit11
#define TR1CT_Powering_B1                              g_dataBuffer_WH_Display[656+192+10] & bit3
#define TR1CT_Brake_B1                                 g_dataBuffer_WH_Display[656+192+10] & bit7
#define TR1CT_HSCBClosed_B1                            g_dataBuffer_WH_Display[656+192+10] & bit10
#define TR1CT_DCUCutOut_B1                             g_dataBuffer_WH_Display[656+192+10] & bit13
#define TR1CT_DBcut_B1                               g_dataBuffer_WH_Display[656+192+12] & bit4
#define TR1CT_LineBraker2Closed_B1                     g_dataBuffer_WH_Display[656+192+10] & bit8
#define TR1CT_LineBraker1Closed_B1                     g_dataBuffer_WH_Display[656+192+10] & bit9
#define TR1CT_FilterCVolt_U8                           g_dataBuffer_WH_Display[656+192+12] / 256
#define TR1CT_MotorCur_U8                              g_dataBuffer_WH_Display[656+192+13] % 256
#define TR1CT_DCUCheckAnswer_B1                         g_dataBuffer_MVB[656+192+12] & bit5
#define TR1CT_IsolateCommand_B1                        g_dataBuffer_MVB[656+192+11] & bit9
#define TR1CT_EmgyMode_B1                               g_dataBuffer_MVB[656+192+10] & bit4
//0x611 DCU(Mp1)_CCU_2
#define TR1CT_EDBrakeFdBk_U8                           g_dataBuffer_WH_Display[672+192+1] % 256
#define TR1CT_LineVoltage_U8                           g_dataBuffer_WH_Display[672+192+2] / 256
#define TR1CT_TrackBrkCommand_U8                       g_dataBuffer_WH_Display[672+192+3] % 256
#define TR1CT_TrackPowerConsumption_U8                 g_dataBuffer_WH_Display[672+192+3] / 256
#define TR1CT_BrkPowerConsumption_U8                   g_dataBuffer_WH_Display[672+192+4] % 256
#define TR1CT_RHBrkPowerConsumption_U8                 g_dataBuffer_WH_Display[672+192+5] / 256
#define TR1CT_Traction_U8                              g_dataBuffer_WH_Display[672+192+6] % 256
#define TR1CT_DCUSWVerH_U8                              g_dataBuffer_WH_Display[672+192+7] / 256
#define TR1CT_DCUSWVerL_U8                              g_dataBuffer_WH_Display[672+192+8] % 256

//0x620 DCU(M1)_CCU_1
#define TR2CT_GWLfSign_U8                           g_dataBuffer_WH_Display[896] / 256
#define TR2CT_GWSWVerx_U8                           g_dataBuffer_WH_Display[896+1] / 256
#define TR2CT_GWSWVery_U8                           g_dataBuffer_WH_Display[896+2] % 256
#define TR2CT_GWSWVerz_U8                           g_dataBuffer_WH_Display[896+2] / 256
#define TR2CT_DCUCode0CWSD_B1                          g_dataBuffer_WH_Display[704 +192+7] & bit11
#define TR2CT_Powering_B1                              g_dataBuffer_WH_Display[704+192+10] & bit3
#define TR2CT_Brake_B1                                 g_dataBuffer_WH_Display[704+192+10] & bit7
#define TR2CT_HSCBClosed_B1                            g_dataBuffer_WH_Display[704+192+10] & bit10
#define TR2CT_DCUCutOut_B1                             g_dataBuffer_WH_Display[704+192+10] & bit13
#define TR2CT_DBcut_B1                               g_dataBuffer_WH_Display[704+192+12] & bit4
#define TR2CT_LineBraker2Closed_B1                     g_dataBuffer_WH_Display[704+192+10] & bit8
#define TR2CT_LineBraker1Closed_B1                     g_dataBuffer_WH_Display[704+192+10] & bit9
#define TR2CT_FilterCVolt_U8                           g_dataBuffer_WH_Display[704+192+12] / 256
#define TR2CT_MotorCur_U8                              g_dataBuffer_WH_Display[704+192+13] % 256
#define TR2CT_DCUCheckAnswer_B1                         g_dataBuffer_MVB[704+192+12] & bit5
#define TR2CT_IsolateCommand_B1                        g_dataBuffer_MVB[704+192+11] & bit9
#define TR2CT_EmgyMode_B1                               g_dataBuffer_MVB[704+192+10] & bit4

//0x621 DCU(M1)_CCU_2
#define TR2CT_EDBrakeFdBk_U8                           g_dataBuffer_WH_Display[720+192+1] % 256
#define TR2CT_LineVoltage_U8                           g_dataBuffer_WH_Display[720+192+2] / 256
#define TR2CT_TrackBrkCommand_U8                       g_dataBuffer_WH_Display[720+192+3] % 256
#define TR2CT_TrackPowerConsumption_U8                   g_dataBuffer_WH_Display[720+192+3] / 256
#define TR2CT_BrkPowerConsumption_U8                 g_dataBuffer_WH_Display[720+192+4] % 256
#define TR2CT_RHBrkPowerConsumption_U8                 g_dataBuffer_WH_Display[720+192+5] / 256
#define TR2CT_Traction_U8                              g_dataBuffer_WH_Display[720+192+6] % 256
#define TR2CT_DCUSWVerH_U8                              g_dataBuffer_WH_Display[720+192+7] / 256
#define TR2CT_DCUSWVerL_U8                              g_dataBuffer_WH_Display[720+192+8] % 256
//0x630 DCU(M2)_CCU_1
#define TR3CT_GWLfSign_U8                           g_dataBuffer_WH_Display[944] / 256
#define TR3CT_GWSWVerx_U8                           g_dataBuffer_WH_Display[944+1] / 256
#define TR3CT_GWSWVery_U8                           g_dataBuffer_WH_Display[944+2] % 256
#define TR3CT_GWSWVerz_U8                           g_dataBuffer_WH_Display[944+2] / 256
#define TR3CT_DCUCode0CWSD_B1                          g_dataBuffer_WH_Display[752+192+7] & bit11
#define TR3CT_Powering_B1                              g_dataBuffer_WH_Display[752+192+10] & bit3
#define TR3CT_Brake_B1                                 g_dataBuffer_WH_Display[752+192+10] & bit7
#define TR3CT_HSCBClosed_B1                            g_dataBuffer_WH_Display[752+192+10] & bit10
#define TR3CT_DCUCutOut_B1                             g_dataBuffer_WH_Display[752+192+10] & bit13
#define TR3CT_DBcut_B1                               g_dataBuffer_WH_Display[752+192+12] & bit4
#define TR3CT_LineBraker2Closed_B1                     g_dataBuffer_WH_Display[752+192+10] & bit8
#define TR3CT_LineBraker1Closed_B1                     g_dataBuffer_WH_Display[752+192+10] & bit9
#define TR3CT_FilterCVolt_U8                           g_dataBuffer_WH_Display[752+192+12] / 256
#define TR3CT_MotorCur_U8                              g_dataBuffer_WH_Display[752+192+13] % 256
#define TR3CT_DCUCheckAnswer_B1                         g_dataBuffer_MVB[752+192+12] & bit5
#define TR3CT_IsolateCommand_B1                        g_dataBuffer_MVB[752+192+11] & bit9
#define TR3CT_EmgyMode_B1                               g_dataBuffer_MVB[752+192+10] & bit4


//0x631 DCU(M2)_CCU_2
#define TR3CT_EDBrakeFdBk_U8                           g_dataBuffer_WH_Display[768+192+1] % 256
#define TR3CT_LineVoltage_U8                           g_dataBuffer_WH_Display[768+192+2] / 256
#define TR3CT_TrackBrkCommand_U8                       g_dataBuffer_WH_Display[768+192+3] % 256
#define TR3CT_TrackPowerConsumption_U8                   g_dataBuffer_WH_Display[768+192+3] / 256
#define TR3CT_BrkPowerConsumption_U8                 g_dataBuffer_WH_Display[768+192+4] % 256
#define TR3CT_RHBrkPowerConsumption_U8                 g_dataBuffer_WH_Display[768+192+5] / 256
#define TR3CT_Traction_U8                              g_dataBuffer_WH_Display[768+192+6] % 256
#define TR3CT_DCUSWVerH_U8                              g_dataBuffer_WH_Display[768+192+7] / 256
#define TR3CT_DCUSWVerL_U8                              g_dataBuffer_WH_Display[768+192+8] % 256
//0x640 DCU(Mp2)_CCU_1
#define TR4CT_GWLfSign_U8                           g_dataBuffer_WH_Display[992] / 256
#define TR4CT_GWSWVerx_U8                           g_dataBuffer_WH_Display[992+1] / 256
#define TR4CT_GWSWVery_U8                           g_dataBuffer_WH_Display[992+2] % 256
#define TR4CT_GWSWVerz_U8                           g_dataBuffer_WH_Display[992+2] / 256
#define TR4CT_DCUCode0CWSD_B1                          g_dataBuffer_WH_Display[800+192+7] & bit11
#define TR4CT_Powering_B1                              g_dataBuffer_WH_Display[800+192+10] & bit3
#define TR4CT_Brake_B1                                 g_dataBuffer_WH_Display[800+192+10] & bit7
#define TR4CT_HSCBClosed_B1                            g_dataBuffer_WH_Display[800+192+10] & bit10
#define TR4CT_DCUCutOut_B1                             g_dataBuffer_WH_Display[800+192+10] & bit13
#define TR4CT_DBcut_B1                               g_dataBuffer_WH_Display[800+192+12] & bit4
#define TR4CT_LineBraker2Closed_B1                     g_dataBuffer_WH_Display[800+192+10] & bit8
#define TR4CT_LineBraker1Closed_B1                     g_dataBuffer_WH_Display[800+192+10] & bit9
#define TR4CT_FilterCVolt_U8                           g_dataBuffer_WH_Display[800+192+12] / 256
#define TR4CT_MotorCur_U8                              g_dataBuffer_WH_Display[800+192+13] % 256
#define TR4CT_DCUCheckAnswer_B1                         g_dataBuffer_MVB[800+192+12] & bit5
#define TR4CT_IsolateCommand_B1                        g_dataBuffer_MVB[800+192+11] & bit9
#define TR4CT_EmgyMode_B1                               g_dataBuffer_MVB[800+192+10] & bit4


//0x641 DCU(Mp2)_CCU_2
#define TR4CT_EDBrakeFdBk_U8                           g_dataBuffer_WH_Display[816+192+1] % 256
#define TR4CT_LineVoltage_U8                           g_dataBuffer_WH_Display[816+192+2] / 256
#define TR4CT_TrackBrkCommand_U8                       g_dataBuffer_WH_Display[816+192+3] % 256
#define TR4CT_TrackPowerConsumption_U8                   g_dataBuffer_WH_Display[816+192+3] / 256
#define TR4CT_BrkPowerConsumption_U8                 g_dataBuffer_WH_Display[816+192+4] % 256
#define TR4CT_RHBrkPowerConsumption_U8                 g_dataBuffer_WH_Display[816+192+5] / 256
#define TR4CT_Traction_U8                              g_dataBuffer_WH_Display[816+192+6] % 256
#define TR4CT_DCUSWVerH_U8                              g_dataBuffer_WH_Display[816+192+7] / 256
#define TR4CT_DCUSWVerL_U8                              g_dataBuffer_WH_Display[816+192+8] % 256
//0x710  ACU(Tc1)_CCU
#define AX1CT_GWLfSign_U8                            (g_dataBuffer_WH_Display[1040]%256)
#define AX1CT_GWSoftwVersion_U8                      g_dataBuffer_WH_Display[1040+1] % 256
#define AX1CT_GWSwitch_U8                            g_dataBuffer_WH_Display[1040+1] / 256
#define AX1CT_AcuLfSign_U16                          highbyteLowbyteExchange(g_dataBuffer_WH_Display[1040+2])
#define AX1CT_AcuSoftwVersion_U8                     g_dataBuffer_WH_Display[1040+3] % 256

#define AX1CT_EgyCons_U16                             (g_dataBuffer_WH_Display[848+192+3]/256*256+g_dataBuffer_WH_Display[848+192+4]%256)
#define AX1CT_InputVolt_U16                           (g_dataBuffer_WH_Display[848+192+4]/256*256+g_dataBuffer_WH_Display[848+192+5]%256)
#define AX1CT_MiddleVolt_U16                          (g_dataBuffer_WH_Display[848+192+5]/256*256+g_dataBuffer_WH_Display[848+192+6]%256)
#define AX1CT_OutputVolt_U16                          (g_dataBuffer_WH_Display[848+192+6]/256*256+g_dataBuffer_WH_Display[848+192+7]%256)
#define AX1CT_OutputFreq_U16                          (g_dataBuffer_WH_Display[848+192+7]/256*256+g_dataBuffer_WH_Display[848+192+8]%256)
#define AX1CT_OutputCur_U16                           (g_dataBuffer_WH_Display[848+192+8]/256*256+g_dataBuffer_WH_Display[848+192+9]%256)
#define AX1CT_InputCur_U16                            (g_dataBuffer_WH_Display[848+192+9]/256*256+g_dataBuffer_WH_Display[848+192+10]%256)

#define AX1CT_AcuEquipmentNormal_B1                    g_dataBuffer_WH_Display[848+192+10]& bit8
#define AX1CT_AcuWKPowerOutputState_B1                 g_dataBuffer_WH_Display[848+192+10]& bit9
#define AX1CT_AcuEquipmentError_B1                      g_dataBuffer_WH_Display[848+192+10]& bit10
#define AX1CT_StopWork_B1                               g_dataBuffer_WH_Display[848+192+11]& bit9
#define AX1CT_CTAXi_Cutoff_B1                           g_dataBuffer_WH_Display[2016+2]&bit3  ///acu cut

//0x720  ACU(Tc2)_CCU
#define AX2CT_GWLfSign_U8                            (g_dataBuffer_WH_Display[1056]%256)
#define AX2CT_GWSoftwVersion_U8                      g_dataBuffer_WH_Display[1056+1] % 256
#define AX2CT_GWSwitch_U8                            g_dataBuffer_WH_Display[1056+1] / 256
#define AX2CT_AcuLfSign_U16                          highbyteLowbyteExchange(g_dataBuffer_WH_Display[1056+2])
#define AX2CT_AcuSoftwVersion_U8                     g_dataBuffer_WH_Display[1056+3] % 256
#define AX2CT_EgyCons_U16                             (g_dataBuffer_WH_Display[864+192+3]/256*256+g_dataBuffer_WH_Display[864+192+4]%256)
#define AX2CT_InputVolt_U16                           (g_dataBuffer_WH_Display[864+192+4]/256*256+g_dataBuffer_WH_Display[864+192+5]%256)
#define AX2CT_MiddleVolt_U16                          (g_dataBuffer_WH_Display[864+192+5]/256*256+g_dataBuffer_WH_Display[864+192+6]%256)
#define AX2CT_OutputVolt_U16                          (g_dataBuffer_WH_Display[864+192+6]/256*256+g_dataBuffer_WH_Display[864+192+7]%256)
#define AX2CT_OutputFreq_U16                          (g_dataBuffer_WH_Display[864+192+7]/256*256+g_dataBuffer_WH_Display[864+192+8]%256)
#define AX2CT_OutputCur_U16                           (g_dataBuffer_WH_Display[864+192+8]/256*256+g_dataBuffer_WH_Display[864+192+9]%256)
#define AX2CT_InputCur_U16                            (g_dataBuffer_WH_Display[864+192+9]/256*256+g_dataBuffer_WH_Display[864+192+10]%256)

#define AX2CT_AcuEquipmentNormal_B1                    g_dataBuffer_WH_Display[864+192+10]& bit8
#define AX2CT_AcuWKPowerOutputState_B1                 g_dataBuffer_WH_Display[864+192+10]& bit9
#define AX2CT_AcuEquipmentError_B1                      g_dataBuffer_WH_Display[864+192+10]& bit10
#define AX2CT_StopWork_B1                               g_dataBuffer_WH_Display[864+192+11]& bit9
#define AX2CT_CTAXi_Cutoff_B1                           g_dataBuffer_WH_Display[2096-112+48+2]&bit3  ///acu cut
//0xC10 RTU->CCU
#define RT1CT_GWLfSign_U8                    g_dataBuffer_WH_Display[1712+14]/256
#define RT1CT_GWSWVer_U8                      g_dataBuffer_WH_Display[1712+15]%256
//0xC20 RTU->CCU
#define RT2CT_GWLfSign_U8                    g_dataBuffer_WH_Display[1728+14]/256
#define RT2CT_GWSWVer_U8                      g_dataBuffer_WH_Display[1728+15]%256
//0xD10   REC(Tc1)_CCU
#define RE1CT_GWLfSign_U8                               g_dataBuffer_WH_Display[2272]%256
#define RE1CT_GWVersion_U8                               g_dataBuffer_WH_Display[2272+1]%256
#define RE1CT_RECLfSign_U8                               g_dataBuffer_WH_Display[2272+2]%256
#define RE1CT_RECVersion_U8                               g_dataBuffer_WH_Display[2272+2]/256
#define RE1CT_InputVol_U16                             highbyteLowbyteExchange(g_dataBuffer_WH_Display[2272+6])
#define RE1CT_GeneratrixVol_U16                        highbyteLowbyteExchange(g_dataBuffer_WH_Display[2272+7])
#define RE1CT_OutputVol_U16                            highbyteLowbyteExchange(g_dataBuffer_WH_Display[2272+8])
#define RE1CT_OutputLoadCur_U16                        highbyteLowbyteExchange(g_dataBuffer_WH_Display[2272+9])
#define RE1CT_OutputChargeCur_U16                      highbyteLowbyteExchange(g_dataBuffer_WH_Display[2272+10])
#define RE1CT_BattTemp_U16                             highbyteLowbyteExchange(g_dataBuffer_WH_Display[2272+11])
#define RE1CT_ChargerCutoff_B1                            g_dataBuffer_WH_Display[2272+3]& bit9
#define RE1CT_RecOK_B1                                g_dataBuffer_WH_Display[2272+5]& bit0
#define RE1CT_RecBreakdown_B1                        g_dataBuffer_WH_Display[2272+5]& bit1

//0xD20   REC(Tc2)_CCU
#define RE2CT_GWLfSign_U8                               g_dataBuffer_WH_Display[2288]%256
#define RE2CT_GWVersion_U8                               g_dataBuffer_WH_Display[2288+1]%256
#define RE2CT_RECLfSign_U8                               g_dataBuffer_WH_Display[2288+2]%256
#define RE2CT_RECVersion_U8                               g_dataBuffer_WH_Display[2288+2]/256
#define RE2CT_InputVol_U16                             highbyteLowbyteExchange(g_dataBuffer_WH_Display[2288+6])
#define RE2CT_GeneratrixVol_U16                        highbyteLowbyteExchange(g_dataBuffer_WH_Display[2288+7])
#define RE2CT_OutputVol_U16                            highbyteLowbyteExchange(g_dataBuffer_WH_Display[2288+8])
#define RE2CT_OutputLoadCur_U16                        highbyteLowbyteExchange(g_dataBuffer_WH_Display[2288+9])
#define RE2CT_OutputChargeCur_U16                      highbyteLowbyteExchange(g_dataBuffer_WH_Display[2288+10])
#define RE2CT_BattTemp_U16                             highbyteLowbyteExchange(g_dataBuffer_WH_Display[2288+11])
#define RE2CT_ChargerCutoff_B1                            g_dataBuffer_WH_Display[2288+3]& bit9
#define RE2CT_RecOK_B1                                g_dataBuffer_WH_Display[2288+5]& bit0
#define RE2CT_RecBreakdown_B1                        g_dataBuffer_WH_Display[2288+5]& bit1
////0X9I0        HVAC-CCU
#define AC1CT_LifeSgn_U16                                 highbyteLowbyteExchange(g_dataBuffer_WH_Display[1440+48])
#define AC1CT_SoftwareVersionL_U8                               g_dataBuffer_WH_Display[1488+10]%256
#define AC1CT_SoftwareVersionH_U8                               g_dataBuffer_WH_Display[1488+10]/256

#define AC1CT_RTemp_I16                                 (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[1440+48+1])
#define AC1CT_STemp_I16                                 (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[1440+48+2])
#define AC1CT_FTemp_I16                                 (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[1440+48+3])
#define AC1CT_OFF_B1                                    g_dataBuffer_WH_Display[1440+48+4]&bit0
#define AC1CT_Test_B1                                    g_dataBuffer_WH_Display[1440+48+4]&bit1
#define AC1CT_CentralizedControl_B1                      g_dataBuffer_WH_Display[1440+48+4]&bit2
#define AC1CT_Auto_B1                                    g_dataBuffer_WH_Display[1440+48+4]&bit4
#define AC1CT_LocalControl_B1                           g_dataBuffer_WH_Display[1440+48+4]&bit5
#define AC1CT_HalfCooling_B1                                    g_dataBuffer_WH_Display[1440+48+4]&bit6
#define AC1CT_FullCooling_B1                                    g_dataBuffer_WH_Display[1440+48+4]&bit7
#define AC1CT_PreCooling_B1                                    g_dataBuffer_WH_Display[1440+48+4]&bit8
#define AC1CT_HalfHeating_B1                                    g_dataBuffer_WH_Display[1440+48+4]&bit9
#define AC1CT_FullHeating_B1                                    g_dataBuffer_WH_Display[1440+48+4]&bit10
#define AC1CT_FireMode_B1                                    g_dataBuffer_WH_Display[1440+48+4]&bit12
#define AC1CT_Ventilation_B1                            g_dataBuffer_WH_Display[1440+48+4] &bit3
#define AC1CT_EVentilation_B1                           g_dataBuffer_WH_Display[1440+48+4] &bit11
#define AC1CT_Reducemode_B1                             g_dataBuffer_WH_Display[1440+48+4] &bit13
#define AC1CT_EFanWorkStatus11_B1                                    g_dataBuffer_WH_Display[1440+48+5]&bit11
#define AC1CT_CFanWorkStatus11_B1                                    g_dataBuffer_WH_Display[1440+48+5]&bit12
#define AC1CT_CompWorkStatus11_B1                                    g_dataBuffer_WH_Display[1440+48+5]&bit13
#define AC1CT_EFanWorkStatus12_B1                                    g_dataBuffer_WH_Display[1440+48+5]&bit14
#define AC1CT_CFanWorkStatus12_B1                                    g_dataBuffer_WH_Display[1440+48+5]&bit15
#define AC1CT_CompWorkStatus12_B1                                    g_dataBuffer_WH_Display[1440+48+6]&bit0
#define AC1CT_EFanWorkStatus21_B1                                    g_dataBuffer_WH_Display[1440+48+6]&bit1
#define AC1CT_CFanWorkStatus21_B1                                    g_dataBuffer_WH_Display[1440+48+6]&bit2
#define AC1CT_CompWorkStatus21_B1                                    g_dataBuffer_WH_Display[1440+48+6]&bit3
#define AC1CT_EFanWorkStatus22_B1                                    g_dataBuffer_WH_Display[1440+48+6]&bit4
#define AC1CT_CFanWorkStatus22_B1                                    g_dataBuffer_WH_Display[1440+48+6]&bit5
#define AC1CT_CompWorkStatus22_B1                                    g_dataBuffer_WH_Display[1440+48+6]&bit6
#define AC1CT_SHeaterWorkStatus1_B1                                    g_dataBuffer_WH_Display[1440+48+6]&bit7
#define AC1CT_SHeaterWorkStatus2_B1                                    g_dataBuffer_WH_Display[1440+48+6]&bit8
#define AC1CT_Minor_fault_B1                                    g_dataBuffer_WH_Display[1440+48+9]&bit5
#define AC1CT_Medium_fault_B1                                    g_dataBuffer_WH_Display[1440+48+9]&bit6
#define AC1CT_Serious_fault_B1                                    g_dataBuffer_WH_Display[1440+48+9]&bit7


#define AC2CT_LifeSgn_U16                                 highbyteLowbyteExchange(g_dataBuffer_WH_Display[1456+48])
#define AC2CT_SoftwareVersionL_U8                               g_dataBuffer_WH_Display[1504+10]%256
#define AC2CT_SoftwareVersionH_U8                               g_dataBuffer_WH_Display[1504+10]/256

#define AC2CT_RTemp_I16                                 (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[1456+48+1])
#define AC2CT_STemp_I16                                 (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[1456+48+2])
#define AC2CT_FTemp_I16                                 (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[1456+48+3])
#define AC2CT_OFF_B1                                    g_dataBuffer_WH_Display[1456+48+4]&bit0
#define AC2CT_Test_B1                                    g_dataBuffer_WH_Display[1456+48+4]&bit1
#define AC2CT_CentralizedControl_B1                      g_dataBuffer_WH_Display[1456+48+4]&bit2
#define AC2CT_Auto_B1                                    g_dataBuffer_WH_Display[1456+48+4]&bit4
#define AC2CT_LocalControl_B1                           g_dataBuffer_WH_Display[1456+48+4]&bit5
#define AC2CT_HalfCooling_B1                                    g_dataBuffer_WH_Display[1456+48+4]&bit6
#define AC2CT_FullCooling_B1                                    g_dataBuffer_WH_Display[1456+48+4]&bit7
#define AC2CT_PreCooling_B1                                    g_dataBuffer_WH_Display[1456+48+4]&bit8
#define AC2CT_HalfHeating_B1                                    g_dataBuffer_WH_Display[1456+48+4]&bit9
#define AC2CT_FullHeating_B1                                    g_dataBuffer_WH_Display[1456+48+4]&bit10
#define AC2CT_FireMode_B1                                    g_dataBuffer_WH_Display[1456+48+4]&bit12
#define AC2CT_Ventilation_B1                            g_dataBuffer_WH_Display[1456+48+4] &bit3
#define AC2CT_EVentilation_B1                           g_dataBuffer_WH_Display[1456+48+4] &bit11
#define AC2CT_Reducemode_B1                             g_dataBuffer_WH_Display[1456+48+4] &bit13
#define AC2CT_EFanWorkStatus11_B1                                    g_dataBuffer_WH_Display[1456+48+5]&bit11
#define AC2CT_CFanWorkStatus11_B1                                    g_dataBuffer_WH_Display[1456+48+5]&bit12
#define AC2CT_CompWorkStatus11_B1                                    g_dataBuffer_WH_Display[1456+48+5]&bit13
#define AC2CT_EFanWorkStatus12_B1                                    g_dataBuffer_WH_Display[1456+48+5]&bit14
#define AC2CT_CFanWorkStatus12_B1                                    g_dataBuffer_WH_Display[1456+48+5]&bit15
#define AC2CT_CompWorkStatus12_B1                                    g_dataBuffer_WH_Display[1456+48+6]&bit0
#define AC2CT_EFanWorkStatus21_B1                                    g_dataBuffer_WH_Display[1456+48+6]&bit1
#define AC2CT_CFanWorkStatus21_B1                                    g_dataBuffer_WH_Display[1456+48+6]&bit2
#define AC2CT_CompWorkStatus21_B1                                    g_dataBuffer_WH_Display[1456+48+6]&bit3
#define AC2CT_EFanWorkStatus22_B1                                    g_dataBuffer_WH_Display[1456+48+6]&bit4
#define AC2CT_CFanWorkStatus22_B1                                    g_dataBuffer_WH_Display[1456+48+6]&bit5
#define AC2CT_CompWorkStatus22_B1                                    g_dataBuffer_WH_Display[1456+48+6]&bit6
#define AC2CT_SHeaterWorkStatus1_B1                                    g_dataBuffer_WH_Display[1456+48+6]&bit7
#define AC2CT_SHeaterWorkStatus2_B1                                    g_dataBuffer_WH_Display[1456+48+6]&bit8
#define AC2CT_Minor_fault_B1                                    g_dataBuffer_WH_Display[1456+48+9]&bit5
#define AC2CT_Medium_fault_B1                                    g_dataBuffer_WH_Display[1456+48+9]&bit6
#define AC2CT_Serious_fault_B1                                    g_dataBuffer_WH_Display[1456+48+9]&bit7

#define AC3CT_LifeSgn_U16                                 highbyteLowbyteExchange(g_dataBuffer_WH_Display[1472+48])
#define AC3CT_SoftwareVersionL_U8                               g_dataBuffer_WH_Display[1520+10]%256
#define AC3CT_SoftwareVersionH_U8                               g_dataBuffer_WH_Display[1520+10]/256

#define AC3CT_RTemp_I16                                 (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[1472+48+1])
#define AC3CT_STemp_I16                                 (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[1472+48+2])
#define AC3CT_FTemp_I16                                 (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[1472+48+3])
#define AC3CT_OFF_B1                                    g_dataBuffer_WH_Display[1472+48+4]&bit0
#define AC3CT_Test_B1                                    g_dataBuffer_WH_Display[1472+48+4]&bit1
#define AC3CT_CentralizedControl_B1                      g_dataBuffer_WH_Display[1472+48+4]&bit2
#define AC3CT_Auto_B1                                    g_dataBuffer_WH_Display[1472+48+4]&bit4
#define AC3CT_LocalControl_B1                           g_dataBuffer_WH_Display[1472+48+4]&bit5
#define AC3CT_HalfCooling_B1                                    g_dataBuffer_WH_Display[1472+48+4]&bit6
#define AC3CT_FullCooling_B1                                    g_dataBuffer_WH_Display[1472+48+4]&bit7
#define AC3CT_PreCooling_B1                                    g_dataBuffer_WH_Display[1472+48+4]&bit8
#define AC3CT_HalfHeating_B1                                    g_dataBuffer_WH_Display[1472+48+4]&bit9
#define AC3CT_FullHeating_B1                                    g_dataBuffer_WH_Display[1472+48+4]&bit10
#define AC3CT_FireMode_B1                                    g_dataBuffer_WH_Display[1472+48+4]&bit12
#define AC3CT_Ventilation_B1                            g_dataBuffer_WH_Display[1472+48+4] &bit3
#define AC3CT_EVentilation_B1                           g_dataBuffer_WH_Display[1472+48+4] &bit11
#define AC3CT_Reducemode_B1                             g_dataBuffer_WH_Display[1472+48+4] &bit13
#define AC3CT_EFanWorkStatus11_B1                                    g_dataBuffer_WH_Display[1472+48+5]&bit11
#define AC3CT_CFanWorkStatus11_B1                                    g_dataBuffer_WH_Display[1472+48+5]&bit12
#define AC3CT_CompWorkStatus11_B1                                    g_dataBuffer_WH_Display[1472+48+5]&bit13
#define AC3CT_EFanWorkStatus12_B1                                    g_dataBuffer_WH_Display[1472+48+5]&bit14
#define AC3CT_CFanWorkStatus12_B1                                    g_dataBuffer_WH_Display[1472+48+5]&bit15
#define AC3CT_CompWorkStatus12_B1                                    g_dataBuffer_WH_Display[1472+48+6]&bit0
#define AC3CT_EFanWorkStatus21_B1                                    g_dataBuffer_WH_Display[1472+48+6]&bit1
#define AC3CT_CFanWorkStatus21_B1                                    g_dataBuffer_WH_Display[1472+48+6]&bit2
#define AC3CT_CompWorkStatus21_B1                                    g_dataBuffer_WH_Display[1472+48+6]&bit3
#define AC3CT_EFanWorkStatus22_B1                                    g_dataBuffer_WH_Display[1472+48+6]&bit4
#define AC3CT_CFanWorkStatus22_B1                                    g_dataBuffer_WH_Display[1472+48+6]&bit5
#define AC3CT_CompWorkStatus22_B1                                    g_dataBuffer_WH_Display[1472+48+6]&bit6
#define AC3CT_SHeaterWorkStatus1_B1                                    g_dataBuffer_WH_Display[1472+48+6]&bit7
#define AC3CT_SHeaterWorkStatus2_B1                                    g_dataBuffer_WH_Display[1472+48+6]&bit8
#define AC3CT_Minor_fault_B1                                    g_dataBuffer_WH_Display[1472+48+9]&bit5
#define AC3CT_Medium_fault_B1                                    g_dataBuffer_WH_Display[1472+48+9]&bit6
#define AC3CT_Serious_fault_B1                                    g_dataBuffer_WH_Display[1472+48+9]&bit7

#define AC4CT_LifeSgn_U16                                 highbyteLowbyteExchange(g_dataBuffer_WH_Display[1488+48])
#define AC4CT_SoftwareVersionL_U8                               g_dataBuffer_WH_Display[1536+10]%256
#define AC4CT_SoftwareVersionH_U8                               g_dataBuffer_WH_Display[1536+10]/256

#define AC4CT_RTemp_I16                                 (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[1488+48+1])
#define AC4CT_STemp_I16                                 (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[1488+48+2])
#define AC4CT_FTemp_I16                                 (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[1488+48+3])
#define AC4CT_OFF_B1                                    g_dataBuffer_WH_Display[1488+48+4]&bit0
#define AC4CT_Test_B1                                    g_dataBuffer_WH_Display[1488+48+4]&bit1
#define AC4CT_CentralizedControl_B1                      g_dataBuffer_WH_Display[1488+48+4]&bit2
#define AC4CT_Auto_B1                                    g_dataBuffer_WH_Display[1488+48+4]&bit4
#define AC4CT_LocalControl_B1                           g_dataBuffer_WH_Display[1488+48+4]&bit5
#define AC4CT_HalfCooling_B1                                    g_dataBuffer_WH_Display[1488+48+4]&bit6
#define AC4CT_FullCooling_B1                                    g_dataBuffer_WH_Display[1488+48+4]&bit7
#define AC4CT_PreCooling_B1                                    g_dataBuffer_WH_Display[1488+48+4]&bit8
#define AC4CT_HalfHeating_B1                                    g_dataBuffer_WH_Display[1488+48+4]&bit9
#define AC4CT_FullHeating_B1                                    g_dataBuffer_WH_Display[1488+48+4]&bit10
#define AC4CT_FireMode_B1                                    g_dataBuffer_WH_Display[1488+48+4]&bit12
#define AC4CT_Ventilation_B1                            g_dataBuffer_WH_Display[1488+48+4] &bit3
#define AC4CT_EVentilation_B1                           g_dataBuffer_WH_Display[1488+48+4] &bit11
#define AC4CT_Reducemode_B1                             g_dataBuffer_WH_Display[1488+48+4] &bit13
#define AC4CT_EFanWorkStatus11_B1                                    g_dataBuffer_WH_Display[1488+48+5]&bit11
#define AC4CT_CFanWorkStatus11_B1                                    g_dataBuffer_WH_Display[1488+48+5]&bit12
#define AC4CT_CompWorkStatus11_B1                                    g_dataBuffer_WH_Display[1488+48+5]&bit13
#define AC4CT_EFanWorkStatus12_B1                                    g_dataBuffer_WH_Display[1488+48+5]&bit14
#define AC4CT_CFanWorkStatus12_B1                                    g_dataBuffer_WH_Display[1488+48+5]&bit15
#define AC4CT_CompWorkStatus12_B1                                    g_dataBuffer_WH_Display[1488+48+6]&bit0
#define AC4CT_EFanWorkStatus21_B1                                    g_dataBuffer_WH_Display[1488+48+6]&bit1
#define AC4CT_CFanWorkStatus21_B1                                    g_dataBuffer_WH_Display[1488+48+6]&bit2
#define AC4CT_CompWorkStatus21_B1                                    g_dataBuffer_WH_Display[1488+48+6]&bit3
#define AC4CT_EFanWorkStatus22_B1                                    g_dataBuffer_WH_Display[1488+48+6]&bit4
#define AC4CT_CFanWorkStatus22_B1                                    g_dataBuffer_WH_Display[1488+48+6]&bit5
#define AC4CT_CompWorkStatus22_B1                                    g_dataBuffer_WH_Display[1488+48+6]&bit6
#define AC4CT_SHeaterWorkStatus1_B1                                    g_dataBuffer_WH_Display[1488+48+6]&bit7
#define AC4CT_SHeaterWorkStatus2_B1                                    g_dataBuffer_WH_Display[1488+48+6]&bit8
#define AC4CT_Minor_fault_B1                                    g_dataBuffer_WH_Display[1488+48+9]&bit5
#define AC4CT_Medium_fault_B1                                    g_dataBuffer_WH_Display[1488+48+9]&bit6
#define AC4CT_Serious_fault_B1                                    g_dataBuffer_WH_Display[1488+48+9]&bit7


#define AC5CT_LifeSgn_U16                                 highbyteLowbyteExchange(g_dataBuffer_WH_Display[1504+48])
#define AC5CT_SoftwareVersionL_U8                               g_dataBuffer_WH_Display[1552+10]%256
#define AC5CT_SoftwareVersionH_U8                               g_dataBuffer_WH_Display[1552+10]/256

#define AC5CT_RTemp_I16                                 (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[1504+48+1])
#define AC5CT_STemp_I16                                 (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[1504+48+2])
#define AC5CT_FTemp_I16                                 (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[1504+48+3])
#define AC5CT_OFF_B1                                    g_dataBuffer_WH_Display[1504+48+4]&bit0
#define AC5CT_Test_B1                                    g_dataBuffer_WH_Display[1504+48+4]&bit1
#define AC5CT_CentralizedControl_B1                      g_dataBuffer_WH_Display[1504+48+4]&bit2
#define AC5CT_Auto_B1                                    g_dataBuffer_WH_Display[1504+48+4]&bit4
#define AC5CT_LocalControl_B1                           g_dataBuffer_WH_Display[1504+48+4]&bit5
#define AC5CT_HalfCooling_B1                                    g_dataBuffer_WH_Display[1504+48+4]&bit6
#define AC5CT_FullCooling_B1                                    g_dataBuffer_WH_Display[1504+48+4]&bit7
#define AC5CT_PreCooling_B1                                    g_dataBuffer_WH_Display[1504+48+4]&bit8
#define AC5CT_HalfHeating_B1                                    g_dataBuffer_WH_Display[1504+48+4]&bit9
#define AC5CT_FullHeating_B1                                    g_dataBuffer_WH_Display[1504+48+4]&bit10
#define AC5CT_FireMode_B1                                    g_dataBuffer_WH_Display[1504+48+4]&bit12
#define AC5CT_Ventilation_B1                            g_dataBuffer_WH_Display[1504+48+4] &bit3
#define AC5CT_EVentilation_B1                           g_dataBuffer_WH_Display[1504+48+4] &bit11
#define AC5CT_Reducemode_B1                             g_dataBuffer_WH_Display[1504+48+4] &bit13
#define AC5CT_EFanWorkStatus11_B1                                    g_dataBuffer_WH_Display[1504+48+5]&bit11
#define AC5CT_CFanWorkStatus11_B1                                    g_dataBuffer_WH_Display[1504+48+5]&bit12
#define AC5CT_CompWorkStatus11_B1                                    g_dataBuffer_WH_Display[1504+48+5]&bit13
#define AC5CT_EFanWorkStatus12_B1                                    g_dataBuffer_WH_Display[1504+48+5]&bit14
#define AC5CT_CFanWorkStatus12_B1                                    g_dataBuffer_WH_Display[1504+48+5]&bit15
#define AC5CT_CompWorkStatus12_B1                                    g_dataBuffer_WH_Display[1504+48+6]&bit0
#define AC5CT_EFanWorkStatus21_B1                                    g_dataBuffer_WH_Display[1504+48+6]&bit1
#define AC5CT_CFanWorkStatus21_B1                                    g_dataBuffer_WH_Display[1504+48+6]&bit2
#define AC5CT_CompWorkStatus21_B1                                    g_dataBuffer_WH_Display[1504+48+6]&bit3
#define AC5CT_EFanWorkStatus22_B1                                    g_dataBuffer_WH_Display[1504+48+6]&bit4
#define AC5CT_CFanWorkStatus22_B1                                    g_dataBuffer_WH_Display[1504+48+6]&bit5
#define AC5CT_CompWorkStatus22_B1                                    g_dataBuffer_WH_Display[1504+48+6]&bit6
#define AC5CT_SHeaterWorkStatus1_B1                                    g_dataBuffer_WH_Display[1504+48+6]&bit7
#define AC5CT_SHeaterWorkStatus2_B1                                    g_dataBuffer_WH_Display[1504+48+6]&bit8
#define AC5CT_Minor_fault_B1                                    g_dataBuffer_WH_Display[1504+48+9]&bit5
#define AC5CT_Medium_fault_B1                                    g_dataBuffer_WH_Display[1504+48+9]&bit6
#define AC5CT_Serious_fault_B1                                    g_dataBuffer_WH_Display[1504+48+9]&bit7


#define AC6CT_LifeSgn_U16                                 highbyteLowbyteExchange(g_dataBuffer_WH_Display[1520+48])
#define AC6CT_SoftwareVersionL_U8                               g_dataBuffer_WH_Display[1568+10]%256
#define AC6CT_SoftwareVersionH_U8                               g_dataBuffer_WH_Display[1568+10]/256

#define AC6CT_RTemp_I16                                 highbyteLowbyteExchange(g_dataBuffer_WH_Display[1520+48+1])
#define AC6CT_STemp_I16                                 highbyteLowbyteExchange(g_dataBuffer_WH_Display[1520+48+2])
#define AC6CT_FTemp_I16                                 highbyteLowbyteExchange(g_dataBuffer_WH_Display[1520+48+3])
#define AC6CT_OFF_B1                                    g_dataBuffer_WH_Display[1520+48+4]&bit0
#define AC6CT_Test_B1                                    g_dataBuffer_WH_Display[1520+48+4]&bit1
#define AC6CT_CentralizedControl_B1                      g_dataBuffer_WH_Display[1520+48+4]&bit2
#define AC6CT_Auto_B1                                    g_dataBuffer_WH_Display[1520+48+4]&bit4
#define AC6CT_LocalControl_B1                           g_dataBuffer_WH_Display[1520+48+4]&bit5
#define AC6CT_HalfCooling_B1                                    g_dataBuffer_WH_Display[1520+48+4]&bit6
#define AC6CT_FullCooling_B1                                    g_dataBuffer_WH_Display[1520+48+4]&bit7
#define AC6CT_PreCooling_B1                                    g_dataBuffer_WH_Display[1520+48+4]&bit8
#define AC6CT_HalfHeating_B1                                    g_dataBuffer_WH_Display[1520+48+4]&bit9
#define AC6CT_FullHeating_B1                                    g_dataBuffer_WH_Display[1520+48+4]&bit10
#define AC6CT_FireMode_B1                                    g_dataBuffer_WH_Display[1520+48+4]&bit12
#define AC6CT_Ventilation_B1                            g_dataBuffer_WH_Display[1520+48+4] &bit3
#define AC6CT_EVentilation_B1                           g_dataBuffer_WH_Display[1520+48+4] &bit11
#define AC6CT_Reducemode_B1                             g_dataBuffer_WH_Display[1520+48+4] &bit13
#define AC6CT_EFanWorkStatus11_B1                                    g_dataBuffer_WH_Display[1520+48+5]&bit11
#define AC6CT_CFanWorkStatus11_B1                                    g_dataBuffer_WH_Display[1520+48+5]&bit12
#define AC6CT_CompWorkStatus11_B1                                    g_dataBuffer_WH_Display[1520+48+5]&bit13
#define AC6CT_EFanWorkStatus12_B1                                    g_dataBuffer_WH_Display[1520+48+5]&bit14
#define AC6CT_CFanWorkStatus12_B1                                    g_dataBuffer_WH_Display[1520+48+5]&bit15
#define AC6CT_CompWorkStatus12_B1                                    g_dataBuffer_WH_Display[1520+48+6]&bit0
#define AC6CT_EFanWorkStatus21_B1                                    g_dataBuffer_WH_Display[1520+48+6]&bit1
#define AC6CT_CFanWorkStatus21_B1                                    g_dataBuffer_WH_Display[1520+48+6]&bit2
#define AC6CT_CompWorkStatus21_B1                                    g_dataBuffer_WH_Display[1520+48+6]&bit3
#define AC6CT_EFanWorkStatus22_B1                                    g_dataBuffer_WH_Display[1520+48+6]&bit4
#define AC6CT_CFanWorkStatus22_B1                                    g_dataBuffer_WH_Display[1520+48+6]&bit5
#define AC6CT_CompWorkStatus22_B1                                    g_dataBuffer_WH_Display[1520+48+6]&bit6
#define AC6CT_SHeaterWorkStatus1_B1                                    g_dataBuffer_WH_Display[1520+48+6]&bit7
#define AC6CT_SHeaterWorkStatus2_B1                                    g_dataBuffer_WH_Display[1520+48+6]&bit8
#define AC6CT_Minor_fault_B1                                    g_dataBuffer_WH_Display[1520+48+9]&bit5
#define AC6CT_Medium_fault_B1                                    g_dataBuffer_WH_Display[1520+48+9]&bit6
#define AC6CT_Serious_fault_B1                                    g_dataBuffer_WH_Display[1520+48+9]&bit7

////0x051i/53i   BCU-CCU M/S  get BCU1,3 as master data
#define BR1CT_LifeSgn_I16                                 (int16_t)highbyteLowbyteExchange(g_dataBuffer_MVB[464])
#define BR1CT_GWSWVerMajor_U8                                 g_dataBuffer_MVB[528]%256
#define BR1CT_GWSWVerMinor_U8                                 g_dataBuffer_MVB[528]/256
#define BR2CT_LifeSgn_I16                                 (int16_t)highbyteLowbyteExchange(g_dataBuffer_MVB[560])
#define BR2CT_GWSWVerMajor_U8                                 g_dataBuffer_MVB[624]%256
#define BR2CT_GWSWVerMinor_U8                                 g_dataBuffer_MVB[624]/256
#define BR3CT_LifeSgn_I16                                 (int16_t)highbyteLowbyteExchange(g_dataBuffer_MVB[656])
#define BR3CT_GWSWVerMajor_U8                                 g_dataBuffer_MVB[720]%256
#define BR3CT_GWSWVerMinor_U8                                 g_dataBuffer_MVB[720]/256
#define BR4CT_LifeSgn_I16                                 (int16_t)highbyteLowbyteExchange(g_dataBuffer_MVB[752])
#define BR4CT_GWSWVerMajor_U8                                 g_dataBuffer_MVB[816]%256
#define BR4CT_GWSWVerMinor_U8                                 g_dataBuffer_MVB[816]/256

#define BR1CT_DiagOKTc12_Bogie1_B1                               g_dataBuffer_WH_Display[368+144+13] & bit9
#define BR1CT_DiagOKTc12_Bogie2_B1                               g_dataBuffer_WH_Display[368+144+13] & bit10
#define BR1CT_DiagOKMp12_Bogie1_B1                               g_dataBuffer_WH_Display[368+144+13] & bit11
#define BR1CT_DiagOKMp12_Bogie2_B1                               g_dataBuffer_WH_Display[368+144+13] & bit12
#define BR1CT_DiagOKM12_Bogie1_B1                               g_dataBuffer_WH_Display[368+144+13] & bit13
#define BR1CT_DiagOKM12_Bogie2_B1                               g_dataBuffer_WH_Display[368+144+13] & bit14

#define BR2CT_DiagOKTc12_Bogie1_B1                               g_dataBuffer_WH_Display[528+176+13] & bit9
#define BR2CT_DiagOKTc12_Bogie2_B1                               g_dataBuffer_WH_Display[528+176+13] & bit10
#define BR2CT_DiagOKMp12_Bogie1_B1                               g_dataBuffer_WH_Display[528+176+13] & bit11
#define BR2CT_DiagOKMp12_Bogie2_B1                               g_dataBuffer_WH_Display[528+176+13] & bit12
#define BR2CT_DiagOKM12_Bogie1_B1                               g_dataBuffer_WH_Display[528+176+13] & bit13
#define BR2CT_DiagOKM12_Bogie2_B1                               g_dataBuffer_WH_Display[528+176+13] & bit14


#define BR1CT_PBStateTc1_B1                                 g_dataBuffer_WH_Display[368+144+10] & bit0
#define BR1CT_PBStateMp1_B1                                 g_dataBuffer_WH_Display[368+144+10] & bit1
#define BR1CT_PBStateM1_B1                                 g_dataBuffer_WH_Display[368+144+10] & bit2
#define BR2CT_PBStateTc2_B1                                 g_dataBuffer_WH_Display[528+176+10] & bit0
#define BR2CT_PBStateMp2_B1                                 g_dataBuffer_WH_Display[528+176+10] & bit1
#define BR2CT_PBStateM2_B1                                 g_dataBuffer_WH_Display[528+176+10] & bit2

#define BR1CT_IsolTc1Bog1_B1                            (g_dataBuffer_WH_Display[368+144+12] & bit11)&&BR1CT_DiagOKTc12_Bogie1_B1
#define BR1CT_IsolTc1Bog2_B1                            (g_dataBuffer_WH_Display[368+144+12] & bit12)&&BR1CT_DiagOKTc12_Bogie2_B1
#define BR1CT_IsolMp1Bog1_B1                            (g_dataBuffer_WH_Display[368+144+12] & bit13)&&BR1CT_DiagOKMp12_Bogie1_B1
#define BR1CT_IsolMp1Bog2_B1                            (g_dataBuffer_WH_Display[368+144+12] & bit14)&&BR1CT_DiagOKMp12_Bogie2_B1
#define BR1CT_IsolM1Bog1_B1                            (g_dataBuffer_WH_Display[368+144+12] & bit15)&&BR1CT_DiagOKM12_Bogie1_B1
#define BR1CT_IsolM1Bog2_B1                            (g_dataBuffer_WH_Display[368+144+13] & bit0)&&BR1CT_DiagOKM12_Bogie2_B1

#define BR2CT_IsolTc2Bog1_B1                            (g_dataBuffer_WH_Display[528+176+12] & bit11)&&BR2CT_DiagOKTc12_Bogie1_B1
#define BR2CT_IsolTc2Bog2_B1                            (g_dataBuffer_WH_Display[528+176+12] & bit12)&&BR2CT_DiagOKTc12_Bogie2_B1
#define BR2CT_IsolMp2Bog1_B1                            (g_dataBuffer_WH_Display[528+176+12] & bit13)&&BR2CT_DiagOKMp12_Bogie1_B1
#define BR2CT_IsolMp2Bog2_B1                            (g_dataBuffer_WH_Display[528+176+12] & bit14)&&BR2CT_DiagOKMp12_Bogie2_B1
#define BR2CT_IsolM2Bog1_B1                            (g_dataBuffer_WH_Display[528+176+12] & bit15)&&BR2CT_DiagOKM12_Bogie1_B1
#define BR2CT_IsolM2Bog2_B1                            (g_dataBuffer_WH_Display[528+176+13] & bit0)&&BR2CT_DiagOKM12_Bogie2_B1

#define BR1CT_HBAlreadyAppl_B1                          g_dataBuffer_WH_Display[368+144+13] & bit7
#define BR2CT_HBAlreadyAppl_B1                          g_dataBuffer_WH_Display[528+176+13] & bit7

#define BR1CT_WSPTc12_B1                                g_dataBuffer_WH_Display[368+144+13] & bit3
#define BR1CT_WSPMp12_B1                                g_dataBuffer_WH_Display[368+144+13] & bit4
#define BR1CT_WSPM12_B1                                g_dataBuffer_WH_Display[368+144+13] & bit5

#define BR2CT_WSPTc12_B1                                g_dataBuffer_WH_Display[528+176+13] & bit3
#define BR2CT_WSPMp12_B1                                g_dataBuffer_WH_Display[528+176+13] & bit4
#define BR2CT_WSPM12_B1                                g_dataBuffer_WH_Display[528+176+13] & bit5

#define BR1CT_BrakeAppliedTC1Bog1_B1                        ((g_dataBuffer_WH_Display[384+144+5] & bit2)&&BR1CT_DiagOKTc12_Bogie1_B1)
#define BR1CT_BrakeAppliedMP1Bog1_B1                        ((g_dataBuffer_WH_Display[384+144+5] & bit4)&&BR1CT_DiagOKMp12_Bogie1_B1)
#define BR1CT_BrakeAppliedM1Bog1_B1                        ((g_dataBuffer_WH_Display[384+144+5] & bit6)&&BR1CT_DiagOKM12_Bogie1_B1)
#define BR1CT_BrakeAppliedTC1Bog2_B1                        ((g_dataBuffer_WH_Display[384+144+5] & bit3)&&BR1CT_DiagOKTc12_Bogie2_B1)
#define BR1CT_BrakeAppliedMP1Bog2_B1                        ((g_dataBuffer_WH_Display[384+144+5] & bit5)&&BR1CT_DiagOKMp12_Bogie2_B1)
#define BR1CT_BrakeAppliedM1Bog2_B1                        ((g_dataBuffer_WH_Display[384+144+5] & bit7)&&BR1CT_DiagOKM12_Bogie2_B1)

#define BR2CT_BrakeAppliedTC2Bog1_B1                        ((g_dataBuffer_WH_Display[544+176+5] & bit2)&&BR2CT_DiagOKTc12_Bogie1_B1)
#define BR2CT_BrakeAppliedMP2Bog1_B1                        ((g_dataBuffer_WH_Display[544+176+5] & bit4)&&BR2CT_DiagOKMp12_Bogie1_B1)
#define BR2CT_BrakeAppliedM2Bog1_B1                        ((g_dataBuffer_WH_Display[544+176+5] & bit6)&&BR2CT_DiagOKM12_Bogie1_B1)
#define BR2CT_BrakeAppliedTC2Bog2_B1                        ((g_dataBuffer_WH_Display[544+176+5] & bit3)&&BR2CT_DiagOKTc12_Bogie2_B1)
#define BR2CT_BrakeAppliedMP2Bog2_B1                        ((g_dataBuffer_WH_Display[544+176+5] & bit5)&&BR2CT_DiagOKMp12_Bogie2_B1)
#define BR2CT_BrakeAppliedM2Bog2_B1                        ((g_dataBuffer_WH_Display[544+176+5] & bit7)&&BR2CT_DiagOKM12_Bogie2_B1)

#define BR1CT_SelfTest24h_B1                               g_dataBuffer_WH_Display[384+144+5] & bit9
#define BR1CT_SelfTest26h_B1                               g_dataBuffer_WH_Display[384+144+5] & bit10
#define BR2CT_SelfTest24h_B1                               g_dataBuffer_WH_Display[544+176+5] & bit9
#define BR2CT_SelfTest26h_B1                               g_dataBuffer_WH_Display[544+176+5] & bit10

#define BR1CT_BCPTC1Bog1_U8                        ((BR1CT_DiagOKTc12_Bogie1_B1)?(g_dataBuffer_WH_Display[368+144]%256):0)
#define BR1CT_BCPTC1Bog2_U8                         ((BR1CT_DiagOKTc12_Bogie2_B1)?(g_dataBuffer_WH_Display[368+144]/256):0)
#define BR1CT_BCPMP1Bog1_U8                       ((BR1CT_DiagOKMp12_Bogie1_B1)?(g_dataBuffer_WH_Display[368+144+1]%256):0)
#define BR1CT_BCPMP1Bog2_U8                         ((BR1CT_DiagOKMp12_Bogie2_B1)?(g_dataBuffer_WH_Display[368+144+1]/256):0)
#define BR1CT_BCPM1Bog1_U8                         ((BR1CT_DiagOKM12_Bogie1_B1)?(g_dataBuffer_WH_Display[368+144+2]%256):0)
#define BR1CT_BCPM1Bog2_U8                        ((BR1CT_DiagOKM12_Bogie2_B1)?( g_dataBuffer_WH_Display[368+144+2]/256):0)

#define BR2CT_BCPTC2Bog1_U8                        ((BR2CT_DiagOKTc12_Bogie1_B1)?( g_dataBuffer_WH_Display[528+176]%256):0)
#define BR2CT_BCPTC2Bog2_U8                        ((BR2CT_DiagOKTc12_Bogie2_B1)?( g_dataBuffer_WH_Display[528+176]/256):0)
#define BR2CT_BCPMP2Bog1_U8                        ((BR2CT_DiagOKMp12_Bogie1_B1)?( g_dataBuffer_WH_Display[528+176+1]%256):0)
#define BR2CT_BCPMP2Bog2_U8                        ((BR2CT_DiagOKMp12_Bogie2_B1)?( g_dataBuffer_WH_Display[528+176+1]/256):0)
#define BR2CT_BCPM2Bog1_U8                        ((BR2CT_DiagOKM12_Bogie1_B1)?( g_dataBuffer_WH_Display[528+176+2]%256):0)
#define BR2CT_BCPM2Bog2_U8                        ((BR2CT_DiagOKM12_Bogie2_B1)?( g_dataBuffer_WH_Display[528+176+2]/256):0)

#define BR1CT_MassValidTC12Bog1_B1                            g_dataBuffer_WH_Display[368+144+8] & bit8
#define BR1CT_MassValidTC12Bog2_B1                            g_dataBuffer_WH_Display[368+144+8] & bit9
#define BR1CT_MassValidMP12Bog1_B1                            g_dataBuffer_WH_Display[368+144+8] & bit10
#define BR1CT_MassValidMP12Bog2_B1                            g_dataBuffer_WH_Display[368+144+8] & bit11
#define BR1CT_MassValidM12Bog1_B1                            g_dataBuffer_WH_Display[368+144+8] & bit12
#define BR1CT_MassValidM12Bog2_B1                            g_dataBuffer_WH_Display[368+144+8] & bit13

#define BR2CT_MassValidTC12Bog1_B1                            g_dataBuffer_WH_Display[528+176+8] & bit8
#define BR2CT_MassValidTC12Bog2_B1                            g_dataBuffer_WH_Display[528+176+8] & bit9
#define BR2CT_MassValidMP12Bog1_B1                            g_dataBuffer_WH_Display[528+176+8] & bit10
#define BR2CT_MassValidMP12Bog2_B1                            g_dataBuffer_WH_Display[528+176+8] & bit11
#define BR2CT_MassValidM12Bog1_B1                            g_dataBuffer_WH_Display[528+176+8] & bit12
#define BR2CT_MassValidM12Bog2_B1                            g_dataBuffer_WH_Display[528+176+8] & bit13

#define BR1CT_MassTc12Bog1_I16                         ((BR1CT_MassValidTC12Bog1_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[465]):0)
#define BR1CT_MassTc12Bog2_I16                         ((BR1CT_MassValidTC12Bog2_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[466]):0)
#define BR1CT_MassMp12Bog1_I16                         ((BR1CT_MassValidMP12Bog1_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[467]):0)
#define BR1CT_MassMp12Bog2_I16                         ((BR1CT_MassValidMP12Bog2_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[468]):0)
#define BR1CT_MassM12Bog1_I16                         ((BR1CT_MassValidM12Bog1_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[469]):0)
#define BR1CT_MassM12Bog2_I16                         ((BR1CT_MassValidM12Bog2_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[470]):0)

#define BR2CT_MassTc12Bog1_I16                        ((BR2CT_MassValidTC12Bog1_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[561+96]):0)
#define BR2CT_MassTc12Bog2_I16                        ((BR2CT_MassValidTC12Bog2_B1)?(int16_t) highbyteLowbyteExchange(g_dataBuffer_WH_Display[562+96]):0)
#define BR2CT_MassMp12Bog1_I16                        ((BR2CT_MassValidMP12Bog1_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[563+96]):0)
#define BR2CT_MassMp12Bog2_I16                        ((BR2CT_MassValidMP12Bog2_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[564+96]):0)
#define BR2CT_MassM12Bog1_I16                         ((BR2CT_MassValidM12Bog1_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[565+96]):0)
#define BR2CT_MassM12Bog2_I16                         ((BR2CT_MassValidM12Bog2_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[566+96]):0)


#define BR1CT_ASPTCBog1_U8                        ((BR1CT_DiagOKTc12_Bogie1_B1)?(g_dataBuffer_WH_Display[368+144+4]%256):0)
#define BR1CT_ASPTCBog2_U8                        ((BR1CT_DiagOKTc12_Bogie2_B1)?(g_dataBuffer_WH_Display[368+144+4]/256):0)
#define BR1CT_ASPMPBog1_U8                        ((BR1CT_DiagOKMp12_Bogie1_B1)?(g_dataBuffer_WH_Display[368+144+5]%256):0)
#define BR1CT_ASPMPBog2_U8                        ((BR1CT_DiagOKMp12_Bogie2_B1)?(g_dataBuffer_WH_Display[368+144+5]/256):0)
#define BR1CT_ASPMBog1_U8                        ((BR1CT_DiagOKM12_Bogie1_B1)?(g_dataBuffer_WH_Display[368+144+6]%256):0)
#define BR1CT_ASPMBog2_U8                        ((BR1CT_DiagOKM12_Bogie2_B1)?(g_dataBuffer_WH_Display[368+144+6]/256):0)

#define BR2CT_ASPTCBog1_U8                        ((BR2CT_DiagOKTc12_Bogie1_B1)?(g_dataBuffer_WH_Display[528+176+4]%256):0)
#define BR2CT_ASPTCBog2_U8                        ((BR2CT_DiagOKTc12_Bogie2_B1)?(g_dataBuffer_WH_Display[528+176+4]/256):0)
#define BR2CT_ASPMPBog1_U8                        ((BR2CT_DiagOKMp12_Bogie1_B1)?(g_dataBuffer_WH_Display[528+176+5]%256):0)
#define BR2CT_ASPMPBog2_U8                        ((BR2CT_DiagOKMp12_Bogie2_B1)?(g_dataBuffer_WH_Display[528+176+5]/256):0)
#define BR2CT_ASPMBog1_U8                        ((BR2CT_DiagOKM12_Bogie1_B1)?(g_dataBuffer_WH_Display[528+176+6]%256):0)
#define BR2CT_ASPMBog2_U8                        ((BR2CT_DiagOKM12_Bogie2_B1)?(g_dataBuffer_WH_Display[528+176+6]/256):0)

#define BR1CT_EDLoadM12_I16                        (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[464+10])
#define BR1CT_EDLoadMp12_I16                        (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[464+11])
#define BR2CT_EDLoadM12_I16                         (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[656+10])
#define BR2CT_EDLoadMp12_I16                        (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[656+11])
#define BR1CT_SBForceTc12_I16                        (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[464+12])
#define BR1CT_SBForceMp12_I16                        (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[464+13])
#define BR1CT_SBForceM12_I16                        (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[464+14])
#define BR2CT_SBForceTc12_I16                       (int16_t)highbyteLowbyteExchange( g_dataBuffer_WH_Display[656+12])
#define BR2CT_SBForceMp12_I16                       (int16_t)highbyteLowbyteExchange( g_dataBuffer_WH_Display[656+13])
#define BR2CT_SBForceM12_I16                        (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[656+14])
#define BR1CT_PWM_I16                              (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[352+144+12])
#define BR2CT_PWM_I16                               (int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[512+176+12])
#define BR1CT_MRP_U8                               g_dataBuffer_WH_Display[352+144+13]%256
#define BR2CT_MRP_U8                               g_dataBuffer_WH_Display[512+176+13]%256

#define BR1CT_SpeedValTCAx1_B1                          g_dataBuffer_WH_Display[368+144+10] & bit4
#define BR1CT_SpeedValTCAx2_B1                          g_dataBuffer_WH_Display[368+144+10] & bit5
#define BR1CT_SpeedValTCAx3_B1                          g_dataBuffer_WH_Display[368+144+10] & bit6
#define BR1CT_SpeedValTCAx4_B1                          g_dataBuffer_WH_Display[368+144+10] & bit7
#define BR1CT_SpeedValMPAx1_B1                          g_dataBuffer_WH_Display[368+144+10] & bit8
#define BR1CT_SpeedValMPAx2_B1                          g_dataBuffer_WH_Display[368+144+10] & bit9
#define BR1CT_SpeedValMPAx3_B1                          g_dataBuffer_WH_Display[368+144+10] & bit10
#define BR1CT_SpeedValMPAx4_B1                          g_dataBuffer_WH_Display[368+144+10] & bit11
#define BR1CT_SpeedValMAx1_B1                          g_dataBuffer_WH_Display[368+144+10] & bit12
#define BR1CT_SpeedValMAx2_B1                          g_dataBuffer_WH_Display[368+144+10] & bit13
#define BR1CT_SpeedValMAx3_B1                          g_dataBuffer_WH_Display[368+144+10] & bit14
#define BR1CT_SpeedValMAx4_B1                          g_dataBuffer_WH_Display[368+144+10] & bit15

#define BR2CT_SpeedValTCAx1_B1                          g_dataBuffer_WH_Display[528+176+10] & bit4
#define BR2CT_SpeedValTCAx2_B1                          g_dataBuffer_WH_Display[528+176+10] & bit5
#define BR2CT_SpeedValTCAx3_B1                          g_dataBuffer_WH_Display[528+176+10] & bit6
#define BR2CT_SpeedValTCAx4_B1                          g_dataBuffer_WH_Display[528+176+10] & bit7
#define BR2CT_SpeedValMPAx1_B1                          g_dataBuffer_WH_Display[528+176+10] & bit8
#define BR2CT_SpeedValMPAx2_B1                          g_dataBuffer_WH_Display[528+176+10] & bit9
#define BR2CT_SpeedValMPAx3_B1                          g_dataBuffer_WH_Display[528+176+10] & bit10
#define BR2CT_SpeedValMPAx4_B1                          g_dataBuffer_WH_Display[528+176+10] & bit11
#define BR2CT_SpeedValMAx1_B1                          g_dataBuffer_WH_Display[528+176+10] & bit12
#define BR2CT_SpeedValMAx2_B1                          g_dataBuffer_WH_Display[528+176+10] & bit13
#define BR2CT_SpeedValMAx3_B1                          g_dataBuffer_WH_Display[528+176+10] & bit14
#define BR2CT_SpeedValMAx4_B1                          g_dataBuffer_WH_Display[528+176+10] & bit15


#define BR1CT_SpeedTCAx1_I16                       ((BR1CT_SpeedValTCAx1_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[336+144]):0)
#define BR1CT_SpeedTCAx2_I16                       ((BR1CT_SpeedValTCAx2_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[336+144+1]):0)
#define BR1CT_SpeedTCAx3_I16                       ((BR1CT_SpeedValTCAx3_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[336+144+2]):0)
#define BR1CT_SpeedTCAx4_I16                       ((BR1CT_SpeedValTCAx4_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[336+144+3]):0)
#define BR1CT_SpeedMPAx1_I16                       ((BR1CT_SpeedValMPAx1_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[336+144+4]):0)
#define BR1CT_SpeedMPAx2_I16                       ((BR1CT_SpeedValMPAx2_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[336+144+5]):0)
#define BR1CT_SpeedMPAx3_I16                      ((BR1CT_SpeedValMPAx3_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[336+144+6]):0)
#define BR1CT_SpeedMPAx4_I16                      ((BR1CT_SpeedValMPAx4_B1)?(int16_t) highbyteLowbyteExchange(g_dataBuffer_WH_Display[336+144+7]):0)
#define BR1CT_SpeedMAx1_I16                       ((BR1CT_SpeedValMAx1_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[336+144+8]):0)
#define BR1CT_SpeedMAx2_I16                       ((BR1CT_SpeedValMAx2_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[336+144+9]):0)
#define BR1CT_SpeedMAx3_I16                       ((BR1CT_SpeedValMAx3_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[336+144+10]):0)
#define BR1CT_SpeedMAx4_I16                       ((BR1CT_SpeedValMAx4_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[336+144+11]):0)
#define BR2CT_SpeedTCAx1_I16                       ((BR2CT_SpeedValTCAx1_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[496+176]):0)
#define BR2CT_SpeedTCAx2_I16                       ((BR2CT_SpeedValTCAx2_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[496+176+1]):0)
#define BR2CT_SpeedTCAx3_I16                       ((BR2CT_SpeedValTCAx3_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[496+176+2]):0)
#define BR2CT_SpeedTCAx4_I16                       ((BR2CT_SpeedValTCAx4_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[496+176+3]):0)
#define BR2CT_SpeedMPAx1_I16                       ((BR2CT_SpeedValMPAx1_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[496+176+4]):0)
#define BR2CT_SpeedMPAx2_I16                       ((BR2CT_SpeedValMPAx2_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[496+176+5]):0)
#define BR2CT_SpeedMPAx3_I16                       ((BR2CT_SpeedValMPAx3_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[496+176+6]):0)
#define BR2CT_SpeedMPAx4_I16                       ((BR2CT_SpeedValMPAx4_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[496+176+7]):0)
#define BR2CT_SpeedMAx1_I16                       ((BR2CT_SpeedValMAx1_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[496+176+8]):0)
#define BR2CT_SpeedMAx2_I16                       ((BR2CT_SpeedValMAx2_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[496+176+9]):0)
#define BR2CT_SpeedMAx3_I16                       ((BR2CT_SpeedValMAx3_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[496+176+10]):0)
#define BR2CT_SpeedMAx4_I16                       ((BR2CT_SpeedValMAx4_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[496+176+11]):0)

#define BR1CT_CanApplSBTCBog1_B1                          g_dataBuffer_WH_Display[368+144+14] & bit2
#define BR1CT_CanApplSBTCBog2_B1                          g_dataBuffer_WH_Display[368+144+14] & bit3
#define BR1CT_CanApplSBMPBog1_B1                          g_dataBuffer_WH_Display[368+144+14] & bit4
#define BR1CT_CanApplSBMPBog2_B1                          g_dataBuffer_WH_Display[368+144+14] & bit5
#define BR1CT_CanApplSBMBog1_B1                          g_dataBuffer_WH_Display[368+144+14] & bit6
#define BR1CT_CanApplSBMBog2_B1                          g_dataBuffer_WH_Display[368+144+14] & bit7
#define BR2CT_CanApplSBTCBog1_B1                          g_dataBuffer_WH_Display[528+176+14] & bit2
#define BR2CT_CanApplSBTCBog2_B1                          g_dataBuffer_WH_Display[528+176+14] & bit3
#define BR2CT_CanApplSBMPBog1_B1                          g_dataBuffer_WH_Display[528+176+14] & bit4
#define BR2CT_CanApplSBMPBog2_B1                          g_dataBuffer_WH_Display[528+176+14] & bit5
#define BR2CT_CanApplSBMBog1_B1                          g_dataBuffer_WH_Display[528+176+14] & bit6
#define BR2CT_CanApplSBMBog2_B1                          g_dataBuffer_WH_Display[528+176+14] & bit7


#define BR1CT_EPForceTCBog1_I16                            ((BR1CT_CanApplSBTCBog1_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[352+144+1]):0)
#define BR1CT_EPForceTCBog2_I16                            ((BR1CT_CanApplSBTCBog2_B1)?(int16_t)highbyteLowbyteExchange( g_dataBuffer_WH_Display[352+144+2]):0)
#define BR1CT_EPForceMPBog1_I16                            ((BR1CT_CanApplSBMPBog1_B1)?(int16_t)highbyteLowbyteExchange( g_dataBuffer_WH_Display[352+144+3]):0)
#define BR1CT_EPForceMPBog2_I16                            ((BR1CT_CanApplSBMPBog2_B1)?(int16_t)highbyteLowbyteExchange( g_dataBuffer_WH_Display[352+144+4]):0)
#define BR1CT_EPForceMBog1_I16                             ((BR1CT_CanApplSBMBog1_B1)?(int16_t)highbyteLowbyteExchange( g_dataBuffer_WH_Display[352+144+5]):0)
#define BR1CT_EPForceMBog2_I16                             ((BR1CT_CanApplSBMBog2_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[352+144+6]):0)
#define BR2CT_EPForceTCBog1_I16                            ((BR2CT_CanApplSBTCBog1_B1)?(int16_t)highbyteLowbyteExchange( g_dataBuffer_WH_Display[512+176+1]):0)
#define BR2CT_EPForceTCBog2_I16                            ((BR2CT_CanApplSBTCBog2_B1)?(int16_t)highbyteLowbyteExchange( g_dataBuffer_WH_Display[512+176+2]):0)
#define BR2CT_EPForceMPBog1_I16                            ((BR2CT_CanApplSBMPBog1_B1)?(int16_t)highbyteLowbyteExchange( g_dataBuffer_WH_Display[512+176+3]):0)
#define BR2CT_EPForceMPBog2_I16                            ((BR2CT_CanApplSBMPBog2_B1)?(int16_t)highbyteLowbyteExchange( g_dataBuffer_WH_Display[512+176+4]):0)
#define BR2CT_EPForceMBog1_I16                             ((BR2CT_CanApplSBMBog1_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[512+176+5]):0)
#define BR2CT_EPForceMBog2_I16                             ((BR2CT_CanApplSBMBog2_B1)?(int16_t)highbyteLowbyteExchange(g_dataBuffer_WH_Display[512+176+6]):0)

#define BR1CT_RuningSelfTest_B1                             g_dataBuffer_WH_Display[352+144+14]&bit13
#define BR1CT_SelfTestOK_B1                                 g_dataBuffer_WH_Display[352+144+14]&bit14
#define BR1CT_SelfTestReady_B1                             g_dataBuffer_WH_Display[352+144+14]&bit15
#define BR1CT_SelfTestFailed_B1                             g_dataBuffer_WH_Display[352+144+15]&bit0
#define BR1CT_LastSelfTestAborted_B1                           g_dataBuffer_WH_Display[352+144+15]&bit1

#define BR2CT_RuningSelfTest_B1                             g_dataBuffer_WH_Display[512+176+14]&bit13
#define BR2CT_SelfTestOK_B1                                 g_dataBuffer_WH_Display[512+176+14]&bit14
#define BR2CT_SelfTestReady_B1                             g_dataBuffer_WH_Display[512+176+14]&bit15
#define BR2CT_SelfTestFailed_B1                             g_dataBuffer_WH_Display[512+176+15]&bit0
#define BR2CT_LastSelfTestAborted_B1                           g_dataBuffer_WH_Display[512+176+15]&bit1

#define   BR1CT_SeriousFaultTCBog1_B1                         g_dataBuffer_WH_Display[528+5]&bit8
#define   BR1CT_SlightFaultTCBog1_B1                         g_dataBuffer_WH_Display[528+5]&bit10
#define   BR1CT_SeriousFaultTCBog2_B1                         g_dataBuffer_WH_Display[528+5]&bit11
#define   BR1CT_SlightFaultTCBog2_B1                         g_dataBuffer_WH_Display[528+5]&bit13
#define   BR1CT_SeriousFaultMpBog1_B1                         g_dataBuffer_WH_Display[528+5]&bit14
#define   BR1CT_SlightFaultMpBog1_B1                         g_dataBuffer_WH_Display[528+6]&bit0
#define   BR1CT_SeriousFaultMpBog2_B1                         g_dataBuffer_WH_Display[528+6]&bit1
#define   BR1CT_SlightFaultMpBog2_B1                         g_dataBuffer_WH_Display[528+6]&bit3
#define   BR1CT_SeriousFaultMBog1_B1                         g_dataBuffer_WH_Display[528+6]&bit4
#define   BR1CT_SlightFaultMBog1_B1                         g_dataBuffer_WH_Display[528+6]&bit6
#define   BR1CT_SeriousFaultMBog2_B1                         g_dataBuffer_WH_Display[528+6]&bit7
#define   BR1CT_SlightFaultMBog2_B1                         g_dataBuffer_WH_Display[528+6]&bit9

#define   BR2CT_SeriousFaultTCBog1_B1                         g_dataBuffer_WH_Display[528+5+192]&bit8
#define   BR2CT_SlightFaultTCBog1_B1                         g_dataBuffer_WH_Display[528+5+192]&bit10
#define   BR2CT_SeriousFaultTCBog2_B1                         g_dataBuffer_WH_Display[528+5+192]&bit11
#define   BR2CT_SlightFaultTCBog2_B1                         g_dataBuffer_WH_Display[528+5+192]&bit13
#define   BR2CT_SeriousFaultMpBog1_B1                         g_dataBuffer_WH_Display[528+5+192]&bit14
#define   BR2CT_SlightFaultMpBog1_B1                         g_dataBuffer_WH_Display[528+6+192]&bit0
#define   BR2CT_SeriousFaultMpBog2_B1                         g_dataBuffer_WH_Display[528+6+192]&bit1
#define   BR2CT_SlightFaultMpBog2_B1                         g_dataBuffer_WH_Display[528+6+192]&bit3
#define   BR2CT_SeriousFaultMBog1_B1                         g_dataBuffer_WH_Display[528+6+192]&bit4
#define   BR2CT_SlightFaultMBog1_B1                         g_dataBuffer_WH_Display[528+6+192]&bit6
#define   BR2CT_SeriousFaultMBog2_B1                         g_dataBuffer_WH_Display[528+6+192]&bit7
#define   BR2CT_SlightFaultMBog2_B1                         g_dataBuffer_WH_Display[528+6+192]&bit9


#define   BR1CT_EBActiTCBog1_B1                        g_dataBuffer_WH_Display[512+12]&bit3
#define   BR1CT_EBActiTCBog2_B1                        g_dataBuffer_WH_Display[512+12]&bit4
#define   BR1CT_EBActiMPBog1_B1                        g_dataBuffer_WH_Display[512+12]&bit5
#define   BR1CT_EBActiMPBog2_B1                        g_dataBuffer_WH_Display[512+12]&bit6
#define   BR1CT_EBActiMBog1_B1                        g_dataBuffer_WH_Display[512+12]&bit7
#define   BR1CT_EBActiMBog2_B1                        g_dataBuffer_WH_Display[512+12]&bit8
#define   BR2CT_EBActiTCBog1_B1                        g_dataBuffer_WH_Display[512+12+192]&bit3
#define   BR2CT_EBActiTCBog2_B1                        g_dataBuffer_WH_Display[512+12+192]&bit4
#define   BR2CT_EBActiMPBog1_B1                        g_dataBuffer_WH_Display[512+12+192]&bit5
#define   BR2CT_EBActiMPBog2_B1                        g_dataBuffer_WH_Display[512+12+192]&bit6
#define   BR2CT_EBActiMBog1_B1                        g_dataBuffer_WH_Display[512+12+192]&bit7
#define   BR2CT_EBActiMBog2_B1                        g_dataBuffer_WH_Display[512+12+192]&bit8
//508 CCU->TCU
#define CTBR_Grade_U8                                       g_dataBuffer_WH_Display[1936] %256
#define CTBR_Braking_B1                                     g_dataBuffer_WH_Display[1936] &bit10
#define CTBR_Traction_B1                                    g_dataBuffer_WH_Display[1936] &bit11
#define CTBR_HBRel_B1                                       g_dataBuffer_WH_Display[1936+1] &bit1
#define CTBR_ConditionBrakeMod_B1                           g_dataBuffer_WH_Display[1936] &bit15

//6i8
#define CTTR1_Track_B1                                    g_dataBuffer_WH_Display[1952+4] &bit0
#define CTTR1_Brake_B1                                    g_dataBuffer_WH_Display[1952+4] &bit1
#define CTTR2_Track_B1                                    g_dataBuffer_WH_Display[1968+4] &bit0
#define CTTR2_Brake_B1                                    g_dataBuffer_WH_Display[1968+4] &bit1
#define CTTR3_Track_B1                                    g_dataBuffer_WH_Display[1984+4] &bit0
#define CTTR3_Brake_B1                                    g_dataBuffer_WH_Display[1984+4] &bit1
#define CTTR4_Track_B1                                    g_dataBuffer_WH_Display[2000+4] &bit0
#define CTTR4_Brake_B1                                    g_dataBuffer_WH_Display[2000+4] &bit1
#define CTTR1_TrackBrakeCommand_U8                        g_dataBuffer_WH_Display[1952+5] %256
#define CTTR2_TrackBrakeCommand_U8                        g_dataBuffer_WH_Display[1968+5] %256
#define CTTR3_TrackBrakeCommand_U8                        g_dataBuffer_WH_Display[1984+5] %256
#define CTTR4_TrackBrakeCommand_U8                        g_dataBuffer_WH_Display[2000+5] %256
#define CTTR1_LoadSign_U8                                 g_dataBuffer_WH_Display[1952+4] /256
#define CTTR2_LoadSign_U8                                 g_dataBuffer_WH_Display[1968+4] /256
#define CTTR3_LoadSign_U8                                 g_dataBuffer_WH_Display[1984+4] /256
#define CTTR4_LoadSign_U8                                 g_dataBuffer_WH_Display[2000+4] /256

///FOR DEBUG MODE
#define BR1CT_Braking_B1                                  ((g_dataBuffer_MVB[512+11] &bit6))
#define BR1CT_Traction_B1                                 g_dataBuffer_MVB[512+11] &bit7
#define BR1CT_FBR_B1                                      ((g_dataBuffer_MVB[512+11] &bit8))
#define BR1CT_EDM_B1                                    (g_dataBuffer_MVB[512+11] &bit9)
#define BR1CT_EBBackupActi_B1                             g_dataBuffer_MVB[512+12] &bit1
#define BR2CT_Braking_B1                                  ((g_dataBuffer_MVB[608+11] &bit6))
#define BR2CT_Traction_B1                                 g_dataBuffer_MVB[608+11] &bit7
#define BR2CT_FBR_B1                                      ((g_dataBuffer_MVB[608+11] &bit8))
#define BR2CT_EDM_B1                                    (g_dataBuffer_MVB[608+11] &bit9)
#define BR2CT_EBBackupActi_B1                             g_dataBuffer_MVB[608+12] &bit1
#define BR3CT_Braking_B1                                  ((g_dataBuffer_MVB[704+11] &bit6))
#define BR3CT_Traction_B1                                 g_dataBuffer_MVB[704+11] &bit7
#define BR3CT_FBR_B1                                      ((g_dataBuffer_MVB[704+11] &bit8))
#define BR3CT_EDM_B1                                    (g_dataBuffer_MVB[704+11] &bit9)
#define BR3CT_EBBackupActi_B1                             g_dataBuffer_MVB[704+12] &bit1
#define BR4CT_Braking_B1                                  ((g_dataBuffer_MVB[800+11] &bit6))
#define BR4CT_Traction_B1                                 g_dataBuffer_MVB[800+11] &bit7
#define BR4CT_FBR_B1                                      ((g_dataBuffer_MVB[800+11] &bit8))
#define BR4CT_EDM_B1                                    (g_dataBuffer_MVB[800+11] &bit9)
#define BR4CT_EBBackupActi_B1                             g_dataBuffer_MVB[800+12] &bit1
///Ai0  ATC->CCU
#define ATCT_RMR_B1                          g_dataBuffer_WH_Display[1584+1] & bit0
#define ATCT_RMF_B1                          g_dataBuffer_WH_Display[1584+1] & bit1
#define ATCT_MCS_B1                          g_dataBuffer_WH_Display[1584+1] & bit2
#define ATCT_AMC_B1                          g_dataBuffer_WH_Display[1584+1] & bit3
#define ATCT_ATB_B1                          g_dataBuffer_WH_Display[1584+1] & bit4
#define ATCT_CBTC_B1                          g_dataBuffer_WH_Display[1584+1] & bit5
#define ATCT_TracCMD_B1                          g_dataBuffer_WH_Display[1584+1] & bit6
#define ATCT_BraCMD_B1                          g_dataBuffer_WH_Display[1584+1] & bit7
#define ATCT_LifeSgn_U16                         highbyteLowbyteExchange(g_dataBuffer_WH_Display[1584])
#define ATCT_DestinationPNO_U16               highbyteLowbyteExchange(g_dataBuffer_WH_Display[1584+6])
#define ATCT_CurrentPNO_U16                   highbyteLowbyteExchange(g_dataBuffer_WH_Display[1584+8])
#define ATCT_NextPNO_U16                      highbyteLowbyteExchange(g_dataBuffer_WH_Display[1584+9])
#define ATCT_Year_U8                         g_dataBuffer_WH_Display[1584+10] % 256
#define ATCT_Month_U8                        g_dataBuffer_WH_Display[1584+10] / 256
#define ATCT_Day_U8                        g_dataBuffer_WH_Display[1584+11] % 256
#define ATCT_Hour_U8                       g_dataBuffer_WH_Display[1584+11] / 256
#define ATCT_Minute_U8                      g_dataBuffer_WH_Display[1584+12] % 256
#define ATCT_Sencond_U8                       g_dataBuffer_WH_Display[1584+12] / 256

///Bi0  PIS->CCU
#define PIS1CT_LifeSgn_U16                                  highbyteLowbyteExchange(g_dataBuffer_MVB[1648])
#define PIS2CT_LifeSgn_U16                                  highbyteLowbyteExchange(g_dataBuffer_MVB[1680])
#define PIS1CT_SoftwareVersionH_U8                          g_dataBuffer_MVB[1648+13]%256
#define PIS1CT_SoftwareVersionL_U8                          g_dataBuffer_MVB[1648+13]/256
#define PIS2CT_SoftwareVersionH_U8                          g_dataBuffer_MVB[1680+13]%256
#define PIS2CT_SoftwareVersionL_U8                          g_dataBuffer_MVB[1680+13]/256


#define PISiCT_NextStaID_U16                               highbyteLowbyteExchange(g_dataBuffer_WH_Display[1648+4])
#define PISiCT_OriStaID_U16                               highbyteLowbyteExchange(g_dataBuffer_WH_Display[1648+5])
#define PISiCT_CurStaID_U16                               highbyteLowbyteExchange(g_dataBuffer_WH_Display[1648+6])
#define PISiCT_TerStaID_U16                               highbyteLowbyteExchange(g_dataBuffer_WH_Display[1648+7])
#define PISiCT_LineID_U16                               highbyteLowbyteExchange(g_dataBuffer_WH_Display[1648+8])
#define PISiCT_RouteID_U16                               highbyteLowbyteExchange(g_dataBuffer_WH_Display[1648+9])
#define PISiCT_PECU11Call_B1                                g_dataBuffer_WH_Display[1648+2] & bit0
#define PISiCT_PECU11Act_B1                                g_dataBuffer_WH_Display[1648+2] & bit1
#define PISiCT_PECU21Call_B1                                g_dataBuffer_WH_Display[1648+2] & bit2
#define PISiCT_PECU21Act_B1                                g_dataBuffer_WH_Display[1648+2] & bit3
#define PISiCT_PECU12Call_B1                                g_dataBuffer_WH_Display[1648+2] & bit4
#define PISiCT_PECU12Act_B1                                g_dataBuffer_WH_Display[1648+2] & bit5
#define PISiCT_PECU22Call_B1                                g_dataBuffer_WH_Display[1648+2] & bit6
#define PISiCT_PECU22Act_B1                                g_dataBuffer_WH_Display[1648+2] & bit7
#define PISiCT_PECU13Call_B1                                g_dataBuffer_WH_Display[1648+2] & bit8
#define PISiCT_PECU13Act_B1                                g_dataBuffer_WH_Display[1648+2] & bit9
#define PISiCT_PECU23Call_B1                                g_dataBuffer_WH_Display[1648+2] & bit10
#define PISiCT_PECU23Act_B1                                g_dataBuffer_WH_Display[1648+2] & bit11
#define PISiCT_PECU14Call_B1                                g_dataBuffer_WH_Display[1648+2] & bit12
#define PISiCT_PECU14Act_B1                                g_dataBuffer_WH_Display[1648+2] & bit13
#define PISiCT_PECU24Call_B1                                g_dataBuffer_WH_Display[1648+2] & bit14
#define PISiCT_PECU24Act_B1                                g_dataBuffer_WH_Display[1648+2] & bit15
#define PISiCT_PECU15Call_B1                                g_dataBuffer_WH_Display[1648+3] & bit0
#define PISiCT_PECU15Act_B1                                g_dataBuffer_WH_Display[1648+3] & bit1
#define PISiCT_PECU25Call_B1                                g_dataBuffer_WH_Display[1648+3] & bit2
#define PISiCT_PECU25Act_B1                                g_dataBuffer_WH_Display[1648+3] & bit3
#define PISiCT_PECU16Call_B1                                g_dataBuffer_WH_Display[1648+3] & bit4
#define PISiCT_PECU16Act_B1                                g_dataBuffer_WH_Display[1648+3] & bit5
#define PISiCT_PECU26Call_B1                                g_dataBuffer_WH_Display[1648+3] & bit6
#define PISiCT_PECU26Act_B1                                g_dataBuffer_WH_Display[1648+3] & bit7
////0x808   CCU->EDCU
#define CTDR_ObstClosForce1_U16                              highbyteLowbyteExchange(g_dataBuffer_MVB[2048])
#define CTDR_ObstClosForce2_U16                              highbyteLowbyteExchange(g_dataBuffer_MVB[2048+1])
#define CTDR_ObstClosForce3_U16                              highbyteLowbyteExchange(g_dataBuffer_MVB[2048+2])
#define CTDR_ObstClosForce4_U16                             highbyteLowbyteExchange(g_dataBuffer_MVB[2048+3])
#define CTDR_ObstClosForce5_U16                             highbyteLowbyteExchange(g_dataBuffer_MVB[2048+4])
#define CTDR_DrOpenTime_U16                             highbyteLowbyteExchange(g_dataBuffer_MVB[2048+5])
#define CTDR_DrCloseTime_U16                             highbyteLowbyteExchange(g_dataBuffer_MVB[2048+6])
#define CTDR_OpenNumIFObst_U16                             highbyteLowbyteExchange(g_dataBuffer_MVB[2048+7])
#define CTDR_OpenObstDetWidth_U16                             highbyteLowbyteExchange(g_dataBuffer_MVB[2048+8])
#define CTDR_ObstDetDelay_U16                             highbyteLowbyteExchange(g_dataBuffer_MVB[2048+9])
#define CTDR_DrOpenDelay_U16                             highbyteLowbyteExchange(g_dataBuffer_MVB[2048+10])
#define CTDR_DrCloseDelay_U16                             highbyteLowbyteExchange(g_dataBuffer_MVB[2048+11])
#define CTDR_ObstReCloseDelay_U16                             highbyteLowbyteExchange(g_dataBuffer_MVB[2048+12])


////0X0810   EDCU1-12 ->CCU

#define DR1CT_LifeSign_U16                                  highbyteLowbyteExchange(g_dataBuffer_MVB[1104])
#define DR1CT_CU1Version_U8                                 g_dataBuffer_MVB[1104+13]%256
#define DR1CT_CU2Version_U8                                 g_dataBuffer_MVB[1104+13]/256
#define DR2CT_LifeSign_U16                                  highbyteLowbyteExchange(g_dataBuffer_MVB[1136])
#define DR2CT_CU1Version_U8                                 g_dataBuffer_MVB[1136+13]%256
#define DR2CT_CU2Version_U8                                 g_dataBuffer_MVB[1136+13]/256
#define DR3CT_LifeSign_U16                                  highbyteLowbyteExchange(g_dataBuffer_MVB[1168])
#define DR3CT_CU1Version_U8                                 g_dataBuffer_MVB[1168+13]%256
#define DR3CT_CU2Version_U8                                 g_dataBuffer_MVB[1168+13]/256
#define DR4CT_LifeSign_U16                                  highbyteLowbyteExchange(g_dataBuffer_MVB[1200])
#define DR4CT_CU1Version_U8                                 g_dataBuffer_MVB[1200+13]%256
#define DR4CT_CU2Version_U8                                 g_dataBuffer_MVB[1200+13]/256
#define DR5CT_LifeSign_U16                                  highbyteLowbyteExchange(g_dataBuffer_MVB[1232])
#define DR5CT_CU1Version_U8                                 g_dataBuffer_MVB[1232+13]%256
#define DR5CT_CU2Version_U8                                 g_dataBuffer_MVB[1232+13]/256
#define DR6CT_LifeSign_U16                                  highbyteLowbyteExchange(g_dataBuffer_MVB[1264])
#define DR6CT_CU1Version_U8                                 g_dataBuffer_MVB[1264+13]%256
#define DR6CT_CU2Version_U8                                 g_dataBuffer_MVB[1264+13]/256
#define DR7CT_LifeSign_U16                                  highbyteLowbyteExchange(g_dataBuffer_MVB[1296])
#define DR7CT_CU1Version_U8                                 g_dataBuffer_MVB[1296+13]%256
#define DR7CT_CU2Version_U8                                 g_dataBuffer_MVB[1296+13]/256
#define DR8CT_LifeSign_U16                                  highbyteLowbyteExchange(g_dataBuffer_MVB[1328])
#define DR8CT_CU1Version_U8                                 g_dataBuffer_MVB[1328+13]%256
#define DR8CT_CU2Version_U8                                 g_dataBuffer_MVB[1328+13]/256
#define DR9CT_LifeSign_U16                                  highbyteLowbyteExchange(g_dataBuffer_MVB[1360])
#define DR9CT_CU1Version_U8                                 g_dataBuffer_MVB[1360+13]%256
#define DR9CT_CU2Version_U8                                 g_dataBuffer_MVB[1360+13]/256
#define DR10CT_LifeSign_U16                                  highbyteLowbyteExchange(g_dataBuffer_MVB[1392])
#define DR10CT_CU1Version_U8                                 g_dataBuffer_MVB[1392+13]%256
#define DR10CT_CU2Version_U8                                 g_dataBuffer_MVB[1392+13]/256
#define DR11CT_LifeSign_U16                                  highbyteLowbyteExchange(g_dataBuffer_MVB[1424])
#define DR11CT_CU1Version_U8                                 g_dataBuffer_MVB[1424+13]%256
#define DR11CT_CU2Version_U8                                 g_dataBuffer_MVB[1424+13]/256
#define DR12CT_LifeSign_U16                                  highbyteLowbyteExchange(g_dataBuffer_MVB[1456])
#define DR12CT_CU1Version_U8                                 g_dataBuffer_MVB[1456+13]%256
#define DR12CT_CU2Version_U8                                 g_dataBuffer_MVB[1456+13]/256

#define DR1CT_Door1IsValid_B1                                g_dataBuffer_WH_Display[960+160] & bit8
#define DR1CT_Door2IsValid_B1                                g_dataBuffer_WH_Display[960+160] & bit9
#define DR1CT_Door3IsValid_B1                                g_dataBuffer_WH_Display[960+160] & bit10
#define DR1CT_Door4IsValid_B1                                g_dataBuffer_WH_Display[960+160] & bit11
#define DR1CT_Door5IsValid_B1                                g_dataBuffer_WH_Display[960+160] & bit12
#define DR1CT_Door6IsValid_B1                                g_dataBuffer_WH_Display[960+160] & bit13
#define DR1CT_Door7IsValid_B1                                g_dataBuffer_WH_Display[960+160] & bit14
#define DR1CT_Door8IsValid_B1                                g_dataBuffer_WH_Display[960+160] & bit15
#define DR1CT_Door9IsValid_B1                                g_dataBuffer_WH_Display[960+160] & bit0
#define DR1CT_Door10IsValid_B1                                g_dataBuffer_WH_Display[960+160] & bit1
#define DR1CT_Dr1NotFullyClosed_B1                           g_dataBuffer_WH_Display[944+160+1] & bit9
#define DR1CT_Dr1FullyClosed_B1                              g_dataBuffer_WH_Display[944+160+1] & bit10
#define DR1CT_Dr1EmUnlock_B1                                 g_dataBuffer_WH_Display[944+160+1] & bit11
#define DR1CT_Dr1Isolated_B1                                 g_dataBuffer_WH_Display[944+160+1] & bit12
#define DR1CT_Dr1ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[944+160+1] & bit13)||(g_dataBuffer_WH_Display[944+160+1] & bit14))
#define DR1CT_Door1SetOK_B1                                 g_dataBuffer_WH_Display[944+160+1] & bit15
#define DR1CT_Dr2NotFullyClosed_B1                           g_dataBuffer_WH_Display[944+160+2] & bit9
#define DR1CT_Dr2FullyClosed_B1                              g_dataBuffer_WH_Display[944+160+2] & bit10
#define DR1CT_Dr2EmUnlock_B1                                 g_dataBuffer_WH_Display[944+160+2] & bit11
#define DR1CT_Dr2Isolated_B1                                 g_dataBuffer_WH_Display[944+160+2] & bit12
#define DR1CT_Dr2ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[944+160+2] & bit13)||(g_dataBuffer_WH_Display[944+160+2] & bit14))
#define DR1CT_Door2SetOK_B1                                 g_dataBuffer_WH_Display[944+160+2] & bit15
#define DR1CT_Dr3NotFullyClosed_B1                           g_dataBuffer_WH_Display[944+160+3] & bit9
#define DR1CT_Dr3FullyClosed_B1                              g_dataBuffer_WH_Display[944+160+3] & bit10
#define DR1CT_Dr3EmUnlock_B1                                 g_dataBuffer_WH_Display[944+160+3] & bit11
#define DR1CT_Dr3Isolated_B1                                 g_dataBuffer_WH_Display[944+160+3] & bit12
#define DR1CT_Dr3ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[944+160+3] & bit13)||(g_dataBuffer_WH_Display[944+160+3] & bit14))
#define DR1CT_Door3SetOK_B1                                 g_dataBuffer_WH_Display[944+160+3] & bit15
#define DR1CT_Dr4NotFullyClosed_B1                           g_dataBuffer_WH_Display[944+160+4] & bit9
#define DR1CT_Dr4FullyClosed_B1                              g_dataBuffer_WH_Display[944+160+4] & bit10
#define DR1CT_Dr4EmUnlock_B1                                 g_dataBuffer_WH_Display[944+160+4] & bit11
#define DR1CT_Dr4Isolated_B1                                 g_dataBuffer_WH_Display[944+160+4] & bit12
#define DR1CT_Dr4ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[944+160+4] & bit13)||(g_dataBuffer_WH_Display[944+160+4] & bit14))
#define DR1CT_Door4SetOK_B1                                 g_dataBuffer_WH_Display[944+160+4] & bit15
#define DR1CT_Dr5NotFullyClosed_B1                           g_dataBuffer_WH_Display[944+160+5] & bit9
#define DR1CT_Dr5FullyClosed_B1                              g_dataBuffer_WH_Display[944+160+5] & bit10
#define DR1CT_Dr5EmUnlock_B1                                 g_dataBuffer_WH_Display[944+160+5] & bit11
#define DR1CT_Dr5Isolated_B1                                 g_dataBuffer_WH_Display[944+160+5] & bit12
#define DR1CT_Dr5ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[944+160+5] & bit13)||(g_dataBuffer_WH_Display[944+160+5] & bit14))
#define DR1CT_Door5SetOK_B1                                 g_dataBuffer_WH_Display[944+160+5] & bit15
#define DR1CT_Dr6NotFullyClosed_B1                           g_dataBuffer_WH_Display[944+160+6] & bit9
#define DR1CT_Dr6FullyClosed_B1                              g_dataBuffer_WH_Display[944+160+6] & bit10
#define DR1CT_Dr6EmUnlock_B1                                 g_dataBuffer_WH_Display[944+160+6] & bit11
#define DR1CT_Dr6Isolated_B1                                 g_dataBuffer_WH_Display[944+160+6] & bit12
#define DR1CT_Dr6ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[944+160+6] & bit13)||(g_dataBuffer_WH_Display[944+160+6] & bit14))
#define DR1CT_Door6SetOK_B1                                 g_dataBuffer_WH_Display[944+160+6] & bit15
#define DR1CT_Dr7NotFullyClosed_B1                           g_dataBuffer_WH_Display[944+160+7] & bit9
#define DR1CT_Dr7FullyClosed_B1                              g_dataBuffer_WH_Display[944+160+7] & bit10
#define DR1CT_Dr7EmUnlock_B1                                 g_dataBuffer_WH_Display[944+160+7] & bit11
#define DR1CT_Dr7Isolated_B1                                 g_dataBuffer_WH_Display[944+160+7] & bit12
#define DR1CT_Dr7ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[944+160+7] & bit13)||(g_dataBuffer_WH_Display[944+160+7] & bit14))
#define DR1CT_Door7SetOK_B1                                 g_dataBuffer_WH_Display[944+160+7] & bit15
#define DR1CT_Dr8NotFullyClosed_B1                           g_dataBuffer_WH_Display[944+160+8] & bit9
#define DR1CT_Dr8FullyClosed_B1                              g_dataBuffer_WH_Display[944+160+8] & bit10
#define DR1CT_Dr8EmUnlock_B1                                 g_dataBuffer_WH_Display[944+160+8] & bit11
#define DR1CT_Dr8Isolated_B1                                 g_dataBuffer_WH_Display[944+160+8] & bit12
#define DR1CT_Dr8ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[944+160+8] & bit13)||(g_dataBuffer_WH_Display[944+160+8] & bit14))
#define DR1CT_Door8SetOK_B1                                 g_dataBuffer_WH_Display[944+160+8] & bit15
#define DR1CT_Dr9NotFullyClosed_B1                           g_dataBuffer_WH_Display[944+160+9] & bit9
#define DR1CT_Dr9FullyClosed_B1                              g_dataBuffer_WH_Display[944+160+9] & bit10
#define DR1CT_Dr9EmUnlock_B1                                 g_dataBuffer_WH_Display[944+160+9] & bit11
#define DR1CT_Dr9Isolated_B1                                 g_dataBuffer_WH_Display[944+160+9] & bit12
#define DR1CT_Dr9ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[944+160+9] & bit13)||(g_dataBuffer_WH_Display[944+160+9] & bit14))
#define DR1CT_Door9SetOK_B1                                 g_dataBuffer_WH_Display[944+160+9] & bit15
#define DR1CT_Dr10NotFullyClosed_B1                           g_dataBuffer_WH_Display[944+160+10] & bit9
#define DR1CT_Dr10FullyClosed_B1                              g_dataBuffer_WH_Display[944+160+10] & bit10
#define DR1CT_Dr10EmUnlock_B1                                 g_dataBuffer_WH_Display[944+160+10] & bit11
#define DR1CT_Dr10Isolated_B1                                 g_dataBuffer_WH_Display[944+160+10] & bit12
#define DR1CT_Dr10ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[944+160+10] & bit13)||(g_dataBuffer_WH_Display[944+160+10] & bit14))
#define DR1CT_Door10SetOK_B1                                 g_dataBuffer_WH_Display[944+160+10] & bit15


#define DR3CT_Door1IsValid_B1                                g_dataBuffer_WH_Display[1024+160] & bit8
#define DR3CT_Door2IsValid_B1                                g_dataBuffer_WH_Display[1024+160] & bit9
#define DR3CT_Door3IsValid_B1                                g_dataBuffer_WH_Display[1024+160] & bit10
#define DR3CT_Door4IsValid_B1                                g_dataBuffer_WH_Display[1024+160] & bit11
#define DR3CT_Door5IsValid_B1                                g_dataBuffer_WH_Display[1024+160] & bit12
#define DR3CT_Door6IsValid_B1                                g_dataBuffer_WH_Display[1024+160] & bit13
#define DR3CT_Door7IsValid_B1                                g_dataBuffer_WH_Display[1024+160] & bit14
#define DR3CT_Door8IsValid_B1                                g_dataBuffer_WH_Display[1024+160] & bit15
#define DR3CT_Door9IsValid_B1                                g_dataBuffer_WH_Display[1024+160] & bit0
#define DR3CT_Door10IsValid_B1                                g_dataBuffer_WH_Display[1024+160] & bit1
#define DR3CT_Dr1NotFullyClosed_B1                           g_dataBuffer_WH_Display[1008+160+1] & bit9
#define DR3CT_Dr1FullyClosed_B1                              g_dataBuffer_WH_Display[1008+160+1] & bit10
#define DR3CT_Dr1EmUnlock_B1                                 g_dataBuffer_WH_Display[1008+160+1] & bit11
#define DR3CT_Dr1Isolated_B1                                 g_dataBuffer_WH_Display[1008+160+1] & bit12
#define DR3CT_Dr1ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1008+160+1] & bit13)||(g_dataBuffer_WH_Display[1008+160+1] & bit14))
#define DR3CT_Door1SetOK_B1                                 g_dataBuffer_WH_Display[1008+160+1] & bit15
#define DR3CT_Dr2NotFullyClosed_B1                           g_dataBuffer_WH_Display[1008+160+2] & bit9
#define DR3CT_Dr2FullyClosed_B1                              g_dataBuffer_WH_Display[1008+160+2] & bit10
#define DR3CT_Dr2EmUnlock_B1                                 g_dataBuffer_WH_Display[1008+160+2] & bit11
#define DR3CT_Dr2Isolated_B1                                 g_dataBuffer_WH_Display[1008+160+2] & bit12
#define DR3CT_Dr2ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1008+160+2] & bit13)||(g_dataBuffer_WH_Display[1008+160+2] & bit14))
#define DR3CT_Door2SetOK_B1                                 g_dataBuffer_WH_Display[1008+160+2] & bit15
#define DR3CT_Dr3NotFullyClosed_B1                           g_dataBuffer_WH_Display[1008+160+3] & bit9
#define DR3CT_Dr3FullyClosed_B1                              g_dataBuffer_WH_Display[1008+160+3] & bit10
#define DR3CT_Dr3EmUnlock_B1                                 g_dataBuffer_WH_Display[1008+160+3] & bit11
#define DR3CT_Dr3Isolated_B1                                 g_dataBuffer_WH_Display[1008+160+3] & bit12
#define DR3CT_Dr3ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1008+160+3] & bit13)||(g_dataBuffer_WH_Display[1008+160+3] & bit14))
#define DR3CT_Door3SetOK_B1                                 g_dataBuffer_WH_Display[1008+160+3] & bit15
#define DR3CT_Dr4NotFullyClosed_B1                           g_dataBuffer_WH_Display[1008+160+4] & bit9
#define DR3CT_Dr4FullyClosed_B1                              g_dataBuffer_WH_Display[1008+160+4] & bit10
#define DR3CT_Dr4EmUnlock_B1                                 g_dataBuffer_WH_Display[1008+160+4] & bit11
#define DR3CT_Dr4Isolated_B1                                 g_dataBuffer_WH_Display[1008+160+4] & bit12
#define DR3CT_Dr4ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1008+160+4] & bit13)||(g_dataBuffer_WH_Display[1008+160+4] & bit14))
#define DR3CT_Door4SetOK_B1                                 g_dataBuffer_WH_Display[1008+160+4] & bit15
#define DR3CT_Dr5NotFullyClosed_B1                           g_dataBuffer_WH_Display[1008+160+5] & bit9
#define DR3CT_Dr5FullyClosed_B1                              g_dataBuffer_WH_Display[1008+160+5] & bit10
#define DR3CT_Dr5EmUnlock_B1                                 g_dataBuffer_WH_Display[1008+160+5] & bit11
#define DR3CT_Dr5Isolated_B1                                 g_dataBuffer_WH_Display[1008+160+5] & bit12
#define DR3CT_Dr5ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1008+160+5] & bit13)||(g_dataBuffer_WH_Display[1008+160+5] & bit14))
#define DR3CT_Door5SetOK_B1                                 g_dataBuffer_WH_Display[1008+160+5] & bit15
#define DR3CT_Dr6NotFullyClosed_B1                           g_dataBuffer_WH_Display[1008+160+6] & bit9
#define DR3CT_Dr6FullyClosed_B1                              g_dataBuffer_WH_Display[1008+160+6] & bit10
#define DR3CT_Dr6EmUnlock_B1                                 g_dataBuffer_WH_Display[1008+160+6] & bit11
#define DR3CT_Dr6Isolated_B1                                 g_dataBuffer_WH_Display[1008+160+6] & bit12
#define DR3CT_Dr6ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1008+160+6] & bit13)||(g_dataBuffer_WH_Display[1008+160+6] & bit14))
#define DR3CT_Door6SetOK_B1                                 g_dataBuffer_WH_Display[1008+160+6] & bit15
#define DR3CT_Dr7NotFullyClosed_B1                           g_dataBuffer_WH_Display[1008+160+7] & bit9
#define DR3CT_Dr7FullyClosed_B1                              g_dataBuffer_WH_Display[1008+160+7] & bit10
#define DR3CT_Dr7EmUnlock_B1                                 g_dataBuffer_WH_Display[1008+160+7] & bit11
#define DR3CT_Dr7Isolated_B1                                 g_dataBuffer_WH_Display[1008+160+7] & bit12
#define DR3CT_Dr7ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1008+160+7] & bit13)||(g_dataBuffer_WH_Display[1008+160+7] & bit14))
#define DR3CT_Door7SetOK_B1                                 g_dataBuffer_WH_Display[1008+160+7] & bit15
#define DR3CT_Dr8NotFullyClosed_B1                           g_dataBuffer_WH_Display[1008+160+8] & bit9
#define DR3CT_Dr8FullyClosed_B1                              g_dataBuffer_WH_Display[1008+160+8] & bit10
#define DR3CT_Dr8EmUnlock_B1                                 g_dataBuffer_WH_Display[1008+160+8] & bit11
#define DR3CT_Dr8Isolated_B1                                 g_dataBuffer_WH_Display[1008+160+8] & bit12
#define DR3CT_Dr8ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1008+160+8] & bit13)||(g_dataBuffer_WH_Display[1008+160+8] & bit14))
#define DR3CT_Door8SetOK_B1                                 g_dataBuffer_WH_Display[1008+160+8] & bit15
#define DR3CT_Dr9NotFullyClosed_B1                           g_dataBuffer_WH_Display[1008+160+9] & bit9
#define DR3CT_Dr9FullyClosed_B1                              g_dataBuffer_WH_Display[1008+160+9] & bit10
#define DR3CT_Dr9EmUnlock_B1                                 g_dataBuffer_WH_Display[1008+160+9] & bit11
#define DR3CT_Dr9Isolated_B1                                 g_dataBuffer_WH_Display[1008+160+9] & bit12
#define DR3CT_Dr9ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1008+160+9] & bit13)||(g_dataBuffer_WH_Display[1008+160+9] & bit14))
#define DR3CT_Door9SetOK_B1                                 g_dataBuffer_WH_Display[1008+160+9] & bit15
#define DR3CT_Dr10NotFullyClosed_B1                           g_dataBuffer_WH_Display[1008+160+10] & bit9
#define DR3CT_Dr10FullyClosed_B1                              g_dataBuffer_WH_Display[1008+160+10] & bit10
#define DR3CT_Dr10EmUnlock_B1                                 g_dataBuffer_WH_Display[1008+160+10] & bit11
#define DR3CT_Dr10Isolated_B1                                 g_dataBuffer_WH_Display[1008+160+10] & bit12
#define DR3CT_Dr10ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1008+160+10] & bit13)||(g_dataBuffer_WH_Display[1008+160+10] & bit14))
#define DR3CT_Door10SetOK_B1                                 g_dataBuffer_WH_Display[1008+160+10] & bit15

#define DR5CT_Door1IsValid_B1                                g_dataBuffer_WH_Display[1088+160] & bit8
#define DR5CT_Door2IsValid_B1                                g_dataBuffer_WH_Display[1088+160] & bit9
#define DR5CT_Door3IsValid_B1                                g_dataBuffer_WH_Display[1088+160] & bit10
#define DR5CT_Door4IsValid_B1                                g_dataBuffer_WH_Display[1088+160] & bit11
#define DR5CT_Door5IsValid_B1                                g_dataBuffer_WH_Display[1088+160] & bit12
#define DR5CT_Door6IsValid_B1                                g_dataBuffer_WH_Display[1088+160] & bit13
#define DR5CT_Door7IsValid_B1                                g_dataBuffer_WH_Display[1088+160] & bit14
#define DR5CT_Door8IsValid_B1                                g_dataBuffer_WH_Display[1088+160] & bit15
#define DR5CT_Door9IsValid_B1                                g_dataBuffer_WH_Display[1088+160] & bit0
#define DR5CT_Door10IsValid_B1                                g_dataBuffer_WH_Display[1088+160] & bit1
#define DR5CT_Dr1NotFullyClosed_B1                           g_dataBuffer_WH_Display[1072+160+1] & bit9
#define DR5CT_Dr1FullyClosed_B1                              g_dataBuffer_WH_Display[1072+160+1] & bit10
#define DR5CT_Dr1EmUnlock_B1                                 g_dataBuffer_WH_Display[1072+160+1] & bit11
#define DR5CT_Dr1Isolated_B1                                 g_dataBuffer_WH_Display[1072+160+1] & bit12
#define DR5CT_Dr1ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1072+160+1] & bit13)||(g_dataBuffer_WH_Display[1072+160+1] & bit14))
#define DR5CT_Door1SetOK_B1                                 g_dataBuffer_WH_Display[1072+160+1] & bit15
#define DR5CT_Dr2NotFullyClosed_B1                           g_dataBuffer_WH_Display[1072+160+2] & bit9
#define DR5CT_Dr2FullyClosed_B1                              g_dataBuffer_WH_Display[1072+160+2] & bit10
#define DR5CT_Dr2EmUnlock_B1                                 g_dataBuffer_WH_Display[1072+160+2] & bit11
#define DR5CT_Dr2Isolated_B1                                 g_dataBuffer_WH_Display[1072+160+2] & bit12
#define DR5CT_Dr2ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1072+160+2] & bit13)||(g_dataBuffer_WH_Display[1072+160+2] & bit14))
#define DR5CT_Door2SetOK_B1                                 g_dataBuffer_WH_Display[1072+160+2] & bit15
#define DR5CT_Dr3NotFullyClosed_B1                           g_dataBuffer_WH_Display[1072+160+3] & bit9
#define DR5CT_Dr3FullyClosed_B1                              g_dataBuffer_WH_Display[1072+160+3] & bit10
#define DR5CT_Dr3EmUnlock_B1                                 g_dataBuffer_WH_Display[1072+160+3] & bit11
#define DR5CT_Dr3Isolated_B1                                 g_dataBuffer_WH_Display[1072+160+3] & bit12
#define DR5CT_Dr3ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1072+160+3] & bit13)||(g_dataBuffer_WH_Display[1072+160+3] & bit14))
#define DR5CT_Door3SetOK_B1                                 g_dataBuffer_WH_Display[1072+160+3] & bit15
#define DR5CT_Dr4NotFullyClosed_B1                           g_dataBuffer_WH_Display[1072+160+4] & bit9
#define DR5CT_Dr4FullyClosed_B1                              g_dataBuffer_WH_Display[1072+160+4] & bit10
#define DR5CT_Dr4EmUnlock_B1                                 g_dataBuffer_WH_Display[1072+160+4] & bit11
#define DR5CT_Dr4Isolated_B1                                 g_dataBuffer_WH_Display[1072+160+4] & bit12
#define DR5CT_Dr4ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1072+160+4] & bit13)||(g_dataBuffer_WH_Display[1072+160+4] & bit14))
#define DR5CT_Door4SetOK_B1                                 g_dataBuffer_WH_Display[1072+160+4] & bit15
#define DR5CT_Dr5NotFullyClosed_B1                           g_dataBuffer_WH_Display[1072+160+5] & bit9
#define DR5CT_Dr5FullyClosed_B1                              g_dataBuffer_WH_Display[1072+160+5] & bit10
#define DR5CT_Dr5EmUnlock_B1                                 g_dataBuffer_WH_Display[1072+160+5] & bit11
#define DR5CT_Dr5Isolated_B1                                 g_dataBuffer_WH_Display[1072+160+5] & bit12
#define DR5CT_Dr5ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1072+160+5] & bit13)||(g_dataBuffer_WH_Display[1072+160+5] & bit14))
#define DR5CT_Door5SetOK_B1                                 g_dataBuffer_WH_Display[1072+160+5] & bit15
#define DR5CT_Dr6NotFullyClosed_B1                           g_dataBuffer_WH_Display[1072+160+6] & bit9
#define DR5CT_Dr6FullyClosed_B1                              g_dataBuffer_WH_Display[1072+160+6] & bit10
#define DR5CT_Dr6EmUnlock_B1                                 g_dataBuffer_WH_Display[1072+160+6] & bit11
#define DR5CT_Dr6Isolated_B1                                 g_dataBuffer_WH_Display[1072+160+6] & bit12
#define DR5CT_Dr6ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1072+160+6] & bit13)||(g_dataBuffer_WH_Display[1072+160+6] & bit14))
#define DR5CT_Door6SetOK_B1                                 g_dataBuffer_WH_Display[1072+160+6] & bit15
#define DR5CT_Dr7NotFullyClosed_B1                           g_dataBuffer_WH_Display[1072+160+7] & bit9
#define DR5CT_Dr7FullyClosed_B1                              g_dataBuffer_WH_Display[1072+160+7] & bit10
#define DR5CT_Dr7EmUnlock_B1                                 g_dataBuffer_WH_Display[1072+160+7] & bit11
#define DR5CT_Dr7Isolated_B1                                 g_dataBuffer_WH_Display[1072+160+7] & bit12
#define DR5CT_Dr7ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1072+160+7] & bit13)||(g_dataBuffer_WH_Display[1072+160+7] & bit14))
#define DR5CT_Door7SetOK_B1                                 g_dataBuffer_WH_Display[1072+160+7] & bit15
#define DR5CT_Dr8NotFullyClosed_B1                           g_dataBuffer_WH_Display[1072+160+8] & bit9
#define DR5CT_Dr8FullyClosed_B1                              g_dataBuffer_WH_Display[1072+160+8] & bit10
#define DR5CT_Dr8EmUnlock_B1                                 g_dataBuffer_WH_Display[1072+160+8] & bit11
#define DR5CT_Dr8Isolated_B1                                 g_dataBuffer_WH_Display[1072+160+8] & bit12
#define DR5CT_Dr8ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1072+160+8] & bit13)||(g_dataBuffer_WH_Display[1072+160+8] & bit14))
#define DR5CT_Door8SetOK_B1                                 g_dataBuffer_WH_Display[1072+160+8] & bit15
#define DR5CT_Dr9NotFullyClosed_B1                           g_dataBuffer_WH_Display[1072+160+9] & bit9
#define DR5CT_Dr9FullyClosed_B1                              g_dataBuffer_WH_Display[1072+160+9] & bit10
#define DR5CT_Dr9EmUnlock_B1                                 g_dataBuffer_WH_Display[1072+160+9] & bit11
#define DR5CT_Dr9Isolated_B1                                 g_dataBuffer_WH_Display[1072+160+9] & bit12
#define DR5CT_Dr9ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1072+160+9] & bit13)||(g_dataBuffer_WH_Display[1072+160+9] & bit14))
#define DR5CT_Door9SetOK_B1                                 g_dataBuffer_WH_Display[1072+160+9] & bit15
#define DR5CT_Dr10NotFullyClosed_B1                           g_dataBuffer_WH_Display[1072+160+10] & bit9
#define DR5CT_Dr10FullyClosed_B1                              g_dataBuffer_WH_Display[1072+160+10] & bit10
#define DR5CT_Dr10EmUnlock_B1                                 g_dataBuffer_WH_Display[1072+160+10] & bit11
#define DR5CT_Dr10Isolated_B1                                 g_dataBuffer_WH_Display[1072+160+10] & bit12
#define DR5CT_Dr10ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1072+160+10] & bit13)||(g_dataBuffer_WH_Display[1072+160+10] & bit14))
#define DR5CT_Door10SetOK_B1                                 g_dataBuffer_WH_Display[1072+160+10] & bit15


#define DR7CT_Door1IsValid_B1                                g_dataBuffer_WH_Display[1184+160-32] & bit8
#define DR7CT_Door2IsValid_B1                                g_dataBuffer_WH_Display[1184+160-32] & bit9
#define DR7CT_Door3IsValid_B1                                g_dataBuffer_WH_Display[1184+160-32] & bit10
#define DR7CT_Door4IsValid_B1                                g_dataBuffer_WH_Display[1184+160-32] & bit11
#define DR7CT_Door5IsValid_B1                                g_dataBuffer_WH_Display[1184+160-32] & bit12
#define DR7CT_Door6IsValid_B1                                g_dataBuffer_WH_Display[1184+160-32] & bit13
#define DR7CT_Door7IsValid_B1                                g_dataBuffer_WH_Display[1184+160-32] & bit14
#define DR7CT_Door8IsValid_B1                                g_dataBuffer_WH_Display[1184+160-32] & bit15
#define DR7CT_Door9IsValid_B1                                g_dataBuffer_WH_Display[1184+160-32] & bit0
#define DR7CT_Door10IsValid_B1                                g_dataBuffer_WH_Display[1184+160-32] & bit1
#define DR7CT_Dr1NotFullyClosed_B1                           g_dataBuffer_WH_Display[1168+160+1-32] & bit9
#define DR7CT_Dr1FullyClosed_B1                              g_dataBuffer_WH_Display[1168+160+1-32] & bit10
#define DR7CT_Dr1EmUnlock_B1                                 g_dataBuffer_WH_Display[1168+160+1-32] & bit11
#define DR7CT_Dr1Isolated_B1                                 g_dataBuffer_WH_Display[1168+160+1-32] & bit12
#define DR7CT_Dr1ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1168+160+1-32] & bit13)||(g_dataBuffer_WH_Display[1168+160+1-32] & bit14))
#define DR7CT_Door1SetOK_B1                                 g_dataBuffer_WH_Display[1168+160+1-32] & bit15
#define DR7CT_Dr2NotFullyClosed_B1                           g_dataBuffer_WH_Display[1168+160+2-32] & bit9
#define DR7CT_Dr2FullyClosed_B1                              g_dataBuffer_WH_Display[1168+160+2-32] & bit10
#define DR7CT_Dr2EmUnlock_B1                                 g_dataBuffer_WH_Display[1168+160+2-32] & bit11
#define DR7CT_Dr2Isolated_B1                                 g_dataBuffer_WH_Display[1168+160+2-32] & bit12
#define DR7CT_Dr2ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1168+160+2-32] & bit13)||(g_dataBuffer_WH_Display[1168+160+2-32] & bit14))
#define DR7CT_Door2SetOK_B1                                 g_dataBuffer_WH_Display[1168+160+2-32] & bit15
#define DR7CT_Dr3NotFullyClosed_B1                           g_dataBuffer_WH_Display[1168+160+3-32] & bit9
#define DR7CT_Dr3FullyClosed_B1                              g_dataBuffer_WH_Display[1168+160+3-32] & bit10
#define DR7CT_Dr3EmUnlock_B1                                 g_dataBuffer_WH_Display[1168+160+3-32] & bit11
#define DR7CT_Dr3Isolated_B1                                 g_dataBuffer_WH_Display[1168+160+3-32] & bit12
#define DR7CT_Dr3ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1168+160+3-32] & bit13)||(g_dataBuffer_WH_Display[1168+160+3-32] & bit14))
#define DR7CT_Door3SetOK_B1                                 g_dataBuffer_WH_Display[1168+160+3-32] & bit15
#define DR7CT_Dr4NotFullyClosed_B1                           g_dataBuffer_WH_Display[1168+160+4-32] & bit9
#define DR7CT_Dr4FullyClosed_B1                              g_dataBuffer_WH_Display[1168+160+4-32] & bit10
#define DR7CT_Dr4EmUnlock_B1                                 g_dataBuffer_WH_Display[1168+160+4-32] & bit11
#define DR7CT_Dr4Isolated_B1                                 g_dataBuffer_WH_Display[1168+160+4-32] & bit12
#define DR7CT_Dr4ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1168+160+4-32] & bit13)||(g_dataBuffer_WH_Display[1168+160+4-32] & bit14))
#define DR7CT_Door4SetOK_B1                                 g_dataBuffer_WH_Display[1168+160+4-32] & bit15
#define DR7CT_Dr5NotFullyClosed_B1                           g_dataBuffer_WH_Display[1168+160+5-32] & bit9
#define DR7CT_Dr5FullyClosed_B1                              g_dataBuffer_WH_Display[1168+160+5-32] & bit10
#define DR7CT_Dr5EmUnlock_B1                                 g_dataBuffer_WH_Display[1168+160+5-32] & bit11
#define DR7CT_Dr5Isolated_B1                                 g_dataBuffer_WH_Display[1168+160+5-32] & bit12
#define DR7CT_Dr5ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1168+160+5-32] & bit13)||(g_dataBuffer_WH_Display[1168+160+5-32] & bit14))
#define DR7CT_Door5SetOK_B1                                 g_dataBuffer_WH_Display[1168+160+5-32] & bit15
#define DR7CT_Dr6NotFullyClosed_B1                           g_dataBuffer_WH_Display[1168+160+6-32] & bit9
#define DR7CT_Dr6FullyClosed_B1                              g_dataBuffer_WH_Display[1168+160+6-32] & bit10
#define DR7CT_Dr6EmUnlock_B1                                 g_dataBuffer_WH_Display[1168+160+6-32] & bit11
#define DR7CT_Dr6Isolated_B1                                 g_dataBuffer_WH_Display[1168+160+6-32] & bit12
#define DR7CT_Dr6ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1168+160+6-32] & bit13)||(g_dataBuffer_WH_Display[1168+160+6-32] & bit14))
#define DR7CT_Door6SetOK_B1                                 g_dataBuffer_WH_Display[1168+160+6-32] & bit15
#define DR7CT_Dr7NotFullyClosed_B1                           g_dataBuffer_WH_Display[1168+160+7-32] & bit9
#define DR7CT_Dr7FullyClosed_B1                              g_dataBuffer_WH_Display[1168+160+7-32] & bit10
#define DR7CT_Dr7EmUnlock_B1                                 g_dataBuffer_WH_Display[1168+160+7-32] & bit11
#define DR7CT_Dr7Isolated_B1                                 g_dataBuffer_WH_Display[1168+160+7-32] & bit12
#define DR7CT_Dr7ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1168+160+7-32] & bit13)||(g_dataBuffer_WH_Display[1168+160+7-32] & bit14))
#define DR7CT_Door7SetOK_B1                                 g_dataBuffer_WH_Display[1168+160+7-32] & bit15
#define DR7CT_Dr8NotFullyClosed_B1                           g_dataBuffer_WH_Display[1168+160+8-32] & bit9
#define DR7CT_Dr8FullyClosed_B1                              g_dataBuffer_WH_Display[1168+160+8-32] & bit10
#define DR7CT_Dr8EmUnlock_B1                                 g_dataBuffer_WH_Display[1168+160+8-32] & bit11
#define DR7CT_Dr8Isolated_B1                                 g_dataBuffer_WH_Display[1168+160+8-32] & bit12
#define DR7CT_Dr8ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1168+160+8-32] & bit13)||(g_dataBuffer_WH_Display[1168+160+8-32] & bit14))
#define DR7CT_Door8SetOK_B1                                 g_dataBuffer_WH_Display[1168+160+8-32] & bit15
#define DR7CT_Dr9NotFullyClosed_B1                           g_dataBuffer_WH_Display[1168+160+9-32] & bit9
#define DR7CT_Dr9FullyClosed_B1                              g_dataBuffer_WH_Display[1168+160+9-32] & bit10
#define DR7CT_Dr9EmUnlock_B1                                 g_dataBuffer_WH_Display[1168+160+9-32] & bit11
#define DR7CT_Dr9Isolated_B1                                 g_dataBuffer_WH_Display[1168+160+9-32] & bit12
#define DR7CT_Dr9ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1168+160+9-32] & bit13)||(g_dataBuffer_WH_Display[1168+160+9-32] & bit14))
#define DR7CT_Door9SetOK_B1                                 g_dataBuffer_WH_Display[1168+160+9-32] & bit15
#define DR7CT_Dr10NotFullyClosed_B1                           g_dataBuffer_WH_Display[1168+160+10-32] & bit9
#define DR7CT_Dr10FullyClosed_B1                              g_dataBuffer_WH_Display[1168+160+10-32] & bit10
#define DR7CT_Dr10EmUnlock_B1                                 g_dataBuffer_WH_Display[1168+160+10-32] & bit11
#define DR7CT_Dr10Isolated_B1                                 g_dataBuffer_WH_Display[1168+160+10-32] & bit12
#define DR7CT_Dr10ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1168+160+10-32] & bit13)||(g_dataBuffer_WH_Display[1168+160+10-32] & bit14))
#define DR7CT_Door10SetOK_B1                                 g_dataBuffer_WH_Display[1168+160+10-32] & bit15

#define DR9CT_Door1IsValid_B1                                g_dataBuffer_WH_Display[1248+160-32] & bit8
#define DR9CT_Door2IsValid_B1                                g_dataBuffer_WH_Display[1248+160-32] & bit9
#define DR9CT_Door3IsValid_B1                                g_dataBuffer_WH_Display[1248+160-32] & bit10
#define DR9CT_Door4IsValid_B1                                g_dataBuffer_WH_Display[1248+160-32] & bit11
#define DR9CT_Door5IsValid_B1                                g_dataBuffer_WH_Display[1248+160-32] & bit12
#define DR9CT_Door6IsValid_B1                                g_dataBuffer_WH_Display[1248+160-32] & bit13
#define DR9CT_Door7IsValid_B1                                g_dataBuffer_WH_Display[1248+160-32] & bit14
#define DR9CT_Door8IsValid_B1                                g_dataBuffer_WH_Display[1248+160-32] & bit15
#define DR9CT_Door9IsValid_B1                                g_dataBuffer_WH_Display[1248+160-32] & bit0
#define DR9CT_Door10IsValid_B1                                g_dataBuffer_WH_Display[1248+160-32] & bit1
#define DR9CT_Dr1NotFullyClosed_B1                           g_dataBuffer_WH_Display[1232+160+1-32] & bit9
#define DR9CT_Dr1FullyClosed_B1                              g_dataBuffer_WH_Display[1232+160+1-32] & bit10
#define DR9CT_Dr1EmUnlock_B1                                 g_dataBuffer_WH_Display[1232+160+1-32] & bit11
#define DR9CT_Dr1Isolated_B1                                 g_dataBuffer_WH_Display[1232+160+1-32] & bit12
#define DR9CT_Dr1ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1232+160+1-32] & bit13)||(g_dataBuffer_WH_Display[1232+160+1-32] & bit14))
#define DR9CT_Door1SetOK_B1                                 g_dataBuffer_WH_Display[1232+160+1-32] & bit15
#define DR9CT_Dr2NotFullyClosed_B1                           g_dataBuffer_WH_Display[1232+160+2-32] & bit9
#define DR9CT_Dr2FullyClosed_B1                              g_dataBuffer_WH_Display[1232+160+2-32] & bit10
#define DR9CT_Dr2EmUnlock_B1                                 g_dataBuffer_WH_Display[1232+160+2-32] & bit11
#define DR9CT_Dr2Isolated_B1                                 g_dataBuffer_WH_Display[1232+160+2-32] & bit12
#define DR9CT_Dr2ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1232+160+2-32] & bit13)||(g_dataBuffer_WH_Display[1232+160+2-32] & bit14))
#define DR9CT_Door2SetOK_B1                                 g_dataBuffer_WH_Display[1232+160+2-32] & bit15
#define DR9CT_Dr3NotFullyClosed_B1                           g_dataBuffer_WH_Display[1232+160+3-32] & bit9
#define DR9CT_Dr3FullyClosed_B1                              g_dataBuffer_WH_Display[1232+160+3-32] & bit10
#define DR9CT_Dr3EmUnlock_B1                                 g_dataBuffer_WH_Display[1232+160+3-32] & bit11
#define DR9CT_Dr3Isolated_B1                                 g_dataBuffer_WH_Display[1232+160+3-32] & bit12
#define DR9CT_Dr3ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1232+160+3-32] & bit13)||(g_dataBuffer_WH_Display[1232+160+3-32] & bit14))
#define DR9CT_Door3SetOK_B1                                 g_dataBuffer_WH_Display[1232+160+3-32] & bit15
#define DR9CT_Dr4NotFullyClosed_B1                           g_dataBuffer_WH_Display[1232+160+4-32] & bit9
#define DR9CT_Dr4FullyClosed_B1                              g_dataBuffer_WH_Display[1232+160+4-32] & bit10
#define DR9CT_Dr4EmUnlock_B1                                 g_dataBuffer_WH_Display[1232+160+4-32] & bit11
#define DR9CT_Dr4Isolated_B1                                 g_dataBuffer_WH_Display[1232+160+4-32] & bit12
#define DR9CT_Dr4ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1232+160+4-32] & bit13)||(g_dataBuffer_WH_Display[1232+160+4-32] & bit14))
#define DR9CT_Door4SetOK_B1                                 g_dataBuffer_WH_Display[1232+160+4-32] & bit15
#define DR9CT_Dr5NotFullyClosed_B1                           g_dataBuffer_WH_Display[1232+160+5-32] & bit9
#define DR9CT_Dr5FullyClosed_B1                              g_dataBuffer_WH_Display[1232+160+5-32] & bit10
#define DR9CT_Dr5EmUnlock_B1                                 g_dataBuffer_WH_Display[1232+160+5-32] & bit11
#define DR9CT_Dr5Isolated_B1                                 g_dataBuffer_WH_Display[1232+160+5-32] & bit12
#define DR9CT_Dr5ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1232+160+5-32] & bit13)||(g_dataBuffer_WH_Display[1232+160+5-32] & bit14))
#define DR9CT_Door5SetOK_B1                                 g_dataBuffer_WH_Display[1232+160+5-32] & bit15
#define DR9CT_Dr6NotFullyClosed_B1                           g_dataBuffer_WH_Display[1232+160+6-32] & bit9
#define DR9CT_Dr6FullyClosed_B1                              g_dataBuffer_WH_Display[1232+160+6-32] & bit10
#define DR9CT_Dr6EmUnlock_B1                                 g_dataBuffer_WH_Display[1232+160+6-32] & bit11
#define DR9CT_Dr6Isolated_B1                                 g_dataBuffer_WH_Display[1232+160+6-32] & bit12
#define DR9CT_Dr6ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1232+160+6-32] & bit13)||(g_dataBuffer_WH_Display[1232+160+6-32] & bit14))
#define DR9CT_Door6SetOK_B1                                 g_dataBuffer_WH_Display[1232+160+6-32] & bit15
#define DR9CT_Dr7NotFullyClosed_B1                           g_dataBuffer_WH_Display[1232+160+7-32] & bit9
#define DR9CT_Dr7FullyClosed_B1                              g_dataBuffer_WH_Display[1232+160+7-32] & bit10
#define DR9CT_Dr7EmUnlock_B1                                 g_dataBuffer_WH_Display[1232+160+7-32] & bit11
#define DR9CT_Dr7Isolated_B1                                 g_dataBuffer_WH_Display[1232+160+7-32] & bit12
#define DR9CT_Dr7ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1232+160+7-32] & bit13)||(g_dataBuffer_WH_Display[1232+160+7-32] & bit14))
#define DR9CT_Door7SetOK_B1                                 g_dataBuffer_WH_Display[1232+160+7-32] & bit15
#define DR9CT_Dr8NotFullyClosed_B1                           g_dataBuffer_WH_Display[1232+160+8-32] & bit9
#define DR9CT_Dr8FullyClosed_B1                              g_dataBuffer_WH_Display[1232+160+8-32] & bit10
#define DR9CT_Dr8EmUnlock_B1                                 g_dataBuffer_WH_Display[1232+160+8-32] & bit11
#define DR9CT_Dr8Isolated_B1                                 g_dataBuffer_WH_Display[1232+160+8-32] & bit12
#define DR9CT_Dr8ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1232+160+8-32] & bit13)||(g_dataBuffer_WH_Display[1232+160+8-32] & bit14))
#define DR9CT_Door8SetOK_B1                                 g_dataBuffer_WH_Display[1232+160+8-32] & bit15
#define DR9CT_Dr9NotFullyClosed_B1                           g_dataBuffer_WH_Display[1232+160+9-32] & bit9
#define DR9CT_Dr9FullyClosed_B1                              g_dataBuffer_WH_Display[1232+160+9-32] & bit10
#define DR9CT_Dr9EmUnlock_B1                                 g_dataBuffer_WH_Display[1232+160+9-32] & bit11
#define DR9CT_Dr9Isolated_B1                                 g_dataBuffer_WH_Display[1232+160+9-32] & bit12
#define DR9CT_Dr9ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1232+160+9-32] & bit13)||(g_dataBuffer_WH_Display[1232+160+9-32] & bit14))
#define DR9CT_Door9SetOK_B1                                 g_dataBuffer_WH_Display[1232+160+9-32] & bit15
#define DR9CT_Dr10NotFullyClosed_B1                           g_dataBuffer_WH_Display[1232+160+10-32] & bit9
#define DR9CT_Dr10FullyClosed_B1                              g_dataBuffer_WH_Display[1232+160+10-32] & bit10
#define DR9CT_Dr10EmUnlock_B1                                 g_dataBuffer_WH_Display[1232+160+10-32] & bit11
#define DR9CT_Dr10Isolated_B1                                 g_dataBuffer_WH_Display[1232+160+10-32] & bit12
#define DR9CT_Dr10ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1232+160+10-32] & bit13)||(g_dataBuffer_WH_Display[1232+160+10-32] & bit14))
#define DR9CT_Door10SetOK_B1                                 g_dataBuffer_WH_Display[1232+160+10-32] & bit15

#define DR11CT_Door1IsValid_B1                                g_dataBuffer_WH_Display[1312+160-32] & bit8
#define DR11CT_Door2IsValid_B1                                g_dataBuffer_WH_Display[1312+160-32] & bit9
#define DR11CT_Door3IsValid_B1                                g_dataBuffer_WH_Display[1312+160-32] & bit10
#define DR11CT_Door4IsValid_B1                                g_dataBuffer_WH_Display[1312+160-32] & bit11
#define DR11CT_Door5IsValid_B1                                g_dataBuffer_WH_Display[1312+160-32] & bit12
#define DR11CT_Door6IsValid_B1                                g_dataBuffer_WH_Display[1312+160-32] & bit13
#define DR11CT_Door7IsValid_B1                                g_dataBuffer_WH_Display[1312+160-32] & bit14
#define DR11CT_Door8IsValid_B1                                g_dataBuffer_WH_Display[1312+160-32] & bit15
#define DR11CT_Door9IsValid_B1                                g_dataBuffer_WH_Display[1312+160-32] & bit0
#define DR11CT_Door10IsValid_B1                                g_dataBuffer_WH_Display[1312+160-32] & bit1
#define DR11CT_Dr1NotFullyClosed_B1                           g_dataBuffer_WH_Display[1296+160+1-32] & bit9
#define DR11CT_Dr1FullyClosed_B1                              g_dataBuffer_WH_Display[1296+160+1-32] & bit10
#define DR11CT_Dr1EmUnlock_B1                                 g_dataBuffer_WH_Display[1296+160+1-32] & bit11
#define DR11CT_Dr1Isolated_B1                                 g_dataBuffer_WH_Display[1296+160+1-32] & bit12
#define DR11CT_Dr1ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1296+160+1-32] & bit13)||(g_dataBuffer_WH_Display[1296+160+1-32] & bit14))
#define DR11CT_Door1SetOK_B1                                 g_dataBuffer_WH_Display[1296+160+1-32] & bit15
#define DR11CT_Dr2NotFullyClosed_B1                           g_dataBuffer_WH_Display[1296+160+2-32] & bit9
#define DR11CT_Dr2FullyClosed_B1                              g_dataBuffer_WH_Display[1296+160+2-32] & bit10
#define DR11CT_Dr2EmUnlock_B1                                 g_dataBuffer_WH_Display[1296+160+2-32] & bit11
#define DR11CT_Dr2Isolated_B1                                 g_dataBuffer_WH_Display[1296+160+2-32] & bit12
#define DR11CT_Dr2ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1296+160+2-32] & bit13)||(g_dataBuffer_WH_Display[1296+160+2-32] & bit14))
#define DR11CT_Door2SetOK_B1                                 g_dataBuffer_WH_Display[1296+160+2-32] & bit15
#define DR11CT_Dr3NotFullyClosed_B1                           g_dataBuffer_WH_Display[1296+160+3-32] & bit9
#define DR11CT_Dr3FullyClosed_B1                              g_dataBuffer_WH_Display[1296+160+3-32] & bit10
#define DR11CT_Dr3EmUnlock_B1                                 g_dataBuffer_WH_Display[1296+160+3-32] & bit11
#define DR11CT_Dr3Isolated_B1                                 g_dataBuffer_WH_Display[1296+160+3-32] & bit12
#define DR11CT_Dr3ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1296+160+3-32] & bit13)||(g_dataBuffer_WH_Display[1296+160+3-32] & bit14))
#define DR11CT_Door3SetOK_B1                                 g_dataBuffer_WH_Display[1296+160+3-32] & bit15
#define DR11CT_Dr4NotFullyClosed_B1                           g_dataBuffer_WH_Display[1296+160+4-32] & bit9
#define DR11CT_Dr4FullyClosed_B1                              g_dataBuffer_WH_Display[1296+160+4-32] & bit10
#define DR11CT_Dr4EmUnlock_B1                                 g_dataBuffer_WH_Display[1296+160+4-32] & bit11
#define DR11CT_Dr4Isolated_B1                                 g_dataBuffer_WH_Display[1296+160+4-32] & bit12
#define DR11CT_Dr4ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1296+160+4-32] & bit13)||(g_dataBuffer_WH_Display[1296+160+4-32] & bit14))
#define DR11CT_Door4SetOK_B1                                 g_dataBuffer_WH_Display[1296+160+4-32] & bit15
#define DR11CT_Dr5NotFullyClosed_B1                           g_dataBuffer_WH_Display[1296+160+5-32] & bit9
#define DR11CT_Dr5FullyClosed_B1                              g_dataBuffer_WH_Display[1296+160+5-32] & bit10
#define DR11CT_Dr5EmUnlock_B1                                 g_dataBuffer_WH_Display[1296+160+5-32] & bit11
#define DR11CT_Dr5Isolated_B1                                 g_dataBuffer_WH_Display[1296+160+5-32] & bit12
#define DR11CT_Dr5ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1296+160+5-32] & bit13)||(g_dataBuffer_WH_Display[1296+160+5-32] & bit14))
#define DR11CT_Door5SetOK_B1                                 g_dataBuffer_WH_Display[1296+160+5-32] & bit15
#define DR11CT_Dr6NotFullyClosed_B1                           g_dataBuffer_WH_Display[1296+160+6-32] & bit9
#define DR11CT_Dr6FullyClosed_B1                              g_dataBuffer_WH_Display[1296+160+6-32] & bit10
#define DR11CT_Dr6EmUnlock_B1                                 g_dataBuffer_WH_Display[1296+160+6-32] & bit11
#define DR11CT_Dr6Isolated_B1                                 g_dataBuffer_WH_Display[1296+160+6-32] & bit12
#define DR11CT_Dr6ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1296+160+6-32] & bit13)||(g_dataBuffer_WH_Display[1296+160+6-32] & bit14))
#define DR11CT_Door6SetOK_B1                                 g_dataBuffer_WH_Display[1296+160+6-32] & bit15
#define DR11CT_Dr7NotFullyClosed_B1                           g_dataBuffer_WH_Display[1296+160+7-32] & bit9
#define DR11CT_Dr7FullyClosed_B1                              g_dataBuffer_WH_Display[1296+160+7-32] & bit10
#define DR11CT_Dr7EmUnlock_B1                                 g_dataBuffer_WH_Display[1296+160+7-32] & bit11
#define DR11CT_Dr7Isolated_B1                                 g_dataBuffer_WH_Display[1296+160+7-32] & bit12
#define DR11CT_Dr7ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1296+160+7-32] & bit13)||(g_dataBuffer_WH_Display[1296+160+7-32] & bit14))
#define DR11CT_Door7SetOK_B1                                 g_dataBuffer_WH_Display[1296+160+7-32] & bit15
#define DR11CT_Dr8NotFullyClosed_B1                           g_dataBuffer_WH_Display[1296+160+8-32] & bit9
#define DR11CT_Dr8FullyClosed_B1                              g_dataBuffer_WH_Display[1296+160+8-32] & bit10
#define DR11CT_Dr8EmUnlock_B1                                 g_dataBuffer_WH_Display[1296+160+8-32] & bit11
#define DR11CT_Dr8Isolated_B1                                 g_dataBuffer_WH_Display[1296+160+8-32] & bit12
#define DR11CT_Dr8ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1296+160+8-32] & bit13)||(g_dataBuffer_WH_Display[1296+160+8-32] & bit14))
#define DR11CT_Door8SetOK_B1                                 g_dataBuffer_WH_Display[1296+160+8-32] & bit15
#define DR11CT_Dr9NotFullyClosed_B1                           g_dataBuffer_WH_Display[1296+160+9-32] & bit9
#define DR11CT_Dr9FullyClosed_B1                              g_dataBuffer_WH_Display[1296+160+9-32] & bit10
#define DR11CT_Dr9EmUnlock_B1                                 g_dataBuffer_WH_Display[1296+160+9-32] & bit11
#define DR11CT_Dr9Isolated_B1                                 g_dataBuffer_WH_Display[1296+160+9-32] & bit12
#define DR11CT_Dr9ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1296+160+9-32] & bit13)||(g_dataBuffer_WH_Display[1296+160+9-32] & bit14))
#define DR11CT_Door9SetOK_B1                                 g_dataBuffer_WH_Display[1296+160+9-32] & bit15
#define DR11CT_Dr10NotFullyClosed_B1                           g_dataBuffer_WH_Display[1296+160+10-32] & bit9
#define DR11CT_Dr10FullyClosed_B1                              g_dataBuffer_WH_Display[1296+160+10-32] & bit10
#define DR11CT_Dr10EmUnlock_B1                                 g_dataBuffer_WH_Display[1296+160+10-32] & bit11
#define DR11CT_Dr10Isolated_B1                                 g_dataBuffer_WH_Display[1296+160+10-32] & bit12
#define DR11CT_Dr10ExtPreventProcess_B1                       ((g_dataBuffer_WH_Display[1296+160+10-32] & bit13)||(g_dataBuffer_WH_Display[1296+160+10-32] & bit14))
#define DR11CT_Door10SetOK_B1                                 g_dataBuffer_WH_Display[1296+160+10-32] & bit15


// RIOM DIM/DOM/PWM CH
//TC1 DIM1-4
#define RIOM1CT_AIOM1AI1_U16                         g_dataBuffer_WH_Display[32]
#define RIOM1CT_AIOM1AI2_U16                         g_dataBuffer_WH_Display[33]
#define RIOM1CT_AIOM1AI3_U16                         g_dataBuffer_WH_Display[34]
#define RIOM1CT_AIOM1AI4_U16                         g_dataBuffer_WH_Display[35]
#define RIOM1CT_AIOM1AI5_U16                         g_dataBuffer_WH_Display[36]
#define RIOM1CT_AIOM1AI6_U16                         g_dataBuffer_WH_Display[37]
#define RIOM1CT_AIOM1AI7_U16                         g_dataBuffer_WH_Display[38]
#define RIOM1CT_AIOM1AI8_U16                         g_dataBuffer_WH_Display[39]
#define RIOM1CT_PWMM1PWM1_U16                         g_dataBuffer_WH_Display[40]
#define RIOM1CT_PWMM1PWM2_U16                         g_dataBuffer_WH_Display[41]
#define RIOM1CT_DIM1DI_1_U16                        g_dataBuffer_WH_Display[32+10]
#define RIOM1CT_DIM1DI_2_U16                        g_dataBuffer_WH_Display[43]
#define RIOM1CT_DIM1DI_3_U16                        g_dataBuffer_WH_Display[44]
#define RIOM1CT_DIM1DI_4_U16                        g_dataBuffer_WH_Display[45]
#define RIOM1CT_DIM1DI_5_U16                        g_dataBuffer_WH_Display[46]
//0x112
#define RIOM1CT_DIM1DI_11_U16                        g_dataBuffer_WH_Display[2208+10]
#define RIOM1CT_DIM1DI_12_U16                        g_dataBuffer_WH_Display[2208+11]

#define RIOM1CT_DIM1DI24_B1                        g_dataBuffer_WH_Display[32+10]& bit7
#define RIOM1CT_DIM1DI23_B1                        g_dataBuffer_WH_Display[32+10]& bit6
#define RIOM1CT_DIM1DI22_B1                        g_dataBuffer_WH_Display[32+10]& bit5
#define RIOM1CT_DIM1DI21_B1                        g_dataBuffer_WH_Display[32+10]& bit4
#define RIOM1CT_DIM1DI20_B1                        g_dataBuffer_WH_Display[32+10]& bit3
#define RIOM1CT_DIM1DI19_B1                        g_dataBuffer_WH_Display[32+10]& bit2
#define RIOM1CT_DIM1DI18_B1                        g_dataBuffer_WH_Display[32+10]& bit1
#define RIOM1CT_DIM1DI17_B1                        g_dataBuffer_WH_Display[32+10]& bit0
#define RIOM1CT_DIM1DI16_B1                        g_dataBuffer_WH_Display[32+10]& bit15
#define RIOM1CT_DIM1DI15_B1                        g_dataBuffer_WH_Display[32+10]& bit14
#define RIOM1CT_DIM1DI14_B1                        g_dataBuffer_WH_Display[32+10]& bit13
#define RIOM1CT_DIM1DI13_B1                        g_dataBuffer_WH_Display[32+10]& bit12
#define RIOM1CT_DIM1DI12_B1                       g_dataBuffer_WH_Display[32+10]& bit11
#define RIOM1CT_DIM1DI11_B1                       g_dataBuffer_WH_Display[32+10]& bit10
#define RIOM1CT_DIM1DI10_B1                       g_dataBuffer_WH_Display[32+10]& bit9
#define RIOM1CT_DIM1DI9_B1                       g_dataBuffer_WH_Display[32+10]& bit8
#define RIOM1CT_DIM1DI8_B1                        g_dataBuffer_WH_Display[32+11]& bit7
#define RIOM1CT_DIM1DI7_B1                        g_dataBuffer_WH_Display[32+11]& bit6
#define RIOM1CT_DIM1DI6_B1                        g_dataBuffer_WH_Display[32+11]& bit5
#define RIOM1CT_DIM1DI5_B1                        g_dataBuffer_WH_Display[32+11]& bit4
#define RIOM1CT_DIM1DI4_B1                        g_dataBuffer_WH_Display[32+11]& bit3
#define RIOM1CT_DIM1DI3_B1                        g_dataBuffer_WH_Display[32+11]& bit2
#define RIOM1CT_DIM1DI2_B1                        g_dataBuffer_WH_Display[32+11]& bit1
#define RIOM1CT_DIM1DI1_B1                        g_dataBuffer_WH_Display[32+11]& bit0

#define RIOM1CT_DIM2DI24_B1                        g_dataBuffer_WH_Display[32+11]& bit15
#define RIOM1CT_DIM2DI23_B1                        g_dataBuffer_WH_Display[32+11]& bit14
#define RIOM1CT_DIM2DI22_B1                        g_dataBuffer_WH_Display[32+11]& bit13
#define RIOM1CT_DIM2DI21_B1                        g_dataBuffer_WH_Display[32+11]& bit12
#define RIOM1CT_DIM2DI20_B1                       g_dataBuffer_WH_Display[32+11]& bit11
#define RIOM1CT_DIM2DI19_B1                       g_dataBuffer_WH_Display[32+11]& bit10
#define RIOM1CT_DIM2DI18_B1                       g_dataBuffer_WH_Display[32+11]& bit9
#define RIOM1CT_DIM2DI17_B1                       g_dataBuffer_WH_Display[32+11]& bit8
#define RIOM1CT_DIM2DI16_B1                        g_dataBuffer_WH_Display[32+12]& bit7
#define RIOM1CT_DIM2DI15_B1                        g_dataBuffer_WH_Display[32+12]& bit6
#define RIOM1CT_DIM2DI14_B1                        g_dataBuffer_WH_Display[32+12]& bit5
#define RIOM1CT_DIM2DI13_B1                        g_dataBuffer_WH_Display[32+12]& bit4
#define RIOM1CT_DIM2DI12_B1                       g_dataBuffer_WH_Display[32+12]& bit3
#define RIOM1CT_DIM2DI11_B1                       g_dataBuffer_WH_Display[32+12]& bit2
#define RIOM1CT_DIM2DI10_B1                       g_dataBuffer_WH_Display[32+12]& bit1
#define RIOM1CT_DIM2DI9_B1                       g_dataBuffer_WH_Display[32+12]& bit0
#define RIOM1CT_DIM2DI8_B1                        g_dataBuffer_WH_Display[32+12]& bit15
#define RIOM1CT_DIM2DI7_B1                        g_dataBuffer_WH_Display[32+12]& bit14
#define RIOM1CT_DIM2DI6_B1                        g_dataBuffer_WH_Display[32+12]& bit13
#define RIOM1CT_DIM2DI5_B1                        g_dataBuffer_WH_Display[32+12]& bit12
#define RIOM1CT_DIM2DI4_B1                        g_dataBuffer_WH_Display[32+12]& bit11
#define RIOM1CT_DIM2DI3_B1                        g_dataBuffer_WH_Display[32+12]& bit10
#define RIOM1CT_DIM2DI2_B1                        g_dataBuffer_WH_Display[32+12]& bit9
#define RIOM1CT_DIM2DI1_B1                        g_dataBuffer_WH_Display[32+12]& bit8

#define RIOM1CT_DIM3DI24_B1                        g_dataBuffer_WH_Display[32+13]& bit7
#define RIOM1CT_DIM3DI23_B1                        g_dataBuffer_WH_Display[32+13]& bit6
#define RIOM1CT_DIM3DI22_B1                        g_dataBuffer_WH_Display[32+13]& bit5
#define RIOM1CT_DIM3DI21_B1                        g_dataBuffer_WH_Display[32+13]& bit4
#define RIOM1CT_DIM3DI20_B1                        g_dataBuffer_WH_Display[32+13]& bit3
#define RIOM1CT_DIM3DI19_B1                        g_dataBuffer_WH_Display[32+13]& bit2
#define RIOM1CT_DIM3DI18_B1                        g_dataBuffer_WH_Display[32+13]& bit1
#define RIOM1CT_DIM3DI17_B1                        g_dataBuffer_WH_Display[32+13]& bit0
#define RIOM1CT_DIM3DI16_B1                        g_dataBuffer_WH_Display[32+13]& bit15
#define RIOM1CT_DIM3DI15_B1                        g_dataBuffer_WH_Display[32+13]& bit14
#define RIOM1CT_DIM3DI14_B1                        g_dataBuffer_WH_Display[32+13]& bit13
#define RIOM1CT_DIM3DI13_B1                        g_dataBuffer_WH_Display[32+13]& bit12
#define RIOM1CT_DIM3DI12_B1                       g_dataBuffer_WH_Display[32+13]& bit11
#define RIOM1CT_DIM3DI11_B1                       g_dataBuffer_WH_Display[32+13]& bit10
#define RIOM1CT_DIM3DI10_B1                       g_dataBuffer_WH_Display[32+13]& bit9
#define RIOM1CT_DIM3DI9_B1                       g_dataBuffer_WH_Display[32+13]& bit8
#define RIOM1CT_DIM3DI8_B1                        g_dataBuffer_WH_Display[32+14]& bit7
#define RIOM1CT_DIM3DI7_B1                        g_dataBuffer_WH_Display[32+14]& bit6
#define RIOM1CT_DIM3DI6_B1                        g_dataBuffer_WH_Display[32+14]& bit5
#define RIOM1CT_DIM3DI5_B1                        g_dataBuffer_WH_Display[32+14]& bit4
#define RIOM1CT_DIM3DI4_B1                        g_dataBuffer_WH_Display[32+14]& bit3
#define RIOM1CT_DIM3DI3_B1                        g_dataBuffer_WH_Display[32+14]& bit2
#define RIOM1CT_DIM3DI2_B1                        g_dataBuffer_WH_Display[32+14]& bit1
#define RIOM1CT_DIM3DI1_B1                        g_dataBuffer_WH_Display[32+14]& bit0

#define RIOM1CT_DIM4DI24_B1                        g_dataBuffer_WH_Display[2208+10]& bit7
#define RIOM1CT_DIM4DI23_B1                        g_dataBuffer_WH_Display[2208+10]& bit6
#define RIOM1CT_DIM4DI22_B1                        g_dataBuffer_WH_Display[2208+10]& bit5
#define RIOM1CT_DIM4DI21_B1                        g_dataBuffer_WH_Display[2208+10]& bit4
#define RIOM1CT_DIM4DI20_B1                        g_dataBuffer_WH_Display[2208+10]& bit3
#define RIOM1CT_DIM4DI19_B1                        g_dataBuffer_WH_Display[2208+10]& bit2
#define RIOM1CT_DIM4DI18_B1                        g_dataBuffer_WH_Display[2208+10]& bit1
#define RIOM1CT_DIM4DI17_B1                        g_dataBuffer_WH_Display[2208+10]& bit0
#define RIOM1CT_DIM4DI16_B1                        g_dataBuffer_WH_Display[2208+10]& bit15
#define RIOM1CT_DIM4DI15_B1                        g_dataBuffer_WH_Display[2208+10]& bit14
#define RIOM1CT_DIM4DI14_B1                        g_dataBuffer_WH_Display[2208+10]& bit13
#define RIOM1CT_DIM4DI13_B1                        g_dataBuffer_WH_Display[2208+10]& bit12
#define RIOM1CT_DIM4DI12_B1                       g_dataBuffer_WH_Display[2208+10]& bit11
#define RIOM1CT_DIM4DI11_B1                       g_dataBuffer_WH_Display[2208+10]& bit10
#define RIOM1CT_DIM4DI10_B1                       g_dataBuffer_WH_Display[2208+10]& bit9
#define RIOM1CT_DIM4DI9_B1                        g_dataBuffer_WH_Display[2208+10]& bit8
#define RIOM1CT_DIM4DI8_B1                        g_dataBuffer_WH_Display[2208+11]& bit7
#define RIOM1CT_DIM4DI7_B1                        g_dataBuffer_WH_Display[2208+11]& bit6
#define RIOM1CT_DIM4DI6_B1                        g_dataBuffer_WH_Display[2208+11]& bit5
#define RIOM1CT_DIM4DI5_B1                        g_dataBuffer_WH_Display[2208+11]& bit4
#define RIOM1CT_DIM4DI4_B1                        g_dataBuffer_WH_Display[2208+11]& bit3
#define RIOM1CT_DIM4DI3_B1                        g_dataBuffer_WH_Display[2208+11]& bit2
#define RIOM1CT_DIM4DI2_B1                        g_dataBuffer_WH_Display[2208+11]& bit1
#define RIOM1CT_DIM4DI1_B1                        g_dataBuffer_WH_Display[2208+11]& bit0
////MP1 RIOM2 DIM1
//#define RIOM2CT_AIOM1AI1_U16                          Change_BigEen(g_dataBuffer_WH_Display[32+32])
//#define RIOM2CT_AIOM1AI2_U16                         Change_BigEen(g_dataBuffer_WH_Display[32+33])
//#define RIOM2CT_AIOM1AI3_U16                         Change_BigEen(g_dataBuffer_WH_Display[32+34])
//#define RIOM2CT_AIOM1AI4_U16                         Change_BigEen(g_dataBuffer_WH_Display[32+35])
//#define RIOM2CT_AIOM1AI5_U16                         Change_BigEen(g_dataBuffer_WH_Display[32+36])
//#define RIOM2CT_AIOM1AI6_U16                         Change_BigEen(g_dataBuffer_WH_Display[32+37])
//#define RIOM2CT_AIOM1AI7_U16                         Change_BigEen(g_dataBuffer_WH_Display[32+38])
//#define RIOM2CT_AIOM1AI8_U16                         Change_BigEen(g_dataBuffer_WH_Display[32+39])
//#define RIOM2CT_PWMM1PWM1_U16                         Change_BigEen(g_dataBuffer_WH_Display[32+40])
//#define RIOM2CT_PWMM1PWM2_U16                         Change_BigEen(g_dataBuffer_WH_Display[32+41])

#define RIOM2CT_DIM1DI_1_U16                        g_dataBuffer_WH_Display[74]
#define RIOM2CT_DIM1DI_2_U16                        g_dataBuffer_WH_Display[75]
#define RIOM2CT_DIM1DI_3_U16                        g_dataBuffer_WH_Display[76]
#define RIOM2CT_DIM1DI_4_U16                        g_dataBuffer_WH_Display[77]
#define RIOM2CT_DIM1DI_5_U16                        g_dataBuffer_WH_Display[78]
#define RIOM2CT_DIM1DI24_B1                        g_dataBuffer_WH_Display[32+42]& bit7
#define RIOM2CT_DIM1DI23_B1                        g_dataBuffer_WH_Display[32+42]& bit6
#define RIOM2CT_DIM1DI22_B1                        g_dataBuffer_WH_Display[32+42]& bit5
#define RIOM2CT_DIM1DI21_B1                        g_dataBuffer_WH_Display[32+42]& bit4
#define RIOM2CT_DIM1DI20_B1                        g_dataBuffer_WH_Display[32+42]& bit3
#define RIOM2CT_DIM1DI19_B1                        g_dataBuffer_WH_Display[32+42]& bit2
#define RIOM2CT_DIM1DI18_B1                        g_dataBuffer_WH_Display[32+42]& bit1
#define RIOM2CT_DIM1DI17_B1                        g_dataBuffer_WH_Display[32+42]& bit0
#define RIOM2CT_DIM1DI16_B1                        g_dataBuffer_WH_Display[32+42]& bit15
#define RIOM2CT_DIM1DI15_B1                        g_dataBuffer_WH_Display[32+42]& bit14
#define RIOM2CT_DIM1DI14_B1                        g_dataBuffer_WH_Display[32+42]& bit13
#define RIOM2CT_DIM1DI13_B1                        g_dataBuffer_WH_Display[32+42]& bit12
#define RIOM2CT_DIM1DI12_B1                       g_dataBuffer_WH_Display[32+42]& bit11
#define RIOM2CT_DIM1DI11_B1                       g_dataBuffer_WH_Display[32+42]& bit10
#define RIOM2CT_DIM1DI10_B1                       g_dataBuffer_WH_Display[32+42]& bit9
#define RIOM2CT_DIM1DI9_B1                       g_dataBuffer_WH_Display[32+42]& bit8
#define RIOM2CT_DIM1DI8_B1                        g_dataBuffer_WH_Display[32+43]& bit7
#define RIOM2CT_DIM1DI7_B1                        g_dataBuffer_WH_Display[32+43]& bit6
#define RIOM2CT_DIM1DI6_B1                        g_dataBuffer_WH_Display[32+43]& bit5
#define RIOM2CT_DIM1DI5_B1                        g_dataBuffer_WH_Display[32+43]& bit4
#define RIOM2CT_DIM1DI4_B1                        g_dataBuffer_WH_Display[32+43]& bit3
#define RIOM2CT_DIM1DI3_B1                        g_dataBuffer_WH_Display[32+43]& bit2
#define RIOM2CT_DIM1DI2_B1                        g_dataBuffer_WH_Display[32+43]& bit1
#define RIOM2CT_DIM1DI1_B1                        g_dataBuffer_WH_Display[32+43]& bit0
///M1 RIOM3 DIM1
#define RIOM3CT_DIM1DI_1_U16                        g_dataBuffer_WH_Display[106]
#define RIOM3CT_DIM1DI_2_U16                        g_dataBuffer_WH_Display[107]
#define RIOM3CT_DIM1DI_3_U16                        g_dataBuffer_WH_Display[108]
#define RIOM3CT_DIM1DI_4_U16                        g_dataBuffer_WH_Display[109]
#define RIOM3CT_DIM1DI_5_U16                        g_dataBuffer_WH_Display[110]
#define RIOM3CT_DIM1DI24_B1                        g_dataBuffer_WH_Display[64+42]& bit7
#define RIOM3CT_DIM1DI23_B1                        g_dataBuffer_WH_Display[64+42]& bit6
#define RIOM3CT_DIM1DI22_B1                        g_dataBuffer_WH_Display[64+42]& bit5
#define RIOM3CT_DIM1DI21_B1                        g_dataBuffer_WH_Display[64+42]& bit4
#define RIOM3CT_DIM1DI20_B1                        g_dataBuffer_WH_Display[64+42]& bit3
#define RIOM3CT_DIM1DI19_B1                        g_dataBuffer_WH_Display[64+42]& bit2
#define RIOM3CT_DIM1DI18_B1                        g_dataBuffer_WH_Display[64+42]& bit1
#define RIOM3CT_DIM1DI17_B1                        g_dataBuffer_WH_Display[64+42]& bit0
#define RIOM3CT_DIM1DI16_B1                        g_dataBuffer_WH_Display[64+42]& bit15
#define RIOM3CT_DIM1DI15_B1                        g_dataBuffer_WH_Display[64+42]& bit14
#define RIOM3CT_DIM1DI14_B1                        g_dataBuffer_WH_Display[64+42]& bit13
#define RIOM3CT_DIM1DI13_B1                        g_dataBuffer_WH_Display[64+42]& bit12
#define RIOM3CT_DIM1DI12_B1                       g_dataBuffer_WH_Display[64+42]& bit11
#define RIOM3CT_DIM1DI11_B1                       g_dataBuffer_WH_Display[64+42]& bit10
#define RIOM3CT_DIM1DI10_B1                       g_dataBuffer_WH_Display[64+42]& bit9
#define RIOM3CT_DIM1DI9_B1                       g_dataBuffer_WH_Display[64+42]& bit8
#define RIOM3CT_DIM1DI8_B1                        g_dataBuffer_WH_Display[64+43]& bit7
#define RIOM3CT_DIM1DI7_B1                        g_dataBuffer_WH_Display[64+43]& bit6
#define RIOM3CT_DIM1DI6_B1                        g_dataBuffer_WH_Display[64+43]& bit5
#define RIOM3CT_DIM1DI5_B1                        g_dataBuffer_WH_Display[64+43]& bit4
#define RIOM3CT_DIM1DI4_B1                        g_dataBuffer_WH_Display[64+43]& bit3
#define RIOM3CT_DIM1DI3_B1                        g_dataBuffer_WH_Display[64+43]& bit2
#define RIOM3CT_DIM1DI2_B1                        g_dataBuffer_WH_Display[64+43]& bit1
#define RIOM3CT_DIM1DI1_B1                        g_dataBuffer_WH_Display[64+43]& bit0
///M2 RIOM4 DIM1
#define RIOM4CT_DIM1DI_1_U16                        g_dataBuffer_WH_Display[138]
#define RIOM4CT_DIM1DI_2_U16                        g_dataBuffer_WH_Display[139]
#define RIOM4CT_DIM1DI_3_U16                        g_dataBuffer_WH_Display[140]
#define RIOM4CT_DIM1DI_4_U16                        g_dataBuffer_WH_Display[141]
#define RIOM4CT_DIM1DI_5_U16                        g_dataBuffer_WH_Display[142]
#define RIOM4CT_DIM1DI24_B1                        g_dataBuffer_WH_Display[96+42]& bit7
#define RIOM4CT_DIM1DI23_B1                        g_dataBuffer_WH_Display[96+42]& bit6
#define RIOM4CT_DIM1DI22_B1                        g_dataBuffer_WH_Display[96+42]& bit5
#define RIOM4CT_DIM1DI21_B1                        g_dataBuffer_WH_Display[96+42]& bit4
#define RIOM4CT_DIM1DI20_B1                        g_dataBuffer_WH_Display[96+42]& bit3
#define RIOM4CT_DIM1DI19_B1                        g_dataBuffer_WH_Display[96+42]& bit2
#define RIOM4CT_DIM1DI18_B1                        g_dataBuffer_WH_Display[96+42]& bit1
#define RIOM4CT_DIM1DI17_B1                        g_dataBuffer_WH_Display[96+42]& bit0
#define RIOM4CT_DIM1DI16_B1                        g_dataBuffer_WH_Display[96+42]& bit15
#define RIOM4CT_DIM1DI15_B1                        g_dataBuffer_WH_Display[96+42]& bit14
#define RIOM4CT_DIM1DI14_B1                        g_dataBuffer_WH_Display[96+42]& bit13
#define RIOM4CT_DIM1DI13_B1                        g_dataBuffer_WH_Display[96+42]& bit12
#define RIOM4CT_DIM1DI12_B1                       g_dataBuffer_WH_Display[96+42]& bit11
#define RIOM4CT_DIM1DI11_B1                       g_dataBuffer_WH_Display[96+42]& bit10
#define RIOM4CT_DIM1DI10_B1                       g_dataBuffer_WH_Display[96+42]& bit9
#define RIOM4CT_DIM1DI9_B1                        g_dataBuffer_WH_Display[96+42]& bit8
#define RIOM4CT_DIM1DI8_B1                        g_dataBuffer_WH_Display[96+43]& bit7
#define RIOM4CT_DIM1DI7_B1                        g_dataBuffer_WH_Display[96+43]& bit6
#define RIOM4CT_DIM1DI6_B1                        g_dataBuffer_WH_Display[96+43]& bit5
#define RIOM4CT_DIM1DI5_B1                        g_dataBuffer_WH_Display[96+43]& bit4
#define RIOM4CT_DIM1DI4_B1                        g_dataBuffer_WH_Display[96+43]& bit3
#define RIOM4CT_DIM1DI3_B1                        g_dataBuffer_WH_Display[96+43]& bit2
#define RIOM4CT_DIM1DI2_B1                        g_dataBuffer_WH_Display[96+43]& bit1
#define RIOM4CT_DIM1DI1_B1                        g_dataBuffer_WH_Display[96+43]& bit0
///MP2 RIOM5 DIM1
#define RIOM5CT_DIM1DI_1_U16                        g_dataBuffer_WH_Display[170]
#define RIOM5CT_DIM1DI_2_U16                        g_dataBuffer_WH_Display[171]
#define RIOM5CT_DIM1DI_3_U16                        g_dataBuffer_WH_Display[172]
#define RIOM5CT_DIM1DI_4_U16                        g_dataBuffer_WH_Display[173]
#define RIOM5CT_DIM1DI_5_U16                        g_dataBuffer_WH_Display[174]
#define RIOM5CT_DIM1DI24_B1                        g_dataBuffer_WH_Display[128+42]& bit7
#define RIOM5CT_DIM1DI23_B1                        g_dataBuffer_WH_Display[128+42]& bit6
#define RIOM5CT_DIM1DI22_B1                        g_dataBuffer_WH_Display[128+42]& bit5
#define RIOM5CT_DIM1DI21_B1                        g_dataBuffer_WH_Display[128+42]& bit4
#define RIOM5CT_DIM1DI20_B1                        g_dataBuffer_WH_Display[128+42]& bit3
#define RIOM5CT_DIM1DI19_B1                        g_dataBuffer_WH_Display[128+42]& bit2
#define RIOM5CT_DIM1DI18_B1                        g_dataBuffer_WH_Display[128+42]& bit1
#define RIOM5CT_DIM1DI17_B1                        g_dataBuffer_WH_Display[128+42]& bit0
#define RIOM5CT_DIM1DI16_B1                        g_dataBuffer_WH_Display[128+42]& bit15
#define RIOM5CT_DIM1DI15_B1                        g_dataBuffer_WH_Display[128+42]& bit14
#define RIOM5CT_DIM1DI14_B1                        g_dataBuffer_WH_Display[128+42]& bit13
#define RIOM5CT_DIM1DI13_B1                        g_dataBuffer_WH_Display[128+42]& bit12
#define RIOM5CT_DIM1DI12_B1                       g_dataBuffer_WH_Display[128+42]& bit11
#define RIOM5CT_DIM1DI11_B1                       g_dataBuffer_WH_Display[128+42]& bit10
#define RIOM5CT_DIM1DI10_B1                       g_dataBuffer_WH_Display[128+42]& bit9
#define RIOM5CT_DIM1DI9_B1                        g_dataBuffer_WH_Display[128+42]& bit8
#define RIOM5CT_DIM1DI8_B1                        g_dataBuffer_WH_Display[128+43]& bit7
#define RIOM5CT_DIM1DI7_B1                        g_dataBuffer_WH_Display[128+43]& bit6
#define RIOM5CT_DIM1DI6_B1                        g_dataBuffer_WH_Display[128+43]& bit5
#define RIOM5CT_DIM1DI5_B1                        g_dataBuffer_WH_Display[128+43]& bit4
#define RIOM5CT_DIM1DI4_B1                        g_dataBuffer_WH_Display[128+43]& bit3
#define RIOM5CT_DIM1DI3_B1                        g_dataBuffer_WH_Display[128+43]& bit2
#define RIOM5CT_DIM1DI2_B1                        g_dataBuffer_WH_Display[128+43]& bit1
#define RIOM5CT_DIM1DI1_B1                        g_dataBuffer_WH_Display[128+43]& bit0
///TC2 RIOM6 DIM1-4
#define RIOM6CT_AIOM1AI1_U16                         g_dataBuffer_WH_Display[192]
#define RIOM6CT_AIOM1AI2_U16                         g_dataBuffer_WH_Display[193]
#define RIOM6CT_AIOM1AI3_U16                         g_dataBuffer_WH_Display[194]
#define RIOM6CT_AIOM1AI4_U16                         g_dataBuffer_WH_Display[195]
#define RIOM6CT_AIOM1AI5_U16                         g_dataBuffer_WH_Display[196]
#define RIOM6CT_AIOM1AI6_U16                         g_dataBuffer_WH_Display[197]
#define RIOM6CT_AIOM1AI7_U16                         g_dataBuffer_WH_Display[198]
#define RIOM6CT_AIOM1AI8_U16                         g_dataBuffer_WH_Display[199]
#define RIOM6CT_PWMM1PWM1_U16                         g_dataBuffer_WH_Display[200]
#define RIOM6CT_PWMM1PWM2_U16                         g_dataBuffer_WH_Display[201]
#define RIOM6CT_DIM1DI_1_U16                        g_dataBuffer_WH_Display[202]
#define RIOM6CT_DIM1DI_2_U16                        g_dataBuffer_WH_Display[203]
#define RIOM6CT_DIM1DI_3_U16                        g_dataBuffer_WH_Display[204]
#define RIOM6CT_DIM1DI_4_U16                        g_dataBuffer_WH_Display[205]
#define RIOM6CT_DIM1DI_5_U16                        g_dataBuffer_WH_Display[206]

#define RIOM6CT_DIM1DI24_B1                        g_dataBuffer_WH_Display[160+42]& bit7
#define RIOM6CT_DIM1DI23_B1                        g_dataBuffer_WH_Display[160+42]& bit6
#define RIOM6CT_DIM1DI22_B1                        g_dataBuffer_WH_Display[160+42]& bit5
#define RIOM6CT_DIM1DI21_B1                        g_dataBuffer_WH_Display[160+42]& bit4
#define RIOM6CT_DIM1DI20_B1                        g_dataBuffer_WH_Display[160+42]& bit3
#define RIOM6CT_DIM1DI19_B1                        g_dataBuffer_WH_Display[160+42]& bit2
#define RIOM6CT_DIM1DI18_B1                        g_dataBuffer_WH_Display[160+42]& bit1
#define RIOM6CT_DIM1DI17_B1                        g_dataBuffer_WH_Display[160+42]& bit0
#define RIOM6CT_DIM1DI16_B1                        g_dataBuffer_WH_Display[160+42]& bit15
#define RIOM6CT_DIM1DI15_B1                        g_dataBuffer_WH_Display[160+42]& bit14
#define RIOM6CT_DIM1DI14_B1                        g_dataBuffer_WH_Display[160+42]& bit13
#define RIOM6CT_DIM1DI13_B1                        g_dataBuffer_WH_Display[160+42]& bit12
#define RIOM6CT_DIM1DI12_B1                       g_dataBuffer_WH_Display[160+42]& bit11
#define RIOM6CT_DIM1DI11_B1                       g_dataBuffer_WH_Display[160+42]& bit10
#define RIOM6CT_DIM1DI10_B1                       g_dataBuffer_WH_Display[160+42]& bit9
#define RIOM6CT_DIM1DI9_B1                        g_dataBuffer_WH_Display[160+42]& bit8
#define RIOM6CT_DIM1DI8_B1                        g_dataBuffer_WH_Display[160+43]& bit7
#define RIOM6CT_DIM1DI7_B1                        g_dataBuffer_WH_Display[160+43]& bit6
#define RIOM6CT_DIM1DI6_B1                        g_dataBuffer_WH_Display[160+43]& bit5
#define RIOM6CT_DIM1DI5_B1                        g_dataBuffer_WH_Display[160+43]& bit4
#define RIOM6CT_DIM1DI4_B1                        g_dataBuffer_WH_Display[160+43]& bit3
#define RIOM6CT_DIM1DI3_B1                        g_dataBuffer_WH_Display[160+43]& bit2
#define RIOM6CT_DIM1DI2_B1                        g_dataBuffer_WH_Display[160+43]& bit1
#define RIOM6CT_DIM1DI1_B1                        g_dataBuffer_WH_Display[160+43]& bit0

#define RIOM6CT_DIM2DI24_B1                        g_dataBuffer_WH_Display[160+43]& bit15
#define RIOM6CT_DIM2DI23_B1                        g_dataBuffer_WH_Display[160+43]& bit14
#define RIOM6CT_DIM2DI22_B1                        g_dataBuffer_WH_Display[160+43]& bit13
#define RIOM6CT_DIM2DI21_B1                        g_dataBuffer_WH_Display[160+43]& bit12
#define RIOM6CT_DIM2DI20_B1                        g_dataBuffer_WH_Display[160+43]& bit11
#define RIOM6CT_DIM2DI19_B1                        g_dataBuffer_WH_Display[160+43]& bit10
#define RIOM6CT_DIM2DI18_B1                        g_dataBuffer_WH_Display[160+43]& bit9
#define RIOM6CT_DIM2DI17_B1                        g_dataBuffer_WH_Display[160+43]& bit8
#define RIOM6CT_DIM2DI16_B1                        g_dataBuffer_WH_Display[160+44]& bit7
#define RIOM6CT_DIM2DI15_B1                        g_dataBuffer_WH_Display[160+44]& bit6
#define RIOM6CT_DIM2DI14_B1                        g_dataBuffer_WH_Display[160+44]& bit5
#define RIOM6CT_DIM2DI13_B1                        g_dataBuffer_WH_Display[160+44]& bit4
#define RIOM6CT_DIM2DI12_B1                       g_dataBuffer_WH_Display[160+44]& bit3
#define RIOM6CT_DIM2DI11_B1                       g_dataBuffer_WH_Display[160+44]& bit2
#define RIOM6CT_DIM2DI10_B1                       g_dataBuffer_WH_Display[160+44]& bit1
#define RIOM6CT_DIM2DI9_B1                        g_dataBuffer_WH_Display[160+44]& bit0
#define RIOM6CT_DIM2DI8_B1                        g_dataBuffer_WH_Display[160+44]& bit15
#define RIOM6CT_DIM2DI7_B1                        g_dataBuffer_WH_Display[160+44]& bit14
#define RIOM6CT_DIM2DI6_B1                        g_dataBuffer_WH_Display[160+44]& bit13
#define RIOM6CT_DIM2DI5_B1                        g_dataBuffer_WH_Display[160+44]& bit12
#define RIOM6CT_DIM2DI4_B1                        g_dataBuffer_WH_Display[160+44]& bit11
#define RIOM6CT_DIM2DI3_B1                        g_dataBuffer_WH_Display[160+44]& bit10
#define RIOM6CT_DIM2DI2_B1                        g_dataBuffer_WH_Display[160+44]& bit9
#define RIOM6CT_DIM2DI1_B1                        g_dataBuffer_WH_Display[160+44]& bit8

#define RIOM6CT_DIM3DI24_B1                        g_dataBuffer_WH_Display[160+45]& bit7
#define RIOM6CT_DIM3DI23_B1                        g_dataBuffer_WH_Display[160+45]& bit6
#define RIOM6CT_DIM3DI22_B1                        g_dataBuffer_WH_Display[160+45]& bit5
#define RIOM6CT_DIM3DI21_B1                        g_dataBuffer_WH_Display[160+45]& bit4
#define RIOM6CT_DIM3DI20_B1                        g_dataBuffer_WH_Display[160+45]& bit3
#define RIOM6CT_DIM3DI19_B1                        g_dataBuffer_WH_Display[160+45]& bit2
#define RIOM6CT_DIM3DI18_B1                        g_dataBuffer_WH_Display[160+45]& bit1
#define RIOM6CT_DIM3DI17_B1                        g_dataBuffer_WH_Display[160+45]& bit0
#define RIOM6CT_DIM3DI16_B1                        g_dataBuffer_WH_Display[160+45]& bit15
#define RIOM6CT_DIM3DI15_B1                        g_dataBuffer_WH_Display[160+45]& bit14
#define RIOM6CT_DIM3DI14_B1                        g_dataBuffer_WH_Display[160+45]& bit13
#define RIOM6CT_DIM3DI13_B1                        g_dataBuffer_WH_Display[160+45]& bit12
#define RIOM6CT_DIM3DI12_B1                       g_dataBuffer_WH_Display[160+45]& bit11
#define RIOM6CT_DIM3DI11_B1                       g_dataBuffer_WH_Display[160+45]& bit10
#define RIOM6CT_DIM3DI10_B1                       g_dataBuffer_WH_Display[160+45]& bit9
#define RIOM6CT_DIM3DI9_B1                        g_dataBuffer_WH_Display[160+45]& bit8
#define RIOM6CT_DIM3DI8_B1                        g_dataBuffer_WH_Display[160+46]& bit7
#define RIOM6CT_DIM3DI7_B1                        g_dataBuffer_WH_Display[160+46]& bit6
#define RIOM6CT_DIM3DI6_B1                        g_dataBuffer_WH_Display[160+46]& bit5
#define RIOM6CT_DIM3DI5_B1                        g_dataBuffer_WH_Display[160+46]& bit4
#define RIOM6CT_DIM3DI4_B1                        g_dataBuffer_WH_Display[160+46]& bit3
#define RIOM6CT_DIM3DI3_B1                        g_dataBuffer_WH_Display[160+46]& bit2
#define RIOM6CT_DIM3DI2_B1                        g_dataBuffer_WH_Display[160+46]& bit1
#define RIOM6CT_DIM3DI1_B1                        g_dataBuffer_WH_Display[160+46]& bit0

//0x162
#define RIOM6CT_DIM1DI_11_U16                        g_dataBuffer_WH_Display[2224+10]
#define RIOM6CT_DIM1DI_12_U16                        g_dataBuffer_WH_Display[2235]

#define RIOM6CT_DIM4DI24_B1                        g_dataBuffer_WH_Display[2234]& bit7
#define RIOM6CT_DIM4DI23_B1                        g_dataBuffer_WH_Display[2234]& bit6
#define RIOM6CT_DIM4DI22_B1                        g_dataBuffer_WH_Display[2234]& bit5
#define RIOM6CT_DIM4DI21_B1                        g_dataBuffer_WH_Display[2234]& bit4
#define RIOM6CT_DIM4DI20_B1                        g_dataBuffer_WH_Display[2234]& bit3
#define RIOM6CT_DIM4DI19_B1                        g_dataBuffer_WH_Display[2234]& bit2
#define RIOM6CT_DIM4DI18_B1                        g_dataBuffer_WH_Display[2234]& bit1
#define RIOM6CT_DIM4DI17_B1                        g_dataBuffer_WH_Display[2234]& bit0
#define RIOM6CT_DIM4DI16_B1                        g_dataBuffer_WH_Display[2234]& bit15
#define RIOM6CT_DIM4DI15_B1                        g_dataBuffer_WH_Display[2234]& bit14
#define RIOM6CT_DIM4DI14_B1                        g_dataBuffer_WH_Display[2234]& bit13
#define RIOM6CT_DIM4DI13_B1                        g_dataBuffer_WH_Display[2234]& bit12
#define RIOM6CT_DIM4DI12_B1                       g_dataBuffer_WH_Display[2234]& bit11
#define RIOM6CT_DIM4DI11_B1                       g_dataBuffer_WH_Display[2234]& bit10
#define RIOM6CT_DIM4DI10_B1                       g_dataBuffer_WH_Display[2234]& bit9
#define RIOM6CT_DIM4DI9_B1                        g_dataBuffer_WH_Display[2234]& bit8
#define RIOM6CT_DIM4DI8_B1                        g_dataBuffer_WH_Display[2235]& bit7
#define RIOM6CT_DIM4DI7_B1                        g_dataBuffer_WH_Display[2235]& bit6
#define RIOM6CT_DIM4DI6_B1                        g_dataBuffer_WH_Display[2235]& bit5
#define RIOM6CT_DIM4DI5_B1                        g_dataBuffer_WH_Display[2235]& bit4
#define RIOM6CT_DIM4DI4_B1                        g_dataBuffer_WH_Display[2235]& bit3
#define RIOM6CT_DIM4DI3_B1                        g_dataBuffer_WH_Display[2235]& bit2
#define RIOM6CT_DIM4DI2_B1                        g_dataBuffer_WH_Display[2235]& bit1
#define RIOM6CT_DIM4DI1_B1                        g_dataBuffer_WH_Display[2235]& bit0

// 0x118
#define CTRIOM1_GWLifeSign1_U8                         g_dataBuffer_WH_Display[1744]

#define CTRIOM1_DOM1DI_1_U16                        g_dataBuffer_WH_Display[1753]
#define CTRIOM1_DOM1DI_2_U16                        g_dataBuffer_WH_Display[1754]
#define CTRIOM1_DOM1DI_3_U16                        g_dataBuffer_WH_Display[1755]

#define CTRIOM1_DOM1DI24_B1                        g_dataBuffer_WH_Display[1753]& bit7
#define CTRIOM1_DOM1DI23_B1                        g_dataBuffer_WH_Display[1753]& bit6
#define CTRIOM1_DOM1DI22_B1                        g_dataBuffer_WH_Display[1753]& bit5
#define CTRIOM1_DOM1DI21_B1                        g_dataBuffer_WH_Display[1753]& bit4
#define CTRIOM1_DOM1DI20_B1                        g_dataBuffer_WH_Display[1753]& bit3
#define CTRIOM1_DOM1DI19_B1                        g_dataBuffer_WH_Display[1753]& bit2
#define CTRIOM1_DOM1DI18_B1                        g_dataBuffer_WH_Display[1753]& bit1
#define CTRIOM1_DOM1DI17_B1                        g_dataBuffer_WH_Display[1753]& bit0
#define CTRIOM1_DOM1DI16_B1                        g_dataBuffer_WH_Display[1753]& bit15
#define CTRIOM1_DOM1DI15_B1                        g_dataBuffer_WH_Display[1753]& bit14
#define CTRIOM1_DOM1DI14_B1                        g_dataBuffer_WH_Display[1753]& bit13
#define CTRIOM1_DOM1DI13_B1                        g_dataBuffer_WH_Display[1753]& bit12
#define CTRIOM1_DOM1DI12_B1                       g_dataBuffer_WH_Display[1753]& bit11
#define CTRIOM1_DOM1DI11_B1                       g_dataBuffer_WH_Display[1753]& bit10
#define CTRIOM1_DOM1DI10_B1                       g_dataBuffer_WH_Display[1753]& bit9
#define CTRIOM1_DOM1DI9_B1                       g_dataBuffer_WH_Display[1753]& bit8
#define CTRIOM1_DOM1DI8_B1                        g_dataBuffer_WH_Display[1754]& bit7
#define CTRIOM1_DOM1DI7_B1                        g_dataBuffer_WH_Display[1754]& bit6
#define CTRIOM1_DOM1DI6_B1                        g_dataBuffer_WH_Display[1754]& bit5
#define CTRIOM1_DOM1DI5_B1                        g_dataBuffer_WH_Display[1754]& bit4
#define CTRIOM1_DOM1DI4_B1                        g_dataBuffer_WH_Display[1754]& bit3
#define CTRIOM1_DOM1DI3_B1                        g_dataBuffer_WH_Display[1754]& bit2
#define CTRIOM1_DOM1DI2_B1                        g_dataBuffer_WH_Display[1754]& bit1
#define CTRIOM1_DOM1DI1_B1                        g_dataBuffer_WH_Display[1754]& bit0

#define CTRIOM1_DOM2DI24_B1                        g_dataBuffer_WH_Display[1754]& bit15
#define CTRIOM1_DOM2DI23_B1                        g_dataBuffer_WH_Display[1754]& bit14
#define CTRIOM1_DOM2DI22_B1                        g_dataBuffer_WH_Display[1754]& bit13
#define CTRIOM1_DOM2DI21_B1                        g_dataBuffer_WH_Display[1754]& bit12
#define CTRIOM1_DOM2DI20_B1                        g_dataBuffer_WH_Display[1754]& bit11
#define CTRIOM1_DOM2DI19_B1                        g_dataBuffer_WH_Display[1754]& bit10
#define CTRIOM1_DOM2DI18_B1                        g_dataBuffer_WH_Display[1754]& bit9
#define CTRIOM1_DOM2DI17_B1                        g_dataBuffer_WH_Display[1754]& bit8
#define CTRIOM1_DOM2DI16_B1                        g_dataBuffer_WH_Display[1755]& bit7
#define CTRIOM1_DOM2DI15_B1                        g_dataBuffer_WH_Display[1755]& bit6
#define CTRIOM1_DOM2DI14_B1                        g_dataBuffer_WH_Display[1755]& bit5
#define CTRIOM1_DOM2DI13_B1                        g_dataBuffer_WH_Display[1755]& bit4
#define CTRIOM1_DOM2DI12_B1                       g_dataBuffer_WH_Display[1755]& bit3
#define CTRIOM1_DOM2DI11_B1                       g_dataBuffer_WH_Display[1755]& bit2
#define CTRIOM1_DOM2DI10_B1                       g_dataBuffer_WH_Display[1755]& bit1
#define CTRIOM1_DOM2DI9_B1                       g_dataBuffer_WH_Display[1755]& bit0
#define CTRIOM1_DOM2DI8_B1                        g_dataBuffer_WH_Display[1755]& bit15
#define CTRIOM1_DOM2DI7_B1                        g_dataBuffer_WH_Display[1755]& bit14
#define CTRIOM1_DOM2DI6_B1                        g_dataBuffer_WH_Display[1755]& bit13
#define CTRIOM1_DOM2DI5_B1                        g_dataBuffer_WH_Display[1755]& bit12
#define CTRIOM1_DOM2DI4_B1                        g_dataBuffer_WH_Display[1755]& bit11
#define CTRIOM1_DOM2DI3_B1                        g_dataBuffer_WH_Display[1755]& bit10
#define CTRIOM1_DOM2DI2_B1                        g_dataBuffer_WH_Display[1755]& bit9
#define CTRIOM1_DOM2DI1_B1                        g_dataBuffer_WH_Display[1755]& bit8
// 0x128
#define CTRIOM2_GWLifeSign1_U8                         g_dataBuffer_WH_Display[1744+16]

#define CTRIOM2_DOM1DI_1_U16                        g_dataBuffer_WH_Display[1753+16]
#define CTRIOM2_DOM1DI_2_U16                        g_dataBuffer_WH_Display[1760+10]

#define CTRIOM2_DOM1DI24_B1                        g_dataBuffer_WH_Display[1760+9]& bit7
#define CTRIOM2_DOM1DI23_B1                        g_dataBuffer_WH_Display[1760+9]& bit6
#define CTRIOM2_DOM1DI22_B1                        g_dataBuffer_WH_Display[1760+9]& bit5
#define CTRIOM2_DOM1DI21_B1                        g_dataBuffer_WH_Display[1760+9]& bit4
#define CTRIOM2_DOM1DI20_B1                        g_dataBuffer_WH_Display[1760+9]& bit3
#define CTRIOM2_DOM1DI19_B1                        g_dataBuffer_WH_Display[1760+9]& bit2
#define CTRIOM2_DOM1DI18_B1                        g_dataBuffer_WH_Display[1760+9]& bit1
#define CTRIOM2_DOM1DI17_B1                        g_dataBuffer_WH_Display[1760+9]& bit0
#define CTRIOM2_DOM1DI16_B1                        g_dataBuffer_WH_Display[1760+9]& bit15
#define CTRIOM2_DOM1DI15_B1                        g_dataBuffer_WH_Display[1760+9]& bit14
#define CTRIOM2_DOM1DI14_B1                        g_dataBuffer_WH_Display[1760+9]& bit13
#define CTRIOM2_DOM1DI13_B1                        g_dataBuffer_WH_Display[1760+9]& bit12
#define CTRIOM2_DOM1DI12_B1                       g_dataBuffer_WH_Display[1760+9]& bit11
#define CTRIOM2_DOM1DI11_B1                       g_dataBuffer_WH_Display[1760+9]& bit10
#define CTRIOM2_DOM1DI10_B1                       g_dataBuffer_WH_Display[1760+9]& bit9
#define CTRIOM2_DOM1DI9_B1                       g_dataBuffer_WH_Display[1760+9]& bit8
#define CTRIOM2_DOM1DI8_B1                        g_dataBuffer_WH_Display[1760+10]& bit7
#define CTRIOM2_DOM1DI7_B1                        g_dataBuffer_WH_Display[1760+10]& bit6
#define CTRIOM2_DOM1DI6_B1                        g_dataBuffer_WH_Display[1760+10]& bit5
#define CTRIOM2_DOM1DI5_B1                        g_dataBuffer_WH_Display[1760+10]& bit4
#define CTRIOM2_DOM1DI4_B1                        g_dataBuffer_WH_Display[1760+10]& bit3
#define CTRIOM2_DOM1DI3_B1                        g_dataBuffer_WH_Display[1760+10]& bit2
#define CTRIOM2_DOM1DI2_B1                        g_dataBuffer_WH_Display[1760+10]& bit1
#define CTRIOM2_DOM1DI1_B1                        g_dataBuffer_WH_Display[1760+10]& bit0

// 0x138
#define CTRIOM3_GWLifeSign1_U8                         g_dataBuffer_WH_Display[1744+32]

#define CTRIOM3_DOM1DI_1_U16                        g_dataBuffer_WH_Display[1753+32]
#define CTRIOM3_DOM1DI_2_U16                        g_dataBuffer_WH_Display[1754+32]

#define CTRIOM3_DOM1DI24_B1                        g_dataBuffer_WH_Display[1753+32]& bit7
#define CTRIOM3_DOM1DI23_B1                        g_dataBuffer_WH_Display[1753+32]& bit6
#define CTRIOM3_DOM1DI22_B1                        g_dataBuffer_WH_Display[1753+32]& bit5
#define CTRIOM3_DOM1DI21_B1                        g_dataBuffer_WH_Display[1753+32]& bit4
#define CTRIOM3_DOM1DI20_B1                        g_dataBuffer_WH_Display[1753+32]& bit3
#define CTRIOM3_DOM1DI19_B1                        g_dataBuffer_WH_Display[1753+32]& bit2
#define CTRIOM3_DOM1DI18_B1                        g_dataBuffer_WH_Display[1753+32]& bit1
#define CTRIOM3_DOM1DI17_B1                        g_dataBuffer_WH_Display[1753+32]& bit0
#define CTRIOM3_DOM1DI16_B1                        g_dataBuffer_WH_Display[1753+32]& bit15
#define CTRIOM3_DOM1DI15_B1                        g_dataBuffer_WH_Display[1753+32]& bit14
#define CTRIOM3_DOM1DI14_B1                        g_dataBuffer_WH_Display[1753+32]& bit13
#define CTRIOM3_DOM1DI13_B1                        g_dataBuffer_WH_Display[1753+32]& bit12
#define CTRIOM3_DOM1DI12_B1                       g_dataBuffer_WH_Display[1753+32]& bit11
#define CTRIOM3_DOM1DI11_B1                       g_dataBuffer_WH_Display[1753+32]& bit10
#define CTRIOM3_DOM1DI10_B1                       g_dataBuffer_WH_Display[1753+32]& bit9
#define CTRIOM3_DOM1DI9_B1                       g_dataBuffer_WH_Display[1753+32]& bit8
#define CTRIOM3_DOM1DI8_B1                        g_dataBuffer_WH_Display[1754+32]& bit7
#define CTRIOM3_DOM1DI7_B1                        g_dataBuffer_WH_Display[1754+32]& bit6
#define CTRIOM3_DOM1DI6_B1                        g_dataBuffer_WH_Display[1754+32]& bit5
#define CTRIOM3_DOM1DI5_B1                        g_dataBuffer_WH_Display[1754+32]& bit4
#define CTRIOM3_DOM1DI4_B1                        g_dataBuffer_WH_Display[1754+32]& bit3
#define CTRIOM3_DOM1DI3_B1                        g_dataBuffer_WH_Display[1754+32]& bit2
#define CTRIOM3_DOM1DI2_B1                        g_dataBuffer_WH_Display[1754+32]& bit1
#define CTRIOM3_DOM1DI1_B1                        g_dataBuffer_WH_Display[1754+32]& bit0

// 0x148
#define CTRIOM4_GWLifeSign1_U8                         g_dataBuffer_WH_Display[1744+48]

#define CTRIOM4_DOM1DI_1_U16                        g_dataBuffer_WH_Display[1753+48]
#define CTRIOM4_DOM1DI_2_U16                        g_dataBuffer_WH_Display[1754+48]

#define CTRIOM4_DOM1DI24_B1                        g_dataBuffer_WH_Display[1753+48]& bit7
#define CTRIOM4_DOM1DI23_B1                        g_dataBuffer_WH_Display[1753+48]& bit6
#define CTRIOM4_DOM1DI22_B1                        g_dataBuffer_WH_Display[1753+48]& bit5
#define CTRIOM4_DOM1DI21_B1                        g_dataBuffer_WH_Display[1753+48]& bit4
#define CTRIOM4_DOM1DI20_B1                        g_dataBuffer_WH_Display[1753+48]& bit3
#define CTRIOM4_DOM1DI19_B1                        g_dataBuffer_WH_Display[1753+48]& bit2
#define CTRIOM4_DOM1DI18_B1                        g_dataBuffer_WH_Display[1753+48]& bit1
#define CTRIOM4_DOM1DI17_B1                        g_dataBuffer_WH_Display[1753+48]& bit0
#define CTRIOM4_DOM1DI16_B1                        g_dataBuffer_WH_Display[1753+48]& bit15
#define CTRIOM4_DOM1DI15_B1                        g_dataBuffer_WH_Display[1753+48]& bit14
#define CTRIOM4_DOM1DI14_B1                        g_dataBuffer_WH_Display[1753+48]& bit13
#define CTRIOM4_DOM1DI13_B1                        g_dataBuffer_WH_Display[1753+48]& bit12
#define CTRIOM4_DOM1DI12_B1                       g_dataBuffer_WH_Display[1753+48]& bit11
#define CTRIOM4_DOM1DI11_B1                       g_dataBuffer_WH_Display[1753+48]& bit10
#define CTRIOM4_DOM1DI10_B1                       g_dataBuffer_WH_Display[1753+48]& bit9
#define CTRIOM4_DOM1DI9_B1                       g_dataBuffer_WH_Display[1753+48]& bit8
#define CTRIOM4_DOM1DI8_B1                        g_dataBuffer_WH_Display[1754+48]& bit7
#define CTRIOM4_DOM1DI7_B1                        g_dataBuffer_WH_Display[1754+48]& bit6
#define CTRIOM4_DOM1DI6_B1                        g_dataBuffer_WH_Display[1754+48]& bit5
#define CTRIOM4_DOM1DI5_B1                        g_dataBuffer_WH_Display[1754+48]& bit4
#define CTRIOM4_DOM1DI4_B1                        g_dataBuffer_WH_Display[1754+48]& bit3
#define CTRIOM4_DOM1DI3_B1                        g_dataBuffer_WH_Display[1754+48]& bit2
#define CTRIOM4_DOM1DI2_B1                        g_dataBuffer_WH_Display[1754+48]& bit1
#define CTRIOM4_DOM1DI1_B1                        g_dataBuffer_WH_Display[1754+48]& bit0

// 0x158
#define CTRIOM5_GWLifeSign1_U8                         g_dataBuffer_WH_Display[1744+64]

#define CTRIOM5_DOM1DI_1_U16                        g_dataBuffer_WH_Display[1753+64]
#define CTRIOM5_DOM1DI_2_U16                        g_dataBuffer_WH_Display[1754+64]

#define CTRIOM5_DOM1DI24_B1                        g_dataBuffer_WH_Display[1753+64]& bit7
#define CTRIOM5_DOM1DI23_B1                        g_dataBuffer_WH_Display[1753+64]& bit6
#define CTRIOM5_DOM1DI22_B1                        g_dataBuffer_WH_Display[1753+64]& bit5
#define CTRIOM5_DOM1DI21_B1                        g_dataBuffer_WH_Display[1753+64]& bit4
#define CTRIOM5_DOM1DI20_B1                        g_dataBuffer_WH_Display[1753+64]& bit3
#define CTRIOM5_DOM1DI19_B1                        g_dataBuffer_WH_Display[1753+64]& bit2
#define CTRIOM5_DOM1DI18_B1                        g_dataBuffer_WH_Display[1753+64]& bit1
#define CTRIOM5_DOM1DI17_B1                        g_dataBuffer_WH_Display[1753+64]& bit0
#define CTRIOM5_DOM1DI16_B1                        g_dataBuffer_WH_Display[1753+64]& bit15
#define CTRIOM5_DOM1DI15_B1                        g_dataBuffer_WH_Display[1753+64]& bit14
#define CTRIOM5_DOM1DI14_B1                        g_dataBuffer_WH_Display[1753+64]& bit13
#define CTRIOM5_DOM1DI13_B1                        g_dataBuffer_WH_Display[1753+64]& bit12
#define CTRIOM5_DOM1DI12_B1                       g_dataBuffer_WH_Display[1753+64]& bit11
#define CTRIOM5_DOM1DI11_B1                       g_dataBuffer_WH_Display[1753+64]& bit10
#define CTRIOM5_DOM1DI10_B1                       g_dataBuffer_WH_Display[1753+64]& bit9
#define CTRIOM5_DOM1DI9_B1                       g_dataBuffer_WH_Display[1753+64]& bit8
#define CTRIOM5_DOM1DI8_B1                        g_dataBuffer_WH_Display[1754+64]& bit7
#define CTRIOM5_DOM1DI7_B1                        g_dataBuffer_WH_Display[1754+64]& bit6
#define CTRIOM5_DOM1DI6_B1                        g_dataBuffer_WH_Display[1754+64]& bit5
#define CTRIOM5_DOM1DI5_B1                        g_dataBuffer_WH_Display[1754+64]& bit4
#define CTRIOM5_DOM1DI4_B1                        g_dataBuffer_WH_Display[1754+64]& bit3
#define CTRIOM5_DOM1DI3_B1                        g_dataBuffer_WH_Display[1754+64]& bit2
#define CTRIOM5_DOM1DI2_B1                        g_dataBuffer_WH_Display[1754+64]& bit1
#define CTRIOM5_DOM1DI1_B1                        g_dataBuffer_WH_Display[1754+64]& bit0


// 0x168
#define CTRIOM6_GWLifeSign1_U8                         g_dataBuffer_WH_Display[1744+80]

#define CTRIOM6_DOM1DI_1_U16                        g_dataBuffer_WH_Display[1753+80]
#define CTRIOM6_DOM1DI_2_U16                        g_dataBuffer_WH_Display[1754+80]
#define CTRIOM6_DOM1DI_3_U16                        g_dataBuffer_WH_Display[1755+80]

#define CTRIOM6_DOM1DI24_B1                        g_dataBuffer_WH_Display[1753+80]& bit7
#define CTRIOM6_DOM1DI23_B1                        g_dataBuffer_WH_Display[1753+80]& bit6
#define CTRIOM6_DOM1DI22_B1                        g_dataBuffer_WH_Display[1753+80]& bit5
#define CTRIOM6_DOM1DI21_B1                        g_dataBuffer_WH_Display[1753+80]& bit4
#define CTRIOM6_DOM1DI20_B1                        g_dataBuffer_WH_Display[1753+80]& bit3
#define CTRIOM6_DOM1DI19_B1                        g_dataBuffer_WH_Display[1753+80]& bit2
#define CTRIOM6_DOM1DI18_B1                        g_dataBuffer_WH_Display[1753+80]& bit1
#define CTRIOM6_DOM1DI17_B1                        g_dataBuffer_WH_Display[1753+80]& bit0
#define CTRIOM6_DOM1DI16_B1                        g_dataBuffer_WH_Display[1753+80]& bit15
#define CTRIOM6_DOM1DI15_B1                        g_dataBuffer_WH_Display[1753+80]& bit14
#define CTRIOM6_DOM1DI14_B1                        g_dataBuffer_WH_Display[1753+80]& bit13
#define CTRIOM6_DOM1DI13_B1                        g_dataBuffer_WH_Display[1753+80]& bit12
#define CTRIOM6_DOM1DI12_B1                       g_dataBuffer_WH_Display[1753+80]& bit11
#define CTRIOM6_DOM1DI11_B1                       g_dataBuffer_WH_Display[1753+80]& bit10
#define CTRIOM6_DOM1DI10_B1                       g_dataBuffer_WH_Display[1753+80]& bit9
#define CTRIOM6_DOM1DI9_B1                       g_dataBuffer_WH_Display[1753+80]& bit8
#define CTRIOM6_DOM1DI8_B1                        g_dataBuffer_WH_Display[1754+80]& bit7
#define CTRIOM6_DOM1DI7_B1                        g_dataBuffer_WH_Display[1754+80]& bit6
#define CTRIOM6_DOM1DI6_B1                        g_dataBuffer_WH_Display[1754+80]& bit5
#define CTRIOM6_DOM1DI5_B1                        g_dataBuffer_WH_Display[1754+80]& bit4
#define CTRIOM6_DOM1DI4_B1                        g_dataBuffer_WH_Display[1754+80]& bit3
#define CTRIOM6_DOM1DI3_B1                        g_dataBuffer_WH_Display[1754+80]& bit2
#define CTRIOM6_DOM1DI2_B1                        g_dataBuffer_WH_Display[1754+80]& bit1
#define CTRIOM6_DOM1DI1_B1                        g_dataBuffer_WH_Display[1754+80]& bit0

#define CTRIOM6_DOM2DI24_B1                        g_dataBuffer_WH_Display[1754+80]& bit15
#define CTRIOM6_DOM2DI23_B1                        g_dataBuffer_WH_Display[1754+80]& bit14
#define CTRIOM6_DOM2DI22_B1                        g_dataBuffer_WH_Display[1754+80]& bit13
#define CTRIOM6_DOM2DI21_B1                        g_dataBuffer_WH_Display[1754+80]& bit12
#define CTRIOM6_DOM2DI20_B1                        g_dataBuffer_WH_Display[1754+80]& bit11
#define CTRIOM6_DOM2DI19_B1                        g_dataBuffer_WH_Display[1754+80]& bit10
#define CTRIOM6_DOM2DI18_B1                        g_dataBuffer_WH_Display[1754+80]& bit9
#define CTRIOM6_DOM2DI17_B1                        g_dataBuffer_WH_Display[1754+80]& bit8
#define CTRIOM6_DOM2DI16_B1                        g_dataBuffer_WH_Display[1755+80]& bit7
#define CTRIOM6_DOM2DI15_B1                        g_dataBuffer_WH_Display[1755+80]& bit6
#define CTRIOM6_DOM2DI14_B1                        g_dataBuffer_WH_Display[1755+80]& bit5
#define CTRIOM6_DOM2DI13_B1                        g_dataBuffer_WH_Display[1755+80]& bit4
#define CTRIOM6_DOM2DI12_B1                       g_dataBuffer_WH_Display[1755+80]& bit3
#define CTRIOM6_DOM2DI11_B1                       g_dataBuffer_WH_Display[1755+80]& bit2
#define CTRIOM6_DOM2DI10_B1                       g_dataBuffer_WH_Display[1755+80]& bit1
#define CTRIOM6_DOM2DI9_B1                       g_dataBuffer_WH_Display[1755+80]& bit0
#define CTRIOM6_DOM2DI8_B1                        g_dataBuffer_WH_Display[1755+80]& bit15
#define CTRIOM6_DOM2DI7_B1                        g_dataBuffer_WH_Display[1755+80]& bit14
#define CTRIOM6_DOM2DI6_B1                        g_dataBuffer_WH_Display[1755+80]& bit13
#define CTRIOM6_DOM2DI5_B1                        g_dataBuffer_WH_Display[1755+80]& bit12
#define CTRIOM6_DOM2DI4_B1                        g_dataBuffer_WH_Display[1755+80]& bit11
#define CTRIOM6_DOM2DI3_B1                        g_dataBuffer_WH_Display[1755+80]& bit10
#define CTRIOM6_DOM2DI2_B1                        g_dataBuffer_WH_Display[1755+80]& bit9
#define CTRIOM6_DOM2DI1_B1                        g_dataBuffer_WH_Display[1755+80]& bit8

//***********************WuHan_Line_6_DataBuffer*******************************

// 0xF
//#define CTALL_LifeSign_U16                             g_dataBuffer_Display[0]
//#define CTALL_Month_U8                                 g_dataBuffer_Display[1]%256
//#define CTALL_Year_U8                                  g_dataBuffer_Display[1]/256
//#define CTALL_Hour_U8                                  g_dataBuffer_Display[2]%256
//#define CTALL_Day_U8                                   g_dataBuffer_Display[2]/256
//#define CTALL_Second_U8                                g_dataBuffer_Display[3]%256
//#define CTALL_Minite_U8                                g_dataBuffer_Display[3]/256
//#define CTALL_TrainNumber_U16                          g_dataBuffer_Display[4]


/*// 0x110
#define RIOM1CT_GWLifeSign1_U8                         g_dataBuffer_Display[16]%256
#define RIOM1CT_GWVersion_U8                           g_dataBuffer_Display[16]/256
#define RIOM1CT_DIVersion_U8                           g_dataBuffer_Display[16+1]%256
#define RIOM1CT_DOVersion_U8                           g_dataBuffer_Display[16+1]/256
#define RIOM1CT_AIVersion_U8                           g_dataBuffer_Display[16+2]%256

#define RIOM1CT_PWMVersion_U8                          g_dataBuffer_Display[16+2]/256

#define RIOM1CT_DIM1LifeSign_U8                        g_dataBuffer_Display[16+3]%256
#define RIOM1CT_DIM2LifeSign_U8                        g_dataBuffer_Display[16+3]/256
#define RIOM1CT_DIM3LifeSign_U8                        g_dataBuffer_Display[16+4]%256
#define RIOM1CT_DIM4LifeSign_U8                        g_dataBuffer_Display[16+4]/256

#define RIOM1CT_DIM5LifeSign_U8                         g_dataBuffer_Display[21]%256
#define RIOM1CT_DIM6LifeSign_U8                           g_dataBuffer_Display[21]/256
#define RIOM1CT_DIM7LifeSign_U8                           g_dataBuffer_Display[22]%256
#define RIOM1CT_DIM8LifeSign_U8                           g_dataBuffer_Display[22]/256

#define RIOM1CT_DOM1LifeSign_U8                           g_dataBuffer_Display[16+7]%256

#define RIOM1CT_DOM2LifeSign_U8                          g_dataBuffer_Display[23]/256
#define RIOM1CT_DOM3LifeSign_U8                        g_dataBuffer_Display[24]%256
#define RIOM1CT_DOM4LifeSign_U8                        g_dataBuffer_Display[24]/256

#define RIOM1CT_AIOM1LifeSign_U8                        g_dataBuffer_Display[16+9]%256

#define RIOM1CT_AIOM2LifeSign_U8                        g_dataBuffer_Display[25]/256
#define RIOM1CT_AIOM3LifeSign_U8                        g_dataBuffer_Display[26]%256
#define RIOM1CT_AIOM4LifeSign_U8                        g_dataBuffer_Display[26]/256
#define RIOM1CT_PWMM1LifeSign_U8                        g_dataBuffer_Display[27]%256
#define RIOM1CT_PWMM2LifeSign_U8                        g_dataBuffer_Display[27]/256

#define RIOM1CT_DIM1Online_B1                        g_dataBuffer_Display[16+12]& bit7
#define RIOM1CT_DIM2Online_B1                        g_dataBuffer_Display[16+12]& bit6
#define RIOM1CT_DIM3Online_B1                        g_dataBuffer_Display[16+12]& bit5
#define RIOM1CT_DIM4Online_B1                        g_dataBuffer_Display[16+12]& bit4

#define RIOM1CT_DIM5Online_B1                        g_dataBuffer_Display[28]& bit3
#define RIOM1CT_DIM6Online_B1                        g_dataBuffer_Display[28]& bit2
#define RIOM1CT_DIM7Online_B1                        g_dataBuffer_Display[28]& bit1
#define RIOM1CT_DIM8Online_B1                        g_dataBuffer_Display[28]& bit0

#define RIOM1CT_DOM1Online_B1                        g_dataBuffer_Display[16+12]& bit15

#define RIOM1CT_DOM2Online_B1                        g_dataBuffer_Display[28]& bit14
#define RIOM1CT_DOM3Online_B1                        g_dataBuffer_Display[28]& bit13
#define RIOM1CT_DOM4Online_B1                        g_dataBuffer_Display[28]& bit12

#define RIOM1CT_AIOM1Online_B1                       g_dataBuffer_Display[16+12]& bit11

#define RIOM1CT_AIOM2Online_B1                       g_dataBuffer_Display[28]& bit10
#define RIOM1CT_AIOM3Online_B1                       g_dataBuffer_Display[28]& bit9
#define RIOM1CT_AIOM4Online_B1                       g_dataBuffer_Display[28]& bit8
#define RIOM1CT_PWMM1Online_B1                       g_dataBuffer_Display[29]& bit7
#define RIOM1CT_PWMM2Online_B1                       g_dataBuffer_Display[29]& bit6

#define RIOM1CT_LineStatus_U8                        g_dataBuffer_Display[16+15]%256
#define RIOM1CT_LAT_B1                               g_dataBuffer_Display[16+15]& bit7
#define RIOM1CT_RLD_B1                               g_dataBuffer_Display[16+15]& bit6
#define RIOM1CT_KeyNumber_U8                         g_dataBuffer_Display[16+15]/256
// 0x111
#define RIOM1CT_AIOM1AI1_U16                         g_dataBuffer_Display[32]
#define RIOM1CT_AIOM1AI2_U16                         g_dataBuffer_Display[33]
#define RIOM1CT_AIOM1AI3_U16                         g_dataBuffer_Display[34]
#define RIOM1CT_AIOM1AI4_U16                         g_dataBuffer_Display[35]
#define RIOM1CT_AIOM1AI5_U16                         g_dataBuffer_Display[36]
#define RIOM1CT_AIOM1AI6_U16                         g_dataBuffer_Display[37]
#define RIOM1CT_AIOM1AI7_U16                         g_dataBuffer_Display[38]
#define RIOM1CT_AIOM1AI8_U16                         g_dataBuffer_Display[39]
#define RIOM1CT_PWMM1PWM1_U16                         g_dataBuffer_Display[40]
#define RIOM1CT_PWMM1PWM2_U16                         g_dataBuffer_Display[41]

#define RIOM1CT_DIM1DI_1_U16                        g_dataBuffer_Display[32+10]
#define RIOM1CT_DIM1DI_2_U16                        g_dataBuffer_Display[43]
#define RIOM1CT_DIM1DI_3_U16                        g_dataBuffer_Display[44]
#define RIOM1CT_DIM1DI_4_U16                        g_dataBuffer_Display[45]
#define RIOM1CT_DIM1DI_5_U16                        g_dataBuffer_Display[46]


#define RIOM1CT_DIM1DI24_B1                        g_dataBuffer_Display[32+10]& bit7
#define RIOM1CT_DIM1DI23_B1                        g_dataBuffer_Display[32+10]& bit6
#define RIOM1CT_DIM1DI22_B1                        g_dataBuffer_Display[32+10]& bit5
#define RIOM1CT_DIM1DI21_B1                        g_dataBuffer_Display[32+10]& bit4
#define RIOM1CT_DIM1DI20_B1                        g_dataBuffer_Display[32+10]& bit3
#define RIOM1CT_DIM1DI19_B1                        g_dataBuffer_Display[32+10]& bit2
#define RIOM1CT_DIM1DI18_B1                        g_dataBuffer_Display[32+10]& bit1
#define RIOM1CT_DIM1DI17_B1                        g_dataBuffer_Display[32+10]& bit0
#define RIOM1CT_DIM1DI16_B1                        g_dataBuffer_Display[32+10]& bit15
#define RIOM1CT_DIM1DI15_B1                        g_dataBuffer_Display[32+10]& bit14
#define RIOM1CT_DIM1DI14_B1                        g_dataBuffer_Display[32+10]& bit13
#define RIOM1CT_DIM1DI13_B1                        g_dataBuffer_Display[32+10]& bit12
#define RIOM1CT_DIM1DI12_B1                       g_dataBuffer_Display[32+10]& bit11
#define RIOM1CT_DIM1DI11_B1                       g_dataBuffer_Display[32+10]& bit10
#define RIOM1CT_DIM1DI10_B1                       g_dataBuffer_Display[32+10]& bit9
#define RIOM1CT_DIM1DI9_B1                       g_dataBuffer_Display[32+10]& bit8
#define RIOM1CT_DIM1DI8_B1                        g_dataBuffer_Display[32+11]& bit7
#define RIOM1CT_DIM1DI7_B1                        g_dataBuffer_Display[32+11]& bit6
#define RIOM1CT_DIM1DI6_B1                        g_dataBuffer_Display[32+11]& bit5
#define RIOM1CT_DIM1DI5_B1                        g_dataBuffer_Display[32+11]& bit4
#define RIOM1CT_DIM1DI4_B1                        g_dataBuffer_Display[32+11]& bit3
#define RIOM1CT_DIM1DI3_B1                        g_dataBuffer_Display[32+11]& bit2
#define RIOM1CT_DIM1DI2_B1                        g_dataBuffer_Display[32+11]& bit1
#define RIOM1CT_DIM1DI1_B1                        g_dataBuffer_Display[32+11]& bit0

#define RIOM1CT_DIM2DI24_B1                        g_dataBuffer_Display[32+11]& bit15
#define RIOM1CT_DIM2DI23_B1                        g_dataBuffer_Display[32+11]& bit14
#define RIOM1CT_DIM2DI22_B1                        g_dataBuffer_Display[32+11]& bit13
#define RIOM1CT_DIM2DI21_B1                        g_dataBuffer_Display[32+11]& bit12
#define RIOM1CT_DIM2DI20_B1                       g_dataBuffer_Display[32+11]& bit11
#define RIOM1CT_DIM2DI19_B1                       g_dataBuffer_Display[32+11]& bit10
#define RIOM1CT_DIM2DI18_B1                       g_dataBuffer_Display[32+11]& bit9
#define RIOM1CT_DIM2DI17_B1                       g_dataBuffer_Display[32+11]& bit8
#define RIOM1CT_DIM2DI16_B1                        g_dataBuffer_Display[32+12]& bit7
#define RIOM1CT_DIM2DI15_B1                        g_dataBuffer_Display[32+12]& bit6
#define RIOM1CT_DIM2DI14_B1                        g_dataBuffer_Display[32+12]& bit5
#define RIOM1CT_DIM2DI13_B1                        g_dataBuffer_Display[32+12]& bit4
#define RIOM1CT_DIM2DI12_B1                       g_dataBuffer_Display[32+12]& bit3
#define RIOM1CT_DIM2DI11_B1                       g_dataBuffer_Display[32+12]& bit2
#define RIOM1CT_DIM2DI10_B1                       g_dataBuffer_Display[32+12]& bit1
#define RIOM1CT_DIM2DI9_B1                       g_dataBuffer_Display[32+12]& bit0
#define RIOM1CT_DIM2DI8_B1                        g_dataBuffer_Display[32+12]& bit15
#define RIOM1CT_DIM2DI7_B1                        g_dataBuffer_Display[32+12]& bit14
#define RIOM1CT_DIM2DI6_B1                        g_dataBuffer_Display[32+12]& bit13
#define RIOM1CT_DIM2DI5_B1                        g_dataBuffer_Display[32+12]& bit12
#define RIOM1CT_DIM2DI4_B1                        g_dataBuffer_Display[32+12]& bit11
#define RIOM1CT_DIM2DI3_B1                        g_dataBuffer_Display[32+12]& bit10
#define RIOM1CT_DIM2DI2_B1                        g_dataBuffer_Display[32+12]& bit9
#define RIOM1CT_DIM2DI1_B1                        g_dataBuffer_Display[32+12]& bit8

#define RIOM1CT_DIM3DI24_B1                        g_dataBuffer_Display[32+13]& bit7
#define RIOM1CT_DIM3DI23_B1                        g_dataBuffer_Display[32+13]& bit6
#define RIOM1CT_DIM3DI22_B1                        g_dataBuffer_Display[32+13]& bit5
#define RIOM1CT_DIM3DI21_B1                        g_dataBuffer_Display[32+13]& bit4
#define RIOM1CT_DIM3DI20_B1                        g_dataBuffer_Display[32+13]& bit3
#define RIOM1CT_DIM3DI19_B1                        g_dataBuffer_Display[32+13]& bit2
#define RIOM1CT_DIM3DI18_B1                        g_dataBuffer_Display[32+13]& bit1
#define RIOM1CT_DIM3DI17_B1                        g_dataBuffer_Display[32+13]& bit0
#define RIOM1CT_DIM3DI16_B1                        g_dataBuffer_Display[32+13]& bit15
#define RIOM1CT_DIM3DI15_B1                        g_dataBuffer_Display[32+13]& bit14
#define RIOM1CT_DIM3DI14_B1                        g_dataBuffer_Display[32+13]& bit13
#define RIOM1CT_DIM3DI13_B1                        g_dataBuffer_Display[32+13]& bit12
#define RIOM1CT_DIM3DI12_B1                       g_dataBuffer_Display[32+13]& bit11
#define RIOM1CT_DIM3DI11_B1                       g_dataBuffer_Display[32+13]& bit10
#define RIOM1CT_DIM3DI10_B1                       g_dataBuffer_Display[32+13]& bit9
#define RIOM1CT_DIM3DI9_B1                       g_dataBuffer_Display[32+13]& bit8
#define RIOM1CT_DIM3DI8_B1                        g_dataBuffer_Display[32+14]& bit7
#define RIOM1CT_DIM3DI7_B1                        g_dataBuffer_Display[32+14]& bit6
#define RIOM1CT_DIM3DI6_B1                        g_dataBuffer_Display[32+14]& bit5
#define RIOM1CT_DIM3DI5_B1                        g_dataBuffer_Display[32+14]& bit4
#define RIOM1CT_DIM3DI4_B1                        g_dataBuffer_Display[32+14]& bit3
#define RIOM1CT_DIM3DI3_B1                        g_dataBuffer_Display[32+14]& bit2
#define RIOM1CT_DIM3DI2_B1                        g_dataBuffer_Display[32+14]& bit1
#define RIOM1CT_DIM3DI1_B1                        g_dataBuffer_Display[32+14]& bit0
//0x112
#define RIOM1CT_DIM1DI_11_U16                        g_dataBuffer_Display[2192+10]
#define RIOM1CT_DIM1DI_12_U16                        g_dataBuffer_Display[2192+11]

#define RIOM1CT_DIM4DI24_B1                        g_dataBuffer_Display[2192+10]& bit7
#define RIOM1CT_DIM4DI23_B1                        g_dataBuffer_Display[2192+10]& bit6
#define RIOM1CT_DIM4DI22_B1                        g_dataBuffer_Display[2192+10]& bit5
#define RIOM1CT_DIM4DI21_B1                        g_dataBuffer_Display[2192+10]& bit4
#define RIOM1CT_DIM4DI20_B1                        g_dataBuffer_Display[2192+10]& bit3
#define RIOM1CT_DIM4DI19_B1                        g_dataBuffer_Display[2192+10]& bit2
#define RIOM1CT_DIM4DI18_B1                        g_dataBuffer_Display[2192+10]& bit1
#define RIOM1CT_DIM4DI17_B1                        g_dataBuffer_Display[2192+10]& bit0
#define RIOM1CT_DIM4DI16_B1                        g_dataBuffer_Display[2192+10]& bit15
#define RIOM1CT_DIM4DI15_B1                        g_dataBuffer_Display[2192+10]& bit14
#define RIOM1CT_DIM4DI14_B1                        g_dataBuffer_Display[2192+10]& bit13
#define RIOM1CT_DIM4DI13_B1                        g_dataBuffer_Display[2192+10]& bit12
#define RIOM1CT_DIM4DI12_B1                       g_dataBuffer_Display[2192+10]& bit11
#define RIOM1CT_DIM4DI11_B1                       g_dataBuffer_Display[2192+10]& bit10
#define RIOM1CT_DIM4DI10_B1                       g_dataBuffer_Display[2192+10]& bit9
#define RIOM1CT_DIM4DI9_B1                        g_dataBuffer_Display[2192+10]& bit8
#define RIOM1CT_DIM4DI8_B1                        g_dataBuffer_Display[2192+11]& bit7
#define RIOM1CT_DIM4DI7_B1                        g_dataBuffer_Display[2192+11]& bit6
#define RIOM1CT_DIM4DI6_B1                        g_dataBuffer_Display[2192+11]& bit5
#define RIOM1CT_DIM4DI5_B1                        g_dataBuffer_Display[2192+11]& bit4
#define RIOM1CT_DIM4DI4_B1                        g_dataBuffer_Display[2192+11]& bit3
#define RIOM1CT_DIM4DI3_B1                        g_dataBuffer_Display[2192+11]& bit2
#define RIOM1CT_DIM4DI2_B1                        g_dataBuffer_Display[2192+11]& bit1
#define RIOM1CT_DIM4DI1_B1                        g_dataBuffer_Display[2192+11]& bit0

// 0x120
#define RIOM2CT_GWLifeSign1_U8                         g_dataBuffer_Display[32+16]%256
#define RIOM2CT_GWVersion_U8                           g_dataBuffer_Display[32+16]/256
#define RIOM2CT_DIVersion_U8                           g_dataBuffer_Display[32+17]%256
#define RIOM2CT_DOVersion_U8                           g_dataBuffer_Display[32+17]/256
#define RIOM2CT_AIVersion_U8                           g_dataBuffer_Display[32+18]%256
#define RIOM2CT_PWMVersion_U8                          g_dataBuffer_Display[32+18]/256
#define RIOM2CT_DIM1LifeSign_U8                        g_dataBuffer_Display[32+19]%256
#define RIOM2CT_DIM2LifeSign_U8                        g_dataBuffer_Display[32+19]/256
#define RIOM2CT_DIM3LifeSign_U8                        g_dataBuffer_Display[32+20]%256
#define RIOM2CT_DIM4LifeSign_U8                        g_dataBuffer_Display[32+20]/256
#define RIOM2CT_DIM5LifeSign_U8                        g_dataBuffer_Display[32+21]%256
#define RIOM2CT_DIM6LifeSign_U8                           g_dataBuffer_Display[32+21]/256
#define RIOM2CT_DIM7LifeSign_U8                           g_dataBuffer_Display[32+22]%256
#define RIOM2CT_DIM8LifeSign_U8                           g_dataBuffer_Display[32+22]/256
#define RIOM2CT_DOM1LifeSign_U8                           g_dataBuffer_Display[32+23]%256
#define RIOM2CT_DOM2LifeSign_U8                          g_dataBuffer_Display[32+23]/256
#define RIOM2CT_DOM3LifeSign_U8                        g_dataBuffer_Display[32+24]%256
#define RIOM2CT_DOM4LifeSign_U8                        g_dataBuffer_Display[32+24]/256
#define RIOM2CT_AIOM1LifeSign_U8                        g_dataBuffer_Display[32+25]%256
#define RIOM2CT_AIOM2LifeSign_U8                        g_dataBuffer_Display[32+25]/256
#define RIOM2CT_AIOM3LifeSign_U8                        g_dataBuffer_Display[32+26]%256
#define RIOM2CT_AIOM4LifeSign_U8                        g_dataBuffer_Display[32+26]/256
#define RIOM2CT_PWMM1LifeSign_U8                        g_dataBuffer_Display[32+27]%256
#define RIOM2CT_PWMM2LifeSign_U8                        g_dataBuffer_Display[32+27]/256
#define RIOM2CT_DIM1Online_B1                        g_dataBuffer_Display[32+28]& bit7
#define RIOM2CT_DIM2Online_B1                        g_dataBuffer_Display[32+28]& bit6
#define RIOM2CT_DIM3Online_B1                        g_dataBuffer_Display[32+28]& bit5
#define RIOM2CT_DIM4Online_B1                        g_dataBuffer_Display[32+28]& bit4
#define RIOM2CT_DIM5Online_B1                        g_dataBuffer_Display[32+28]& bit3
#define RIOM2CT_DIM6Online_B1                        g_dataBuffer_Display[32+28]& bit2
#define RIOM2CT_DIM7Online_B1                        g_dataBuffer_Display[32+28]& bit1
#define RIOM2CT_DIM8Online_B1                        g_dataBuffer_Display[32+28]& bit0
#define RIOM2CT_DOM1Online_B1                        g_dataBuffer_Display[32+28]& bit15
#define RIOM2CT_DOM2Online_B1                        g_dataBuffer_Display[32+28]& bit14
#define RIOM2CT_DOM3Online_B1                        g_dataBuffer_Display[32+28]& bit13
#define RIOM2CT_DOM4Online_B1                        g_dataBuffer_Display[32+28]& bit12
#define RIOM2CT_AIOM1Online_B1                       g_dataBuffer_Display[32+28]& bit11
#define RIOM2CT_AIOM2Online_B1                       g_dataBuffer_Display[32+28]& bit10
#define RIOM2CT_AIOM3Online_B1                       g_dataBuffer_Display[32+28]& bit9
#define RIOM2CT_AIOM4Online_B1                       g_dataBuffer_Display[32+28]& bit8
#define RIOM2CT_PWMM1Online_B1                       g_dataBuffer_Display[32+29]& bit7
#define RIOM2CT_PWMM2Online_B1                       g_dataBuffer_Display[32+29]& bit6
#define RIOM2CT_LineStatus_U8                        g_dataBuffer_Display[32+31]%256
#define RIOM2CT_LAT_B1                               g_dataBuffer_Display[32+31]& bit7
#define RIOM2CT_RLD_B1                               g_dataBuffer_Display[32+31]& bit6
#define RIOM2CT_KeyNumber_U8                         g_dataBuffer_Display[32+31]/256
// 0x121
#define RIOM2CT_AIOM1AI1_U16                          Change_BigEen(g_dataBuffer_Display[32+32])
#define RIOM2CT_AIOM1AI2_U16                         Change_BigEen(g_dataBuffer_Display[32+33])
#define RIOM2CT_AIOM1AI3_U16                         Change_BigEen(g_dataBuffer_Display[32+34])
#define RIOM2CT_AIOM1AI4_U16                         Change_BigEen(g_dataBuffer_Display[32+35])
#define RIOM2CT_AIOM1AI5_U16                         Change_BigEen(g_dataBuffer_Display[32+36])
#define RIOM2CT_AIOM1AI6_U16                         Change_BigEen(g_dataBuffer_Display[32+37])
#define RIOM2CT_AIOM1AI7_U16                         Change_BigEen(g_dataBuffer_Display[32+38])
#define RIOM2CT_AIOM1AI8_U16                         Change_BigEen(g_dataBuffer_Display[32+39])
#define RIOM2CT_PWMM1PWM1_U16                         Change_BigEen(g_dataBuffer_Display[32+40])
#define RIOM2CT_PWMM1PWM2_U16                         Change_BigEen(g_dataBuffer_Display[32+41])

#define RIOM2CT_DIM1DI_1_U16                        g_dataBuffer_Display[74]
#define RIOM2CT_DIM1DI_2_U16                        g_dataBuffer_Display[75]
#define RIOM2CT_DIM1DI_3_U16                        g_dataBuffer_Display[76]
#define RIOM2CT_DIM1DI_4_U16                        g_dataBuffer_Display[77]
#define RIOM2CT_DIM1DI_5_U16                        g_dataBuffer_Display[78]

#define RIOM2CT_DIM1DI24_B1                        g_dataBuffer_Display[32+42]& bit7
#define RIOM2CT_DIM1DI23_B1                        g_dataBuffer_Display[32+42]& bit6
#define RIOM2CT_DIM1DI22_B1                        g_dataBuffer_Display[32+42]& bit5
#define RIOM2CT_DIM1DI21_B1                        g_dataBuffer_Display[32+42]& bit4
#define RIOM2CT_DIM1DI20_B1                        g_dataBuffer_Display[32+42]& bit3
#define RIOM2CT_DIM1DI19_B1                        g_dataBuffer_Display[32+42]& bit2
#define RIOM2CT_DIM1DI18_B1                        g_dataBuffer_Display[32+42]& bit1
#define RIOM2CT_DIM1DI17_B1                        g_dataBuffer_Display[32+42]& bit0
#define RIOM2CT_DIM1DI16_B1                        g_dataBuffer_Display[32+42]& bit15
#define RIOM2CT_DIM1DI15_B1                        g_dataBuffer_Display[32+42]& bit14
#define RIOM2CT_DIM1DI14_B1                        g_dataBuffer_Display[32+42]& bit13
#define RIOM2CT_DIM1DI13_B1                        g_dataBuffer_Display[32+42]& bit12
#define RIOM2CT_DIM1DI12_B1                       g_dataBuffer_Display[32+42]& bit11
#define RIOM2CT_DIM1DI11_B1                       g_dataBuffer_Display[32+42]& bit10
#define RIOM2CT_DIM1DI10_B1                       g_dataBuffer_Display[32+42]& bit9
#define RIOM2CT_DIM1DI9_B1                       g_dataBuffer_Display[32+42]& bit8
#define RIOM2CT_DIM1DI8_B1                        g_dataBuffer_Display[32+32+11]& bit7
#define RIOM2CT_DIM1DI7_B1                        g_dataBuffer_Display[32+43]& bit6
#define RIOM2CT_DIM1DI6_B1                        g_dataBuffer_Display[32+43]& bit5
#define RIOM2CT_DIM1DI5_B1                        g_dataBuffer_Display[32+43]& bit4
#define RIOM2CT_DIM1DI4_B1                        g_dataBuffer_Display[32+43]& bit3
#define RIOM2CT_DIM1DI3_B1                        g_dataBuffer_Display[32+43]& bit2
#define RIOM2CT_DIM1DI2_B1                        g_dataBuffer_Display[32+43]& bit1
#define RIOM2CT_DIM1DI1_B1                        g_dataBuffer_Display[32+43]& bit0

//#define RIOM2CT_DIM2DI24_B1                        g_dataBuffer_Display[32+43]& bit15
//#define RIOM2CT_DIM2DI23_B1                        g_dataBuffer_Display[32+43]& bit14
//#define RIOM2CT_DIM2DI22_B1                        g_dataBuffer_Display[32+43]& bit13
//#define RIOM2CT_DIM2DI21_B1                        g_dataBuffer_Display[32+43]& bit12
//#define RIOM2CT_DIM2DI20_B1                       g_dataBuffer_Display[32+43]& bit11
//#define RIOM2CT_DIM2DI19_B1                       g_dataBuffer_Display[32+43]& bit10
//#define RIOM2CT_DIM2DI18_B1                       g_dataBuffer_Display[32+43]& bit9
//#define RIOM2CT_DIM2DI17_B1                       g_dataBuffer_Display[32+43]& bit8
//#define RIOM2CT_DIM2DI16_B1                        g_dataBuffer_Display[32+44]& bit7
//#define RIOM2CT_DIM2DI15_B1                        g_dataBuffer_Display[32+44]& bit6
//#define RIOM2CT_DIM2DI14_B1                        g_dataBuffer_Display[32+44]& bit5
//#define RIOM2CT_DIM2DI13_B1                        g_dataBuffer_Display[32+44]& bit4
//#define RIOM2CT_DIM2DI12_B1                       g_dataBuffer_Display[32+44]& bit3
//#define RIOM2CT_DIM2DI11_B1                       g_dataBuffer_Display[32+44]& bit2
//#define RIOM2CT_DIM2DI10_B1                       g_dataBuffer_Display[32+44]& bit1
//#define RIOM2CT_DIM2DI9_B1                       g_dataBuffer_Display[32+44]& bit0
//#define RIOM2CT_DIM2DI8_B1                        g_dataBuffer_Display[32+44]& bit15
//#define RIOM2CT_DIM2DI7_B1                        g_dataBuffer_Display[32+44]& bit14
//#define RIOM2CT_DIM2DI6_B1                        g_dataBuffer_Display[32+44]& bit13
//#define RIOM2CT_DIM2DI5_B1                        g_dataBuffer_Display[32+44]& bit12
//#define RIOM2CT_DIM2DI4_B1                        g_dataBuffer_Display[32+44]& bit11
//#define RIOM2CT_DIM2DI3_B1                        g_dataBuffer_Display[32+44]& bit10
//#define RIOM2CT_DIM2DI2_B1                        g_dataBuffer_Display[32+44]& bit9
//#define RIOM2CT_DIM2DI1_B1                        g_dataBuffer_Display[32+44]& bit8

//#define RIOM2CT_DIM3DI24_B1                        g_dataBuffer_Display[32+45]& bit7
//#define RIOM2CT_DIM3DI23_B1                        g_dataBuffer_Display[32+45]& bit6
//#define RIOM2CT_DIM3DI22_B1                        g_dataBuffer_Display[32+45]& bit5
//#define RIOM2CT_DIM3DI21_B1                        g_dataBuffer_Display[32+45]& bit4
//#define RIOM2CT_DIM3DI20_B1                        g_dataBuffer_Display[32+45]& bit3
//#define RIOM2CT_DIM3DI19_B1                        g_dataBuffer_Display[32+45]& bit2
//#define RIOM2CT_DIM3DI18_B1                        g_dataBuffer_Display[32+45]& bit1
//#define RIOM2CT_DIM3DI17_B1                        g_dataBuffer_Display[32+45]& bit0
//#define RIOM2CT_DIM3DI16_B1                        g_dataBuffer_Display[32+45]& bit15
//#define RIOM2CT_DIM3DI15_B1                        g_dataBuffer_Display[32+45]& bit14
//#define RIOM2CT_DIM3DI14_B1                        g_dataBuffer_Display[32+45]& bit13
//#define RIOM2CT_DIM3DI13_B1                        g_dataBuffer_Display[32+45]& bit12
//#define RIOM2CT_DIM3DI12_B1                       g_dataBuffer_Display[32+45]& bit11
//#define RIOM2CT_DIM3DI11_B1                       g_dataBuffer_Display[32+45]& bit10
//#define RIOM2CT_DIM3DI10_B1                       g_dataBuffer_Display[32+45]& bit9
//#define RIOM2CT_DIM3DI9_B1                       g_dataBuffer_Display[32+45]& bit8
//#define RIOM2CT_DIM3DI8_B1                        g_dataBuffer_Display[32+46]& bit7
//#define RIOM2CT_DIM3DI7_B1                        g_dataBuffer_Display[32+46]& bit6
//#define RIOM2CT_DIM3DI6_B1                        g_dataBuffer_Display[32+46]& bit5
//#define RIOM2CT_DIM3DI5_B1                        g_dataBuffer_Display[32+46]& bit4
//#define RIOM2CT_DIM3DI4_B1                        g_dataBuffer_Display[32+46]& bit3
//#define RIOM2CT_DIM3DI3_B1                        g_dataBuffer_Display[32+46]& bit2
//#define RIOM2CT_DIM3DI2_B1                        g_dataBuffer_Display[32+46]& bit1
//#define RIOM2CT_DIM3DI1_B1                        g_dataBuffer_Display[32+46]& bit0

// 0x130
#define RIOM3CT_GWLifeSign1_U8                         g_dataBuffer_Display[64+16]%256
#define RIOM3CT_GWVersion_U8                           g_dataBuffer_Display[64+16]/256
#define RIOM3CT_DIVersion_U8                           g_dataBuffer_Display[64+17]%256
#define RIOM3CT_DOVersion_U8                           g_dataBuffer_Display[64+17]/256
#define RIOM3CT_AIVersion_U8                           g_dataBuffer_Display[64+18]%256
#define RIOM3CT_PWMVersion_U8                          g_dataBuffer_Display[64+18]/256
#define RIOM3CT_DIM1LifeSign_U8                        g_dataBuffer_Display[64+19]%256
#define RIOM3CT_DIM2LifeSign_U8                        g_dataBuffer_Display[64+19]/256
#define RIOM3CT_DIM3LifeSign_U8                        g_dataBuffer_Display[64+20]%256
#define RIOM3CT_DIM4LifeSign_U8                        g_dataBuffer_Display[64+20]/256
#define RIOM3CT_DIM5LifeSign_U8                         g_dataBuffer_Display[64+21]%256
#define RIOM3CT_DIM6LifeSign_U8                           g_dataBuffer_Display[64+21]/256
#define RIOM3CT_DIM7LifeSign_U8                           g_dataBuffer_Display[64+22]%256
#define RIOM3CT_DIM8LifeSign_U8                           g_dataBuffer_Display[64+22]/256
#define RIOM3CT_DOM1LifeSign_U8                           g_dataBuffer_Display[64+23]%256
#define RIOM3CT_DOM2LifeSign_U8                          g_dataBuffer_Display[64+23]/256
#define RIOM3CT_DOM3LifeSign_U8                        g_dataBuffer_Display[64+24]%256
#define RIOM3CT_DOM4LifeSign_U8                        g_dataBuffer_Display[64+24]/256
#define RIOM3CT_AIOM1LifeSign_U8                        g_dataBuffer_Display[64+25]%256
#define RIOM3CT_AIOM2LifeSign_U8                        g_dataBuffer_Display[64+25]/256
#define RIOM3CT_AIOM3LifeSign_U8                        g_dataBuffer_Display[64+26]%256
#define RIOM3CT_AIOM4LifeSign_U8                        g_dataBuffer_Display[64+26]/256
#define RIOM3CT_PWMM1LifeSign_U8                        g_dataBuffer_Display[64+27]%256
#define RIOM3CT_PWMM2LifeSign_U8                        g_dataBuffer_Display[64+27]/256
#define RIOM3CT_DIM1Online_B1                        g_dataBuffer_Display[64+28]& bit7
#define RIOM3CT_DIM2Online_B1                        g_dataBuffer_Display[64+28]& bit6
#define RIOM3CT_DIM3Online_B1                        g_dataBuffer_Display[64+28]& bit5
#define RIOM3CT_DIM4Online_B1                        g_dataBuffer_Display[64+28]& bit4
#define RIOM3CT_DIM5Online_B1                        g_dataBuffer_Display[64+28]& bit3
#define RIOM3CT_DIM6Online_B1                        g_dataBuffer_Display[64+28]& bit2
#define RIOM3CT_DIM7Online_B1                        g_dataBuffer_Display[64+28]& bit1
#define RIOM3CT_DIM8Online_B1                        g_dataBuffer_Display[64+28]& bit0
#define RIOM3CT_DOM1Online_B1                        g_dataBuffer_Display[64+28]& bit15
#define RIOM3CT_DOM2Online_B1                        g_dataBuffer_Display[64+28]& bit14
#define RIOM3CT_DOM3Online_B1                        g_dataBuffer_Display[64+28]& bit13
#define RIOM3CT_DOM4Online_B1                        g_dataBuffer_Display[64+28]& bit12
#define RIOM3CT_AIOM1Online_B1                       g_dataBuffer_Display[64+28]& bit11
#define RIOM3CT_AIOM2Online_B1                       g_dataBuffer_Display[64+28]& bit10
#define RIOM3CT_AIOM3Online_B1                       g_dataBuffer_Display[64+28]& bit9
#define RIOM3CT_AIOM4Online_B1                       g_dataBuffer_Display[64+28]& bit8
#define RIOM3CT_PWMM1Online_B1                       g_dataBuffer_Display[64+29]& bit7
#define RIOM3CT_PWMM2Online_B1                       g_dataBuffer_Display[64+29]& bit6
#define RIOM3CT_LineStatus_U8                        g_dataBuffer_Display[64+31]%256
#define RIOM3CT_LAT_B1                               g_dataBuffer_Display[64+31]& bit7
#define RIOM3CT_RLD_B1                               g_dataBuffer_Display[64+31]& bit6
#define RIOM3CT_KeyNumber_U8                         g_dataBuffer_Display[64+31]/256
// 0x131
#define RIOM3CT_AIOM1AI1_U16                         g_dataBuffer_Display[64+32]
#define RIOM3CT_AIOM1AI2_U16                         g_dataBuffer_Display[64+33]
#define RIOM3CT_AIOM1AI3_U16                         g_dataBuffer_Display[64+34]
#define RIOM3CT_AIOM1AI4_U16                         g_dataBuffer_Display[64+35]
#define RIOM3CT_AIOM1AI5_U16                         g_dataBuffer_Display[64+36]
#define RIOM3CT_AIOM1AI6_U16                         g_dataBuffer_Display[64+37]
#define RIOM3CT_AIOM1AI7_U16                         g_dataBuffer_Display[64+38]
#define RIOM3CT_AIOM1AI8_U16                         g_dataBuffer_Display[64+39]
#define RIOM3CT_PWMM1PWM1_U16                         g_dataBuffer_Display[64+40]
#define RIOM3CT_PWMM1PWM2_U16                         g_dataBuffer_Display[64+41]

#define RIOM3CT_DIM1DI_1_U16                        g_dataBuffer_Display[106]
#define RIOM3CT_DIM1DI_2_U16                        g_dataBuffer_Display[107]
#define RIOM3CT_DIM1DI_3_U16                        g_dataBuffer_Display[108]
#define RIOM3CT_DIM1DI_4_U16                        g_dataBuffer_Display[109]
#define RIOM3CT_DIM1DI_5_U16                        g_dataBuffer_Display[110]

#define RIOM3CT_DIM1DI24_B1                        g_dataBuffer_Display[64+42]& bit7
#define RIOM3CT_DIM1DI23_B1                        g_dataBuffer_Display[64+42]& bit6
#define RIOM3CT_DIM1DI22_B1                        g_dataBuffer_Display[64+42]& bit5
#define RIOM3CT_DIM1DI21_B1                        g_dataBuffer_Display[64+42]& bit4
#define RIOM3CT_DIM1DI20_B1                        g_dataBuffer_Display[64+42]& bit3
#define RIOM3CT_DIM1DI19_B1                        g_dataBuffer_Display[64+42]& bit2
#define RIOM3CT_DIM1DI18_B1                        g_dataBuffer_Display[64+42]& bit1
#define RIOM3CT_DIM1DI17_B1                        g_dataBuffer_Display[64+42]& bit0
#define RIOM3CT_DIM1DI16_B1                        g_dataBuffer_Display[64+42]& bit15
#define RIOM3CT_DIM1DI15_B1                        g_dataBuffer_Display[64+42]& bit14
#define RIOM3CT_DIM1DI14_B1                        g_dataBuffer_Display[64+42]& bit13
#define RIOM3CT_DIM1DI13_B1                        g_dataBuffer_Display[64+42]& bit12
#define RIOM3CT_DIM1DI12_B1                       g_dataBuffer_Display[64+42]& bit11
#define RIOM3CT_DIM1DI11_B1                       g_dataBuffer_Display[64+42]& bit10
#define RIOM3CT_DIM1DI10_B1                       g_dataBuffer_Display[64+42]& bit9
#define RIOM3CT_DIM1DI9_B1                       g_dataBuffer_Display[64+42]& bit8
#define RIOM3CT_DIM1DI8_B1                        g_dataBuffer_Display[64+43]& bit7
#define RIOM3CT_DIM1DI7_B1                        g_dataBuffer_Display[64+43]& bit6
#define RIOM3CT_DIM1DI6_B1                        g_dataBuffer_Display[64+43]& bit5
#define RIOM3CT_DIM1DI5_B1                        g_dataBuffer_Display[64+43]& bit4
#define RIOM3CT_DIM1DI4_B1                        g_dataBuffer_Display[64+43]& bit3
#define RIOM3CT_DIM1DI3_B1                        g_dataBuffer_Display[64+43]& bit2
#define RIOM3CT_DIM1DI2_B1                        g_dataBuffer_Display[64+43]& bit1
#define RIOM3CT_DIM1DI1_B1                        g_dataBuffer_Display[64+43]& bit0

//#define RIOM3CT_DIM2DI24_B1                        g_dataBuffer_Display[64+43]& bit15
//#define RIOM3CT_DIM2DI23_B1                        g_dataBuffer_Display[64+43]& bit14
//#define RIOM3CT_DIM2DI22_B1                        g_dataBuffer_Display[64+43]& bit13
//#define RIOM3CT_DIM2DI21_B1                        g_dataBuffer_Display[64+43]& bit12
//#define RIOM3CT_DIM2DI20_B1                       g_dataBuffer_Display[64+43]& bit11
//#define RIOM3CT_DIM2DI19_B1                       g_dataBuffer_Display[64+43]& bit10
//#define RIOM3CT_DIM2DI18_B1                       g_dataBuffer_Display[64+43]& bit9
//#define RIOM3CT_DIM2DI17_B1                       g_dataBuffer_Display[64+43]& bit8
//#define RIOM3CT_DIM2DI16_B1                        g_dataBuffer_Display[64+44]& bit7
//#define RIOM3CT_DIM2DI15_B1                        g_dataBuffer_Display[64+44]& bit6
//#define RIOM3CT_DIM2DI14_B1                        g_dataBuffer_Display[64+44]& bit5
//#define RIOM3CT_DIM2DI13_B1                        g_dataBuffer_Display[64+44]& bit4
//#define RIOM3CT_DIM2DI12_B1                       g_dataBuffer_Display[64+44]& bit3
//#define RIOM3CT_DIM2DI11_B1                       g_dataBuffer_Display[64+44]& bit2
//#define RIOM3CT_DIM2DI10_B1                       g_dataBuffer_Display[64+44]& bit1
//#define RIOM3CT_DIM2DI9_B1                       g_dataBuffer_Display[64+44]& bit0
//#define RIOM3CT_DIM2DI8_B1                        g_dataBuffer_Display[64+44]& bit15
//#define RIOM3CT_DIM2DI7_B1                        g_dataBuffer_Display[64+44]& bit14
//#define RIOM3CT_DIM2DI6_B1                        g_dataBuffer_Display[64+44]& bit13
//#define RIOM3CT_DIM2DI5_B1                        g_dataBuffer_Display[64+44]& bit12
//#define RIOM3CT_DIM2DI4_B1                        g_dataBuffer_Display[64+44]& bit11
//#define RIOM3CT_DIM2DI3_B1                        g_dataBuffer_Display[64+44]& bit10
//#define RIOM3CT_DIM2DI2_B1                        g_dataBuffer_Display[64+44]& bit9
//#define RIOM3CT_DIM2DI1_B1                        g_dataBuffer_Display[64+44]& bit8

//#define RIOM3CT_DIM3DI24_B1                        g_dataBuffer_Display[64+45]& bit7
//#define RIOM3CT_DIM3DI23_B1                        g_dataBuffer_Display[64+45]& bit6
//#define RIOM3CT_DIM3DI22_B1                        g_dataBuffer_Display[64+45]& bit5
//#define RIOM3CT_DIM3DI21_B1                        g_dataBuffer_Display[64+45]& bit4
//#define RIOM3CT_DIM3DI20_B1                        g_dataBuffer_Display[64+45]& bit3
//#define RIOM3CT_DIM3DI19_B1                        g_dataBuffer_Display[64+45]& bit2
//#define RIOM3CT_DIM3DI18_B1                        g_dataBuffer_Display[64+45]& bit1
//#define RIOM3CT_DIM3DI17_B1                        g_dataBuffer_Display[64+45]& bit0
//#define RIOM3CT_DIM3DI16_B1                        g_dataBuffer_Display[64+45]& bit15
//#define RIOM3CT_DIM3DI15_B1                        g_dataBuffer_Display[64+45]& bit14
//#define RIOM3CT_DIM3DI14_B1                        g_dataBuffer_Display[64+45]& bit13
//#define RIOM3CT_DIM3DI13_B1                        g_dataBuffer_Display[64+45]& bit12
//#define RIOM3CT_DIM3DI12_B1                       g_dataBuffer_Display[64+45]& bit11
//#define RIOM3CT_DIM3DI11_B1                       g_dataBuffer_Display[64+45]& bit10
//#define RIOM3CT_DIM3DI10_B1                       g_dataBuffer_Display[64+45]& bit9
//#define RIOM3CT_DIM3DI9_B1                       g_dataBuffer_Display[64+45]& bit8
//#define RIOM3CT_DIM3DI8_B1                        g_dataBuffer_Display[64+46]& bit7
//#define RIOM3CT_DIM3DI7_B1                        g_dataBuffer_Display[64+46]& bit6
//#define RIOM3CT_DIM3DI6_B1                        g_dataBuffer_Display[64+46]& bit5
//#define RIOM3CT_DIM3DI5_B1                        g_dataBuffer_Display[64+46]& bit4
//#define RIOM3CT_DIM3DI4_B1                        g_dataBuffer_Display[64+46]& bit3
//#define RIOM3CT_DIM3DI3_B1                        g_dataBuffer_Display[64+46]& bit2
//#define RIOM3CT_DIM3DI2_B1                        g_dataBuffer_Display[64+46]& bit1
//#define RIOM3CT_DIM3DI1_B1                        g_dataBuffer_Display[64+46]& bit0

// 0x140
#define RIOM4CT_GWLifeSign1_U8                         g_dataBuffer_Display[96+16]%256
#define RIOM4CT_GWVersion_U8                           g_dataBuffer_Display[96+16]/256
#define RIOM4CT_DIVersion_U8                           g_dataBuffer_Display[96+17]%256
#define RIOM4CT_DOVersion_U8                           g_dataBuffer_Display[96+17]/256
#define RIOM4CT_AIVersion_U8                           g_dataBuffer_Display[96+18]%256
#define RIOM4CT_PWMVersion_U8                          g_dataBuffer_Display[96+18]/256
#define RIOM4CT_DIM1LifeSign_U8                        g_dataBuffer_Display[96+19]%256
#define RIOM4CT_DIM2LifeSign_U8                        g_dataBuffer_Display[96+19]/256
#define RIOM4CT_DIM3LifeSign_U8                        g_dataBuffer_Display[96+20]%256
#define RIOM4CT_DIM4LifeSign_U8                        g_dataBuffer_Display[96+20]/256
#define RIOM4CT_DIM5LifeSign_U8                         g_dataBuffer_Display[96+21]%256
#define RIOM4CT_DIM6LifeSign_U8                           g_dataBuffer_Display[96+21]/256
#define RIOM4CT_DIM7LifeSign_U8                           g_dataBuffer_Display[96+22]%256
#define RIOM4CT_DIM8LifeSign_U8                           g_dataBuffer_Display[96+22]/256
#define RIOM4CT_DOM1LifeSign_U8                           g_dataBuffer_Display[96+23]%256
#define RIOM4CT_DOM2LifeSign_U8                          g_dataBuffer_Display[96+23]/256
#define RIOM4CT_DOM3LifeSign_U8                        g_dataBuffer_Display[96+24]%256
#define RIOM4CT_DOM4LifeSign_U8                        g_dataBuffer_Display[96+24]/256
#define RIOM4CT_AIOM1LifeSign_U8                        g_dataBuffer_Display[96+25]%256
#define RIOM4CT_AIOM2LifeSign_U8                        g_dataBuffer_Display[96+25]/256
#define RIOM4CT_AIOM3LifeSign_U8                        g_dataBuffer_Display[96+26]%256
#define RIOM4CT_AIOM4LifeSign_U8                        g_dataBuffer_Display[96+26]/256
#define RIOM4CT_PWMM1LifeSign_U8                        g_dataBuffer_Display[96+27]%256
#define RIOM4CT_PWMM2LifeSign_U8                        g_dataBuffer_Display[96+27]/256
#define RIOM4CT_DIM1Online_B1                        g_dataBuffer_Display[96+28]& bit7
#define RIOM4CT_DIM2Online_B1                        g_dataBuffer_Display[96+28]& bit6
#define RIOM4CT_DIM3Online_B1                        g_dataBuffer_Display[96+28]& bit5
#define RIOM4CT_DIM4Online_B1                        g_dataBuffer_Display[96+28]& bit4
#define RIOM4CT_DIM5Online_B1                        g_dataBuffer_Display[96+28]& bit3
#define RIOM4CT_DIM6Online_B1                        g_dataBuffer_Display[96+28]& bit2
#define RIOM4CT_DIM7Online_B1                        g_dataBuffer_Display[96+28]& bit1
#define RIOM4CT_DIM8Online_B1                        g_dataBuffer_Display[96+28]& bit0
#define RIOM4CT_DOM1Online_B1                        g_dataBuffer_Display[96+28]& bit15
#define RIOM4CT_DOM2Online_B1                        g_dataBuffer_Display[96+28]& bit14
#define RIOM4CT_DOM3Online_B1                        g_dataBuffer_Display[96+28]& bit13
#define RIOM4CT_DOM4Online_B1                        g_dataBuffer_Display[96+28]& bit12
#define RIOM4CT_AIOM1Online_B1                       g_dataBuffer_Display[96+28]& bit11
#define RIOM4CT_AIOM2Online_B1                       g_dataBuffer_Display[96+28]& bit10
#define RIOM4CT_AIOM3Online_B1                       g_dataBuffer_Display[96+28]& bit9
#define RIOM4CT_AIOM4Online_B1                       g_dataBuffer_Display[96+28]& bit8
#define RIOM4CT_PWMM1Online_B1                       g_dataBuffer_Display[96+29]& bit7
#define RIOM4CT_PWMM2Online_B1                       g_dataBuffer_Display[96+29]& bit6
#define RIOM4CT_LineStatus_U8                        g_dataBuffer_Display[96+31]%256
#define RIOM4CT_LAT_B1                               g_dataBuffer_Display[96+31]& bit7
#define RIOM4CT_RLD_B1                               g_dataBuffer_Display[96+31]& bit6
#define RIOM4CT_KeyNumber_U8                         g_dataBuffer_Display[96+31]/256
// 0x141
#define RIOM4CT_AIOM1AI1_U16                         g_dataBuffer_Display[96+32]
#define RIOM4CT_AIOM1AI2_U16                         g_dataBuffer_Display[96+33]
#define RIOM4CT_AIOM1AI3_U16                         g_dataBuffer_Display[96+34]
#define RIOM4CT_AIOM1AI4_U16                         g_dataBuffer_Display[96+35]
#define RIOM4CT_AIOM1AI5_U16                         g_dataBuffer_Display[96+36]
#define RIOM4CT_AIOM1AI6_U16                         g_dataBuffer_Display[96+37]
#define RIOM4CT_AIOM1AI7_U16                         g_dataBuffer_Display[96+38]
#define RIOM4CT_AIOM1AI8_U16                         g_dataBuffer_Display[96+39]
#define RIOM4CT_PWMM1PWM1_U16                         g_dataBuffer_Display[96+40]
#define RIOM4CT_PWMM1PWM2_U16                         g_dataBuffer_Display[96+41]


#define RIOM4CT_DIM1DI_1_U16                        g_dataBuffer_Display[138]
#define RIOM4CT_DIM1DI_2_U16                        g_dataBuffer_Display[139]
#define RIOM4CT_DIM1DI_3_U16                        g_dataBuffer_Display[140]
#define RIOM4CT_DIM1DI_4_U16                        g_dataBuffer_Display[141]
#define RIOM4CT_DIM1DI_5_U16                        g_dataBuffer_Display[142]

#define RIOM4CT_DIM1DI24_B1                        g_dataBuffer_Display[96+42]& bit7
#define RIOM4CT_DIM1DI23_B1                        g_dataBuffer_Display[96+42]& bit6
#define RIOM4CT_DIM1DI22_B1                        g_dataBuffer_Display[96+42]& bit5
#define RIOM4CT_DIM1DI21_B1                        g_dataBuffer_Display[96+42]& bit4
#define RIOM4CT_DIM1DI20_B1                        g_dataBuffer_Display[96+42]& bit3
#define RIOM4CT_DIM1DI19_B1                        g_dataBuffer_Display[96+42]& bit2
#define RIOM4CT_DIM1DI18_B1                        g_dataBuffer_Display[96+42]& bit1
#define RIOM4CT_DIM1DI17_B1                        g_dataBuffer_Display[96+42]& bit0
#define RIOM4CT_DIM1DI16_B1                        g_dataBuffer_Display[96+42]& bit15
#define RIOM4CT_DIM1DI15_B1                        g_dataBuffer_Display[96+42]& bit14
#define RIOM4CT_DIM1DI14_B1                        g_dataBuffer_Display[96+42]& bit13
#define RIOM4CT_DIM1DI13_B1                        g_dataBuffer_Display[96+42]& bit12
#define RIOM4CT_DIM1DI12_B1                       g_dataBuffer_Display[96+42]& bit11
#define RIOM4CT_DIM1DI11_B1                       g_dataBuffer_Display[96+42]& bit10
#define RIOM4CT_DIM1DI10_B1                       g_dataBuffer_Display[96+42]& bit9
#define RIOM4CT_DIM1DI9_B1                        g_dataBuffer_Display[96+42]& bit8
#define RIOM4CT_DIM1DI8_B1                        g_dataBuffer_Display[96+43]& bit7
#define RIOM4CT_DIM1DI7_B1                        g_dataBuffer_Display[96+43]& bit6
#define RIOM4CT_DIM1DI6_B1                        g_dataBuffer_Display[96+43]& bit5
#define RIOM4CT_DIM1DI5_B1                        g_dataBuffer_Display[96+43]& bit4
#define RIOM4CT_DIM1DI4_B1                        g_dataBuffer_Display[96+43]& bit3
#define RIOM4CT_DIM1DI3_B1                        g_dataBuffer_Display[96+43]& bit2
#define RIOM4CT_DIM1DI2_B1                        g_dataBuffer_Display[96+43]& bit1
#define RIOM4CT_DIM1DI1_B1                        g_dataBuffer_Display[96+43]& bit0

//#define RIOM4CT_DIM2DI24_B1                        g_dataBuffer_Display[96+43]& bit15
//#define RIOM4CT_DIM2DI23_B1                        g_dataBuffer_Display[96+43]& bit14
//#define RIOM4CT_DIM2DI22_B1                        g_dataBuffer_Display[96+43]& bit13
//#define RIOM4CT_DIM2DI21_B1                        g_dataBuffer_Display[96+43]& bit12
//#define RIOM4CT_DIM2DI20_B1                       g_dataBuffer_Display[96+43]& bit11
//#define RIOM4CT_DIM2DI19_B1                       g_dataBuffer_Display[96+43]& bit10
//#define RIOM4CT_DIM2DI18_B1                       g_dataBuffer_Display[96+43]& bit9
//#define RIOM4CT_DIM2DI17_B1                       g_dataBuffer_Display[96+43]& bit8
//#define RIOM4CT_DIM2DI16_B1                        g_dataBuffer_Display[96+44]& bit7
//#define RIOM4CT_DIM2DI15_B1                        g_dataBuffer_Display[96+44]& bit6
//#define RIOM4CT_DIM2DI14_B1                        g_dataBuffer_Display[96+44]& bit5
//#define RIOM4CT_DIM2DI13_B1                        g_dataBuffer_Display[96+44]& bit4
//#define RIOM4CT_DIM2DI12_B1                       g_dataBuffer_Display[96+44]& bit3
//#define RIOM4CT_DIM2DI11_B1                       g_dataBuffer_Display[96+44]& bit2
//#define RIOM4CT_DIM2DI10_B1                       g_dataBuffer_Display[96+44]& bit1
//#define RIOM4CT_DIM2DI9_B1                        g_dataBuffer_Display[96+44]& bit0
//#define RIOM4CT_DIM2DI8_B1                        g_dataBuffer_Display[96+44]& bit15
//#define RIOM4CT_DIM2DI7_B1                        g_dataBuffer_Display[96+44]& bit14
//#define RIOM4CT_DIM2DI6_B1                        g_dataBuffer_Display[96+44]& bit13
//#define RIOM4CT_DIM2DI5_B1                        g_dataBuffer_Display[96+44]& bit12
//#define RIOM4CT_DIM2DI4_B1                        g_dataBuffer_Display[96+44]& bit11
//#define RIOM4CT_DIM2DI3_B1                        g_dataBuffer_Display[96+44]& bit10
//#define RIOM4CT_DIM2DI2_B1                        g_dataBuffer_Display[96+44]& bit9
//#define RIOM4CT_DIM2DI1_B1                        g_dataBuffer_Display[96+44]& bit8

//#define RIOM4CT_DIM3DI24_B1                        g_dataBuffer_Display[96+45]& bit7
//#define RIOM4CT_DIM3DI23_B1                        g_dataBuffer_Display[96+45]& bit6
//#define RIOM4CT_DIM3DI22_B1                        g_dataBuffer_Display[96+45]& bit5
//#define RIOM4CT_DIM3DI21_B1                        g_dataBuffer_Display[96+45]& bit4
//#define RIOM4CT_DIM3DI20_B1                        g_dataBuffer_Display[96+45]& bit3
//#define RIOM4CT_DIM3DI19_B1                        g_dataBuffer_Display[96+45]& bit2
//#define RIOM4CT_DIM3DI18_B1                        g_dataBuffer_Display[96+45]& bit1
//#define RIOM4CT_DIM3DI17_B1                        g_dataBuffer_Display[96+45]& bit0
//#define RIOM4CT_DIM3DI16_B1                        g_dataBuffer_Display[96+45]& bit15
//#define RIOM4CT_DIM3DI15_B1                        g_dataBuffer_Display[96+45]& bit14
//#define RIOM4CT_DIM3DI14_B1                        g_dataBuffer_Display[96+45]& bit13
//#define RIOM4CT_DIM3DI13_B1                        g_dataBuffer_Display[96+45]& bit12
//#define RIOM4CT_DIM3DI12_B1                       g_dataBuffer_Display[96+45]& bit11
//#define RIOM4CT_DIM3DI11_B1                       g_dataBuffer_Display[96+45]& bit10
//#define RIOM4CT_DIM3DI10_B1                       g_dataBuffer_Display[96+45]& bit9
//#define RIOM4CT_DIM3DI9_B1                        g_dataBuffer_Display[96+45]& bit8
//#define RIOM4CT_DIM3DI8_B1                        g_dataBuffer_Display[96+46]& bit7
//#define RIOM4CT_DIM3DI7_B1                        g_dataBuffer_Display[96+46]& bit6
//#define RIOM4CT_DIM3DI6_B1                        g_dataBuffer_Display[96+46]& bit5
//#define RIOM4CT_DIM3DI5_B1                        g_dataBuffer_Display[96+46]& bit4
//#define RIOM4CT_DIM3DI4_B1                        g_dataBuffer_Display[96+46]& bit3
//#define RIOM4CT_DIM3DI3_B1                        g_dataBuffer_Display[96+46]& bit2
//#define RIOM4CT_DIM3DI2_B1                        g_dataBuffer_Display[96+46]& bit1
//#define RIOM4CT_DIM3DI1_B1                        g_dataBuffer_Display[96+46]& bit0

// 0x150
#define RIOM5CT_GWLifeSign1_U8                         g_dataBuffer_Display[128+16]%256
#define RIOM5CT_GWVersion_U8                           g_dataBuffer_Display[128+16]/256
#define RIOM5CT_DIVersion_U8                           g_dataBuffer_Display[128+17]%256
#define RIOM5CT_DOVersion_U8                           g_dataBuffer_Display[128+17]/256
#define RIOM5CT_AIVersion_U8                           g_dataBuffer_Display[128+18]%256
#define RIOM5CT_PWMVersion_U8                          g_dataBuffer_Display[128+18]/256
#define RIOM5CT_DIM1LifeSign_U8                        g_dataBuffer_Display[128+19]%256
#define RIOM5CT_DIM2LifeSign_U8                        g_dataBuffer_Display[128+19]/256
#define RIOM5CT_DIM3LifeSign_U8                        g_dataBuffer_Display[128+20]%256
#define RIOM5CT_DIM4LifeSign_U8                        g_dataBuffer_Display[128+20]/256
#define RIOM5CT_DIM5LifeSign_U8                        g_dataBuffer_Display[128+21]%256
#define RIOM5CT_DIM6LifeSign_U8                        g_dataBuffer_Display[128+21]/256
#define RIOM5CT_DIM7LifeSign_U8                        g_dataBuffer_Display[128+22]%256
#define RIOM5CT_DIM8LifeSign_U8                        g_dataBuffer_Display[128+22]/256
#define RIOM5CT_DOM1LifeSign_U8                        g_dataBuffer_Display[128+23]%256
#define RIOM5CT_DOM2LifeSign_U8                        g_dataBuffer_Display[128+23]/256
#define RIOM5CT_DOM3LifeSign_U8                        g_dataBuffer_Display[128+24]%256
#define RIOM5CT_DOM4LifeSign_U8                        g_dataBuffer_Display[128+24]/256
#define RIOM5CT_AIOM1LifeSign_U8                        g_dataBuffer_Display[128+25]%256
#define RIOM5CT_AIOM2LifeSign_U8                        g_dataBuffer_Display[128+25]/256
#define RIOM5CT_AIOM3LifeSign_U8                        g_dataBuffer_Display[128+26]%256
#define RIOM5CT_AIOM4LifeSign_U8                        g_dataBuffer_Display[128+26]/256
#define RIOM5CT_PWMM1LifeSign_U8                        g_dataBuffer_Display[128+27]%256
#define RIOM5CT_PWMM2LifeSign_U8                        g_dataBuffer_Display[128+27]/256
#define RIOM5CT_DIM1Online_B1                        g_dataBuffer_Display[128+28]& bit7
#define RIOM5CT_DIM2Online_B1                        g_dataBuffer_Display[128+28]& bit6
#define RIOM5CT_DIM3Online_B1                        g_dataBuffer_Display[128+28]& bit5
#define RIOM5CT_DIM4Online_B1                        g_dataBuffer_Display[128+28]& bit4
#define RIOM5CT_DIM5Online_B1                        g_dataBuffer_Display[128+28]& bit3
#define RIOM5CT_DIM6Online_B1                        g_dataBuffer_Display[128+28]& bit2
#define RIOM5CT_DIM7Online_B1                        g_dataBuffer_Display[128+28]& bit1
#define RIOM5CT_DIM8Online_B1                        g_dataBuffer_Display[128+28]& bit0
#define RIOM5CT_DOM1Online_B1                        g_dataBuffer_Display[128+28]& bit15
#define RIOM5CT_DOM2Online_B1                        g_dataBuffer_Display[128+28]& bit14
#define RIOM5CT_DOM3Online_B1                        g_dataBuffer_Display[128+28]& bit13
#define RIOM5CT_DOM4Online_B1                        g_dataBuffer_Display[128+28]& bit12
#define RIOM5CT_AIOM1Online_B1                       g_dataBuffer_Display[128+28]& bit11
#define RIOM5CT_AIOM2Online_B1                       g_dataBuffer_Display[128+28]& bit10
#define RIOM5CT_AIOM3Online_B1                       g_dataBuffer_Display[128+28]& bit9
#define RIOM5CT_AIOM4Online_B1                       g_dataBuffer_Display[128+28]& bit8
#define RIOM5CT_PWMM1Online_B1                       g_dataBuffer_Display[128+29]& bit7
#define RIOM5CT_PWMM2Online_B1                       g_dataBuffer_Display[128+29]& bit6
#define RIOM5CT_LineStatus_U8                        g_dataBuffer_Display[128+31]%256
#define RIOM5CT_LAT_B1                               g_dataBuffer_Display[128+31]& bit7
#define RIOM5CT_RLD_B1                               g_dataBuffer_Display[128+31]& bit6
#define RIOM5CT_KeyNumber_U8                         g_dataBuffer_Display[128+31]/256
// 0x151
#define RIOM5CT_AIOM1AI1_U16                         g_dataBuffer_Display[128+32]
#define RIOM5CT_AIOM1AI2_U16                         g_dataBuffer_Display[128+33]
#define RIOM5CT_AIOM1AI3_U16                         g_dataBuffer_Display[128+34]
#define RIOM5CT_AIOM1AI4_U16                         g_dataBuffer_Display[128+35]
#define RIOM5CT_AIOM1AI5_U16                         g_dataBuffer_Display[128+36]
#define RIOM5CT_AIOM1AI6_U16                         g_dataBuffer_Display[128+37]
#define RIOM5CT_AIOM1AI7_U16                         g_dataBuffer_Display[128+38]
#define RIOM5CT_AIOM1AI8_U16                         g_dataBuffer_Display[128+39]
#define RIOM5CT_PWMM1PWM1_U16                        g_dataBuffer_Display[128+40]
#define RIOM5CT_PWMM1PWM2_U16                        g_dataBuffer_Display[128+41]


#define RIOM5CT_DIM1DI_1_U16                        g_dataBuffer_Display[170]
#define RIOM5CT_DIM1DI_2_U16                        g_dataBuffer_Display[171]
#define RIOM5CT_DIM1DI_3_U16                        g_dataBuffer_Display[172]
#define RIOM5CT_DIM1DI_4_U16                        g_dataBuffer_Display[173]
#define RIOM5CT_DIM1DI_5_U16                        g_dataBuffer_Display[174]

#define RIOM5CT_DIM1DI24_B1                        g_dataBuffer_Display[128+42]& bit7
#define RIOM5CT_DIM1DI23_B1                        g_dataBuffer_Display[128+42]& bit6
#define RIOM5CT_DIM1DI22_B1                        g_dataBuffer_Display[128+42]& bit5
#define RIOM5CT_DIM1DI21_B1                        g_dataBuffer_Display[128+42]& bit4
#define RIOM5CT_DIM1DI20_B1                        g_dataBuffer_Display[128+42]& bit3
#define RIOM5CT_DIM1DI19_B1                        g_dataBuffer_Display[128+42]& bit2
#define RIOM5CT_DIM1DI18_B1                        g_dataBuffer_Display[128+42]& bit1
#define RIOM5CT_DIM1DI17_B1                        g_dataBuffer_Display[128+42]& bit0
#define RIOM5CT_DIM1DI16_B1                        g_dataBuffer_Display[128+42]& bit15
#define RIOM5CT_DIM1DI15_B1                        g_dataBuffer_Display[128+42]& bit14
#define RIOM5CT_DIM1DI14_B1                        g_dataBuffer_Display[128+42]& bit13
#define RIOM5CT_DIM1DI13_B1                        g_dataBuffer_Display[128+42]& bit12
#define RIOM5CT_DIM1DI12_B1                       g_dataBuffer_Display[128+42]& bit11
#define RIOM5CT_DIM1DI11_B1                       g_dataBuffer_Display[128+42]& bit10
#define RIOM5CT_DIM1DI10_B1                       g_dataBuffer_Display[128+42]& bit9
#define RIOM5CT_DIM1DI9_B1                        g_dataBuffer_Display[128+42]& bit8
#define RIOM5CT_DIM1DI8_B1                        g_dataBuffer_Display[128+43]& bit7
#define RIOM5CT_DIM1DI7_B1                        g_dataBuffer_Display[128+43]& bit6
#define RIOM5CT_DIM1DI6_B1                        g_dataBuffer_Display[128+43]& bit5
#define RIOM5CT_DIM1DI5_B1                        g_dataBuffer_Display[128+43]& bit4
#define RIOM5CT_DIM1DI4_B1                        g_dataBuffer_Display[128+43]& bit3
#define RIOM5CT_DIM1DI3_B1                        g_dataBuffer_Display[128+43]& bit2
#define RIOM5CT_DIM1DI2_B1                        g_dataBuffer_Display[128+43]& bit1
#define RIOM5CT_DIM1DI1_B1                        g_dataBuffer_Display[128+43]& bit0

//#define RIOM5CT_DIM2DI24_B1                        g_dataBuffer_Display[128+43]& bit15
//#define RIOM5CT_DIM2DI23_B1                        g_dataBuffer_Display[128+43]& bit14
//#define RIOM5CT_DIM2DI22_B1                        g_dataBuffer_Display[128+43]& bit13
//#define RIOM5CT_DIM2DI21_B1                        g_dataBuffer_Display[128+43]& bit12
//#define RIOM5CT_DIM2DI20_B1                       g_dataBuffer_Display[128+43]& bit11
//#define RIOM5CT_DIM2DI19_B1                       g_dataBuffer_Display[128+43]& bit10
//#define RIOM5CT_DIM2DI18_B1                       g_dataBuffer_Display[128+43]& bit9
//#define RIOM5CT_DIM2DI17_B1                       g_dataBuffer_Display[128+43]& bit8
//#define RIOM5CT_DIM2DI16_B1                        g_dataBuffer_Display[128+44]& bit7
//#define RIOM5CT_DIM2DI15_B1                        g_dataBuffer_Display[128+44]& bit6
//#define RIOM5CT_DIM2DI14_B1                        g_dataBuffer_Display[128+44]& bit5
//#define RIOM5CT_DIM2DI13_B1                        g_dataBuffer_Display[128+44]& bit4
//#define RIOM5CT_DIM2DI12_B1                       g_dataBuffer_Display[128+44]& bit3
//#define RIOM5CT_DIM2DI11_B1                       g_dataBuffer_Display[128+44]& bit2
//#define RIOM5CT_DIM2DI10_B1                       g_dataBuffer_Display[128+44]& bit1
//#define RIOM5CT_DIM2DI9_B1                        g_dataBuffer_Display[128+44]& bit0
//#define RIOM5CT_DIM2DI8_B1                        g_dataBuffer_Display[128+44]& bit15
//#define RIOM5CT_DIM2DI7_B1                        g_dataBuffer_Display[128+44]& bit14
//#define RIOM5CT_DIM2DI6_B1                        g_dataBuffer_Display[128+44]& bit13
//#define RIOM5CT_DIM2DI5_B1                        g_dataBuffer_Display[128+44]& bit12
//#define RIOM5CT_DIM2DI4_B1                        g_dataBuffer_Display[128+44]& bit11
//#define RIOM5CT_DIM2DI3_B1                        g_dataBuffer_Display[128+44]& bit10
//#define RIOM5CT_DIM2DI2_B1                        g_dataBuffer_Display[128+44]& bit9
//#define RIOM5CT_DIM2DI1_B1                        g_dataBuffer_Display[128+44]& bit8

//#define RIOM5CT_DIM3DI24_B1                        g_dataBuffer_Display[128+45]& bit7
//#define RIOM5CT_DIM3DI23_B1                        g_dataBuffer_Display[128+45]& bit6
//#define RIOM5CT_DIM3DI22_B1                        g_dataBuffer_Display[128+45]& bit5
//#define RIOM5CT_DIM3DI21_B1                        g_dataBuffer_Display[128+45]& bit4
//#define RIOM5CT_DIM3DI20_B1                        g_dataBuffer_Display[128+45]& bit3
//#define RIOM5CT_DIM3DI19_B1                        g_dataBuffer_Display[128+45]& bit2
//#define RIOM5CT_DIM3DI18_B1                        g_dataBuffer_Display[128+45]& bit1
//#define RIOM5CT_DIM3DI17_B1                        g_dataBuffer_Display[128+45]& bit0
//#define RIOM5CT_DIM3DI16_B1                        g_dataBuffer_Display[128+45]& bit15
//#define RIOM5CT_DIM3DI15_B1                        g_dataBuffer_Display[128+45]& bit14
//#define RIOM5CT_DIM3DI14_B1                        g_dataBuffer_Display[128+45]& bit13
//#define RIOM5CT_DIM3DI13_B1                        g_dataBuffer_Display[128+45]& bit12
//#define RIOM5CT_DIM3DI12_B1                       g_dataBuffer_Display[128+45]& bit11
//#define RIOM5CT_DIM3DI11_B1                       g_dataBuffer_Display[128+45]& bit10
//#define RIOM5CT_DIM3DI10_B1                       g_dataBuffer_Display[128+45]& bit9
//#define RIOM5CT_DIM3DI9_B1                        g_dataBuffer_Display[128+45]& bit8
//#define RIOM5CT_DIM3DI8_B1                        g_dataBuffer_Display[128+46]& bit7
//#define RIOM5CT_DIM3DI7_B1                        g_dataBuffer_Display[128+46]& bit6
//#define RIOM5CT_DIM3DI6_B1                        g_dataBuffer_Display[128+46]& bit5
//#define RIOM5CT_DIM3DI5_B1                        g_dataBuffer_Display[128+46]& bit4
//#define RIOM5CT_DIM3DI4_B1                        g_dataBuffer_Display[128+46]& bit3
//#define RIOM5CT_DIM3DI3_B1                        g_dataBuffer_Display[128+46]& bit2
//#define RIOM5CT_DIM3DI2_B1                        g_dataBuffer_Display[128+46]& bit1
//#define RIOM5CT_DIM3DI1_B1                        g_dataBuffer_Display[128+46]& bit0


// 0x160
#define RIOM6CT_GWLifeSign1_U8                         g_dataBuffer_Display[160+16]%256
#define RIOM6CT_GWVersion_U8                           g_dataBuffer_Display[160+16]/256
#define RIOM6CT_DIVersion_U8                           g_dataBuffer_Display[160+17]%256
#define RIOM6CT_DOVersion_U8                           g_dataBuffer_Display[160+17]/256
#define RIOM6CT_AIVersion_U8                           g_dataBuffer_Display[160+18]%256
#define RIOM6CT_PWMVersion_U8                          g_dataBuffer_Display[160+18]/256
#define RIOM6CT_DIM1LifeSign_U8                        g_dataBuffer_Display[160+19]%256
#define RIOM6CT_DIM2LifeSign_U8                        g_dataBuffer_Display[160+19]/256
#define RIOM6CT_DIM3LifeSign_U8                        g_dataBuffer_Display[160+20]%256
#define RIOM6CT_DIM4LifeSign_U8                        g_dataBuffer_Display[160+20]/256
#define RIOM6CT_DIM5LifeSign_U8                        g_dataBuffer_Display[160+21]%256
#define RIOM6CT_DIM6LifeSign_U8                        g_dataBuffer_Display[160+21]/256
#define RIOM6CT_DIM7LifeSign_U8                        g_dataBuffer_Display[160+22]%256
#define RIOM6CT_DIM8LifeSign_U8                        g_dataBuffer_Display[160+22]/256
#define RIOM6CT_DOM1LifeSign_U8                        g_dataBuffer_Display[160+23]%256
#define RIOM6CT_DOM2LifeSign_U8                        g_dataBuffer_Display[160+23]/256
#define RIOM6CT_DOM3LifeSign_U8                        g_dataBuffer_Display[160+24]%256
#define RIOM6CT_DOM4LifeSign_U8                        g_dataBuffer_Display[160+24]/256
#define RIOM6CT_AIOM1LifeSign_U8                        g_dataBuffer_Display[160+25]%256
#define RIOM6CT_AIOM2LifeSign_U8                        g_dataBuffer_Display[160+25]/256
#define RIOM6CT_AIOM3LifeSign_U8                        g_dataBuffer_Display[160+26]%256
#define RIOM6CT_AIOM4LifeSign_U8                        g_dataBuffer_Display[160+26]/256
#define RIOM6CT_PWMM1LifeSign_U8                        g_dataBuffer_Display[160+27]%256
#define RIOM6CT_PWMM2LifeSign_U8                        g_dataBuffer_Display[160+27]/256
#define RIOM6CT_DIM1Online_B1                        g_dataBuffer_Display[160+28]& bit7
#define RIOM6CT_DIM2Online_B1                        g_dataBuffer_Display[160+28]& bit6
#define RIOM6CT_DIM3Online_B1                        g_dataBuffer_Display[160+28]& bit5
#define RIOM6CT_DIM4Online_B1                        g_dataBuffer_Display[160+28]& bit4
#define RIOM6CT_DIM5Online_B1                        g_dataBuffer_Display[160+28]& bit3
#define RIOM6CT_DIM6Online_B1                        g_dataBuffer_Display[160+28]& bit2
#define RIOM6CT_DIM7Online_B1                        g_dataBuffer_Display[160+28]& bit1
#define RIOM6CT_DIM8Online_B1                        g_dataBuffer_Display[160+28]& bit0
#define RIOM6CT_DOM1Online_B1                        g_dataBuffer_Display[160+28]& bit15
#define RIOM6CT_DOM2Online_B1                        g_dataBuffer_Display[160+28]& bit14
#define RIOM6CT_DOM3Online_B1                        g_dataBuffer_Display[160+28]& bit13
#define RIOM6CT_DOM4Online_B1                        g_dataBuffer_Display[160+28]& bit12
#define RIOM6CT_AIOM1Online_B1                       g_dataBuffer_Display[160+28]& bit11
#define RIOM6CT_AIOM2Online_B1                       g_dataBuffer_Display[160+28]& bit10
#define RIOM6CT_AIOM3Online_B1                       g_dataBuffer_Display[160+28]& bit9
#define RIOM6CT_AIOM4Online_B1                       g_dataBuffer_Display[160+28]& bit8
#define RIOM6CT_PWMM1Online_B1                       g_dataBuffer_Display[160+29]& bit7
#define RIOM6CT_PWMM2Online_B1                       g_dataBuffer_Display[160+29]& bit6
#define RIOM6CT_LineStatus_U8                        g_dataBuffer_Display[160+31]%256
#define RIOM6CT_LAT_B1                               g_dataBuffer_Display[160+31]& bit7
#define RIOM6CT_RLD_B1                               g_dataBuffer_Display[160+31]& bit6
#define RIOM6CT_KeyNumber_U8                         g_dataBuffer_Display[160+31]/256
// 0x161
#define RIOM6CT_AIOM1AI1_U16                         g_dataBuffer_Display[160+32]
#define RIOM6CT_AIOM1AI2_U16                         g_dataBuffer_Display[160+33]
#define RIOM6CT_AIOM1AI3_U16                         g_dataBuffer_Display[160+34]
#define RIOM6CT_AIOM1AI4_U16                         g_dataBuffer_Display[160+35]
#define RIOM6CT_AIOM1AI5_U16                         g_dataBuffer_Display[160+36]
#define RIOM6CT_AIOM1AI6_U16                         g_dataBuffer_Display[160+37]
#define RIOM6CT_AIOM1AI7_U16                         g_dataBuffer_Display[160+38]
#define RIOM6CT_AIOM1AI8_U16                         g_dataBuffer_Display[160+39]
#define RIOM6CT_PWMM1PWM1_U16                        g_dataBuffer_Display[160+40]
#define RIOM6CT_PWMM1PWM2_U16                        g_dataBuffer_Display[160+41]


#define RIOM6CT_DIM1DI_1_U16                        g_dataBuffer_Display[202]
#define RIOM6CT_DIM1DI_2_U16                        g_dataBuffer_Display[203]
#define RIOM6CT_DIM1DI_3_U16                        g_dataBuffer_Display[204]
#define RIOM6CT_DIM1DI_4_U16                        g_dataBuffer_Display[205]
#define RIOM6CT_DIM1DI_5_U16                        g_dataBuffer_Display[206]

#define RIOM6CT_DIM1DI24_B1                        g_dataBuffer_Display[160+42]& bit7
#define RIOM6CT_DIM1DI23_B1                        g_dataBuffer_Display[160+42]& bit6
#define RIOM6CT_DIM1DI22_B1                        g_dataBuffer_Display[160+42]& bit5
#define RIOM6CT_DIM1DI21_B1                        g_dataBuffer_Display[160+42]& bit4
#define RIOM6CT_DIM1DI20_B1                        g_dataBuffer_Display[160+42]& bit3
#define RIOM6CT_DIM1DI19_B1                        g_dataBuffer_Display[160+42]& bit2
#define RIOM6CT_DIM1DI18_B1                        g_dataBuffer_Display[160+42]& bit1
#define RIOM6CT_DIM1DI17_B1                        g_dataBuffer_Display[160+42]& bit0
#define RIOM6CT_DIM1DI16_B1                        g_dataBuffer_Display[160+42]& bit15
#define RIOM6CT_DIM1DI15_B1                        g_dataBuffer_Display[160+42]& bit14
#define RIOM6CT_DIM1DI14_B1                        g_dataBuffer_Display[160+42]& bit13
#define RIOM6CT_DIM1DI13_B1                        g_dataBuffer_Display[160+42]& bit12
#define RIOM6CT_DIM1DI12_B1                       g_dataBuffer_Display[160+42]& bit11
#define RIOM6CT_DIM1DI11_B1                       g_dataBuffer_Display[160+42]& bit10
#define RIOM6CT_DIM1DI10_B1                       g_dataBuffer_Display[160+42]& bit9
#define RIOM6CT_DIM1DI9_B1                        g_dataBuffer_Display[160+42]& bit8
#define RIOM6CT_DIM1DI8_B1                        g_dataBuffer_Display[160+43]& bit7
#define RIOM6CT_DIM1DI7_B1                        g_dataBuffer_Display[160+43]& bit6
#define RIOM6CT_DIM1DI6_B1                        g_dataBuffer_Display[160+43]& bit5
#define RIOM6CT_DIM1DI5_B1                        g_dataBuffer_Display[160+43]& bit4
#define RIOM6CT_DIM1DI4_B1                        g_dataBuffer_Display[160+43]& bit3
#define RIOM6CT_DIM1DI3_B1                        g_dataBuffer_Display[160+43]& bit2
#define RIOM6CT_DIM1DI2_B1                        g_dataBuffer_Display[160+43]& bit1
#define RIOM6CT_DIM1DI1_B1                        g_dataBuffer_Display[160+43]& bit0

#define RIOM6CT_DIM2DI24_B1                        g_dataBuffer_Display[160+43]& bit15
#define RIOM6CT_DIM2DI23_B1                        g_dataBuffer_Display[160+43]& bit14
#define RIOM6CT_DIM2DI22_B1                        g_dataBuffer_Display[160+43]& bit13
#define RIOM6CT_DIM2DI21_B1                        g_dataBuffer_Display[160+43]& bit12
#define RIOM6CT_DIM2DI20_B1                        g_dataBuffer_Display[160+43]& bit11
#define RIOM6CT_DIM2DI19_B1                        g_dataBuffer_Display[160+43]& bit10
#define RIOM6CT_DIM2DI18_B1                        g_dataBuffer_Display[160+43]& bit9
#define RIOM6CT_DIM2DI17_B1                        g_dataBuffer_Display[160+43]& bit8
#define RIOM6CT_DIM2DI16_B1                        g_dataBuffer_Display[160+44]& bit7
#define RIOM6CT_DIM2DI15_B1                        g_dataBuffer_Display[160+44]& bit6
#define RIOM6CT_DIM2DI14_B1                        g_dataBuffer_Display[160+44]& bit5
#define RIOM6CT_DIM2DI13_B1                        g_dataBuffer_Display[160+44]& bit4
#define RIOM6CT_DIM2DI12_B1                       g_dataBuffer_Display[160+44]& bit3
#define RIOM6CT_DIM2DI11_B1                       g_dataBuffer_Display[160+44]& bit2
#define RIOM6CT_DIM2DI10_B1                       g_dataBuffer_Display[160+44]& bit1
#define RIOM6CT_DIM2DI9_B1                        g_dataBuffer_Display[160+44]& bit0
#define RIOM6CT_DIM2DI8_B1                        g_dataBuffer_Display[160+44]& bit15
#define RIOM6CT_DIM2DI7_B1                        g_dataBuffer_Display[160+44]& bit14
#define RIOM6CT_DIM2DI6_B1                        g_dataBuffer_Display[160+44]& bit13
#define RIOM6CT_DIM2DI5_B1                        g_dataBuffer_Display[160+44]& bit12
#define RIOM6CT_DIM2DI4_B1                        g_dataBuffer_Display[160+44]& bit11
#define RIOM6CT_DIM2DI3_B1                        g_dataBuffer_Display[160+44]& bit10
#define RIOM6CT_DIM2DI2_B1                        g_dataBuffer_Display[160+44]& bit9
#define RIOM6CT_DIM2DI1_B1                        g_dataBuffer_Display[160+44]& bit8

#define RIOM6CT_DIM3DI24_B1                        g_dataBuffer_Display[160+45]& bit7
#define RIOM6CT_DIM3DI23_B1                        g_dataBuffer_Display[160+45]& bit6
#define RIOM6CT_DIM3DI22_B1                        g_dataBuffer_Display[160+45]& bit5
#define RIOM6CT_DIM3DI21_B1                        g_dataBuffer_Display[160+45]& bit4
#define RIOM6CT_DIM3DI20_B1                        g_dataBuffer_Display[160+45]& bit3
#define RIOM6CT_DIM3DI19_B1                        g_dataBuffer_Display[160+45]& bit2
#define RIOM6CT_DIM3DI18_B1                        g_dataBuffer_Display[160+45]& bit1
#define RIOM6CT_DIM3DI17_B1                        g_dataBuffer_Display[160+45]& bit0
#define RIOM6CT_DIM3DI16_B1                        g_dataBuffer_Display[160+45]& bit15
#define RIOM6CT_DIM3DI15_B1                        g_dataBuffer_Display[160+45]& bit14
#define RIOM6CT_DIM3DI14_B1                        g_dataBuffer_Display[160+45]& bit13
#define RIOM6CT_DIM3DI13_B1                        g_dataBuffer_Display[160+45]& bit12
#define RIOM6CT_DIM3DI12_B1                       g_dataBuffer_Display[160+45]& bit11
#define RIOM6CT_DIM3DI11_B1                       g_dataBuffer_Display[160+45]& bit10
#define RIOM6CT_DIM3DI10_B1                       g_dataBuffer_Display[160+45]& bit9
#define RIOM6CT_DIM3DI9_B1                        g_dataBuffer_Display[160+45]& bit8
#define RIOM6CT_DIM3DI8_B1                        g_dataBuffer_Display[160+46]& bit7
#define RIOM6CT_DIM3DI7_B1                        g_dataBuffer_Display[160+46]& bit6
#define RIOM6CT_DIM3DI6_B1                        g_dataBuffer_Display[160+46]& bit5
#define RIOM6CT_DIM3DI5_B1                        g_dataBuffer_Display[160+46]& bit4
#define RIOM6CT_DIM3DI4_B1                        g_dataBuffer_Display[160+46]& bit3
#define RIOM6CT_DIM3DI3_B1                        g_dataBuffer_Display[160+46]& bit2
#define RIOM6CT_DIM3DI2_B1                        g_dataBuffer_Display[160+46]& bit1
#define RIOM6CT_DIM3DI1_B1                        g_dataBuffer_Display[160+46]& bit0

//0x162
#define RIOM6CT_DIM1DI_11_U16                        g_dataBuffer_Display[2218]
#define RIOM6CT_DIM1DI_12_U16                        g_dataBuffer_Display[2219]

#define RIOM6CT_DIM4DI24_B1                        g_dataBuffer_Display[2218]& bit7
#define RIOM6CT_DIM4DI23_B1                        g_dataBuffer_Display[2218]& bit6
#define RIOM6CT_DIM4DI22_B1                        g_dataBuffer_Display[2218]& bit5
#define RIOM6CT_DIM4DI21_B1                        g_dataBuffer_Display[2218]& bit4
#define RIOM6CT_DIM4DI20_B1                        g_dataBuffer_Display[2218]& bit3
#define RIOM6CT_DIM4DI19_B1                        g_dataBuffer_Display[2218]& bit2
#define RIOM6CT_DIM4DI18_B1                        g_dataBuffer_Display[2218]& bit1
#define RIOM6CT_DIM4DI17_B1                        g_dataBuffer_Display[2218]& bit0
#define RIOM6CT_DIM4DI16_B1                        g_dataBuffer_Display[2218]& bit15
#define RIOM6CT_DIM4DI15_B1                        g_dataBuffer_Display[2218]& bit14
#define RIOM6CT_DIM4DI14_B1                        g_dataBuffer_Display[2218]& bit13
#define RIOM6CT_DIM4DI13_B1                        g_dataBuffer_Display[2218]& bit12
#define RIOM6CT_DIM4DI12_B1                       g_dataBuffer_Display[2218]& bit11
#define RIOM6CT_DIM4DI11_B1                       g_dataBuffer_Display[2218]& bit10
#define RIOM6CT_DIM4DI10_B1                       g_dataBuffer_Display[2218]& bit9
#define RIOM6CT_DIM4DI9_B1                        g_dataBuffer_Display[2218]& bit8
#define RIOM6CT_DIM4DI8_B1                        g_dataBuffer_Display[2219]& bit7
#define RIOM6CT_DIM4DI7_B1                        g_dataBuffer_Display[2219]& bit6
#define RIOM6CT_DIM4DI6_B1                        g_dataBuffer_Display[2219]& bit5
#define RIOM6CT_DIM4DI5_B1                        g_dataBuffer_Display[2219]& bit4
#define RIOM6CT_DIM4DI4_B1                        g_dataBuffer_Display[2219]& bit3
#define RIOM6CT_DIM4DI3_B1                        g_dataBuffer_Display[2219]& bit2
#define RIOM6CT_DIM4DI2_B1                        g_dataBuffer_Display[2219]& bit1
#define RIOM6CT_DIM4DI1_B1                        g_dataBuffer_Display[2219]& bit0
*/
//0x210    ERM1-->hmi
#define DT1HM_LifeSign_U16                            g_dataBuffer_Display[208]
#define DT1HM_VersionVxworks_U8                      g_dataBuffer_Display[212]/256
#define DT1HM_VersionMVB_U8                          g_dataBuffer_Display[213]%256
#define DT1HM_VersionSdb_U8                          g_dataBuffer_Display[213]/256
#define DT1HM_VersionPlc_U8                          g_dataBuffer_Display[212]%256

//0x211
#define DTHM_SingleDistance_U32                            Change_BigEen(g_dataBuffer_Display[224])*65536+Change_BigEen(g_dataBuffer_Display[225])
#define DTHM_SingleDetecDistance_U32                       Change_BigEen(g_dataBuffer_Display[226])*65536+Change_BigEen(g_dataBuffer_Display[227])
#define DTHM_SingleTractionPower_U32                       Change_BigEen(g_dataBuffer_Display[228])*65536+Change_BigEen(g_dataBuffer_Display[229])
#define DTHM_SingleBrakePower_U32                          Change_BigEen(g_dataBuffer_Display[230])*65536+Change_BigEen(g_dataBuffer_Display[231])
#define DTHM_SingleSivPower_U32                            Change_BigEen(g_dataBuffer_Display[232])*65536+Change_BigEen(g_dataBuffer_Display[233])
#define DTHM_SingleAP1Time_U32                             Change_BigEen(g_dataBuffer_Display[234])*65536+Change_BigEen(g_dataBuffer_Display[235])
#define DTHM_SingleAP2Time_U32                             Change_BigEen(g_dataBuffer_Display[236])*65536+Change_BigEen(g_dataBuffer_Display[237])
#define DTHM_SingleRunTime_U32                             Change_BigEen(g_dataBuffer_Display[238])*65536+Change_BigEen(g_dataBuffer_Display[239])


//0x212


#define DTHM_LoadRate1_U8                              g_dataBuffer_Display[253]%256
#define DTHM_LoadRate2_U8                              g_dataBuffer_Display[253]/256
#define DTHM_LoadRate3_U8                              g_dataBuffer_Display[254]%256
#define DTHM_LoadRate4_U8                              g_dataBuffer_Display[254]/256
#define DTHM_LoadRate5_U8                              g_dataBuffer_Display[255]%256
#define DTHM_LoadRate6_U8                              g_dataBuffer_Display[255]/256

/*
//0x211
#define DT1HM_SingleCount_U8                         g_dataBuffer_Display[224]%256
#define DT1HM_SingleYear_U8                          g_dataBuffer_Display[224]/256
#define DT1HM_SingleMonth_U8                         g_dataBuffer_Display[225]%256
#define DT1HM_SingleDay_U8                           g_dataBuffer_Display[225]/256
#define DT1HM_SingleMile_U32                         g_dataBuffer_Display[226]+g_dataBuffer_Display[227]*65536
#define DT1HM_SingleTime_U32                         g_dataBuffer_Display[228]+g_dataBuffer_Display[229]*65536
#define DT1HM_SingleTractionPower_U32                g_dataBuffer_Display[230]+g_dataBuffer_Display[231]*65536
#define DT1HM_SingleBrakePower_U32                   g_dataBuffer_Display[232]+g_dataBuffer_Display[233]*65536
#define DT1HM_SingleSivPower_U32                     g_dataBuffer_Display[234]+g_dataBuffer_Display[235]*65536
#define DT1HM_DetectionYear_U8                       g_dataBuffer_Display[236]/256
#define DT1HM_DetectionMonth_U8                      g_dataBuffer_Display[237]%256
#define DT1HM_DetectionDay_U8                        g_dataBuffer_Display[237]/256
#define DT1HM_DetectionMile_U32                      g_dataBuffer_Display[238]+g_dataBuffer_Display[239]*65536
*/
//0X220
#define DT2HM_LifeSign_U16                            g_dataBuffer_Display[272]
#define DT2HM_VersionVxworks_U8                      g_dataBuffer_Display[276]/256
#define DT2HM_VersionMVB_U8                          g_dataBuffer_Display[277]%256
#define DT2HM_VersionSdb_U8                          g_dataBuffer_Display[277]/256
#define DT2HM_VersionPlc_U8                          g_dataBuffer_Display[276]%256

/*

//0x211
#define DT2HM_SingleCount_U8                         g_dataBuffer_Display[224+64]%256
#define DT2HM_SingleYear_U8                          g_dataBuffer_Display[224+64]/256
#define DT2HM_SingleMonth_U8                         g_dataBuffer_Display[225+64]%256
#define DT2HM_SingleDay_U8                           g_dataBuffer_Display[225+64]/256
#define DT2HM_SingleMile_U32                         g_dataBuffer_Display[226+64]+g_dataBuffer_Display[227+64]*65536
#define DT2HM_SingleTime_U32                         g_dataBuffer_Display[228+64]+g_dataBuffer_Display[229+64]*65536
#define DT2HM_SingleTractionPower_U32                g_dataBuffer_Display[230+64]+g_dataBuffer_Display[231+64]*65536
#define DT2HM_SingleBrakePower_U32                   g_dataBuffer_Display[232+64]+g_dataBuffer_Display[233+64]*65536
#define DT2HM_SingleSivPower_U32                     g_dataBuffer_Display[234+64]+g_dataBuffer_Display[235+64]*65536
#define DT2HM_DetectionYear_U8                       g_dataBuffer_Display[236+64]/256
#define DT2HM_DetectionMonth_U8                      g_dataBuffer_Display[237+64]%256
#define DT2HM_DetectionDay_U8                        g_dataBuffer_Display[237+64]/256
#define DT2HM_DetectionMile_U32                      g_dataBuffer_Display[238+64]+g_dataBuffer_Display[239+64]*65536

*/

//0x310    HMI1-->CCU
#define HM1CT_LifeSign_U8                             g_dataBuffer_Display[336]%256
#define HM1CT_Version_U8                            g_dataBuffer_Display[351]/256

#define HM1CT_TimeSetFlag__B1                        g_dataBuffer_Display[339]& bit15

//0x320    HMI2-->CCU
#define HM2CT_LifeSign_U8                             g_dataBuffer_Display[400]%256
#define HM2CT_Version_U8                              g_dataBuffer_Display[415]/256

#define HM2CT_TimeSetFlag__B1                        g_dataBuffer_Display[403]& bit15



//0x308    ccu-->hmi
#define CTHM_CCU1_IsOnline_B1                        g_dataBuffer_Display[1872]& bit7
#define CTHM_CCU2_IsOnline_B1                        g_dataBuffer_Display[1872]& bit6
//#define CTHM_CCU1_IsMaster_B1                        g_dataBuffer_Display[1872]& bit5
//#define CTHM_CCU2_IsMaster_B1                        g_dataBuffer_Display[1872]& bit4
#define CTHM_ERM1_Online_B1                        g_dataBuffer_Display[1872]& bit5
#define CTHM_ERM2_Online_B1                        g_dataBuffer_Display[1872]& bit4
#define CTHM_HMI1_Online_B1                        g_dataBuffer_Display[1872]& bit3
#define CTHM_HMI2_Online_B1                        g_dataBuffer_Display[1872]& bit2



#define CTHM_RIOM1_GW_IsOnline_B1                          g_dataBuffer_Display[1872]& bit15
#define CTHM_RIOM2_GW_IsOnline_B1                        g_dataBuffer_Display[1872]& bit14
#define CTHM_RIOM3_GW_IsOnline_B1                        g_dataBuffer_Display[1872]& bit13
#define CTHM_RIOM4_GW_IsOnline_B1                        g_dataBuffer_Display[1872]& bit12
#define CTHM_RIOM5_GW_IsOnline_B1                        g_dataBuffer_Display[1872]& bit11
#define CTHM_RIOM6_GW_IsOnline_B1                        g_dataBuffer_Display[1872]& bit10

//#define CTHM_RIOM1_AIOM1_IsOnline_B1                       g_dataBuffer_Display[1874]& bit7


#define CTHM_RIOM1_DIM1_IsOnline_B1                        g_dataBuffer_Display[1873]& bit7
#define CTHM_RIOM1_DIM2_IsOnline_B1                        g_dataBuffer_Display[1873]& bit6
#define CTHM_RIOM1_DIM3_IsOnline_B1                        g_dataBuffer_Display[1873]& bit5
#define CTHM_RIOM1_DIM4_IsOnline_B1                        g_dataBuffer_Display[1873]& bit4
#define CTHM_RIOM1_DOM1_IsOnline_B1                        g_dataBuffer_Display[1873]& bit3
#define CTHM_RIOM1_AIOM1_IsOnline_B1                       g_dataBuffer_Display[1873]& bit2


#define CTHM_RIOM2_DIM1_IsOnline_B1                        g_dataBuffer_Display[1873]& bit15
#define CTHM_RIOM2_DOM1_IsOnline_B1                        g_dataBuffer_Display[1873]& bit14

#define CTHM_RIOM3_DIM1_IsOnline_B1                        g_dataBuffer_Display[1873]& bit11
#define CTHM_RIOM3_DOM1_IsOnline_B1                        g_dataBuffer_Display[1873]& bit10

#define CTHM_RIOM4_DIM1_IsOnline_B1                        g_dataBuffer_Display[1874]& bit7
#define CTHM_RIOM4_DOM1_IsOnline_B1                        g_dataBuffer_Display[1874]& bit6

#define CTHM_RIOM5_DIM1_IsOnline_B1                        g_dataBuffer_Display[1874]& bit3
#define CTHM_RIOM5_DOM1_IsOnline_B1                        g_dataBuffer_Display[1874]& bit2

#define CTHM_RIOM6_DIM1_IsOnline_B1                        g_dataBuffer_Display[1874]& bit15
#define CTHM_RIOM6_DIM2_IsOnline_B1                        g_dataBuffer_Display[1874]& bit14
#define CTHM_RIOM6_DIM3_IsOnline_B1                        g_dataBuffer_Display[1874]& bit13
#define CTHM_RIOM6_DIM4_IsOnline_B1                        g_dataBuffer_Display[1874]& bit12
#define CTHM_RIOM6_DOM1_IsOnline_B1                        g_dataBuffer_Display[1874]& bit11
#define CTHM_RIOM6_AIOM1_IsOnline_B1                       g_dataBuffer_Display[1874]& bit10


#define CTHM_BCU1_Online_B1                          g_dataBuffer_Display[1875]& bit7
#define CTHM_BCU2_Online_B1                          g_dataBuffer_Display[1875]& bit6
#define CTHM_BCU3_Online_B1                          g_dataBuffer_Display[1875]& bit5
#define CTHM_BCU4_Online_B1                          g_dataBuffer_Display[1875]& bit4
#define CTHM_DCU2_Online_B1                          g_dataBuffer_Display[1875]& bit3
#define CTHM_DCU3_Online_B1                          g_dataBuffer_Display[1875]& bit2
#define CTHM_DCU4_Online_B1                          g_dataBuffer_Display[1875]& bit1
#define CTHM_DCU5_Online_B1                          g_dataBuffer_Display[1875]& bit0

#define CTHM_SIV1_Online_B1                          g_dataBuffer_Display[1875]& bit15
#define CTHM_SIV2_Online_B1                          g_dataBuffer_Display[1875]& bit14

#define CTHM_FAU1_Online_B1                          g_dataBuffer_Display[1875]& bit13
#define CTHM_FAU2_Online_B1                          g_dataBuffer_Display[1875]& bit12

#define CTHM_EDCU1_Online_B1                          g_dataBuffer_Display[1875]& bit11
#define CTHM_EDCU2_Online_B1                          g_dataBuffer_Display[1875]& bit10
#define CTHM_EDCU3_Online_B1                          g_dataBuffer_Display[1875]& bit9
#define CTHM_EDCU4_Online_B1                          g_dataBuffer_Display[1875]& bit8
#define CTHM_EDCU5_Online_B1                          g_dataBuffer_Display[1875]& bit7
#define CTHM_EDCU6_Online_B1                          g_dataBuffer_Display[1875]& bit6
#define CTHM_EDCU7_Online_B1                          g_dataBuffer_Display[1876]& bit5
#define CTHM_EDCU8_Online_B1                          g_dataBuffer_Display[1876]& bit4
#define CTHM_EDCU9_Online_B1                          g_dataBuffer_Display[1876]& bit3
#define CTHM_EDCU10_Online_B1                          g_dataBuffer_Display[1876]& bit2
#define CTHM_EDCU11_Online_B1                          g_dataBuffer_Display[1876]& bit1
#define CTHM_EDCU12_Online_B1                          g_dataBuffer_Display[1876]& bit0



#define CTHM_PIS1_Online_B1                          g_dataBuffer_Display[1876]& bit15
#define CTHM_PIS2_Online_B1                          g_dataBuffer_Display[1876]& bit14


#define CTHM_HVAC1_Online_B1                          g_dataBuffer_Display[1876]& bit13
#define CTHM_HVAC2_Online_B1                          g_dataBuffer_Display[1876]& bit12
#define CTHM_HVAC3_Online_B1                          g_dataBuffer_Display[1876]& bit11
#define CTHM_HVAC4_Online_B1                          g_dataBuffer_Display[1876]& bit10
#define CTHM_HVAC5_Online_B1                          g_dataBuffer_Display[1876]& bit9
#define CTHM_HVAC6_Online_B1                          g_dataBuffer_Display[1876]& bit8

#define CTHM_ATC1_Online_B1                          g_dataBuffer_Display[1877]& bit7
#define CTHM_ATC2_Online_B1                          g_dataBuffer_Display[1877]& bit6

#define CTHM_RTU1_Online_B1                          g_dataBuffer_Display[1877]& bit5
#define CTHM_RTU2_Online_B1                          g_dataBuffer_Display[1877]& bit4



#define CTHM_CCU1_IsMaster_B1                        g_dataBuffer_Display[1880]& bit11
#define CTHM_CCU2_IsMaster_B1                        g_dataBuffer_Display[1880]& bit10
#define CTHM_TC1CabActive_B1                        g_dataBuffer_Display[1880]& bit9
#define CTHM_TC2CabActive_B1                        g_dataBuffer_Display[1880]& bit8

#define CTHM_TractionState_B1                       g_dataBuffer_Display[1881]& bit7
#define CTHM_BrakeState_B1                          g_dataBuffer_Display[1881]& bit6
#define CTHM_QuickBrake_B1                          g_dataBuffer_Display[1881]& bit5
#define CTHM_EmgcyBrakeState_B1                     g_dataBuffer_Display[1881]& bit4

#define CTHM_RunForward_B1                          g_dataBuffer_Display[1881]& bit3
#define CTHM_RunBackward_B1                         g_dataBuffer_Display[1881]& bit2

#define CTHM_TractionLevel_U8                        g_dataBuffer_Display[1884]%256

#define CTHM_TrainSpeed_U16                          Change_BigEen(g_dataBuffer_Display[1885])

#define CTHM_BrakeLevel_U8                           g_dataBuffer_Display[1886]%256
//#define CTHM_LineNumber_U8                           g_dataBuffer_Display[1886]/256
//#define CTHM_TrainNumber_U8                          g_dataBuffer_Display[1887]%256

//0x309    ccu-->hmi
#define CTHM_CCU1_VersionPlc_U8                        g_dataBuffer_Display[1888]%256
#define CTHM_CCU1_VersionMVB_U8                        g_dataBuffer_Display[1888]/256
#define CTHM_CCU1_VersionSdb_U8                        g_dataBuffer_Display[1889]%256
#define CTHM_CCU1_VersionVxworks_U8                    g_dataBuffer_Display[1889]/256

#define CTHM_CCU2_VersionPlc_U8                        g_dataBuffer_Display[1899]/256
#define CTHM_CCU2_VersionMVB_U8                        g_dataBuffer_Display[1900]%256
#define CTHM_CCU2_VersionSdb_U8                        g_dataBuffer_Display[1900]/256
#define CTHM_CCU2_VersionVxworks_U8                    g_dataBuffer_Display[1901]/256


#define CTHM_SetHVACModeTC1_U8                        g_dataBuffer_Display[1888]%256
#define CTHM_SetHVACModeMP1_U8                        g_dataBuffer_Display[1888]/256
#define CTHM_SetHVACModeM1_U8                         g_dataBuffer_Display[1889]%256
#define CTHM_SetHVACModeM2_U8                         g_dataBuffer_Display[1889]/256
#define CTHM_SetHVACModeMP2_U8                        g_dataBuffer_Display[1890]%256
#define CTHM_SetHVACModeTC2_U8                        g_dataBuffer_Display[1890]/256


#define CTHM_SetHVACTempTC1_U8                        g_dataBuffer_Display[1891]%256
#define CTHM_SetHVACTempMP1_U8                        g_dataBuffer_Display[1891]/256
#define CTHM_SetHVACTempM1_U8                         g_dataBuffer_Display[1892]%256
#define CTHM_SetHVACTempM2_U8                         g_dataBuffer_Display[1892]/256
#define CTHM_SetHVACTempMP2_U8                        g_dataBuffer_Display[1893]%256
#define CTHM_SetHVACTempTC2_U8                        g_dataBuffer_Display[1893]/256

#define CTHM_WashingMode_B1                          g_dataBuffer_Display[1894]& bit7
#define CTHM_BackMode_B1                             g_dataBuffer_Display[1894]& bit6
#define CTHM_KMKFault_B1                             g_dataBuffer_Display[1894]& bit5
//#define CTHM_AcDeDataIsValid_B1                      g_dataBuffer_Display[1894]& bit4

#define CTHM_SetWheelDiaTC1_U8                        g_dataBuffer_Display[1894]/256
#define CTHM_SetWheelDiaMp1_U8                        g_dataBuffer_Display[1895]%256
#define CTHM_SetWheelDiaM1_U8                         g_dataBuffer_Display[1895]/256
#define CTHM_SetWheelDiaM2_U8                         g_dataBuffer_Display[1896]%256
#define CTHM_SetWheelDiaMp2_U8                        g_dataBuffer_Display[1896]/256
#define CTHM_SetWheelDiaTC2_U8                        g_dataBuffer_Display[1897]%256

#define CTHM_AcDeHandleLevel_I8                        (int16_t)(char)(g_dataBuffer_Display[1897]/256)
#define CTHM_AcDeSpeed_I16                             (int16_t)Change_BigEen(g_dataBuffer_Display[1898])
#define CTHM_AcDeStartVelocity_U16                     Change_BigEen(g_dataBuffer_Display[1899])
//#define CTHM_AcDeStopVelocity_U16                      Change_BigEen(g_dataBuffer_Display[1900])
#define CTHM_AcDeDistance_U16                          Change_BigEen(g_dataBuffer_Display[1901])

//#define CTHM_AcDeSpeedMoment_I16                        (int16_t)Change_BigEen(g_dataBuffer_Display[1902])
//#define CTHM_AcDeShorkRatio_I16                         (int16_t)Change_BigEen(g_dataBuffer_Display[1903])


//0x510

#define BCU1CT_Mass_1_Valid_B1                        g_dataBuffer_Display[464]& bit15
#define BCU1CT_EP_OK_1_B1                             g_dataBuffer_Display[464]& bit14
#define BCU1CT_Brake_Applied_1_B1                     g_dataBuffer_Display[464]& bit11
#define BCU1CT_Remote_Releae_1_B1                     g_dataBuffer_Display[464]& bit10
#define BCU1CT_Emergency_brake_active_1_B1            g_dataBuffer_Display[464]& bit9
#define BCU1CT_Active_slide_1_B1                      g_dataBuffer_Display[464]& bit8


#define BCU1CT_BCU_LifeData_U8                         g_dataBuffer_Display[464]%256


#define BCU1CT_TC_Mass_1_I16                            (int16_t)Change_BigEen(g_dataBuffer_Display[465])

#define BCU1CT_Prime_GV_B1                            g_dataBuffer_Display[466]& bit14
//#define BCU1CT_Prime_GV_B1                            g_dataBuffer_Display[466]& bit6
#define BCU1CT_Selftest_Expired_26h_1_B1              g_dataBuffer_Display[466]& bit13
#define BCU1CT_Selftest_Expired_24h_1_B1              g_dataBuffer_Display[466]& bit12
#define BCU1CT_Selftest_failed_1_B1                   g_dataBuffer_Display[466]& bit11
#define BCU1CT_Selftest_succces_1_B1                  g_dataBuffer_Display[466]& bit10
#define BCU1CT_Selftest_active_1_B1                   g_dataBuffer_Display[466]& bit9
#define BCU1CT_Last_selftest_aborted_1_B1             g_dataBuffer_Display[466]& bit8

#define BCU1CT_CanID_B1                               g_dataBuffer_Display[466]& bit6
#define BCU1CT_Drive_active_1_B1                      g_dataBuffer_Display[466]& bit5
#define BCU1CT_Brake_active_1_B1                      g_dataBuffer_Display[466]& bit4
#define BCU1CT_EmergencyDrive_active_1_B1             g_dataBuffer_Display[466]& bit3
#define BCU1CT_Fastbrake_active_1_B1                  g_dataBuffer_Display[466]& bit2
#define BCU1CT_RESERVE_1_B1                           g_dataBuffer_Display[466]& bit1
#define BCU1CT_EB_active_in_CAN_seg_1_1_B1            g_dataBuffer_Display[466]& bit0

#define BCU1CT_IMember_Valid_6_B1                     g_dataBuffer_Display[467]& bit13
#define BCU1CT_IMember_Valid_5_B1                     g_dataBuffer_Display[467]& bit12
#define BCU1CT_IMember_Valid_4_B1                     g_dataBuffer_Display[467]& bit11
#define BCU1CT_IMember_Valid_3_B1                     g_dataBuffer_Display[467]& bit10
#define BCU1CT_IMember_Valid_2_B1                     g_dataBuffer_Display[467]& bit9
#define BCU1CT_IMember_Valid_1_B1                     g_dataBuffer_Display[467]& bit8

#define BCU1CT_WheelDiameterInput_Status_B1           g_dataBuffer_Display[467]& bit5
#define BCU1CT_WheelDiameterInput_Ready_B1            g_dataBuffer_Display[467]& bit4
#define BCU1CT_ED_Brake_effort_C_valid_B1             g_dataBuffer_Display[467]& bit3
#define BCU1CT_ED_Brake_effort_B_valid_B1             g_dataBuffer_Display[467]& bit2
#define BCU1CT_ED_Cutout_C_B1                         g_dataBuffer_Display[467]& bit1
#define BCU1CT_ED_Cutout_B_B1                         g_dataBuffer_Display[467]& bit0

#define BCU1CT_ED_Brake_effort_B1_I16                 (int16_t)Change_BigEen(g_dataBuffer_Display[468])
#define BCU1CT_ED_Brake_effort_C1_I16                 (int16_t)Change_BigEen(g_dataBuffer_Display[469])

#define BCU1CT_Mass_2_Valid_B1                        g_dataBuffer_Display[470]& bit15
#define BCU1CT_EP_OK_2_B1                             g_dataBuffer_Display[470]& bit14
#define BCU1CT_Brake_Applied_2_B1                     g_dataBuffer_Display[470]& bit11
#define BCU1CT_Remote_Releae_2_B1                     g_dataBuffer_Display[470]& bit10
#define BCU1CT_Emergency_brake_active_2_B1            g_dataBuffer_Display[470]& bit9
#define BCU1CT_Active_slide_2_B1                      g_dataBuffer_Display[470]& bit8

#define BCU1CT_TC_Mass_2_I16                            (int16_t)Change_BigEen(g_dataBuffer_Display[471])

#define BCU1CT_Mass_3_Valid_B1                        g_dataBuffer_Display[472]& bit15
#define BCU1CT_EP_OK_3_B1                             g_dataBuffer_Display[472]& bit14
#define BCU1CT_Brake_Applied_3_B1                     g_dataBuffer_Display[472]& bit11
#define BCU1CT_Remote_Releae_3_B1                     g_dataBuffer_Display[472]& bit10
#define BCU1CT_Emergency_brake_active_3_B1            g_dataBuffer_Display[472]& bit9
#define BCU1CT_Active_slide_3_B1                      g_dataBuffer_Display[472]& bit8

#define BCU1CT_TC_Mass_3_I16                            (int16_t)Change_BigEen(g_dataBuffer_Display[473])

#define BCU1CT_Mass_4_Valid_B1                        g_dataBuffer_Display[474]& bit15
#define BCU1CT_EP_OK_4_B1                             g_dataBuffer_Display[474]& bit14
#define BCU1CT_Brake_Applied_4_B1                     g_dataBuffer_Display[474]& bit11
#define BCU1CT_Remote_Releae_4_B1                     g_dataBuffer_Display[474]& bit10
#define BCU1CT_Emergency_brake_active_4_B1            g_dataBuffer_Display[474]& bit9
#define BCU1CT_Active_slide_4_B1                      g_dataBuffer_Display[474]& bit8

#define BCU1CT_TC_Mass_4_I16                            (int16_t)Change_BigEen(g_dataBuffer_Display[475])

#define BCU1CT_Mass_5_Valid_B1                        g_dataBuffer_Display[476]& bit15
#define BCU1CT_EP_OK_5_B1                             g_dataBuffer_Display[476]& bit14
#define BCU1CT_Brake_Applied_5_B1                     g_dataBuffer_Display[476]& bit11
#define BCU1CT_Remote_Releae_5_B1                     g_dataBuffer_Display[476]& bit10
#define BCU1CT_Emergency_brake_active_5_B1            g_dataBuffer_Display[476]& bit9
#define BCU1CT_Active_slide_5_B1                      g_dataBuffer_Display[476]& bit8

#define BCU1CT_TC_Mass_5_I16                          (int16_t)Change_BigEen(g_dataBuffer_Display[477])

#define BCU1CT_Mass_6_Valid_B1                        g_dataBuffer_Display[478]& bit15
#define BCU1CT_EP_OK_6_B1                             g_dataBuffer_Display[478]& bit14
#define BCU1CT_Brake_Applied_6_B1                     g_dataBuffer_Display[478]& bit11
#define BCU1CT_Remote_Releae_6_B1                     g_dataBuffer_Display[478]& bit10
#define BCU1CT_Emergency_brake_active_6_B1            g_dataBuffer_Display[478]& bit9
#define BCU1CT_Active_slide_6_B1                      g_dataBuffer_Display[478]& bit8

#define BCU1CT_TC_Mass_6_I16                          (int16_t)Change_BigEen(g_dataBuffer_Display[479])
//0x511
#define BCU1CT_BCU_A1_WDActive_B1                     g_dataBuffer_Display[480]& bit4
#define BCU1CT_BCU_A1_SpeedActive_4_B1                g_dataBuffer_Display[480]& bit3
#define BCU1CT_BCU_A1_SpeedActive_3_B1                g_dataBuffer_Display[480]& bit2
#define BCU1CT_BCU_A1_SpeedActive_2_B1                g_dataBuffer_Display[480]& bit1
#define BCU1CT_BCU_A1_SpeedActive_1_B1                g_dataBuffer_Display[480]& bit0

#define BCU1CT_BCU_A1_Speed_1_U16                     Change_BigEen(g_dataBuffer_Display[482])
#define BCU1CT_BCU_A1_Speed_2_U16                     Change_BigEen(g_dataBuffer_Display[483])
#define BCU1CT_BCU_A1_Speed_3_U16                     Change_BigEen(g_dataBuffer_Display[484])
#define BCU1CT_BCU_A1_Speed_4_U16                     Change_BigEen(g_dataBuffer_Display[485])

#define BCU1CT_BCU_BCU_A1_WheelDia_U16                Change_BigEen(g_dataBuffer_Display[486])
#define BCU1CT_EP_possible_1_U16                      Change_BigEen(g_dataBuffer_Display[490])
#define BCU1CT_EP_possible_2_U16                      Change_BigEen(g_dataBuffer_Display[491])
#define BCU1CT_EP_possible_3_U16                      Change_BigEen(g_dataBuffer_Display[492])
#define BCU1CT_EP_possible_4_U16                      Change_BigEen(g_dataBuffer_Display[493])
#define BCU1CT_EP_possible_5_U16                      Change_BigEen(g_dataBuffer_Display[494])
#define BCU1CT_EP_possible_6_U16                      Change_BigEen(g_dataBuffer_Display[495])

//0x512
#define BCU1CT_BSR_pressure_1_U16                     Change_BigEen(g_dataBuffer_Display[496])
#define BCU1CT_BRK_cyl_pressure_1_U16                 Change_BigEen(g_dataBuffer_Display[498])
#define BCU1CT_Air_spring_pressure_1_U16              Change_BigEen(g_dataBuffer_Display[499])
#define BCU1CT_MRE_pressure_1_U16                     Change_BigEen(g_dataBuffer_Display[500])
#define BCU1CT_BSR_pressure_2_U16                     Change_BigEen(g_dataBuffer_Display[501])
#define BCU1CT_Park_pressure_2_U16                    Change_BigEen(g_dataBuffer_Display[502])
#define BCU1CT_BRK_cyl_pressure_2_U16                 Change_BigEen(g_dataBuffer_Display[503])
#define BCU1CT_Air_spring_pressure_2_U16              Change_BigEen(g_dataBuffer_Display[504])

#define BCU1CT_Air_spr_pressure_2_Active_B1           g_dataBuffer_Display[508]& bit11
#define BCU1CT_BRK_cyl_pressure_2_Active_B1           g_dataBuffer_Display[508]& bit10
#define BCU1CT_Park_pressure_2_Atcive_B1              g_dataBuffer_Display[508]& bit9
#define BCU1CT_BSR_pressure_2_Active_B1               g_dataBuffer_Display[508]& bit8

#define BCU1CT_MRE_pressure_1_Atcive_B1                g_dataBuffer_Display[508]& bit4
#define BCU1CT_Air_spr_pressure_1_Active_B1            g_dataBuffer_Display[508]& bit3
#define BCU1CT_BRK_cyl_pressure_1_Active_B1            g_dataBuffer_Display[508]& bit2
#define BCU1CT_BSR_pressure_1_Active_B1                g_dataBuffer_Display[508]& bit0

//0x513
#define BCU1CT_BSR_pressure_3_U16                     Change_BigEen(g_dataBuffer_Display[496+16])
#define BCU1CT_BRK_cyl_pressure_3_U16                 Change_BigEen(g_dataBuffer_Display[498+16])
#define BCU1CT_Air_spring_pressure_3_U16              Change_BigEen(g_dataBuffer_Display[499+16])
#define BCU1CT_Bp_pressure_3_U16                      Change_BigEen(g_dataBuffer_Display[500+16])
#define BCU1CT_BSR_pressure_4_U16                     Change_BigEen(g_dataBuffer_Display[501+16])
#define BCU1CT_Park_pressure_4_U16                    Change_BigEen(g_dataBuffer_Display[502+16])
#define BCU1CT_BRK_cyl_pressure_4_U16                 Change_BigEen(g_dataBuffer_Display[503+16])
#define BCU1CT_Air_spring_pressure_4_U16              Change_BigEen(g_dataBuffer_Display[504+16])

#define BCU1CT_Air_spr_pressure_4_Active_B1           g_dataBuffer_Display[508+16]& bit11
#define BCU1CT_BRK_cyl_pressure_4_Active_B1           g_dataBuffer_Display[508+16]& bit10
#define BCU1CT_Park_pressure_4_Atcive_B1              g_dataBuffer_Display[508+16]& bit9
#define BCU1CT_BSR_pressure_4_Active_B1               g_dataBuffer_Display[508+16]& bit8

#define BCU1CT_Bp_pressure_3_Atcive_B1                 g_dataBuffer_Display[508+16]& bit4
#define BCU1CT_Air_spr_pressure_3_Active_B1            g_dataBuffer_Display[508+16]& bit3
#define BCU1CT_BRK_cyl_pressure_3_Active_B1            g_dataBuffer_Display[508+16]& bit2
#define BCU1CT_BSR_pressure_3_Active_B1                g_dataBuffer_Display[508+16]& bit0

//0x514
#define BCU1CT_BSR_pressure_5_U16                     Change_BigEen(g_dataBuffer_Display[496+32])
#define BCU1CT_BRK_cyl_pressure_5_U16                 Change_BigEen(g_dataBuffer_Display[498+32])
#define BCU1CT_Air_spring_pressure_5_U16              Change_BigEen(g_dataBuffer_Display[499+32])

#define BCU1CT_BSR_pressure_6_U16                     Change_BigEen(g_dataBuffer_Display[501+32])
#define BCU1CT_Park_pressure_6_U16                    Change_BigEen(g_dataBuffer_Display[502+32])
#define BCU1CT_BRK_cyl_pressure_6_U16                 Change_BigEen(g_dataBuffer_Display[503+32])
#define BCU1CT_Air_spring_pressure_6_U16              Change_BigEen(g_dataBuffer_Display[504+32])

#define BCU1CT_Air_spr_pressure_6_Active_B1           g_dataBuffer_Display[508+32]& bit11
#define BCU1CT_BRK_cyl_pressure_6_Active_B1           g_dataBuffer_Display[508+32]& bit10
#define BCU1CT_Park_pressure_6_Atcive_B1              g_dataBuffer_Display[508+32]& bit9
#define BCU1CT_BSR_pressure_6_Active_B1               g_dataBuffer_Display[508+32]& bit8


#define BCU1CT_Air_spr_pressure_5_Active_B1            g_dataBuffer_Display[508+32]& bit3
#define BCU1CT_BRK_cyl_pressure_5_Active_B1            g_dataBuffer_Display[508+32]& bit2
#define BCU1CT_BSR_pressure_5_Active_B1                g_dataBuffer_Display[508+32]& bit0

//0x515
#define BCU1CT_AllPbrReleased_PerCAN_B1                g_dataBuffer_Display[545]& bit8


//0x530
#define BCU3CT_Mass_1_Valid_B1                        g_dataBuffer_Display[464+192]& bit15
#define BCU3CT_EP_OK_1_B1                            g_dataBuffer_Display[464+192]& bit14
#define BCU3CT_Brake_Applied_1_B1                     g_dataBuffer_Display[464+192]& bit11
#define BCU3CT_Remote_Releae_1_B1                     g_dataBuffer_Display[464+192]& bit10
#define BCU3CT_Emergency_brake_active_1_B1            g_dataBuffer_Display[464+192]& bit9
#define BCU3CT_Active_slide_1_B1                      g_dataBuffer_Display[464+192]& bit8


#define BCU3CT_BCU_LifeData_U8                         g_dataBuffer_Display[464+192]%256


#define BCU3CT_TC_Mass_1_I16                        (int16_t)Change_BigEen(g_dataBuffer_Display[465+192])

#define BCU3CT_Prime_GV_B1                            g_dataBuffer_Display[466+192]& bit14

//#define BCU3CT_Prime_GV_B1                            g_dataBuffer_Display[466+192]& bit6
#define BCU3CT_Selftest_Expired_26h_1_B1              g_dataBuffer_Display[466+192]& bit13
#define BCU3CT_Selftest_Expired_24h_1_B1              g_dataBuffer_Display[466+192]& bit12
#define BCU3CT_Selftest_failed_1_B1                   g_dataBuffer_Display[466+192]& bit11
#define BCU3CT_Selftest_succces_1_B1                  g_dataBuffer_Display[466+192]& bit10
#define BCU3CT_Selftest_active_1_B1                   g_dataBuffer_Display[466+192]& bit9
#define BCU3CT_Last_selftest_aborted_1_B1             g_dataBuffer_Display[466+192]& bit8

#define BCU3CT_CanID_B1                               g_dataBuffer_Display[466+192]& bit6
#define BCU3CT_Drive_active_1_B1                      g_dataBuffer_Display[466+192]& bit5
#define BCU3CT_Brake_active_1_B1                      g_dataBuffer_Display[466+192]& bit4
#define BCU3CT_EmergencyDrive_active_1_B1             g_dataBuffer_Display[466+192]& bit3
#define BCU3CT_Fastbrake_active_1_B1                  g_dataBuffer_Display[466+192]& bit2
#define BCU3CT_RESERVE_1_B1                           g_dataBuffer_Display[466+192]& bit1
#define BCU3CT_EB_active_in_CAN_seg_1_1_B1            g_dataBuffer_Display[466+192]& bit0

#define BCU3CT_IMember_Valid_6_B1                     g_dataBuffer_Display[467+192]& bit13
#define BCU3CT_IMember_Valid_5_B1                     g_dataBuffer_Display[467+192]& bit12
#define BCU3CT_IMember_Valid_4_B1                     g_dataBuffer_Display[467+192]& bit11
#define BCU3CT_IMember_Valid_3_B1                     g_dataBuffer_Display[467+192]& bit10
#define BCU3CT_IMember_Valid_2_B1                     g_dataBuffer_Display[467+192]& bit9
#define BCU3CT_IMember_Valid_1_B1                     g_dataBuffer_Display[467+192]& bit8

#define BCU3CT_WheelDiameterInput_Status_B1           g_dataBuffer_Display[467+192]& bit5
#define BCU3CT_WheelDiameterInput_Ready_B1            g_dataBuffer_Display[467+192]& bit4
#define BCU3CT_ED_Brake_effort_C_valid_B1             g_dataBuffer_Display[467+192]& bit3
#define BCU3CT_ED_Brake_effort_B_valid_B1             g_dataBuffer_Display[467+192]& bit2
#define BCU3CT_ED_Cutout_C_B1                         g_dataBuffer_Display[467+192]& bit1
#define BCU3CT_ED_Cutout_B_B1                         g_dataBuffer_Display[467+192]& bit0

#define BCU3CT_ED_Brake_effort_B1_I16                  (int16_t)Change_BigEen(g_dataBuffer_Display[468+192])
#define BCU3CT_ED_Brake_effort_C1_I16                  (int16_t)Change_BigEen(g_dataBuffer_Display[469+192])

#define BCU3CT_Mass_2_Valid_B1                        g_dataBuffer_Display[470+192]& bit15
#define BCU3CT_EP_OK_2_B1                             g_dataBuffer_Display[470+192]& bit14
#define BCU3CT_Brake_Applied_2_B1                     g_dataBuffer_Display[470+192]& bit11
#define BCU3CT_Remote_Releae_2_B1                     g_dataBuffer_Display[470+192]& bit10
#define BCU3CT_Emergency_brake_active_2_B1            g_dataBuffer_Display[470+192]& bit9
#define BCU3CT_Active_slide_2_B1                      g_dataBuffer_Display[470+192]& bit8

#define BCU3CT_TC_Mass_2_I16                             (int16_t)Change_BigEen(g_dataBuffer_Display[471+192])

#define BCU3CT_Mass_3_Valid_B1                        g_dataBuffer_Display[472+192]& bit15
#define BCU3CT_EP_OK_3_B1                             g_dataBuffer_Display[472+192]& bit14
#define BCU3CT_Brake_Applied_3_B1                     g_dataBuffer_Display[472+192]& bit11
#define BCU3CT_Remote_Releae_3_B1                     g_dataBuffer_Display[472+192]& bit10
#define BCU3CT_Emergency_brake_active_3_B1            g_dataBuffer_Display[472+192]& bit9
#define BCU3CT_Active_slide_3_B1                      g_dataBuffer_Display[472+192]& bit8

#define BCU3CT_TC_Mass_3_I16                             (int16_t)Change_BigEen(g_dataBuffer_Display[473+192])

#define BCU3CT_Mass_4_Valid_B1                        g_dataBuffer_Display[474+192]& bit15
#define BCU3CT_EP_OK_4_B1                             g_dataBuffer_Display[474+192]& bit14
#define BCU3CT_Brake_Applied_4_B1                     g_dataBuffer_Display[474+192]& bit11
#define BCU3CT_Remote_Releae_4_B1                     g_dataBuffer_Display[474+192]& bit10
#define BCU3CT_Emergency_brake_active_4_B1            g_dataBuffer_Display[474+192]& bit9
#define BCU3CT_Active_slide_4_B1                      g_dataBuffer_Display[474+192]& bit8

#define BCU3CT_TC_Mass_4_I16                             (int16_t)Change_BigEen(g_dataBuffer_Display[475+192])

#define BCU3CT_Mass_5_Valid_B1                        g_dataBuffer_Display[476+192]& bit15
#define BCU3CT_EP_OK_5_B1                             g_dataBuffer_Display[476+192]& bit14
#define BCU3CT_Brake_Applied_5_B1                     g_dataBuffer_Display[476+192]& bit11
#define BCU3CT_Remote_Releae_5_B1                     g_dataBuffer_Display[476+192]& bit10
#define BCU3CT_Emergency_brake_active_5_B1            g_dataBuffer_Display[476+192]& bit9
#define BCU3CT_Active_slide_5_B1                      g_dataBuffer_Display[476+192]& bit8

#define BCU3CT_TC_Mass_5_I16                           (int16_t)Change_BigEen(g_dataBuffer_Display[477+192])

#define BCU3CT_Mass_6_Valid_B1                        g_dataBuffer_Display[478+192]& bit15
#define BCU3CT_EP_OK_6_B1                             g_dataBuffer_Display[478+192]& bit14
#define BCU3CT_Brake_Applied_6_B1                     g_dataBuffer_Display[478+192]& bit11
#define BCU3CT_Remote_Releae_6_B1                     g_dataBuffer_Display[478+192]& bit10
#define BCU3CT_Emergency_brake_active_6_B1            g_dataBuffer_Display[478+192]& bit9
#define BCU3CT_Active_slide_6_B1                      g_dataBuffer_Display[478+192]& bit8

#define BCU3CT_TC_Mass_6_I16                           (int16_t)Change_BigEen(g_dataBuffer_Display[479+192])
//0x531
#define BCU3CT_BCU_A1_WDActive_B1                     g_dataBuffer_Display[480+192]& bit4
#define BCU3CT_BCU_A1_SpeedActive_4_B1                g_dataBuffer_Display[480+192]& bit3
#define BCU3CT_BCU_A1_SpeedActive_3_B1                g_dataBuffer_Display[480+192]& bit2
#define BCU3CT_BCU_A1_SpeedActive_2_B1                g_dataBuffer_Display[480+192]& bit1
#define BCU3CT_BCU_A1_SpeedActive_1_B1                g_dataBuffer_Display[480+192]& bit0

#define BCU3CT_BCU_A1_Speed_1_U16                     Change_BigEen(g_dataBuffer_Display[482+192])
#define BCU3CT_BCU_A1_Speed_2_U16                     Change_BigEen(g_dataBuffer_Display[483+192])
#define BCU3CT_BCU_A1_Speed_3_U16                     Change_BigEen(g_dataBuffer_Display[484+192])
#define BCU3CT_BCU_A1_Speed_4_U16                     Change_BigEen(g_dataBuffer_Display[485+192])

#define BCU3CT_BCU_BCU_A1_WheelDia_U16                Change_BigEen(g_dataBuffer_Display[486+192])
#define BCU3CT_EP_possible_1_U16                      Change_BigEen(g_dataBuffer_Display[490+192])
#define BCU3CT_EP_possible_2_U16                      Change_BigEen(g_dataBuffer_Display[491+192])
#define BCU3CT_EP_possible_3_U16                      Change_BigEen(g_dataBuffer_Display[492+192])
#define BCU3CT_EP_possible_4_U16                      Change_BigEen(g_dataBuffer_Display[493+192])
#define BCU3CT_EP_possible_5_U16                      Change_BigEen(g_dataBuffer_Display[494+192])
#define BCU3CT_EP_possible_6_U16                      Change_BigEen(g_dataBuffer_Display[495+192])

//0x532
#define BCU3CT_BSR_pressure_1_U16                     Change_BigEen(g_dataBuffer_Display[496+192])
#define BCU3CT_BRK_cyl_pressure_1_U16                 Change_BigEen(g_dataBuffer_Display[498+192])
#define BCU3CT_Air_spring_pressure_1_U16              Change_BigEen(g_dataBuffer_Display[499+192])
#define BCU3CT_MRE_pressure_1_U16                     Change_BigEen(g_dataBuffer_Display[500+192])
#define BCU3CT_BSR_pressure_2_U16                     Change_BigEen(g_dataBuffer_Display[501+192])
#define BCU3CT_Park_pressure_2_U16                    Change_BigEen(g_dataBuffer_Display[502+192])
#define BCU3CT_BRK_cyl_pressure_2_U16                 Change_BigEen(g_dataBuffer_Display[503+192])
#define BCU3CT_Air_spring_pressure_2_U16              Change_BigEen(g_dataBuffer_Display[504+192])

#define BCU3CT_Air_spr_pressure_2_Active_B1           g_dataBuffer_Display[508+192]& bit11
#define BCU3CT_BRK_cyl_pressure_2_Active_B1           g_dataBuffer_Display[508+192]& bit10
#define BCU3CT_Park_pressure_2_Atcive_B1              g_dataBuffer_Display[508+192]& bit9
#define BCU3CT_BSR_pressure_2_Active_B1               g_dataBuffer_Display[508+192]& bit8

#define BCU3CT_MRE_pressure_1_Atcive_B1                g_dataBuffer_Display[508+192]& bit4
#define BCU3CT_Air_spr_pressure_1_Active_B1            g_dataBuffer_Display[508+192]& bit3
#define BCU3CT_BRK_cyl_pressure_1_Active_B1            g_dataBuffer_Display[508+192]& bit2
#define BCU3CT_BSR_pressure_1_Active_B1                g_dataBuffer_Display[508+192]& bit0

//0x533
#define BCU3CT_BSR_pressure_3_U16                     Change_BigEen(g_dataBuffer_Display[496+16+192])
#define BCU3CT_BRK_cyl_pressure_3_U16                 Change_BigEen(g_dataBuffer_Display[498+16+192])
#define BCU3CT_Air_spring_pressure_3_U16              Change_BigEen(g_dataBuffer_Display[499+16+192])
#define BCU3CT_Bp_pressure_3_U16                      Change_BigEen(g_dataBuffer_Display[500+16+192])
#define BCU3CT_BSR_pressure_4_U16                     Change_BigEen(g_dataBuffer_Display[501+16+192])
#define BCU3CT_Park_pressure_4_U16                    Change_BigEen(g_dataBuffer_Display[502+16+192])
#define BCU3CT_BRK_cyl_pressure_4_U16                 Change_BigEen(g_dataBuffer_Display[503+16+192])
#define BCU3CT_Air_spring_pressure_4_U16              Change_BigEen(g_dataBuffer_Display[504+16+192])

#define BCU3CT_Air_spr_pressure_4_Active_B1           g_dataBuffer_Display[508+16+192]& bit11
#define BCU3CT_BRK_cyl_pressure_4_Active_B1           g_dataBuffer_Display[508+16+192]& bit10
#define BCU3CT_Park_pressure_4_Atcive_B1              g_dataBuffer_Display[508+16+192]& bit9
#define BCU3CT_BSR_pressure_4_Active_B1               g_dataBuffer_Display[508+16+192]& bit8

#define BCU3CT_Bp_pressure_3_Atcive_B1                 g_dataBuffer_Display[508+16+192]& bit4
#define BCU3CT_Air_spr_pressure_3_Active_B1            g_dataBuffer_Display[508+16+192]& bit3
#define BCU3CT_BRK_cyl_pressure_3_Active_B1            g_dataBuffer_Display[508+16+192]& bit2
#define BCU3CT_BSR_pressure_3_Active_B1                g_dataBuffer_Display[508+16+192]& bit0

//0x534
#define BCU3CT_BSR_pressure_5_U16                     Change_BigEen(g_dataBuffer_Display[496+32+192])
#define BCU3CT_BRK_cyl_pressure_5_U16                 Change_BigEen(g_dataBuffer_Display[498+32+192])
#define BCU3CT_Air_spring_pressure_5_U16              Change_BigEen(g_dataBuffer_Display[499+32+192])

#define BCU3CT_BSR_pressure_6_U16                     Change_BigEen(g_dataBuffer_Display[501+32+192])
#define BCU3CT_Park_pressure_6_U16                    Change_BigEen(g_dataBuffer_Display[502+32+192])
#define BCU3CT_BRK_cyl_pressure_6_U16                 Change_BigEen(g_dataBuffer_Display[503+32+192])
#define BCU3CT_Air_spring_pressure_6_U16              Change_BigEen(g_dataBuffer_Display[504+32+192])

#define BCU3CT_Air_spr_pressure_6_Active_B1           g_dataBuffer_Display[508+32+192]& bit11
#define BCU3CT_BRK_cyl_pressure_6_Active_B1           g_dataBuffer_Display[508+32+192]& bit10
#define BCU3CT_Park_pressure_6_Atcive_B1              g_dataBuffer_Display[508+32+192]& bit9
#define BCU3CT_BSR_pressure_6_Active_B1               g_dataBuffer_Display[508+32+192]& bit8


#define BCU3CT_Air_spr_pressure_5_Active_B1            g_dataBuffer_Display[508+32+192]& bit3
#define BCU3CT_BRK_cyl_pressure_5_Active_B1            g_dataBuffer_Display[508+32+192]& bit2
#define BCU3CT_BSR_pressure_5_Active_B1                g_dataBuffer_Display[508+32+192]& bit0

//0x535
#define BCU3CT_AllPbrReleased_PerCAN_B1                g_dataBuffer_Display[545+192]& bit8

//0x610
#define DR1CT_GWLfSign_U16                           g_dataBuffer_Display[656+192]/256+g_dataBuffer_Display[656+192+1]%256
#define DR1CT_GWVersionX_U8                          g_dataBuffer_Display[849]/256
#define DR1CT_GWVersionY_U8                          g_dataBuffer_Display[850]%256
#define DR1CT_GWVersionZ_U8                          g_dataBuffer_Display[850]/256

#define DR1CT_MCUVersion_U16                          Change_BigEen(g_dataBuffer_Display[672+192+15])
#define DR1CT_MCUVersion2_U16                          Change_BigEen(g_dataBuffer_Display[672+192+15])


#define DR1CT_SMCLifeSign_U16                        Change_BigEen(g_dataBuffer_Display[656+192])
#define DR1CT_MCULifeSign_U16                        Change_BigEen(g_dataBuffer_Display[656+192+1])

#define DR1CT_ShortContCtrlState_B1                  g_dataBuffer_Display[656+192+2]&bit5
#define DR1CT_ShortContCtrlCmd_B1                    g_dataBuffer_Display[656+192+2]&bit4
#define DR1CT_ChargContCtrlState_B1                  g_dataBuffer_Display[656+192+2]&bit3
#define DR1CT_ChargContactorCtrlCmd_B1               g_dataBuffer_Display[656+192+2]&bit2
#define DR1CT_MainCutState_B1                        g_dataBuffer_Display[656+192+2]&bit1
#define DR1CT_DCUMainCutEnable_B1                    g_dataBuffer_Display[656+192+2]&bit0
#define DR1CT_SMCChopCmd_B1                          g_dataBuffer_Display[656+192+2]&bit15
#define DR1CT_OverVoltageChopEnable_B1               g_dataBuffer_Display[656+192+2]&bit14
#define DR1CT_WheelIdle_B1                           g_dataBuffer_Display[656+192+2]&bit12
#define DR1CT_VVVFCutOffState_B1                     g_dataBuffer_Display[656+192+2]&bit10
#define DR1CT_MCCStartOrStopCmd_B1                   g_dataBuffer_Display[656+192+2]&bit8

#define DR1CT_BrakeRsFanStartCmd_B1                  g_dataBuffer_Display[656+192+3]&bit7
#define DR1CT_BrakeRsFanState_B1                     g_dataBuffer_Display[656+192+3]&bit6
#define DR1CT_BackState_B1                           g_dataBuffer_Display[656+192+3]&bit3
#define DR1CT_ForwardState_B1                        g_dataBuffer_Display[656+192+3]&bit2
#define DR1CT_BrakeState_B1                          g_dataBuffer_Display[656+192+3]&bit1
#define DR1CT_TractionState_B1                       g_dataBuffer_Display[656+192+3]&bit0
#define DR1CT_PHWorkLineState_B1                     g_dataBuffer_Display[656+192+3]&bit14
#define DR1CT_VVVFLineCutOffState_B1                 g_dataBuffer_Display[656+192+3]&bit13
#define DR1CT_MushroomState_B1                       g_dataBuffer_Display[656+192+3]&bit12
#define DR1CT_ElectricBrakeSlide_B1                  g_dataBuffer_Display[656+192+3]&bit11
#define DR1CT_ElectricBrakeDecay_B1                  g_dataBuffer_Display[656+192+3]&bit10
#define DR1CT_ElectricBrakeIsValid_B1                g_dataBuffer_Display[656+192+3]&bit9
#define DR1CT_ElectricBrakeOk_B1                     g_dataBuffer_Display[656+192+3]&bit8

#define DR1CT_LineCmdBrakeState_B1                   g_dataBuffer_Display[656+192+4]&bit7
#define DR1CT_LineCmdTractionState_B1                g_dataBuffer_Display[656+192+4]&bit6
#define DR1CT_LineCmdBackState_B1                    g_dataBuffer_Display[656+192+4]&bit5
#define DR1CT_LineCmdForwardState_B1                 g_dataBuffer_Display[656+192+4]&bit4
#define DR1CT_NetCmdBrakeState_B1                    g_dataBuffer_Display[656+192+4]&bit3
#define DR1CT_NetCmdTractionState_B1                 g_dataBuffer_Display[656+192+4]&bit2
#define DR1CT_NetCmdBackState_B1                     g_dataBuffer_Display[656+192+4]&bit1
#define DR1CT_NetCmdForwardState_B1                  g_dataBuffer_Display[656+192+4]&bit0
#define DR1CT_LineTracEnableState_B1                 g_dataBuffer_Display[656+192+4]&bit14
#define DR1CT_LineEmgcyBrakeState_B1                 g_dataBuffer_Display[656+192+4]&bit13
#define DR1CT_LineEmgcyTractionState_B1              g_dataBuffer_Display[656+192+4]&bit12
#define DR1CT_LineRestState_B1                       g_dataBuffer_Display[656+192+4]&bit8

#define DR1CT_SMCSetMCCForce_U16                      Change_BigEen(g_dataBuffer_Display[656+192+5])
#define DR1CT_RealTracOrBrakeForce_U16                Change_BigEen(g_dataBuffer_Display[656+192+6])
#define DR1CT_ElectricBrakeForce_U16                  Change_BigEen(g_dataBuffer_Display[656+192+7])
#define DR1CT_ChopOpenTimes_U16                       Change_BigEen(g_dataBuffer_Display[656+192+8])
#define DR1CT_IntermediateVoltage_U16                 Change_BigEen(g_dataBuffer_Display[656+192+9])
#define DR1CT_IntermediateCurrent_U16                  (int16_t)Change_BigEen(g_dataBuffer_Display[656+192+10])
#define DR1CT_LineVoltage_U16                         Change_BigEen(g_dataBuffer_Display[656+192+11])
#define DR1CT_InverseCurrent_U16                      Change_BigEen(g_dataBuffer_Display[656+192+12])
#define DR1CT_Ichop1_U16                              Change_BigEen(g_dataBuffer_Display[656+192+13])
#define DR1CT_Ichop2_U16                              Change_BigEen(g_dataBuffer_Display[656+192+14])


//0x611
#define DR1CT_DCUSWVerH_U8                       g_dataBuffer_Display[672+192+7]/256
#define DR1CT_DCUSWVerL_U8                       g_dataBuffer_Display[672+192+8]%256



#define DR1CT_MotorVelocity_U16                       Change_BigEen(g_dataBuffer_Display[672+192])
#define DR1CT_Motor1Velocity_U16                      Change_BigEen(g_dataBuffer_Display[672+192+1])
#define DR1CT_Motor2Velocity_U16                      Change_BigEen(g_dataBuffer_Display[672+192+2])
#define DR1CT_Motor3Velocity_U16                      Change_BigEen(g_dataBuffer_Display[672+192+3])
#define DR1CT_Motor4Velocity_U16                      Change_BigEen(g_dataBuffer_Display[672+192+4])
#define DR1CT_Motor1Temp_U16                           (int16_t)Change_BigEen(g_dataBuffer_Display[672+192+5])
#define DR1CT_Motor2Temp_U16                           (int16_t)Change_BigEen(g_dataBuffer_Display[672+192+6])
#define DR1CT_Motor3Temp_U16                           (int16_t)Change_BigEen(g_dataBuffer_Display[672+192+7])
#define DR1CT_Motor4Temp_U16                           (int16_t)Change_BigEen(g_dataBuffer_Display[672+192+8])





//0x612


//0x620
#define DR2CT_GWLfSign_U16                           g_dataBuffer_Display[704+192]/256+g_dataBuffer_Display[704+192+1]%256
#define DR2CT_GWVersionX_U8                          g_dataBuffer_Display[704+192+1]/256
#define DR2CT_GWVersionY_U8                          g_dataBuffer_Display[704+192+2]%256
#define DR2CT_GWVersionZ_U8                          g_dataBuffer_Display[704+192+3]/256

#define DR2CT_SMCLifeSign_U16                        Change_BigEen(g_dataBuffer_Display[704+192])
#define DR2CT_MCULifeSign_U16                        Change_BigEen(g_dataBuffer_Display[704+192+1])

#define DR2CT_ShortContCtrlState_B1                  g_dataBuffer_Display[704+192+2]&bit5
#define DR2CT_ShortContCtrlCmd_B1                    g_dataBuffer_Display[704+192+2]&bit4
#define DR2CT_ChargContCtrlState_B1                  g_dataBuffer_Display[704+192+2]&bit3
#define DR2CT_ChargContactorCtrlCmd_B1               g_dataBuffer_Display[704+192+2]&bit2
#define DR2CT_MainCutState_B1                        g_dataBuffer_Display[704+192+2]&bit1
#define DR2CT_DCUMainCutEnable_B1                    g_dataBuffer_Display[704+192+2]&bit0
#define DR2CT_SMCChopCmd_B1                          g_dataBuffer_Display[704+192+2]&bit15
#define DR2CT_OverVoltageChopEnable_B1               g_dataBuffer_Display[704+192+2]&bit14
#define DR2CT_WheelIdle_B1                           g_dataBuffer_Display[704+192+2]&bit12
#define DR2CT_VVVFCutOffState_B1                     g_dataBuffer_Display[704+192+2]&bit10
#define DR2CT_MCCStartOrStopCmd_B1                   g_dataBuffer_Display[704+192+2]&bit8

#define DR2CT_BrakeRsFanStartCmd_B1                  g_dataBuffer_Display[704+192+3]&bit7
#define DR2CT_BrakeRsFanState_B1                     g_dataBuffer_Display[704+192+3]&bit6
#define DR2CT_BackState_B1                           g_dataBuffer_Display[704+192+3]&bit3
#define DR2CT_ForwardState_B1                        g_dataBuffer_Display[704+192+3]&bit2
#define DR2CT_BrakeState_B1                          g_dataBuffer_Display[704+192+3]&bit1
#define DR2CT_TractionState_B1                       g_dataBuffer_Display[704+192+3]&bit0
#define DR2CT_PHWorkLineState_B1                     g_dataBuffer_Display[704+192+3]&bit14
#define DR2CT_VVVFLineCutOffState_B1                 g_dataBuffer_Display[704+192+3]&bit13
#define DR2CT_MushroomState_B1                       g_dataBuffer_Display[704+192+3]&bit12
#define DR2CT_ElectricBrakeSlide_B1                  g_dataBuffer_Display[704+192+3]&bit11
#define DR2CT_ElectricBrakeDecay_B1                  g_dataBuffer_Display[704+192+3]&bit10
#define DR2CT_ElectricBrakeIsValid_B1                g_dataBuffer_Display[704+192+3]&bit9
#define DR2CT_ElectricBrakeOk_B1                     g_dataBuffer_Display[704+192+3]&bit8

#define DR2CT_LineCmdBrakeState_B1                   g_dataBuffer_Display[704+192+4]&bit7
#define DR2CT_LineCmdTractionState_B1                g_dataBuffer_Display[704+192+4]&bit6
#define DR2CT_LineCmdBackState_B1                    g_dataBuffer_Display[704+192+4]&bit5
#define DR2CT_LineCmdForwardState_B1                 g_dataBuffer_Display[704+192+4]&bit4
#define DR2CT_NetCmdBrakeState_B1                    g_dataBuffer_Display[704+192+4]&bit3
#define DR2CT_NetCmdTractionState_B1                 g_dataBuffer_Display[704+192+4]&bit2
#define DR2CT_NetCmdBackState_B1                     g_dataBuffer_Display[704+192+4]&bit1
#define DR2CT_NetCmdForwardState_B1                  g_dataBuffer_Display[704+192+4]&bit0
#define DR2CT_LineTracEnableState_B1                 g_dataBuffer_Display[704+192+4]&bit14
#define DR2CT_LineEmgcyBrakeState_B1                 g_dataBuffer_Display[704+192+4]&bit13
#define DR2CT_LineEmgcyTractionState_B1              g_dataBuffer_Display[704+192+4]&bit12
#define DR2CT_LineRestState_B1                       g_dataBuffer_Display[704+192+4]&bit8

#define DR2CT_SMCSetMCCForce_U16                      Change_BigEen(g_dataBuffer_Display[704+192+5])
#define DR2CT_RealTracOrBrakeForce_U16                Change_BigEen(g_dataBuffer_Display[704+192+6])
#define DR2CT_ElectricBrakeForce_U16                  Change_BigEen(g_dataBuffer_Display[704+192+7])
#define DR2CT_ChopOpenTimes_U16                       Change_BigEen(g_dataBuffer_Display[704+192+8])
#define DR2CT_IntermediateVoltage_U16                 Change_BigEen(g_dataBuffer_Display[704+192+9])
#define DR2CT_IntermediateCurrent_U16                  (int16_t)Change_BigEen(g_dataBuffer_Display[704+192+10])
#define DR2CT_LineVoltage_U16                         Change_BigEen(g_dataBuffer_Display[704+192+11])
#define DR2CT_InverseCurrent_U16                      Change_BigEen(g_dataBuffer_Display[704+192+12])
#define DR2CT_Ichop1_U16                              Change_BigEen(g_dataBuffer_Display[704+192+13])
#define DR2CT_Ichop2_U16                              Change_BigEen(g_dataBuffer_Display[704+192+14])


//0x621
#define DR2CT_DCUSWVerH_U8                       g_dataBuffer_Display[720+192+7]/256
#define DR2CT_DCUSWVerL_U8                       g_dataBuffer_Display[720+192+8]%256

#define DR2CT_MotorVelocity_U16                       Change_BigEen(g_dataBuffer_Display[720+192])
#define DR2CT_Motor1Velocity_U16                      Change_BigEen(g_dataBuffer_Display[720+192+1])
#define DR2CT_Motor2Velocity_U16                      Change_BigEen(g_dataBuffer_Display[720+192+2])
#define DR2CT_Motor3Velocity_U16                      Change_BigEen(g_dataBuffer_Display[720+192+3])
#define DR2CT_Motor4Velocity_U16                      Change_BigEen(g_dataBuffer_Display[720+192+4])
#define DR2CT_Motor1Temp_U16                           (int16_t)Change_BigEen(g_dataBuffer_Display[720+192+5])
#define DR2CT_Motor2Temp_U16                           (int16_t)Change_BigEen(g_dataBuffer_Display[720+192+6])
#define DR2CT_Motor3Temp_U16                           (int16_t)Change_BigEen(g_dataBuffer_Display[720+192+7])
#define DR2CT_Motor4Temp_U16                           (int16_t)Change_BigEen(g_dataBuffer_Display[720+192+8])
#define DR2CT_SMCVersion_U16                          Change_BigEen(g_dataBuffer_Display[720+192+14])
#define DR2CT_MCUVersion_U16                          Change_BigEen(g_dataBuffer_Display[720+192+15])

//0x622

//0x630
#define DR3CT_GWLfSign_U16                           g_dataBuffer_Display[752+192]/256+g_dataBuffer_Display[752+192+1]%256
#define DR3CT_GWVersionX_U8                          g_dataBuffer_Display[752+192+1]/256
#define DR3CT_GWVersionY_U8                          g_dataBuffer_Display[752+192+2]%256
#define DR3CT_GWVersionZ_U8                          g_dataBuffer_Display[752+192+3]/256

#define DR3CT_SMCLifeSign_U16                        Change_BigEen(g_dataBuffer_Display[752+192])
#define DR3CT_MCULifeSign_U16                        Change_BigEen(g_dataBuffer_Display[752+192+1])

#define DR3CT_ShortContCtrlState_B1                  g_dataBuffer_Display[752+192+2]&bit5
#define DR3CT_ShortContCtrlCmd_B1                    g_dataBuffer_Display[752+192+2]&bit4
#define DR3CT_ChargContCtrlState_B1                  g_dataBuffer_Display[752+192+2]&bit3
#define DR3CT_ChargContactorCtrlCmd_B1               g_dataBuffer_Display[752+192+2]&bit2
#define DR3CT_MainCutState_B1                        g_dataBuffer_Display[752+192+2]&bit1
#define DR3CT_DCUMainCutEnable_B1                    g_dataBuffer_Display[752+192+2]&bit0
#define DR3CT_SMCChopCmd_B1                          g_dataBuffer_Display[752+192+2]&bit15
#define DR3CT_OverVoltageChopEnable_B1               g_dataBuffer_Display[752+192+2]&bit14
#define DR3CT_WheelIdle_B1                           g_dataBuffer_Display[752+192+2]&bit12
#define DR3CT_VVVFCutOffState_B1                     g_dataBuffer_Display[752+192+2]&bit10
#define DR3CT_MCCStartOrStopCmd_B1                   g_dataBuffer_Display[752+192+2]&bit8

#define DR3CT_BrakeRsFanStartCmd_B1                  g_dataBuffer_Display[752+192+3]&bit7
#define DR3CT_BrakeRsFanState_B1                     g_dataBuffer_Display[752+192+3]&bit6
#define DR3CT_BackState_B1                           g_dataBuffer_Display[752+192+3]&bit3
#define DR3CT_ForwardState_B1                        g_dataBuffer_Display[752+192+3]&bit2
#define DR3CT_BrakeState_B1                          g_dataBuffer_Display[752+192+3]&bit1
#define DR3CT_TractionState_B1                       g_dataBuffer_Display[752+192+3]&bit0
#define DR3CT_PHWorkLineState_B1                     g_dataBuffer_Display[752+192+3]&bit14
#define DR3CT_VVVFLineCutOffState_B1                 g_dataBuffer_Display[752+192+3]&bit13
#define DR3CT_MushroomState_B1                       g_dataBuffer_Display[752+192+3]&bit12
#define DR3CT_ElectricBrakeSlide_B1                  g_dataBuffer_Display[752+192+3]&bit11
#define DR3CT_ElectricBrakeDecay_B1                  g_dataBuffer_Display[752+192+3]&bit10
#define DR3CT_ElectricBrakeIsValid_B1                g_dataBuffer_Display[752+192+3]&bit9
#define DR3CT_ElectricBrakeOk_B1                     g_dataBuffer_Display[752+192+3]&bit8

#define DR3CT_LineCmdBrakeState_B1                   g_dataBuffer_Display[752+192+4]&bit7
#define DR3CT_LineCmdTractionState_B1                g_dataBuffer_Display[752+192+4]&bit6
#define DR3CT_LineCmdBackState_B1                    g_dataBuffer_Display[752+192+4]&bit5
#define DR3CT_LineCmdForwardState_B1                 g_dataBuffer_Display[752+192+4]&bit4
#define DR3CT_NetCmdBrakeState_B1                    g_dataBuffer_Display[752+192+4]&bit3
#define DR3CT_NetCmdTractionState_B1                 g_dataBuffer_Display[752+192+4]&bit2
#define DR3CT_NetCmdBackState_B1                     g_dataBuffer_Display[752+192+4]&bit1
#define DR3CT_NetCmdForwardState_B1                  g_dataBuffer_Display[752+192+4]&bit0
#define DR3CT_LineTracEnableState_B1                 g_dataBuffer_Display[752+192+4]&bit14
#define DR3CT_LineEmgcyBrakeState_B1                 g_dataBuffer_Display[752+192+4]&bit13
#define DR3CT_LineEmgcyTractionState_B1              g_dataBuffer_Display[752+192+4]&bit12
#define DR3CT_LineRestState_B1                       g_dataBuffer_Display[752+192+4]&bit8

#define DR3CT_SMCSetMCCForce_U16                      Change_BigEen(g_dataBuffer_Display[752+192+5])
#define DR3CT_RealTracOrBrakeForce_U16                Change_BigEen(g_dataBuffer_Display[752+192+6])
#define DR3CT_ElectricBrakeForce_U16                  Change_BigEen(g_dataBuffer_Display[752+192+7])
#define DR3CT_ChopOpenTimes_U16                       Change_BigEen(g_dataBuffer_Display[752+192+8])
#define DR3CT_IntermediateVoltage_U16                 Change_BigEen(g_dataBuffer_Display[752+192+9])
#define DR3CT_IntermediateCurrent_U16                  (int16_t)Change_BigEen(g_dataBuffer_Display[752+192+10])
#define DR3CT_LineVoltage_U16                         Change_BigEen(g_dataBuffer_Display[752+192+11])
#define DR3CT_InverseCurrent_U16                      Change_BigEen(g_dataBuffer_Display[752+192+12])
#define DR3CT_Ichop1_U16                              Change_BigEen(g_dataBuffer_Display[752+192+13])
#define DR3CT_Ichop2_U16                              Change_BigEen(g_dataBuffer_Display[752+192+14])


//0x631
#define DR3CT_DCUSWVerH_U8                       g_dataBuffer_Display[768+192+7]/256
#define DR3CT_DCUSWVerL_U8                       g_dataBuffer_Display[768+192+8]%256

#define DR3CT_MotorVelocity_U16                       Change_BigEen(g_dataBuffer_Display[768+192])
#define DR3CT_Motor1Velocity_U16                      Change_BigEen(g_dataBuffer_Display[768+192+1])
#define DR3CT_Motor2Velocity_U16                      Change_BigEen(g_dataBuffer_Display[768+192+2])
#define DR3CT_Motor3Velocity_U16                      Change_BigEen(g_dataBuffer_Display[768+192+3])
#define DR3CT_Motor4Velocity_U16                      Change_BigEen(g_dataBuffer_Display[768+192+4])
#define DR3CT_Motor1Temp_U16                           (int16_t)Change_BigEen(g_dataBuffer_Display[768+192+5])
#define DR3CT_Motor2Temp_U16                           (int16_t)Change_BigEen(g_dataBuffer_Display[768+192+6])
#define DR3CT_Motor3Temp_U16                           (int16_t)Change_BigEen(g_dataBuffer_Display[768+192+7])
#define DR3CT_Motor4Temp_U16                           (int16_t)Change_BigEen(g_dataBuffer_Display[768+192+8])
#define DR3CT_SMCVersion_U16                          Change_BigEen(g_dataBuffer_Display[768+192+14])
#define DR3CT_MCUVersion_U16                          Change_BigEen(g_dataBuffer_Display[768+192+15])

//0x632


//0x640
#define DR4CT_GWLfSign_U16                           g_dataBuffer_Display[800+192]/256+g_dataBuffer_Display[800+192+1]%256
#define DR4CT_GWVersionX_U8                          g_dataBuffer_Display[800+192+1]/256
#define DR4CT_GWVersionY_U8                          g_dataBuffer_Display[800+192+2]%256
#define DR4CT_GWVersionZ_U8                          g_dataBuffer_Display[800+192+3]/256


#define DR4CT_SMCLifeSign_U16                        Change_BigEen(g_dataBuffer_Display[800+192])
#define DR4CT_MCULifeSign_U16                        Change_BigEen(g_dataBuffer_Display[800+192+1])

#define DR4CT_ShortContCtrlState_B1                  g_dataBuffer_Display[800+192+2]&bit5
#define DR4CT_ShortContCtrlCmd_B1                    g_dataBuffer_Display[800+192+2]&bit4
#define DR4CT_ChargContCtrlState_B1                  g_dataBuffer_Display[800+192+2]&bit3
#define DR4CT_ChargContactorCtrlCmd_B1               g_dataBuffer_Display[800+192+2]&bit2
#define DR4CT_MainCutState_B1                        g_dataBuffer_Display[800+192+2]&bit1
#define DR4CT_DCUMainCutEnable_B1                    g_dataBuffer_Display[800+192+2]&bit0
#define DR4CT_SMCChopCmd_B1                          g_dataBuffer_Display[800+192+2]&bit15
#define DR4CT_OverVoltageChopEnable_B1               g_dataBuffer_Display[800+192+2]&bit14
#define DR4CT_WheelIdle_B1                           g_dataBuffer_Display[800+192+2]&bit12
#define DR4CT_VVVFCutOffState_B1                     g_dataBuffer_Display[800+192+2]&bit10
#define DR4CT_MCCStartOrStopCmd_B1                   g_dataBuffer_Display[800+192+2]&bit8

#define DR4CT_BrakeRsFanStartCmd_B1                  g_dataBuffer_Display[800+192+3]&bit7
#define DR4CT_BrakeRsFanState_B1                     g_dataBuffer_Display[800+192+3]&bit6
#define DR4CT_BackState_B1                           g_dataBuffer_Display[800+192+3]&bit3
#define DR4CT_ForwardState_B1                        g_dataBuffer_Display[800+192+3]&bit2
#define DR4CT_BrakeState_B1                          g_dataBuffer_Display[800+192+3]&bit1
#define DR4CT_TractionState_B1                       g_dataBuffer_Display[800+192+3]&bit0
#define DR4CT_PHWorkLineState_B1                     g_dataBuffer_Display[800+192+3]&bit14
#define DR4CT_VVVFLineCutOffState_B1                 g_dataBuffer_Display[800+192+3]&bit13
#define DR4CT_MushroomState_B1                       g_dataBuffer_Display[800+192+3]&bit12
#define DR4CT_ElectricBrakeSlide_B1                  g_dataBuffer_Display[800+192+3]&bit11
#define DR4CT_ElectricBrakeDecay_B1                  g_dataBuffer_Display[800+192+3]&bit10
#define DR4CT_ElectricBrakeIsValid_B1                g_dataBuffer_Display[800+192+3]&bit9
#define DR4CT_ElectricBrakeOk_B1                     g_dataBuffer_Display[800+192+3]&bit8

#define DR4CT_LineCmdBrakeState_B1                   g_dataBuffer_Display[800+192+4]&bit7
#define DR4CT_LineCmdTractionState_B1                g_dataBuffer_Display[800+192+4]&bit6
#define DR4CT_LineCmdBackState_B1                    g_dataBuffer_Display[800+192+4]&bit5
#define DR4CT_LineCmdForwardState_B1                 g_dataBuffer_Display[800+192+4]&bit4
#define DR4CT_NetCmdBrakeState_B1                    g_dataBuffer_Display[800+192+4]&bit3
#define DR4CT_NetCmdTractionState_B1                 g_dataBuffer_Display[800+192+4]&bit2
#define DR4CT_NetCmdBackState_B1                     g_dataBuffer_Display[800+192+4]&bit1
#define DR4CT_NetCmdForwardState_B1                  g_dataBuffer_Display[800+192+4]&bit0
#define DR4CT_LineTracEnableState_B1                 g_dataBuffer_Display[800+192+4]&bit14
#define DR4CT_LineEmgcyBrakeState_B1                 g_dataBuffer_Display[800+192+4]&bit13
#define DR4CT_LineEmgcyTractionState_B1              g_dataBuffer_Display[800+192+4]&bit12
#define DR4CT_LineRestState_B1                       g_dataBuffer_Display[800+192+4]&bit8

#define DR4CT_SMCSetMCCForce_U16                     Change_BigEen(g_dataBuffer_Display[800+192+5])
#define DR4CT_RealTracOrBrakeForce_U16               Change_BigEen(g_dataBuffer_Display[800+192+6])
#define DR4CT_ElectricBrakeForce_U16                 Change_BigEen(g_dataBuffer_Display[800+192+7])
#define DR4CT_ChopOpenTimes_U16                      Change_BigEen(g_dataBuffer_Display[800+192+8])
#define DR4CT_IntermediateVoltage_U16                Change_BigEen(g_dataBuffer_Display[800+192+9])
#define DR4CT_IntermediateCurrent_U16                 (int16_t)Change_BigEen(g_dataBuffer_Display[800+192+10])
#define DR4CT_LineVoltage_U16                        Change_BigEen(g_dataBuffer_Display[800+192+11])
#define DR4CT_InverseCurrent_U16                     Change_BigEen(g_dataBuffer_Display[800+192+12])
#define DR4CT_Ichop1_U16                             Change_BigEen(g_dataBuffer_Display[800+192+13])
#define DR4CT_Ichop2_U16                             Change_BigEen(g_dataBuffer_Display[800+192+14])


//0x641
#define DR4CT_DCUSWVerH_U8                       g_dataBuffer_Display[816+192+7]/256
#define DR4CT_DCUSWVerL_U8                       g_dataBuffer_Display[816+192+8]%256

#define DR4CT_MotorVelocity_U16                      Change_BigEen(g_dataBuffer_Display[816+192])
#define DR4CT_Motor1Velocity_U16                     Change_BigEen(g_dataBuffer_Display[816+192+1])
#define DR4CT_Motor2Velocity_U16                     Change_BigEen(g_dataBuffer_Display[816+192+2])
#define DR4CT_Motor3Velocity_U16                     Change_BigEen(g_dataBuffer_Display[816+192+3])
#define DR4CT_Motor4Velocity_U16                     Change_BigEen(g_dataBuffer_Display[816+192+4])
#define DR4CT_Motor1Temp_U16                          (int16_t)Change_BigEen(g_dataBuffer_Display[816+192+5])
#define DR4CT_Motor2Temp_U16                          (int16_t)Change_BigEen(g_dataBuffer_Display[816+192+6])
#define DR4CT_Motor3Temp_U16                          (int16_t)Change_BigEen(g_dataBuffer_Display[816+192+7])
#define DR4CT_Motor4Temp_U16                          (int16_t)Change_BigEen(g_dataBuffer_Display[816+192+8])
#define DR4CT_SMCVersion_U16                         Change_BigEen(g_dataBuffer_Display[816+192+14])
#define DR4CT_MCUVersion_U16                         Change_BigEen(g_dataBuffer_Display[816+192+15])

//0x642



//0x710
#define SIV1CT_LfSign_U16                            g_dataBuffer_Display[848+192]/256+(g_dataBuffer_Display[848+192+1]%256)*256
#define SIV1CT_SoftwVersionL_U8                      g_dataBuffer_Display[848+192+1]/256
#define SIV1CT_SoftwVersionH_U8                      g_dataBuffer_Display[848+192+2]%256


#define SIV1CT_SIVDSPLifeSign_U16                    Change_BigEen(g_dataBuffer_Display[848+192])
#define SIV1CT_SIVDSPVersion_U16                     Change_BigEen(g_dataBuffer_Display[848+192+1])
#define SIV1CT_SIVPPCLifeSign_U16                    Change_BigEen(g_dataBuffer_Display[848+192+2])
#define SIV1CT_SIVPPCVersion_U16                     Change_BigEen(g_dataBuffer_Display[848+192+3])
#define SIV1CT_SIVChargeLifeSign_U16                 Change_BigEen(g_dataBuffer_Display[848+192+4])
#define SIV1CT_SIVChargeVersion_U16                  Change_BigEen(g_dataBuffer_Display[848+192+5])

#define SIV1CT_REST_B1                               g_dataBuffer_Display[848+192+9]&bit15
#define SIV1CT_YJST_B1                               g_dataBuffer_Display[848+192+9]&bit14
#define SIV1CT_FANS_B1                               g_dataBuffer_Display[848+192+9]&bit13
#define SIV1CT_KMAS_B1                               g_dataBuffer_Display[848+192+9]&bit12
#define SIV1CT_A10H_B1                               g_dataBuffer_Display[848+192+9]&bit11
#define SIV1CT_KM2State_B1                           g_dataBuffer_Display[848+192+9]&bit10
#define SIV1CT_KM1State_B1                           g_dataBuffer_Display[848+192+9]&bit9
#define SIV1CT_StartSiv_B1                           g_dataBuffer_Display[848+192+9]&bit8

#define SIV1CT_KM11_B1                               g_dataBuffer_Display[848+192+11]&bit14
#define SIV1CT_DC110VOk_B1                           g_dataBuffer_Display[848+192+11]&bit12
#define SIV1CT_ChargeOverTemp_B1                     g_dataBuffer_Display[848+192+11]&bit10
#define SIV1CT_QF11_B1                               g_dataBuffer_Display[848+192+11]&bit8

#define SIV1CT_ACU_OK_B1                             g_dataBuffer_Display[848+192+12]&bit12
#define SIV1CT_KMA_ON_B1                             g_dataBuffer_Display[848+192+12]&bit11
#define SIV1CT_KM2_ON_B1                             g_dataBuffer_Display[848+192+12]&bit9
#define SIV1CT_KM1_ON_B1                             g_dataBuffer_Display[848+192+12]&bit8

#define SIV1CT_InputVoltageUd_U16                    Change_BigEen(g_dataBuffer_Display[848+192+13])
#define SIV1CT_InputCurrentId_U16                    (int16_t)Change_BigEen(g_dataBuffer_Display[848+192+14])
#define SIV1CT_OutputVoltageUu_U16                   Change_BigEen(g_dataBuffer_Display[848+192+15])

//0x711   -->720  change by lishizhi  2015-7-22
#define SIV2CT_LfSign_U16                            g_dataBuffer_Display[2256]/256+(g_dataBuffer_Display[848+192+1]%256)*256
#define SIV2CT_SoftwVersionL_U8                      g_dataBuffer_Display[864+192+1]/256
#define SIV2CT_SoftwVersionH_U8                      g_dataBuffer_Display[864+192+2]%256

#define SIV1CT_InverseVoltageUu_U16                  Change_BigEen(g_dataBuffer_Display[864+192])
#define SIV1CT_InverseVoltageUv_U16                  Change_BigEen(g_dataBuffer_Display[864+192+1])
#define SIV1CT_InverseCurrentIa_U16                  Change_BigEen(g_dataBuffer_Display[864+192+2])
#define SIV1CT_InverseCurrentIc_U16                  Change_BigEen(g_dataBuffer_Display[864+192+3])
#define SIV1CT_InverseCurrentIu_U16                  Change_BigEen(g_dataBuffer_Display[864+192+4])
#define SIV1CT_InverseCurrentIv_U16                  Change_BigEen(g_dataBuffer_Display[864+192+5])
#define SIV1CT_InverseCurrentIw_U16                  Change_BigEen(g_dataBuffer_Display[864+192+6])
#define SIV1CT_InverseFrequency_U16                  Change_BigEen(g_dataBuffer_Display[864+192+7])
#define SIV1CT_ChargeDirectCurrent_U16               Change_BigEen(g_dataBuffer_Display[864+192+8])
#define SIV1CT_ChargeOutVoltage_U16                  Change_BigEen(g_dataBuffer_Display[864+192+9])
#define SIV1CT_ChargeOutCurrent_U16                  Change_BigEen(g_dataBuffer_Display[864+192+10])
#define SIV1CT_ChargeCurrent_U16                     (int16_t)Change_BigEen(g_dataBuffer_Display[864+192+11])
#define SIV1CT_BatteryTemp_U16                       (int16_t)Change_BigEen(g_dataBuffer_Display[864+192+12])




//0x720   -->730  change by lishizhi  2015-7-22
//#define RE1CT_GWLfSign_U8                            g_dataBuffer_Display[880+192]%256
//#define RE1CT_GWSoftwVersion_U8                       g_dataBuffer_Display[880+192]/256

//#define RE1CT_LfSign_U8                              g_dataBuffer_Display[880+192+1]/256
//#define RE1CT_SoftwVersion_U8                         g_dataBuffer_Display[880+192+2]%256



#define SIV2CT_SIVDSPLifeSign_U16                    Change_BigEen(g_dataBuffer_Display[880+192])
#define SIV2CT_SIVDSPVersion_U16                     Change_BigEen(g_dataBuffer_Display[880+192+1])
#define SIV2CT_SIVPPCLifeSign_U16                    Change_BigEen(g_dataBuffer_Display[880+192+2])
#define SIV2CT_SIVPPCVersion_U16                     Change_BigEen(g_dataBuffer_Display[880+192+3])
#define SIV2CT_SIVChargeLifeSign_U16                 Change_BigEen(g_dataBuffer_Display[880+192+4])
#define SIV2CT_SIVChargeVersion_U16                  Change_BigEen(g_dataBuffer_Display[880+192+5])

#define SIV2CT_REST_B1                               g_dataBuffer_Display[880+192+9]&bit15
#define SIV2CT_YJST_B1                               g_dataBuffer_Display[880+192+9]&bit14
#define SIV2CT_FANS_B1                               g_dataBuffer_Display[880+192+9]&bit13
#define SIV2CT_KMAS_B1                               g_dataBuffer_Display[880+192+9]&bit12
#define SIV2CT_A10H_B1                               g_dataBuffer_Display[880+192+9]&bit11
#define SIV2CT_KM2State_B1                           g_dataBuffer_Display[880+192+9]&bit10
#define SIV2CT_KM1State_B1                           g_dataBuffer_Display[880+192+9]&bit9
#define SIV2CT_StartSiv_B1                           g_dataBuffer_Display[880+192+9]&bit8

#define SIV2CT_KM11_B1                               g_dataBuffer_Display[880+192+11]&bit14
#define SIV2CT_DC110VOk_B1                           g_dataBuffer_Display[880+192+11]&bit12
#define SIV2CT_ChargeOverTemp_B1                     g_dataBuffer_Display[880+192+11]&bit10
#define SIV2CT_QF11_B1                               g_dataBuffer_Display[880+192+11]&bit8

#define SIV2CT_ACU_OK_B1                             g_dataBuffer_Display[880+192+12]&bit12
#define SIV2CT_KMA_ON_B1                             g_dataBuffer_Display[880+192+12]&bit11
#define SIV2CT_KM2_ON_B1                             g_dataBuffer_Display[880+192+12]&bit9
#define SIV2CT_KM1_ON_B1                             g_dataBuffer_Display[880+192+12]&bit8

#define SIV2CT_InputVoltageUd_U16                    Change_BigEen(g_dataBuffer_Display[880+192+13])
#define SIV2CT_InputCurrentId_U16                     (int16_t)Change_BigEen(g_dataBuffer_Display[880+192+14])
#define SIV2CT_OutputVoltageUu_U16                   Change_BigEen(g_dataBuffer_Display[880+192+15])

//0x721
//#define RE2CT_GWLfSign_U8                            g_dataBuffer_Display[896+192]%256
//#define RE2CT_GWSoftwVersion_U8                       g_dataBuffer_Display[896+192]/256

//#define RE2CT_LfSign_U8                              g_dataBuffer_Display[896+192+1]/256
//#define RE2CT_SoftwVersion_U8                         g_dataBuffer_Display[896+192+2]%256

#define SIV2CT_InverseVoltageUu_U16                  Change_BigEen(g_dataBuffer_Display[896+192])
#define SIV2CT_InverseVoltageUv_U16                  Change_BigEen(g_dataBuffer_Display[896+192+1])
#define SIV2CT_InverseCurrentIa_U16                  Change_BigEen(g_dataBuffer_Display[896+192+2])
#define SIV2CT_InverseCurrentIc_U16                  Change_BigEen(g_dataBuffer_Display[896+192+3])
#define SIV2CT_InverseCurrentIu_U16                  Change_BigEen(g_dataBuffer_Display[896+192+4])
#define SIV2CT_InverseCurrentIv_U16                  Change_BigEen(g_dataBuffer_Display[896+192+5])
#define SIV2CT_InverseCurrentIw_U16                  Change_BigEen(g_dataBuffer_Display[896+192+6])
#define SIV2CT_InverseFrequency_U16                  Change_BigEen(g_dataBuffer_Display[896+192+7])
#define SIV2CT_ChargeDirectCurrent_U16               Change_BigEen(g_dataBuffer_Display[896+192+8])
#define SIV2CT_ChargeOutVoltage_U16                  Change_BigEen(g_dataBuffer_Display[896+192+9])
#define SIV2CT_ChargeOutCurrent_U16                  Change_BigEen(g_dataBuffer_Display[896+192+10])
#define SIV2CT_ChargeCurrent_U16                     (int16_t)Change_BigEen(g_dataBuffer_Display[896+192+11])
#define SIV2CT_BatteryTemp_U16                       (int16_t)Change_BigEen(g_dataBuffer_Display[896+192+12])


//0x810

#define EDR1CT_LifeSign_U16                         g_dataBuffer_Display[944+160]
#define EDR1CT_Door1OpenEnabled_B1                  g_dataBuffer_Display[944+160+1]&bit7
#define EDR1CT_Door1IsOpen_B1                       g_dataBuffer_Display[944+160+1]&bit6
#define EDR1CT_Door1IsClosed_B1                     g_dataBuffer_Display[944+160+1]&bit5
#define EDR1CT_Door1IsEmgcyUnlock_B1                g_dataBuffer_Display[944+160+1]&bit4
#define EDR1CT_Door1IsIsolated_B1                   g_dataBuffer_Display[944+160+1]&bit3
#define EDR1CT_Door1ExtrusionProtecting_B1          g_dataBuffer_Display[944+160+1]&bit2
#define EDR1CT_Door1ExtrusionStoped_B1              g_dataBuffer_Display[944+160+1]&bit1
#define EDR1CT_Door1SetOK_B1                        g_dataBuffer_Display[944+160+1]&bit0

#define EDR1CT_Door2OpenEnabled_B1                  g_dataBuffer_Display[944+160+2]&bit7
#define EDR1CT_Door2IsOpen_B1                       g_dataBuffer_Display[944+160+2]&bit6
#define EDR1CT_Door2IsClosed_B1                     g_dataBuffer_Display[944+160+2]&bit5
#define EDR1CT_Door2IsEmgcyUnlock_B1                g_dataBuffer_Display[944+160+2]&bit4
#define EDR1CT_Door2IsIsolated_B1                   g_dataBuffer_Display[944+160+2]&bit3
#define EDR1CT_Door2ExtrusionProtecting_B1          g_dataBuffer_Display[944+160+2]&bit2
#define EDR1CT_Door2ExtrusionStoped_B1              g_dataBuffer_Display[944+160+2]&bit1
#define  EDR1CT_Door2SetOK_B1                        g_dataBuffer_Display[944+160+2]&bit0

#define EDR1CT_Door3OpenEnabled_B1                  g_dataBuffer_Display[944+160+3]&bit7
#define EDR1CT_Door3IsOpen_B1                       g_dataBuffer_Display[944+160+3]&bit6
#define EDR1CT_Door3IsClosed_B1                     g_dataBuffer_Display[944+160+3]&bit5
#define EDR1CT_Door3IsEmgcyUnlock_B1                g_dataBuffer_Display[944+160+3]&bit4
#define EDR1CT_Door3IsIsolated_B1                   g_dataBuffer_Display[944+160+3]&bit3
#define EDR1CT_Door3ExtrusionProtecting_B1          g_dataBuffer_Display[944+160+3]&bit2
#define EDR1CT_Door3ExtrusionStoped_B1              g_dataBuffer_Display[944+160+3]&bit1
#define EDR1CT_Door3SetOK_B1                        g_dataBuffer_Display[944+160+3]&bit0

#define EDR1CT_Door4OpenEnabled_B1                  g_dataBuffer_Display[944+160+4]&bit7
#define EDR1CT_Door4IsOpen_B1                       g_dataBuffer_Display[944+160+4]&bit6
#define EDR1CT_Door4IsClosed_B1                     g_dataBuffer_Display[944+160+4]&bit5
#define EDR1CT_Door4IsEmgcyUnlock_B1                g_dataBuffer_Display[944+160+4]&bit4
#define EDR1CT_Door4IsIsolated_B1                   g_dataBuffer_Display[944+160+4]&bit3
#define EDR1CT_Door4ExtrusionProtecting_B1          g_dataBuffer_Display[944+160+4]&bit2
#define EDR1CT_Door4ExtrusionStoped_B1              g_dataBuffer_Display[944+160+4]&bit1
#define EDR1CT_Door4SetOK_B1                        g_dataBuffer_Display[944+160+4]&bit0


#define EDR1CT_Door5OpenEnabled_B1                  g_dataBuffer_Display[944+160+5]&bit7
#define EDR1CT_Door5IsOpen_B1                       g_dataBuffer_Display[944+160+5]&bit6
#define EDR1CT_Door5IsClosed_B1                     g_dataBuffer_Display[944+160+5]&bit5
#define EDR1CT_Door5IsEmgcyUnlock_B1                g_dataBuffer_Display[944+160+5]&bit4
#define EDR1CT_Door5IsIsolated_B1                   g_dataBuffer_Display[944+160+5]&bit3
#define EDR1CT_Door5ExtrusionProtecting_B1          g_dataBuffer_Display[944+160+5]&bit2
#define EDR1CT_Door5ExtrusionStoped_B1              g_dataBuffer_Display[944+160+5]&bit1
#define EDR1CT_Door5SetOK_B1                        g_dataBuffer_Display[944+160+5]&bit0

#define EDR1CT_Door6OpenEnabled_B1                  g_dataBuffer_Display[944+160+6]&bit7
#define EDR1CT_Door6IsOpen_B1                       g_dataBuffer_Display[944+160+6]&bit6
#define EDR1CT_Door6IsClosed_B1                     g_dataBuffer_Display[944+160+6]&bit5
#define EDR1CT_Door6IsEmgcyUnlock_B1                g_dataBuffer_Display[944+160+6]&bit4
#define EDR1CT_Door6IsIsolated_B1                   g_dataBuffer_Display[944+160+6]&bit3
#define EDR1CT_Door6ExtrusionProtecting_B1          g_dataBuffer_Display[944+160+6]&bit2
#define EDR1CT_Door6ExtrusionStoped_B1              g_dataBuffer_Display[944+160+6]&bit1
#define EDR1CT_Door6SetOK_B1                        g_dataBuffer_Display[944+160+6]&bit0

#define EDR1CT_Door7OpenEnabled_B1                  g_dataBuffer_Display[944+160+7]&bit7
#define EDR1CT_Door7IsOpen_B1                       g_dataBuffer_Display[944+160+7]&bit6
#define EDR1CT_Door7IsClosed_B1                     g_dataBuffer_Display[944+160+7]&bit5
#define EDR1CT_Door7IsEmgcyUnlock_B1                g_dataBuffer_Display[944+160+7]&bit4
#define EDR1CT_Door7IsIsolated_B1                   g_dataBuffer_Display[944+160+7]&bit3
#define EDR1CT_Door7ExtrusionProtecting_B1          g_dataBuffer_Display[944+160+7]&bit2
#define EDR1CT_Door7ExtrusionStoped_B1              g_dataBuffer_Display[944+160+7]&bit1
#define EDR1CT_Door7SetOK_B1                        g_dataBuffer_Display[944+160+7]&bit0

#define EDR1CT_Door8OpenEnabled_B1                  g_dataBuffer_Display[944+160+8]&bit7
#define EDR1CT_Door8IsOpen_B1                       g_dataBuffer_Display[944+160+8]&bit6
#define EDR1CT_Door8IsClosed_B1                     g_dataBuffer_Display[944+160+8]&bit5
#define EDR1CT_Door8IsEmgcyUnlock_B1                g_dataBuffer_Display[944+160+8]&bit4
#define EDR1CT_Door8IsIsolated_B1                   g_dataBuffer_Display[944+160+8]&bit3
#define EDR1CT_Door8ExtrusionProtecting_B1          g_dataBuffer_Display[944+160+8]&bit2
#define EDR1CT_Door8ExtrusionStoped_B1              g_dataBuffer_Display[944+160+8]&bit1
#define EDR1CT_Door8SetOK_B1                        g_dataBuffer_Display[944+160+8]&bit0

#define EDR1CT_Edcu2Version_U8                      g_dataBuffer_Display[944+160+13]%256
#define EDR1CT_Edcu1Version_U8                      g_dataBuffer_Display[944+160+13]/256
#define EDR1CT_EdcuState_U8                         g_dataBuffer_Display[944+160+14]%256

//0x811

#define EDR1CT_Door1IsValid_B1                       g_dataBuffer_Display[960+160]&bit7
#define EDR1CT_Door2IsValid_B1                       g_dataBuffer_Display[960+160]&bit6
#define EDR1CT_Door3IsValid_B1                       g_dataBuffer_Display[960+160]&bit5
#define EDR1CT_Door4IsValid_B1                       g_dataBuffer_Display[960+160]&bit4
#define EDR1CT_Door5IsValid_B1                       g_dataBuffer_Display[960+160]&bit3
#define EDR1CT_Door6IsValid_B1                       g_dataBuffer_Display[960+160]&bit2
#define EDR1CT_Door7IsValid_B1                       g_dataBuffer_Display[960+160]&bit1
#define EDR1CT_Door8IsValid_B1                       g_dataBuffer_Display[960+160]&bit0
#define EDR1CT_Door1MotorIsOpenCircuit_B1            g_dataBuffer_Display[960+160+1]&bit7
#define EDR1CT_Door1MotorOverCurrent_B1              g_dataBuffer_Display[960+160+1]&bit6
#define EDR1CT_Door1PlateSwitchFault_B1              g_dataBuffer_Display[960+160+1]&bit5
#define EDR1CT_Door1LockSwitchFault_B1               g_dataBuffer_Display[960+160+1]&bit4
#define EDR1CT_Door1ElectroMagnetFault_B1            g_dataBuffer_Display[960+160+1]&bit3
#define EDR1CT_Door1EncoderFault_B1                  g_dataBuffer_Display[960+160+1]&bit2
#define EDR1CT_Door1OperationOverTime_B1             g_dataBuffer_Display[960+160+1]&bit1
#define EDR1CT_Door1OutputShortCircuit_B1            g_dataBuffer_Display[960+160+1]&bit0
#define EDR1CT_Door1GreenLoopFault_B1                g_dataBuffer_Display[960+160+1]&bit15

#define EDR1CT_Door2MotorIsOpenCircuit_B1            g_dataBuffer_Display[960+160+2]&bit7
#define EDR1CT_Door2MotorOverCurrent_B1              g_dataBuffer_Display[960+160+2]&bit6
#define EDR1CT_Door2PlateSwitchFault_B1              g_dataBuffer_Display[960+160+2]&bit5
#define EDR1CT_Door2LockSwitchFault_B1               g_dataBuffer_Display[960+160+2]&bit4
#define EDR1CT_Door2ElectroMagnetFault_B1            g_dataBuffer_Display[960+160+2]&bit3
#define EDR1CT_Door2EncoderFault_B1                  g_dataBuffer_Display[960+160+2]&bit2
#define EDR1CT_Door2OperationOverTime_B1             g_dataBuffer_Display[960+160+2]&bit1
#define EDR1CT_Door2OutputShortCircuit_B1            g_dataBuffer_Display[960+160+2]&bit0
#define EDR1CT_Door2GreenLoopFault_B1                g_dataBuffer_Display[960+160+2]&bit15

#define EDR1CT_Door3MotorIsOpenCircuit_B1            g_dataBuffer_Display[960+160+3]&bit7
#define EDR1CT_Door3MotorOverCurrent_B1              g_dataBuffer_Display[960+160+3]&bit6
#define EDR1CT_Door3PlateSwitchFault_B1              g_dataBuffer_Display[960+160+3]&bit5
#define EDR1CT_Door3LockSwitchFault_B1               g_dataBuffer_Display[960+160+3]&bit4
#define EDR1CT_Door3ElectroMagnetFault_B1            g_dataBuffer_Display[960+160+3]&bit3
#define EDR1CT_Door3EncoderFault_B1                  g_dataBuffer_Display[960+160+3]&bit2
#define EDR1CT_Door3OperationOverTime_B1             g_dataBuffer_Display[960+160+3]&bit1
#define EDR1CT_Door3OutputShortCircuit_B1            g_dataBuffer_Display[960+160+3]&bit0
#define EDR1CT_Door3GreenLoopFault_B1                g_dataBuffer_Display[960+160+3]&bit15

#define EDR1CT_Door4MotorIsOpenCircuit_B1            g_dataBuffer_Display[960+160+4]&bit7
#define EDR1CT_Door4MotorOverCurrent_B1              g_dataBuffer_Display[960+160+4]&bit6
#define EDR1CT_Door4PlateSwitchFault_B1              g_dataBuffer_Display[960+160+4]&bit5
#define EDR1CT_Door4LockSwitchFault_B1               g_dataBuffer_Display[960+160+4]&bit4
#define EDR1CT_Door4ElectroMagnetFault_B1            g_dataBuffer_Display[960+160+4]&bit3
#define EDR1CT_Door4EncoderFault_B1                  g_dataBuffer_Display[960+160+4]&bit2
#define EDR1CT_Door4OperationOverTime_B1             g_dataBuffer_Display[960+160+4]&bit1
#define EDR1CT_Door4OutputShortCircuit_B1            g_dataBuffer_Display[960+160+4]&bit0
#define EDR1CT_Door4GreenLoopFault_B1                g_dataBuffer_Display[960+160+4]&bit15

#define EDR1CT_Door5MotorIsOpenCircuit_B1            g_dataBuffer_Display[960+160+5]&bit7
#define EDR1CT_Door5MotorOverCurrent_B1              g_dataBuffer_Display[960+160+5]&bit6
#define EDR1CT_Door5PlateSwitchFault_B1              g_dataBuffer_Display[960+160+5]&bit5
#define EDR1CT_Door5LockSwitchFault_B1               g_dataBuffer_Display[960+160+5]&bit4
#define EDR1CT_Door5ElectroMagnetFault_B1            g_dataBuffer_Display[960+160+5]&bit3
#define EDR1CT_Door5EncoderFault_B1                  g_dataBuffer_Display[960+160+5]&bit2
#define EDR1CT_Door5OperationOverTime_B1             g_dataBuffer_Display[960+160+5]&bit1
#define EDR1CT_Door5OutputShortCircuit_B1            g_dataBuffer_Display[960+160+5]&bit0
#define EDR1CT_Door5GreenLoopFault_B1                g_dataBuffer_Display[960+160+5]&bit15

#define EDR1CT_Door6MotorIsOpenCircuit_B1            g_dataBuffer_Display[960+160+6]&bit7
#define EDR1CT_Door6MotorOverCurrent_B1              g_dataBuffer_Display[960+160+6]&bit6
#define EDR1CT_Door6PlateSwitchFault_B1              g_dataBuffer_Display[960+160+6]&bit5
#define EDR1CT_Door6LockSwitchFault_B1               g_dataBuffer_Display[960+160+6]&bit4
#define EDR1CT_Door6ElectroMagnetFault_B1            g_dataBuffer_Display[960+160+6]&bit3
#define EDR1CT_Door6EncoderFault_B1                  g_dataBuffer_Display[960+160+6]&bit2
#define EDR1CT_Door6OperationOverTime_B1             g_dataBuffer_Display[960+160+6]&bit1
#define EDR1CT_Door6OutputShortCircuit_B1            g_dataBuffer_Display[960+160+6]&bit0
#define EDR1CT_Door6GreenLoopFault_B1                g_dataBuffer_Display[960+160+6]&bit15

#define EDR1CT_Door7MotorIsOpenCircuit_B1            g_dataBuffer_Display[960+160+7]&bit7
#define EDR1CT_Door7MotorOverCurrent_B1              g_dataBuffer_Display[960+160+7]&bit6
#define EDR1CT_Door7PlateSwitchFault_B1              g_dataBuffer_Display[960+160+7]&bit5
#define EDR1CT_Door7LockSwitchFault_B1               g_dataBuffer_Display[960+160+7]&bit4
#define EDR1CT_Door7ElectroMagnetFault_B1            g_dataBuffer_Display[960+160+7]&bit3
#define EDR1CT_Door7EncoderFault_B1                  g_dataBuffer_Display[960+160+7]&bit2
#define EDR1CT_Door7OperationOverTime_B1             g_dataBuffer_Display[960+160+7]&bit1
#define EDR1CT_Door7OutputShortCircuit_B1            g_dataBuffer_Display[960+160+7]&bit0
#define EDR1CT_Door7GreenLoopFault_B1                g_dataBuffer_Display[960+160+7]&bit15

#define EDR1CT_Door8MotorIsOpenCircuit_B1            g_dataBuffer_Display[960+160+8]&bit7
#define EDR1CT_Door8MotorOverCurrent_B1              g_dataBuffer_Display[960+160+8]&bit6
#define EDR1CT_Door8PlateSwitchFault_B1              g_dataBuffer_Display[960+160+8]&bit5
#define EDR1CT_Door8LockSwitchFault_B1               g_dataBuffer_Display[960+160+8]&bit4
#define EDR1CT_Door8ElectroMagnetFault_B1            g_dataBuffer_Display[960+160+8]&bit3
#define EDR1CT_Door8EncoderFault_B1                  g_dataBuffer_Display[960+160+8]&bit2
#define EDR1CT_Door8OperationOverTime_B1             g_dataBuffer_Display[960+160+8]&bit1
#define EDR1CT_Door8OutputShortCircuit_B1            g_dataBuffer_Display[960+160+8]&bit0
#define EDR1CT_Door8GreenLoopFault_B1                g_dataBuffer_Display[960+160+8]&bit15

//0x820

#define EDR2CT_LifeSign_U16                         g_dataBuffer_Display[976+160]
#define EDR2CT_Door1OpenEnabled_B1                  g_dataBuffer_Display[976+160+1]&bit7
#define EDR2CT_Door1IsOpen_B1                       g_dataBuffer_Display[976+160+1]&bit6
#define EDR2CT_Door1IsClosed_B1                     g_dataBuffer_Display[976+160+1]&bit5
#define EDR2CT_Door1IsEmgcyUnlock_B1                g_dataBuffer_Display[976+160+1]&bit4
#define EDR2CT_Door1IsIsolated_B1                   g_dataBuffer_Display[976+160+1]&bit3
#define EDR2CT_Door1ExtrusionProtecting_B1          g_dataBuffer_Display[976+160+1]&bit2
#define EDR2CT_Door1ExtrusionStoped_B1              g_dataBuffer_Display[976+160+1]&bit1

#define EDR2CT_Door2OpenEnabled_B1                  g_dataBuffer_Display[976+160+2]&bit7
#define EDR2CT_Door2IsOpen_B1                       g_dataBuffer_Display[976+160+2]&bit6
#define EDR2CT_Door2IsClosed_B1                     g_dataBuffer_Display[976+160+2]&bit5
#define EDR2CT_Door2IsEmgcyUnlock_B1                g_dataBuffer_Display[976+160+2]&bit4
#define EDR2CT_Door2IsIsolated_B1                   g_dataBuffer_Display[976+160+2]&bit3
#define EDR2CT_Door2ExtrusionProtecting_B1          g_dataBuffer_Display[976+160+2]&bit2
#define EDR2CT_Door2ExtrusionStoped_B1              g_dataBuffer_Display[976+160+2]&bit1

#define EDR2CT_Door3OpenEnabled_B1                  g_dataBuffer_Display[976+160+3]&bit7
#define EDR2CT_Door3IsOpen_B1                       g_dataBuffer_Display[976+160+3]&bit6
#define EDR2CT_Door3IsClosed_B1                     g_dataBuffer_Display[976+160+3]&bit5
#define EDR2CT_Door3IsEmgcyUnlock_B1                g_dataBuffer_Display[976+160+3]&bit4
#define EDR2CT_Door3IsIsolated_B1                   g_dataBuffer_Display[976+160+3]&bit3
#define EDR2CT_Door3ExtrusionProtecting_B1          g_dataBuffer_Display[976+160+3]&bit2
#define EDR2CT_Door3ExtrusionStoped_B1              g_dataBuffer_Display[976+160+3]&bit1

#define EDR2CT_Door4OpenEnabled_B1                  g_dataBuffer_Display[976+160+4]&bit7
#define EDR2CT_Door4IsOpen_B1                       g_dataBuffer_Display[976+160+4]&bit6
#define EDR2CT_Door4IsClosed_B1                     g_dataBuffer_Display[976+160+4]&bit5
#define EDR2CT_Door4IsEmgcyUnlock_B1                g_dataBuffer_Display[976+160+4]&bit4
#define EDR2CT_Door4IsIsolated_B1                   g_dataBuffer_Display[976+160+4]&bit3
#define EDR2CT_Door4ExtrusionProtecting_B1          g_dataBuffer_Display[976+160+4]&bit2
#define EDR2CT_Door4ExtrusionStoped_B1              g_dataBuffer_Display[976+160+4]&bit1

#define EDR2CT_Door5OpenEnabled_B1                  g_dataBuffer_Display[976+160+5]&bit7
#define EDR2CT_Door5IsOpen_B1                       g_dataBuffer_Display[976+160+5]&bit6
#define EDR2CT_Door5IsClosed_B1                     g_dataBuffer_Display[976+160+5]&bit5
#define EDR2CT_Door5IsEmgcyUnlock_B1                g_dataBuffer_Display[976+160+5]&bit4
#define EDR2CT_Door5IsIsolated_B1                   g_dataBuffer_Display[976+160+5]&bit3
#define EDR2CT_Door5ExtrusionProtecting_B1          g_dataBuffer_Display[976+160+5]&bit2
#define EDR2CT_Door5ExtrusionStoped_B1              g_dataBuffer_Display[976+160+5]&bit1

#define EDR2CT_Door6OpenEnabled_B1                  g_dataBuffer_Display[976+160+6]&bit7
#define EDR2CT_Door6IsOpen_B1                       g_dataBuffer_Display[976+160+6]&bit6
#define EDR2CT_Door6IsClosed_B1                     g_dataBuffer_Display[976+160+6]&bit5
#define EDR2CT_Door6IsEmgcyUnlock_B1                g_dataBuffer_Display[976+160+6]&bit4
#define EDR2CT_Door6IsIsolated_B1                   g_dataBuffer_Display[976+160+6]&bit3
#define EDR2CT_Door6ExtrusionProtecting_B1          g_dataBuffer_Display[976+160+6]&bit2
#define EDR2CT_Door6ExtrusionStoped_B1              g_dataBuffer_Display[976+160+6]&bit1

#define EDR2CT_Door7OpenEnabled_B1                  g_dataBuffer_Display[976+160+7]&bit7
#define EDR2CT_Door7IsOpen_B1                       g_dataBuffer_Display[976+160+7]&bit6
#define EDR2CT_Door7IsClosed_B1                     g_dataBuffer_Display[976+160+7]&bit5
#define EDR2CT_Door7IsEmgcyUnlock_B1                g_dataBuffer_Display[976+160+7]&bit4
#define EDR2CT_Door7IsIsolated_B1                   g_dataBuffer_Display[976+160+7]&bit3
#define EDR2CT_Door7ExtrusionProtecting_B1          g_dataBuffer_Display[976+160+7]&bit2
#define EDR2CT_Door7ExtrusionStoped_B1              g_dataBuffer_Display[976+160+7]&bit1

#define EDR2CT_Door8OpenEnabled_B1                  g_dataBuffer_Display[976+160+8]&bit7
#define EDR2CT_Door8IsOpen_B1                       g_dataBuffer_Display[976+160+8]&bit6
#define EDR2CT_Door8IsClosed_B1                     g_dataBuffer_Display[976+160+8]&bit5
#define EDR2CT_Door8IsEmgcyUnlock_B1                g_dataBuffer_Display[976+160+8]&bit4
#define EDR2CT_Door8IsIsolated_B1                   g_dataBuffer_Display[976+160+8]&bit3
#define EDR2CT_Door8ExtrusionProtecting_B1          g_dataBuffer_Display[976+160+8]&bit2
#define EDR2CT_Door8ExtrusionStoped_B1              g_dataBuffer_Display[976+160+8]&bit1

#define EDR2CT_Edcu2Version_U8                      g_dataBuffer_Display[976+160+13]%256
#define EDR2CT_Edcu1Version_U8                      g_dataBuffer_Display[976+160+13]/256
#define EDR2CT_EdcuState_U8                         g_dataBuffer_Display[976+160+14]%256

//0x821

#define EDR2CT_Door1IsValid_B1                       g_dataBuffer_Display[992+160]&bit7
#define EDR2CT_Door2IsValid_B1                       g_dataBuffer_Display[992+160]&bit6
#define EDR2CT_Door3IsValid_B1                       g_dataBuffer_Display[992+160]&bit5
#define EDR2CT_Door4IsValid_B1                       g_dataBuffer_Display[992+160]&bit4
#define EDR2CT_Door5IsValid_B1                       g_dataBuffer_Display[992+160]&bit3
#define EDR2CT_Door6IsValid_B1                       g_dataBuffer_Display[992+160]&bit2
#define EDR2CT_Door7IsValid_B1                       g_dataBuffer_Display[992+160]&bit1
#define EDR2CT_Door8IsValid_B1                       g_dataBuffer_Display[992+160]&bit0
#define EDR2CT_Door1MotorIsOpenCircuit_B1            g_dataBuffer_Display[992+160+1]&bit7
#define EDR2CT_Door1MotorOverCurrent_B1              g_dataBuffer_Display[992+160+1]&bit6
#define EDR2CT_Door1PlateSwitchFault_B1              g_dataBuffer_Display[992+160+1]&bit5
#define EDR2CT_Door1LockSwitchFault_B1               g_dataBuffer_Display[992+160+1]&bit4
#define EDR2CT_Door1ElectroMagnetFault_B1            g_dataBuffer_Display[992+160+1]&bit3
#define EDR2CT_Door1EncoderFault_B1                  g_dataBuffer_Display[992+160+1]&bit2
#define EDR2CT_Door1OperationOverTime_B1             g_dataBuffer_Display[992+160+1]&bit1
#define EDR2CT_Door1OutputShortCircuit_B1            g_dataBuffer_Display[992+160+1]&bit0
#define EDR2CT_Door1GreenLoopFault_B1                g_dataBuffer_Display[992+160+1]&bit15

#define EDR2CT_Door2MotorIsOpenCircuit_B1            g_dataBuffer_Display[992+160+2]&bit7
#define EDR2CT_Door2MotorOverCurrent_B1              g_dataBuffer_Display[992+160+2]&bit6
#define EDR2CT_Door2PlateSwitchFault_B1              g_dataBuffer_Display[992+160+2]&bit5
#define EDR2CT_Door2LockSwitchFault_B1               g_dataBuffer_Display[992+160+2]&bit4
#define EDR2CT_Door2ElectroMagnetFault_B1            g_dataBuffer_Display[992+160+2]&bit3
#define EDR2CT_Door2EncoderFault_B1                  g_dataBuffer_Display[992+160+2]&bit2
#define EDR2CT_Door2OperationOverTime_B1             g_dataBuffer_Display[992+160+2]&bit1
#define EDR2CT_Door2OutputShortCircuit_B1            g_dataBuffer_Display[992+160+2]&bit0
#define EDR2CT_Door2GreenLoopFault_B1                g_dataBuffer_Display[992+160+2]&bit15

#define EDR2CT_Door3MotorIsOpenCircuit_B1            g_dataBuffer_Display[992+160+3]&bit7
#define EDR2CT_Door3MotorOverCurrent_B1              g_dataBuffer_Display[992+160+3]&bit6
#define EDR2CT_Door3PlateSwitchFault_B1              g_dataBuffer_Display[992+160+3]&bit5
#define EDR2CT_Door3LockSwitchFault_B1               g_dataBuffer_Display[992+160+3]&bit4
#define EDR2CT_Door3ElectroMagnetFault_B1            g_dataBuffer_Display[992+160+3]&bit3
#define EDR2CT_Door3EncoderFault_B1                  g_dataBuffer_Display[992+160+3]&bit2
#define EDR2CT_Door3OperationOverTime_B1             g_dataBuffer_Display[992+160+3]&bit1
#define EDR2CT_Door3OutputShortCircuit_B1            g_dataBuffer_Display[992+160+3]&bit0
#define EDR2CT_Door3GreenLoopFault_B1                g_dataBuffer_Display[992+160+3]&bit15

#define EDR2CT_Door4MotorIsOpenCircuit_B1            g_dataBuffer_Display[992+160+4]&bit7
#define EDR2CT_Door4MotorOverCurrent_B1              g_dataBuffer_Display[992+160+4]&bit6
#define EDR2CT_Door4PlateSwitchFault_B1              g_dataBuffer_Display[992+160+4]&bit5
#define EDR2CT_Door4LockSwitchFault_B1               g_dataBuffer_Display[992+160+4]&bit4
#define EDR2CT_Door4ElectroMagnetFault_B1            g_dataBuffer_Display[992+160+4]&bit3
#define EDR2CT_Door4EncoderFault_B1                  g_dataBuffer_Display[992+160+4]&bit2
#define EDR2CT_Door4OperationOverTime_B1             g_dataBuffer_Display[992+160+4]&bit1
#define EDR2CT_Door4OutputShortCircuit_B1            g_dataBuffer_Display[992+160+4]&bit0
#define EDR2CT_Door4GreenLoopFault_B1                g_dataBuffer_Display[992+160+4]&bit15

#define EDR2CT_Door5MotorIsOpenCircuit_B1            g_dataBuffer_Display[992+160+5]&bit7
#define EDR2CT_Door5MotorOverCurrent_B1              g_dataBuffer_Display[992+160+5]&bit6
#define EDR2CT_Door5PlateSwitchFault_B1              g_dataBuffer_Display[992+160+5]&bit5
#define EDR2CT_Door5LockSwitchFault_B1               g_dataBuffer_Display[992+160+5]&bit4
#define EDR2CT_Door5ElectroMagnetFault_B1            g_dataBuffer_Display[992+160+5]&bit3
#define EDR2CT_Door5EncoderFault_B1                  g_dataBuffer_Display[992+160+5]&bit2
#define EDR2CT_Door5OperationOverTime_B1             g_dataBuffer_Display[992+160+5]&bit1
#define EDR2CT_Door5OutputShortCircuit_B1            g_dataBuffer_Display[992+160+5]&bit0
#define EDR2CT_Door5GreenLoopFault_B1                g_dataBuffer_Display[992+160+5]&bit15

#define EDR2CT_Door6MotorIsOpenCircuit_B1            g_dataBuffer_Display[992+160+6]&bit7
#define EDR2CT_Door6MotorOverCurrent_B1              g_dataBuffer_Display[992+160+6]&bit6
#define EDR2CT_Door6PlateSwitchFault_B1              g_dataBuffer_Display[992+160+6]&bit5
#define EDR2CT_Door6LockSwitchFault_B1               g_dataBuffer_Display[992+160+6]&bit4
#define EDR2CT_Door6ElectroMagnetFault_B1            g_dataBuffer_Display[992+160+6]&bit3
#define EDR2CT_Door6EncoderFault_B1                  g_dataBuffer_Display[992+160+6]&bit2
#define EDR2CT_Door6OperationOverTime_B1             g_dataBuffer_Display[992+160+6]&bit1
#define EDR2CT_Door6OutputShortCircuit_B1            g_dataBuffer_Display[992+160+6]&bit0
#define EDR2CT_Door6GreenLoopFault_B1                g_dataBuffer_Display[992+160+6]&bit15

#define EDR2CT_Door7MotorIsOpenCircuit_B1            g_dataBuffer_Display[992+160+7]&bit7
#define EDR2CT_Door7MotorOverCurrent_B1              g_dataBuffer_Display[992+160+7]&bit6
#define EDR2CT_Door7PlateSwitchFault_B1              g_dataBuffer_Display[992+160+7]&bit5
#define EDR2CT_Door7LockSwitchFault_B1               g_dataBuffer_Display[992+160+7]&bit4
#define EDR2CT_Door7ElectroMagnetFault_B1            g_dataBuffer_Display[992+160+7]&bit3
#define EDR2CT_Door7EncoderFault_B1                  g_dataBuffer_Display[992+160+7]&bit2
#define EDR2CT_Door7OperationOverTime_B1             g_dataBuffer_Display[992+160+7]&bit1
#define EDR2CT_Door7OutputShortCircuit_B1            g_dataBuffer_Display[992+160+7]&bit0
#define EDR2CT_Door7GreenLoopFault_B1                g_dataBuffer_Display[992+160+7]&bit15

#define EDR2CT_Door8MotorIsOpenCircuit_B1            g_dataBuffer_Display[992+160+8]&bit7
#define EDR2CT_Door8MotorOverCurrent_B1              g_dataBuffer_Display[992+160+8]&bit6
#define EDR2CT_Door8PlateSwitchFault_B1              g_dataBuffer_Display[992+160+8]&bit5
#define EDR2CT_Door8LockSwitchFault_B1               g_dataBuffer_Display[992+160+8]&bit4
#define EDR2CT_Door8ElectroMagnetFault_B1            g_dataBuffer_Display[992+160+8]&bit3
#define EDR2CT_Door8EncoderFault_B1                  g_dataBuffer_Display[992+160+8]&bit2
#define EDR2CT_Door8OperationOverTime_B1             g_dataBuffer_Display[992+160+8]&bit1
#define EDR2CT_Door8OutputShortCircuit_B1            g_dataBuffer_Display[992+160+8]&bit0
#define EDR2CT_Door8GreenLoopFault_B1                g_dataBuffer_Display[992+160+8]&bit15

//0x830

#define EDR3CT_LifeSign_U16                         g_dataBuffer_Display[1008+160]
#define EDR3CT_Door1OpenEnabled_B1                  g_dataBuffer_Display[1008+160+1]&bit7
#define EDR3CT_Door1IsOpen_B1                       g_dataBuffer_Display[1008+160+1]&bit6
#define EDR3CT_Door1IsClosed_B1                     g_dataBuffer_Display[1008+160+1]&bit5
#define EDR3CT_Door1IsEmgcyUnlock_B1                g_dataBuffer_Display[1008+160+1]&bit4
#define EDR3CT_Door1IsIsolated_B1                   g_dataBuffer_Display[1008+160+1]&bit3
#define EDR3CT_Door1ExtrusionProtecting_B1          g_dataBuffer_Display[1008+160+1]&bit2
#define EDR3CT_Door1ExtrusionStoped_B1              g_dataBuffer_Display[1008+160+1]&bit1
#define EDR3CT_Door1SetOK_B1                        g_dataBuffer_Display[1008+160+1]&bit0

#define EDR3CT_Door2OpenEnabled_B1                  g_dataBuffer_Display[1008+160+2]&bit7
#define EDR3CT_Door2IsOpen_B1                       g_dataBuffer_Display[1008+160+2]&bit6
#define EDR3CT_Door2IsClosed_B1                     g_dataBuffer_Display[1008+160+2]&bit5
#define EDR3CT_Door2IsEmgcyUnlock_B1                g_dataBuffer_Display[1008+160+2]&bit4
#define EDR3CT_Door2IsIsolated_B1                   g_dataBuffer_Display[1008+160+2]&bit3
#define EDR3CT_Door2ExtrusionProtecting_B1          g_dataBuffer_Display[1008+160+2]&bit2
#define EDR3CT_Door2ExtrusionStoped_B1              g_dataBuffer_Display[1008+160+2]&bit1
#define EDR3CT_Door2SetOK_B1                        g_dataBuffer_Display[1008+160+2]&bit0

#define EDR3CT_Door3OpenEnabled_B1                  g_dataBuffer_Display[1008+160+3]&bit7
#define EDR3CT_Door3IsOpen_B1                       g_dataBuffer_Display[1008+160+3]&bit6
#define EDR3CT_Door3IsClosed_B1                     g_dataBuffer_Display[1008+160+3]&bit5
#define EDR3CT_Door3IsEmgcyUnlock_B1                g_dataBuffer_Display[1008+160+3]&bit4
#define EDR3CT_Door3IsIsolated_B1                   g_dataBuffer_Display[1008+160+3]&bit3
#define EDR3CT_Door3ExtrusionProtecting_B1          g_dataBuffer_Display[1008+160+3]&bit2
#define EDR3CT_Door3ExtrusionStoped_B1              g_dataBuffer_Display[1008+160+3]&bit1
#define EDR3CT_Door3SetOK_B1                        g_dataBuffer_Display[1008+160+3]&bit0

#define EDR3CT_Door4OpenEnabled_B1                  g_dataBuffer_Display[1008+160+4]&bit7
#define EDR3CT_Door4IsOpen_B1                       g_dataBuffer_Display[1008+160+4]&bit6
#define EDR3CT_Door4IsClosed_B1                     g_dataBuffer_Display[1008+160+4]&bit5
#define EDR3CT_Door4IsEmgcyUnlock_B1                g_dataBuffer_Display[1008+160+4]&bit4
#define EDR3CT_Door4IsIsolated_B1                   g_dataBuffer_Display[1008+160+4]&bit3
#define EDR3CT_Door4ExtrusionProtecting_B1          g_dataBuffer_Display[1008+160+4]&bit2
#define EDR3CT_Door4ExtrusionStoped_B1              g_dataBuffer_Display[1008+160+4]&bit1
#define EDR3CT_Door4SetOK_B1                        g_dataBuffer_Display[1008+160+4]&bit0

#define EDR3CT_Door5OpenEnabled_B1                  g_dataBuffer_Display[1008+160+5]&bit7
#define EDR3CT_Door5IsOpen_B1                       g_dataBuffer_Display[1008+160+5]&bit6
#define EDR3CT_Door5IsClosed_B1                     g_dataBuffer_Display[1008+160+5]&bit5
#define EDR3CT_Door5IsEmgcyUnlock_B1                g_dataBuffer_Display[1008+160+5]&bit4
#define EDR3CT_Door5IsIsolated_B1                   g_dataBuffer_Display[1008+160+5]&bit3
#define EDR3CT_Door5ExtrusionProtecting_B1          g_dataBuffer_Display[1008+160+5]&bit2
#define EDR3CT_Door5ExtrusionStoped_B1              g_dataBuffer_Display[1008+160+5]&bit1
#define EDR3CT_Door5SetOK_B1                        g_dataBuffer_Display[1008+160+5]&bit0

#define EDR3CT_Door6OpenEnabled_B1                  g_dataBuffer_Display[1008+160+6]&bit7
#define EDR3CT_Door6IsOpen_B1                       g_dataBuffer_Display[1008+160+6]&bit6
#define EDR3CT_Door6IsClosed_B1                     g_dataBuffer_Display[1008+160+6]&bit5
#define EDR3CT_Door6IsEmgcyUnlock_B1                g_dataBuffer_Display[1008+160+6]&bit4
#define EDR3CT_Door6IsIsolated_B1                   g_dataBuffer_Display[1008+160+6]&bit3
#define EDR3CT_Door6ExtrusionProtecting_B1          g_dataBuffer_Display[1008+160+6]&bit2
#define EDR3CT_Door6ExtrusionStoped_B1              g_dataBuffer_Display[1008+160+6]&bit1
#define EDR3CT_Door6SetOK_B1                        g_dataBuffer_Display[1008+160+6]&bit0

#define EDR3CT_Door7OpenEnabled_B1                  g_dataBuffer_Display[1008+160+7]&bit7
#define EDR3CT_Door7IsOpen_B1                       g_dataBuffer_Display[1008+160+7]&bit6
#define EDR3CT_Door7IsClosed_B1                     g_dataBuffer_Display[1008+160+7]&bit5
#define EDR3CT_Door7IsEmgcyUnlock_B1                g_dataBuffer_Display[1008+160+7]&bit4
#define EDR3CT_Door7IsIsolated_B1                   g_dataBuffer_Display[1008+160+7]&bit3
#define EDR3CT_Door7ExtrusionProtecting_B1          g_dataBuffer_Display[1008+160+7]&bit2
#define EDR3CT_Door7ExtrusionStoped_B1              g_dataBuffer_Display[1008+160+7]&bit1
#define EDR3CT_Door7SetOK_B1                        g_dataBuffer_Display[1008+160+7]&bit0

#define EDR3CT_Door8OpenEnabled_B1                  g_dataBuffer_Display[1008+160+8]&bit7
#define EDR3CT_Door8IsOpen_B1                       g_dataBuffer_Display[1008+160+8]&bit6
#define EDR3CT_Door8IsClosed_B1                     g_dataBuffer_Display[1008+160+8]&bit5
#define EDR3CT_Door8IsEmgcyUnlock_B1                g_dataBuffer_Display[1008+160+8]&bit4
#define EDR3CT_Door8IsIsolated_B1                   g_dataBuffer_Display[1008+160+8]&bit3
#define EDR3CT_Door8ExtrusionProtecting_B1          g_dataBuffer_Display[1008+160+8]&bit2
#define EDR3CT_Door8ExtrusionStoped_B1              g_dataBuffer_Display[1008+160+8]&bit1
#define EDR3CT_Door8SetOK_B1                        g_dataBuffer_Display[1008+160+8]&bit0

#define EDR3CT_Edcu2Version_U8                      g_dataBuffer_Display[1008+160+13]%256
#define EDR3CT_Edcu1Version_U8                      g_dataBuffer_Display[1008+160+13]/256
#define EDR3CT_EdcuState_U8                         g_dataBuffer_Display[1008+160+14]%256

//0x831

#define EDR3CT_Door1IsValid_B1                       g_dataBuffer_Display[1024+160]&bit7
#define EDR3CT_Door2IsValid_B1                       g_dataBuffer_Display[1024+160]&bit6
#define EDR3CT_Door3IsValid_B1                       g_dataBuffer_Display[1024+160]&bit5
#define EDR3CT_Door4IsValid_B1                       g_dataBuffer_Display[1024+160]&bit4
#define EDR3CT_Door5IsValid_B1                       g_dataBuffer_Display[1024+160]&bit3
#define EDR3CT_Door6IsValid_B1                       g_dataBuffer_Display[1024+160]&bit2
#define EDR3CT_Door7IsValid_B1                       g_dataBuffer_Display[1024+160]&bit1
#define EDR3CT_Door8IsValid_B1                       g_dataBuffer_Display[1024+160]&bit0
#define EDR3CT_Door1MotorIsOpenCircuit_B1            g_dataBuffer_Display[1024+160+1]&bit7
#define EDR3CT_Door1MotorOverCurrent_B1              g_dataBuffer_Display[1024+160+1]&bit6
#define EDR3CT_Door1PlateSwitchFault_B1              g_dataBuffer_Display[1024+160+1]&bit5
#define EDR3CT_Door1LockSwitchFault_B1               g_dataBuffer_Display[1024+160+1]&bit4
#define EDR3CT_Door1ElectroMagnetFault_B1            g_dataBuffer_Display[1024+160+1]&bit3
#define EDR3CT_Door1EncoderFault_B1                  g_dataBuffer_Display[1024+160+1]&bit2
#define EDR3CT_Door1OperationOverTime_B1             g_dataBuffer_Display[1024+160+1]&bit1
#define EDR3CT_Door1OutputShortCircuit_B1            g_dataBuffer_Display[1024+160+1]&bit0
#define EDR3CT_Door1GreenLoopFault_B1                g_dataBuffer_Display[1024+160+1]&bit15

#define EDR3CT_Door2MotorIsOpenCircuit_B1            g_dataBuffer_Display[1024+160+2]&bit7
#define EDR3CT_Door2MotorOverCurrent_B1              g_dataBuffer_Display[1024+160+2]&bit6
#define EDR3CT_Door2PlateSwitchFault_B1              g_dataBuffer_Display[1024+160+2]&bit5
#define EDR3CT_Door2LockSwitchFault_B1               g_dataBuffer_Display[1024+160+2]&bit4
#define EDR3CT_Door2ElectroMagnetFault_B1            g_dataBuffer_Display[1024+160+2]&bit3
#define EDR3CT_Door2EncoderFault_B1                  g_dataBuffer_Display[1024+160+2]&bit2
#define EDR3CT_Door2OperationOverTime_B1             g_dataBuffer_Display[1024+160+2]&bit1
#define EDR3CT_Door2OutputShortCircuit_B1            g_dataBuffer_Display[1024+160+2]&bit0
#define EDR3CT_Door2GreenLoopFault_B1                g_dataBuffer_Display[1024+160+2]&bit15

#define EDR3CT_Door3MotorIsOpenCircuit_B1            g_dataBuffer_Display[1024+160+3]&bit7
#define EDR3CT_Door3MotorOverCurrent_B1              g_dataBuffer_Display[1024+160+3]&bit6
#define EDR3CT_Door3PlateSwitchFault_B1              g_dataBuffer_Display[1024+160+3]&bit5
#define EDR3CT_Door3LockSwitchFault_B1               g_dataBuffer_Display[1024+160+3]&bit4
#define EDR3CT_Door3ElectroMagnetFault_B1            g_dataBuffer_Display[1024+160+3]&bit3
#define EDR3CT_Door3EncoderFault_B1                  g_dataBuffer_Display[1024+160+3]&bit2
#define EDR3CT_Door3OperationOverTime_B1             g_dataBuffer_Display[1024+160+3]&bit1
#define EDR3CT_Door3OutputShortCircuit_B1            g_dataBuffer_Display[1024+160+3]&bit0
#define EDR3CT_Door3GreenLoopFault_B1                g_dataBuffer_Display[1024+160+3]&bit15

#define EDR3CT_Door4MotorIsOpenCircuit_B1            g_dataBuffer_Display[1024+160+4]&bit7
#define EDR3CT_Door4MotorOverCurrent_B1              g_dataBuffer_Display[1024+160+4]&bit6
#define EDR3CT_Door4PlateSwitchFault_B1              g_dataBuffer_Display[1024+160+4]&bit5
#define EDR3CT_Door4LockSwitchFault_B1               g_dataBuffer_Display[1024+160+4]&bit4
#define EDR3CT_Door4ElectroMagnetFault_B1            g_dataBuffer_Display[1024+160+4]&bit3
#define EDR3CT_Door4EncoderFault_B1                  g_dataBuffer_Display[1024+160+4]&bit2
#define EDR3CT_Door4OperationOverTime_B1             g_dataBuffer_Display[1024+160+4]&bit1
#define EDR3CT_Door4OutputShortCircuit_B1            g_dataBuffer_Display[1024+160+4]&bit0
#define EDR3CT_Door4GreenLoopFault_B1                g_dataBuffer_Display[1024+160+4]&bit15

#define EDR3CT_Door5MotorIsOpenCircuit_B1            g_dataBuffer_Display[1024+160+5]&bit7
#define EDR3CT_Door5MotorOverCurrent_B1              g_dataBuffer_Display[1024+160+5]&bit6
#define EDR3CT_Door5PlateSwitchFault_B1              g_dataBuffer_Display[1024+160+5]&bit5
#define EDR3CT_Door5LockSwitchFault_B1               g_dataBuffer_Display[1024+160+5]&bit4
#define EDR3CT_Door5ElectroMagnetFault_B1            g_dataBuffer_Display[1024+160+5]&bit3
#define EDR3CT_Door5EncoderFault_B1                  g_dataBuffer_Display[1024+160+5]&bit2
#define EDR3CT_Door5OperationOverTime_B1             g_dataBuffer_Display[1024+160+5]&bit1
#define EDR3CT_Door5OutputShortCircuit_B1            g_dataBuffer_Display[1024+160+5]&bit0
#define EDR3CT_Door5GreenLoopFault_B1                g_dataBuffer_Display[1024+160+5]&bit15

#define EDR3CT_Door6MotorIsOpenCircuit_B1            g_dataBuffer_Display[1024+160+6]&bit7
#define EDR3CT_Door6MotorOverCurrent_B1              g_dataBuffer_Display[1024+160+6]&bit6
#define EDR3CT_Door6PlateSwitchFault_B1              g_dataBuffer_Display[1024+160+6]&bit5
#define EDR3CT_Door6LockSwitchFault_B1               g_dataBuffer_Display[1024+160+6]&bit4
#define EDR3CT_Door6ElectroMagnetFault_B1            g_dataBuffer_Display[1024+160+6]&bit3
#define EDR3CT_Door6EncoderFault_B1                  g_dataBuffer_Display[1024+160+6]&bit2
#define EDR3CT_Door6OperationOverTime_B1             g_dataBuffer_Display[1024+160+6]&bit1
#define EDR3CT_Door6OutputShortCircuit_B1            g_dataBuffer_Display[1024+160+6]&bit0
#define EDR3CT_Door6GreenLoopFault_B1                g_dataBuffer_Display[1024+160+6]&bit15

#define EDR3CT_Door7MotorIsOpenCircuit_B1            g_dataBuffer_Display[1024+160+7]&bit7
#define EDR3CT_Door7MotorOverCurrent_B1              g_dataBuffer_Display[1024+160+7]&bit6
#define EDR3CT_Door7PlateSwitchFault_B1              g_dataBuffer_Display[1024+160+7]&bit5
#define EDR3CT_Door7LockSwitchFault_B1               g_dataBuffer_Display[1024+160+7]&bit4
#define EDR3CT_Door7ElectroMagnetFault_B1            g_dataBuffer_Display[1024+160+7]&bit3
#define EDR3CT_Door7EncoderFault_B1                  g_dataBuffer_Display[1024+160+7]&bit2
#define EDR3CT_Door7OperationOverTime_B1             g_dataBuffer_Display[1024+160+7]&bit1
#define EDR3CT_Door7OutputShortCircuit_B1            g_dataBuffer_Display[1024+160+7]&bit0
#define EDR3CT_Door7GreenLoopFault_B1                g_dataBuffer_Display[1024+160+7]&bit15

#define EDR3CT_Door8MotorIsOpenCircuit_B1            g_dataBuffer_Display[1024+160+8]&bit7
#define EDR3CT_Door8MotorOverCurrent_B1              g_dataBuffer_Display[1024+160+8]&bit6
#define EDR3CT_Door8PlateSwitchFault_B1              g_dataBuffer_Display[1024+160+8]&bit5
#define EDR3CT_Door8LockSwitchFault_B1               g_dataBuffer_Display[1024+160+8]&bit4
#define EDR3CT_Door8ElectroMagnetFault_B1            g_dataBuffer_Display[1024+160+8]&bit3
#define EDR3CT_Door8EncoderFault_B1                  g_dataBuffer_Display[1024+160+8]&bit2
#define EDR3CT_Door8OperationOverTime_B1             g_dataBuffer_Display[1024+160+8]&bit1
#define EDR3CT_Door8OutputShortCircuit_B1            g_dataBuffer_Display[1024+160+8]&bit0
#define EDR3CT_Door8GreenLoopFault_B1                g_dataBuffer_Display[1024+160+8]&bit15


//0x840

#define EDR4CT_LifeSign_U16                         g_dataBuffer_Display[1040+160]
#define EDR4CT_Door1OpenEnabled_B1                  g_dataBuffer_Display[1040+160+1]&bit7
#define EDR4CT_Door1IsOpen_B1                       g_dataBuffer_Display[1040+160+1]&bit6
#define EDR4CT_Door1IsClosed_B1                     g_dataBuffer_Display[1040+160+1]&bit5
#define EDR4CT_Door1IsEmgcyUnlock_B1                g_dataBuffer_Display[1040+160+1]&bit4
#define EDR4CT_Door1IsIsolated_B1                   g_dataBuffer_Display[1040+160+1]&bit3
#define EDR4CT_Door1ExtrusionProtecting_B1          g_dataBuffer_Display[1040+160+1]&bit2
#define EDR4CT_Door1ExtrusionStoped_B1              g_dataBuffer_Display[1040+160+1]&bit1

#define EDR4CT_Door2OpenEnabled_B1                  g_dataBuffer_Display[1040+160+2]&bit7
#define EDR4CT_Door2IsOpen_B1                       g_dataBuffer_Display[1040+160+2]&bit6
#define EDR4CT_Door2IsClosed_B1                     g_dataBuffer_Display[1040+160+2]&bit5
#define EDR4CT_Door2IsEmgcyUnlock_B1                g_dataBuffer_Display[1040+160+2]&bit4
#define EDR4CT_Door2IsIsolated_B1                   g_dataBuffer_Display[1040+160+2]&bit3
#define EDR4CT_Door2ExtrusionProtecting_B1          g_dataBuffer_Display[1040+160+2]&bit2
#define EDR4CT_Door2ExtrusionStoped_B1              g_dataBuffer_Display[1040+160+2]&bit1

#define EDR4CT_Door3OpenEnabled_B1                  g_dataBuffer_Display[1040+160+3]&bit7
#define EDR4CT_Door3IsOpen_B1                       g_dataBuffer_Display[1040+160+3]&bit6
#define EDR4CT_Door3IsClosed_B1                     g_dataBuffer_Display[1040+160+3]&bit5
#define EDR4CT_Door3IsEmgcyUnlock_B1                g_dataBuffer_Display[1040+160+3]&bit4
#define EDR4CT_Door3IsIsolated_B1                   g_dataBuffer_Display[1040+160+3]&bit3
#define EDR4CT_Door3ExtrusionProtecting_B1          g_dataBuffer_Display[1040+160+3]&bit2
#define EDR4CT_Door3ExtrusionStoped_B1              g_dataBuffer_Display[1040+160+3]&bit1

#define EDR4CT_Door4OpenEnabled_B1                  g_dataBuffer_Display[1040+160+4]&bit7
#define EDR4CT_Door4IsOpen_B1                       g_dataBuffer_Display[1040+160+4]&bit6
#define EDR4CT_Door4IsClosed_B1                     g_dataBuffer_Display[1040+160+4]&bit5
#define EDR4CT_Door4IsEmgcyUnlock_B1                g_dataBuffer_Display[1040+160+4]&bit4
#define EDR4CT_Door4IsIsolated_B1                   g_dataBuffer_Display[1040+160+4]&bit3
#define EDR4CT_Door4ExtrusionProtecting_B1          g_dataBuffer_Display[1040+160+4]&bit2
#define EDR4CT_Door4ExtrusionStoped_B1              g_dataBuffer_Display[1040+160+4]&bit1

#define EDR4CT_Door5OpenEnabled_B1                  g_dataBuffer_Display[1040+160+5]&bit7
#define EDR4CT_Door5IsOpen_B1                       g_dataBuffer_Display[1040+160+5]&bit6
#define EDR4CT_Door5IsClosed_B1                     g_dataBuffer_Display[1040+160+5]&bit5
#define EDR4CT_Door5IsEmgcyUnlock_B1                g_dataBuffer_Display[1040+160+5]&bit4
#define EDR4CT_Door5IsIsolated_B1                   g_dataBuffer_Display[1040+160+5]&bit3
#define EDR4CT_Door5ExtrusionProtecting_B1          g_dataBuffer_Display[1040+160+5]&bit2
#define EDR4CT_Door5ExtrusionStoped_B1              g_dataBuffer_Display[1040+160+5]&bit1

#define EDR4CT_Door6OpenEnabled_B1                  g_dataBuffer_Display[1040+160+6]&bit7
#define EDR4CT_Door6IsOpen_B1                       g_dataBuffer_Display[1040+160+6]&bit6
#define EDR4CT_Door6IsClosed_B1                     g_dataBuffer_Display[1040+160+6]&bit5
#define EDR4CT_Door6IsEmgcyUnlock_B1                g_dataBuffer_Display[1040+160+6]&bit4
#define EDR4CT_Door6IsIsolated_B1                   g_dataBuffer_Display[1040+160+6]&bit3
#define EDR4CT_Door6ExtrusionProtecting_B1          g_dataBuffer_Display[1040+160+6]&bit2
#define EDR4CT_Door6ExtrusionStoped_B1              g_dataBuffer_Display[1040+160+6]&bit1

#define EDR4CT_Door7OpenEnabled_B1                  g_dataBuffer_Display[1040+160+7]&bit7
#define EDR4CT_Door7IsOpen_B1                       g_dataBuffer_Display[1040+160+7]&bit6
#define EDR4CT_Door7IsClosed_B1                     g_dataBuffer_Display[1040+160+7]&bit5
#define EDR4CT_Door7IsEmgcyUnlock_B1                g_dataBuffer_Display[1040+160+7]&bit4
#define EDR4CT_Door7IsIsolated_B1                   g_dataBuffer_Display[1040+160+7]&bit3
#define EDR4CT_Door7ExtrusionProtecting_B1          g_dataBuffer_Display[1040+160+7]&bit2
#define EDR4CT_Door7ExtrusionStoped_B1              g_dataBuffer_Display[1040+160+7]&bit1

#define EDR4CT_Door8OpenEnabled_B1                  g_dataBuffer_Display[1040+160+8]&bit7
#define EDR4CT_Door8IsOpen_B1                       g_dataBuffer_Display[1040+160+8]&bit6
#define EDR4CT_Door8IsClosed_B1                     g_dataBuffer_Display[1040+160+8]&bit5
#define EDR4CT_Door8IsEmgcyUnlock_B1                g_dataBuffer_Display[1040+160+8]&bit4
#define EDR4CT_Door8IsIsolated_B1                   g_dataBuffer_Display[1040+160+8]&bit3
#define EDR4CT_Door8ExtrusionProtecting_B1          g_dataBuffer_Display[1040+160+8]&bit2
#define EDR4CT_Door8ExtrusionStoped_B1              g_dataBuffer_Display[1040+160+8]&bit1

#define EDR4CT_Edcu2Version_U8                      g_dataBuffer_Display[1040+160+13]%256
#define EDR4CT_Edcu1Version_U8                      g_dataBuffer_Display[1040+160+13]/256
#define EDR4CT_EdcuState_U8                         g_dataBuffer_Display[1040+160+14]%256

//0x841

#define EDR4CT_Door1IsValid_B1                       g_dataBuffer_Display[1056+160]&bit7
#define EDR4CT_Door2IsValid_B1                       g_dataBuffer_Display[1056+160]&bit6
#define EDR4CT_Door3IsValid_B1                       g_dataBuffer_Display[1056+160]&bit5
#define EDR4CT_Door4IsValid_B1                       g_dataBuffer_Display[1056+160]&bit4
#define EDR4CT_Door5IsValid_B1                       g_dataBuffer_Display[1056+160]&bit3
#define EDR4CT_Door6IsValid_B1                       g_dataBuffer_Display[1056+160]&bit2
#define EDR4CT_Door7IsValid_B1                       g_dataBuffer_Display[1056+160]&bit1
#define EDR4CT_Door8IsValid_B1                       g_dataBuffer_Display[1056+160]&bit0
#define EDR4CT_Door1MotorIsOpenCircuit_B1            g_dataBuffer_Display[1056+160+1]&bit7
#define EDR4CT_Door1MotorOverCurrent_B1              g_dataBuffer_Display[1056+160+1]&bit6
#define EDR4CT_Door1PlateSwitchFault_B1              g_dataBuffer_Display[1056+160+1]&bit5
#define EDR4CT_Door1LockSwitchFault_B1               g_dataBuffer_Display[1056+160+1]&bit4
#define EDR4CT_Door1ElectroMagnetFault_B1            g_dataBuffer_Display[1056+160+1]&bit3
#define EDR4CT_Door1EncoderFault_B1                  g_dataBuffer_Display[1056+160+1]&bit2
#define EDR4CT_Door1OperationOverTime_B1             g_dataBuffer_Display[1056+160+1]&bit1
#define EDR4CT_Door1OutputShortCircuit_B1            g_dataBuffer_Display[1056+160+1]&bit0
#define EDR4CT_Door1GreenLoopFault_B1                g_dataBuffer_Display[1056+160+1]&bit15

#define EDR4CT_Door2MotorIsOpenCircuit_B1            g_dataBuffer_Display[1056+160+2]&bit7
#define EDR4CT_Door2MotorOverCurrent_B1              g_dataBuffer_Display[1056+160+2]&bit6
#define EDR4CT_Door2PlateSwitchFault_B1              g_dataBuffer_Display[1056+160+2]&bit5
#define EDR4CT_Door2LockSwitchFault_B1               g_dataBuffer_Display[1056+160+2]&bit4
#define EDR4CT_Door2ElectroMagnetFault_B1            g_dataBuffer_Display[1056+160+2]&bit3
#define EDR4CT_Door2EncoderFault_B1                  g_dataBuffer_Display[1056+160+2]&bit2
#define EDR4CT_Door2OperationOverTime_B1             g_dataBuffer_Display[1056+160+2]&bit1
#define EDR4CT_Door2OutputShortCircuit_B1            g_dataBuffer_Display[1056+160+2]&bit0
#define EDR4CT_Door2GreenLoopFault_B1                g_dataBuffer_Display[1056+160+2]&bit15

#define EDR4CT_Door3MotorIsOpenCircuit_B1            g_dataBuffer_Display[1056+160+3]&bit7
#define EDR4CT_Door3MotorOverCurrent_B1              g_dataBuffer_Display[1056+160+3]&bit6
#define EDR4CT_Door3PlateSwitchFault_B1              g_dataBuffer_Display[1056+160+3]&bit5
#define EDR4CT_Door3LockSwitchFault_B1               g_dataBuffer_Display[1056+160+3]&bit4
#define EDR4CT_Door3ElectroMagnetFault_B1            g_dataBuffer_Display[1056+160+3]&bit3
#define EDR4CT_Door3EncoderFault_B1                  g_dataBuffer_Display[1056+160+3]&bit2
#define EDR4CT_Door3OperationOverTime_B1             g_dataBuffer_Display[1056+160+3]&bit1
#define EDR4CT_Door3OutputShortCircuit_B1            g_dataBuffer_Display[1056+160+3]&bit0
#define EDR4CT_Door3GreenLoopFault_B1                g_dataBuffer_Display[1056+160+3]&bit15

#define EDR4CT_Door4MotorIsOpenCircuit_B1            g_dataBuffer_Display[1056+160+4]&bit7
#define EDR4CT_Door4MotorOverCurrent_B1              g_dataBuffer_Display[1056+160+4]&bit6
#define EDR4CT_Door4PlateSwitchFault_B1              g_dataBuffer_Display[1056+160+4]&bit5
#define EDR4CT_Door4LockSwitchFault_B1               g_dataBuffer_Display[1056+160+4]&bit4
#define EDR4CT_Door4ElectroMagnetFault_B1            g_dataBuffer_Display[1056+160+4]&bit3
#define EDR4CT_Door4EncoderFault_B1                  g_dataBuffer_Display[1056+160+4]&bit2
#define EDR4CT_Door4OperationOverTime_B1             g_dataBuffer_Display[1056+160+4]&bit1
#define EDR4CT_Door4OutputShortCircuit_B1            g_dataBuffer_Display[1056+160+4]&bit0
#define EDR4CT_Door4GreenLoopFault_B1                g_dataBuffer_Display[1056+160+4]&bit15

#define EDR4CT_Door5MotorIsOpenCircuit_B1            g_dataBuffer_Display[1056+160+5]&bit7
#define EDR4CT_Door5MotorOverCurrent_B1              g_dataBuffer_Display[1056+160+5]&bit6
#define EDR4CT_Door5PlateSwitchFault_B1              g_dataBuffer_Display[1056+160+5]&bit5
#define EDR4CT_Door5LockSwitchFault_B1               g_dataBuffer_Display[1056+160+5]&bit4
#define EDR4CT_Door5ElectroMagnetFault_B1            g_dataBuffer_Display[1056+160+5]&bit3
#define EDR4CT_Door5EncoderFault_B1                  g_dataBuffer_Display[1056+160+5]&bit2
#define EDR4CT_Door5OperationOverTime_B1             g_dataBuffer_Display[1056+160+5]&bit1
#define EDR4CT_Door5OutputShortCircuit_B1            g_dataBuffer_Display[1056+160+5]&bit0
#define EDR4CT_Door5GreenLoopFault_B1                g_dataBuffer_Display[1056+160+5]&bit15

#define EDR4CT_Door6MotorIsOpenCircuit_B1            g_dataBuffer_Display[1056+160+6]&bit7
#define EDR4CT_Door6MotorOverCurrent_B1              g_dataBuffer_Display[1056+160+6]&bit6
#define EDR4CT_Door6PlateSwitchFault_B1              g_dataBuffer_Display[1056+160+6]&bit5
#define EDR4CT_Door6LockSwitchFault_B1               g_dataBuffer_Display[1056+160+6]&bit4
#define EDR4CT_Door6ElectroMagnetFault_B1            g_dataBuffer_Display[1056+160+6]&bit3
#define EDR4CT_Door6EncoderFault_B1                  g_dataBuffer_Display[1056+160+6]&bit2
#define EDR4CT_Door6OperationOverTime_B1             g_dataBuffer_Display[1056+160+6]&bit1
#define EDR4CT_Door6OutputShortCircuit_B1            g_dataBuffer_Display[1056+160+6]&bit0
#define EDR4CT_Door6GreenLoopFault_B1                g_dataBuffer_Display[1056+160+6]&bit15

#define EDR4CT_Door7MotorIsOpenCircuit_B1            g_dataBuffer_Display[1056+160+7]&bit7
#define EDR4CT_Door7MotorOverCurrent_B1              g_dataBuffer_Display[1056+160+7]&bit6
#define EDR4CT_Door7PlateSwitchFault_B1              g_dataBuffer_Display[1056+160+7]&bit5
#define EDR4CT_Door7LockSwitchFault_B1               g_dataBuffer_Display[1056+160+7]&bit4
#define EDR4CT_Door7ElectroMagnetFault_B1            g_dataBuffer_Display[1056+160+7]&bit3
#define EDR4CT_Door7EncoderFault_B1                  g_dataBuffer_Display[1056+160+7]&bit2
#define EDR4CT_Door7OperationOverTime_B1             g_dataBuffer_Display[1056+160+7]&bit1
#define EDR4CT_Door7OutputShortCircuit_B1            g_dataBuffer_Display[1056+160+7]&bit0
#define EDR4CT_Door7GreenLoopFault_B1                g_dataBuffer_Display[1056+160+7]&bit15

#define EDR4CT_Door8MotorIsOpenCircuit_B1            g_dataBuffer_Display[1056+160+8]&bit7
#define EDR4CT_Door8MotorOverCurrent_B1              g_dataBuffer_Display[1056+160+8]&bit6
#define EDR4CT_Door8PlateSwitchFault_B1              g_dataBuffer_Display[1056+160+8]&bit5
#define EDR4CT_Door8LockSwitchFault_B1               g_dataBuffer_Display[1056+160+8]&bit4
#define EDR4CT_Door8ElectroMagnetFault_B1            g_dataBuffer_Display[1056+160+8]&bit3
#define EDR4CT_Door8EncoderFault_B1                  g_dataBuffer_Display[1056+160+8]&bit2
#define EDR4CT_Door8OperationOverTime_B1             g_dataBuffer_Display[1056+160+8]&bit1
#define EDR4CT_Door8OutputShortCircuit_B1            g_dataBuffer_Display[1056+160+8]&bit0
#define EDR4CT_Door8GreenLoopFault_B1                g_dataBuffer_Display[1056+160+8]&bit15



//0x850

#define EDR5CT_LifeSign_U16                         g_dataBuffer_Display[1072+160]
#define EDR5CT_Door1OpenEnabled_B1                  g_dataBuffer_Display[1072+160+1]&bit7
#define EDR5CT_Door1IsOpen_B1                       g_dataBuffer_Display[1072+160+1]&bit6
#define EDR5CT_Door1IsClosed_B1                     g_dataBuffer_Display[1072+160+1]&bit5
#define EDR5CT_Door1IsEmgcyUnlock_B1                g_dataBuffer_Display[1072+160+1]&bit4
#define EDR5CT_Door1IsIsolated_B1                   g_dataBuffer_Display[1072+160+1]&bit3
#define EDR5CT_Door1ExtrusionProtecting_B1          g_dataBuffer_Display[1072+160+1]&bit2
#define EDR5CT_Door1ExtrusionStoped_B1              g_dataBuffer_Display[1072+160+1]&bit1
#define EDR5CT_Door1SetOK_B1                        g_dataBuffer_Display[1072+160+1]&bit0

#define EDR5CT_Door2OpenEnabled_B1                  g_dataBuffer_Display[1072+160+2]&bit7
#define EDR5CT_Door2IsOpen_B1                       g_dataBuffer_Display[1072+160+2]&bit6
#define EDR5CT_Door2IsClosed_B1                     g_dataBuffer_Display[1072+160+2]&bit5
#define EDR5CT_Door2IsEmgcyUnlock_B1                g_dataBuffer_Display[1072+160+2]&bit4
#define EDR5CT_Door2IsIsolated_B1                   g_dataBuffer_Display[1072+160+2]&bit3
#define EDR5CT_Door2ExtrusionProtecting_B1          g_dataBuffer_Display[1072+160+2]&bit2
#define EDR5CT_Door2ExtrusionStoped_B1              g_dataBuffer_Display[1072+160+2]&bit1
#define EDR5CT_Door2SetOK_B1                        g_dataBuffer_Display[1072+160+2]&bit0

#define EDR5CT_Door3OpenEnabled_B1                  g_dataBuffer_Display[1072+160+3]&bit7
#define EDR5CT_Door3IsOpen_B1                       g_dataBuffer_Display[1072+160+3]&bit6
#define EDR5CT_Door3IsClosed_B1                     g_dataBuffer_Display[1072+160+3]&bit5
#define EDR5CT_Door3IsEmgcyUnlock_B1                g_dataBuffer_Display[1072+160+3]&bit4
#define EDR5CT_Door3IsIsolated_B1                   g_dataBuffer_Display[1072+160+3]&bit3
#define EDR5CT_Door3ExtrusionProtecting_B1          g_dataBuffer_Display[1072+160+3]&bit2
#define EDR5CT_Door3ExtrusionStoped_B1              g_dataBuffer_Display[1072+160+3]&bit1
#define EDR5CT_Door3SetOK_B1                        g_dataBuffer_Display[1072+160+3]&bit0

#define EDR5CT_Door4OpenEnabled_B1                  g_dataBuffer_Display[1072+160+4]&bit7
#define EDR5CT_Door4IsOpen_B1                       g_dataBuffer_Display[1072+160+4]&bit6
#define EDR5CT_Door4IsClosed_B1                     g_dataBuffer_Display[1072+160+4]&bit5
#define EDR5CT_Door4IsEmgcyUnlock_B1                g_dataBuffer_Display[1072+160+4]&bit4
#define EDR5CT_Door4IsIsolated_B1                   g_dataBuffer_Display[1072+160+4]&bit3
#define EDR5CT_Door4ExtrusionProtecting_B1          g_dataBuffer_Display[1072+160+4]&bit2
#define EDR5CT_Door4ExtrusionStoped_B1              g_dataBuffer_Display[1072+160+4]&bit1
#define EDR5CT_Door4SetOK_B1                        g_dataBuffer_Display[1072+160+4]&bit0

#define EDR5CT_Door5OpenEnabled_B1                  g_dataBuffer_Display[1072+160+5]&bit7
#define EDR5CT_Door5IsOpen_B1                       g_dataBuffer_Display[1072+160+5]&bit6
#define EDR5CT_Door5IsClosed_B1                     g_dataBuffer_Display[1072+160+5]&bit5
#define EDR5CT_Door5IsEmgcyUnlock_B1                g_dataBuffer_Display[1072+160+5]&bit4
#define EDR5CT_Door5IsIsolated_B1                   g_dataBuffer_Display[1072+160+5]&bit3
#define EDR5CT_Door5ExtrusionProtecting_B1          g_dataBuffer_Display[1072+160+5]&bit2
#define EDR5CT_Door5ExtrusionStoped_B1              g_dataBuffer_Display[1072+160+5]&bit1
#define EDR5CT_Door5SetOK_B1                        g_dataBuffer_Display[1072+160+5]&bit0

#define EDR5CT_Door6OpenEnabled_B1                  g_dataBuffer_Display[1072+160+6]&bit7
#define EDR5CT_Door6IsOpen_B1                       g_dataBuffer_Display[1072+160+6]&bit6
#define EDR5CT_Door6IsClosed_B1                     g_dataBuffer_Display[1072+160+6]&bit5
#define EDR5CT_Door6IsEmgcyUnlock_B1                g_dataBuffer_Display[1072+160+6]&bit4
#define EDR5CT_Door6IsIsolated_B1                   g_dataBuffer_Display[1072+160+6]&bit3
#define EDR5CT_Door6ExtrusionProtecting_B1          g_dataBuffer_Display[1072+160+6]&bit2
#define EDR5CT_Door6ExtrusionStoped_B1              g_dataBuffer_Display[1072+160+6]&bit1
#define EDR5CT_Door6SetOK_B1                        g_dataBuffer_Display[1072+160+6]&bit0

#define EDR5CT_Door7OpenEnabled_B1                  g_dataBuffer_Display[1072+160+7]&bit7
#define EDR5CT_Door7IsOpen_B1                       g_dataBuffer_Display[1072+160+7]&bit6
#define EDR5CT_Door7IsClosed_B1                     g_dataBuffer_Display[1072+160+7]&bit5
#define EDR5CT_Door7IsEmgcyUnlock_B1                g_dataBuffer_Display[1072+160+7]&bit4
#define EDR5CT_Door7IsIsolated_B1                   g_dataBuffer_Display[1072+160+7]&bit3
#define EDR5CT_Door7ExtrusionProtecting_B1          g_dataBuffer_Display[1072+160+7]&bit2
#define EDR5CT_Door7ExtrusionStoped_B1              g_dataBuffer_Display[1072+160+7]&bit1
#define EDR5CT_Door7SetOK_B1                        g_dataBuffer_Display[1072+160+7]&bit0

#define EDR5CT_Door8OpenEnabled_B1                  g_dataBuffer_Display[1072+160+8]&bit7
#define EDR5CT_Door8IsOpen_B1                       g_dataBuffer_Display[1072+160+8]&bit6
#define EDR5CT_Door8IsClosed_B1                     g_dataBuffer_Display[1072+160+8]&bit5
#define EDR5CT_Door8IsEmgcyUnlock_B1                g_dataBuffer_Display[1072+160+8]&bit4
#define EDR5CT_Door8IsIsolated_B1                   g_dataBuffer_Display[1072+160+8]&bit3
#define EDR5CT_Door8ExtrusionProtecting_B1          g_dataBuffer_Display[1072+160+8]&bit2
#define EDR5CT_Door8ExtrusionStoped_B1              g_dataBuffer_Display[1072+160+8]&bit1
#define EDR5CT_Door8SetOK_B1                        g_dataBuffer_Display[1072+160+8]&bit0

#define EDR5CT_Edcu2Version_U8                      g_dataBuffer_Display[1072+160+13]%256
#define EDR5CT_Edcu1Version_U8                      g_dataBuffer_Display[1072+160+13]/256
#define EDR5CT_EdcuState_U8                         g_dataBuffer_Display[1072+160+14]%256

//0x851

#define EDR5CT_Door1IsValid_B1                       g_dataBuffer_Display[1088+160]&bit7
#define EDR5CT_Door2IsValid_B1                       g_dataBuffer_Display[1088+160]&bit6
#define EDR5CT_Door3IsValid_B1                       g_dataBuffer_Display[1088+160]&bit5
#define EDR5CT_Door4IsValid_B1                       g_dataBuffer_Display[1088+160]&bit4
#define EDR5CT_Door5IsValid_B1                       g_dataBuffer_Display[1088+160]&bit3
#define EDR5CT_Door6IsValid_B1                       g_dataBuffer_Display[1088+160]&bit2
#define EDR5CT_Door7IsValid_B1                       g_dataBuffer_Display[1088+160]&bit1
#define EDR5CT_Door8IsValid_B1                       g_dataBuffer_Display[1088+160]&bit0
#define EDR5CT_Door1MotorIsOpenCircuit_B1            g_dataBuffer_Display[1088+160+1]&bit7
#define EDR5CT_Door1MotorOverCurrent_B1              g_dataBuffer_Display[1088+160+1]&bit6
#define EDR5CT_Door1PlateSwitchFault_B1              g_dataBuffer_Display[1088+160+1]&bit5
#define EDR5CT_Door1LockSwitchFault_B1               g_dataBuffer_Display[1088+160+1]&bit4
#define EDR5CT_Door1ElectroMagnetFault_B1            g_dataBuffer_Display[1088+160+1]&bit3
#define EDR5CT_Door1EncoderFault_B1                  g_dataBuffer_Display[1088+160+1]&bit2
#define EDR5CT_Door1OperationOverTime_B1             g_dataBuffer_Display[1088+160+1]&bit1
#define EDR5CT_Door1OutputShortCircuit_B1            g_dataBuffer_Display[1088+160+1]&bit0
#define EDR5CT_Door1GreenLoopFault_B1                g_dataBuffer_Display[1088+160+1]&bit15

#define EDR5CT_Door2MotorIsOpenCircuit_B1            g_dataBuffer_Display[1088+160+2]&bit7
#define EDR5CT_Door2MotorOverCurrent_B1              g_dataBuffer_Display[1088+160+2]&bit6
#define EDR5CT_Door2PlateSwitchFault_B1              g_dataBuffer_Display[1088+160+2]&bit5
#define EDR5CT_Door2LockSwitchFault_B1               g_dataBuffer_Display[1088+160+2]&bit4
#define EDR5CT_Door2ElectroMagnetFault_B1            g_dataBuffer_Display[1088+160+2]&bit3
#define EDR5CT_Door2EncoderFault_B1                  g_dataBuffer_Display[1088+160+2]&bit2
#define EDR5CT_Door2OperationOverTime_B1             g_dataBuffer_Display[1088+160+2]&bit1
#define EDR5CT_Door2OutputShortCircuit_B1            g_dataBuffer_Display[1088+160+2]&bit0
#define EDR5CT_Door2GreenLoopFault_B1                g_dataBuffer_Display[1088+160+2]&bit15

#define EDR5CT_Door3MotorIsOpenCircuit_B1            g_dataBuffer_Display[1088+160+3]&bit7
#define EDR5CT_Door3MotorOverCurrent_B1              g_dataBuffer_Display[1088+160+3]&bit6
#define EDR5CT_Door3PlateSwitchFault_B1              g_dataBuffer_Display[1088+160+3]&bit5
#define EDR5CT_Door3LockSwitchFault_B1               g_dataBuffer_Display[1088+160+3]&bit4
#define EDR5CT_Door3ElectroMagnetFault_B1            g_dataBuffer_Display[1088+160+3]&bit3
#define EDR5CT_Door3EncoderFault_B1                  g_dataBuffer_Display[1088+160+3]&bit2
#define EDR5CT_Door3OperationOverTime_B1             g_dataBuffer_Display[1088+160+3]&bit1
#define EDR5CT_Door3OutputShortCircuit_B1            g_dataBuffer_Display[1088+160+3]&bit0
#define EDR5CT_Door3GreenLoopFault_B1                g_dataBuffer_Display[1088+160+3]&bit15

#define EDR5CT_Door4MotorIsOpenCircuit_B1            g_dataBuffer_Display[1088+160+4]&bit7
#define EDR5CT_Door4MotorOverCurrent_B1              g_dataBuffer_Display[1088+160+4]&bit6
#define EDR5CT_Door4PlateSwitchFault_B1              g_dataBuffer_Display[1088+160+4]&bit5
#define EDR5CT_Door4LockSwitchFault_B1               g_dataBuffer_Display[1088+160+4]&bit4
#define EDR5CT_Door4ElectroMagnetFault_B1            g_dataBuffer_Display[1088+160+4]&bit3
#define EDR5CT_Door4EncoderFault_B1                  g_dataBuffer_Display[1088+160+4]&bit2
#define EDR5CT_Door4OperationOverTime_B1             g_dataBuffer_Display[1088+160+4]&bit1
#define EDR5CT_Door4OutputShortCircuit_B1            g_dataBuffer_Display[1088+160+4]&bit0
#define EDR5CT_Door4GreenLoopFault_B1                g_dataBuffer_Display[1088+160+4]&bit15

#define EDR5CT_Door5MotorIsOpenCircuit_B1            g_dataBuffer_Display[1088+160+5]&bit7
#define EDR5CT_Door5MotorOverCurrent_B1              g_dataBuffer_Display[1088+160+5]&bit6
#define EDR5CT_Door5PlateSwitchFault_B1              g_dataBuffer_Display[1088+160+5]&bit5
#define EDR5CT_Door5LockSwitchFault_B1               g_dataBuffer_Display[1088+160+5]&bit4
#define EDR5CT_Door5ElectroMagnetFault_B1            g_dataBuffer_Display[1088+160+5]&bit3
#define EDR5CT_Door5EncoderFault_B1                  g_dataBuffer_Display[1088+160+5]&bit2
#define EDR5CT_Door5OperationOverTime_B1             g_dataBuffer_Display[1088+160+5]&bit1
#define EDR5CT_Door5OutputShortCircuit_B1            g_dataBuffer_Display[1088+160+5]&bit0
#define EDR5CT_Door5GreenLoopFault_B1                g_dataBuffer_Display[1088+160+5]&bit15

#define EDR5CT_Door6MotorIsOpenCircuit_B1            g_dataBuffer_Display[1088+160+6]&bit7
#define EDR5CT_Door6MotorOverCurrent_B1              g_dataBuffer_Display[1088+160+6]&bit6
#define EDR5CT_Door6PlateSwitchFault_B1              g_dataBuffer_Display[1088+160+6]&bit5
#define EDR5CT_Door6LockSwitchFault_B1               g_dataBuffer_Display[1088+160+6]&bit4
#define EDR5CT_Door6ElectroMagnetFault_B1            g_dataBuffer_Display[1088+160+6]&bit3
#define EDR5CT_Door6EncoderFault_B1                  g_dataBuffer_Display[1088+160+6]&bit2
#define EDR5CT_Door6OperationOverTime_B1             g_dataBuffer_Display[1088+160+6]&bit1
#define EDR5CT_Door6OutputShortCircuit_B1            g_dataBuffer_Display[1088+160+6]&bit0
#define EDR5CT_Door6GreenLoopFault_B1                g_dataBuffer_Display[1088+160+6]&bit15

#define EDR5CT_Door7MotorIsOpenCircuit_B1            g_dataBuffer_Display[1088+160+7]&bit7
#define EDR5CT_Door7MotorOverCurrent_B1              g_dataBuffer_Display[1088+160+7]&bit6
#define EDR5CT_Door7PlateSwitchFault_B1              g_dataBuffer_Display[1088+160+7]&bit5
#define EDR5CT_Door7LockSwitchFault_B1               g_dataBuffer_Display[1088+160+7]&bit4
#define EDR5CT_Door7ElectroMagnetFault_B1            g_dataBuffer_Display[1088+160+7]&bit3
#define EDR5CT_Door7EncoderFault_B1                  g_dataBuffer_Display[1088+160+7]&bit2
#define EDR5CT_Door7OperationOverTime_B1             g_dataBuffer_Display[1088+160+7]&bit1
#define EDR5CT_Door7OutputShortCircuit_B1            g_dataBuffer_Display[1088+160+7]&bit0
#define EDR5CT_Door7GreenLoopFault_B1                g_dataBuffer_Display[1088+160+7]&bit15

#define EDR5CT_Door8MotorIsOpenCircuit_B1            g_dataBuffer_Display[1088+160+8]&bit7
#define EDR5CT_Door8MotorOverCurrent_B1              g_dataBuffer_Display[1088+160+8]&bit6
#define EDR5CT_Door8PlateSwitchFault_B1              g_dataBuffer_Display[1088+160+8]&bit5
#define EDR5CT_Door8LockSwitchFault_B1               g_dataBuffer_Display[1088+160+8]&bit4
#define EDR5CT_Door8ElectroMagnetFault_B1            g_dataBuffer_Display[1088+160+8]&bit3
#define EDR5CT_Door8EncoderFault_B1                  g_dataBuffer_Display[1088+160+8]&bit2
#define EDR5CT_Door8OperationOverTime_B1             g_dataBuffer_Display[1088+160+8]&bit1
#define EDR5CT_Door8OutputShortCircuit_B1            g_dataBuffer_Display[1088+160+8]&bit0
#define EDR5CT_Door8GreenLoopFault_B1                g_dataBuffer_Display[1088+160+8]&bit15




//0x860

#define EDR6CT_LifeSign_U16                         g_dataBuffer_Display[1104+160]
#define EDR6CT_Door1OpenEnabled_B1                  g_dataBuffer_Display[1104+160+1]&bit7
#define EDR6CT_Door1IsOpen_B1                       g_dataBuffer_Display[1104+160+1]&bit6
#define EDR6CT_Door1IsClosed_B1                     g_dataBuffer_Display[1104+160+1]&bit5
#define EDR6CT_Door1IsEmgcyUnlock_B1                g_dataBuffer_Display[1104+160+1]&bit4
#define EDR6CT_Door1IsIsolated_B1                   g_dataBuffer_Display[1104+160+1]&bit3
#define EDR6CT_Door1ExtrusionProtecting_B1          g_dataBuffer_Display[1104+160+1]&bit2
#define EDR6CT_Door1ExtrusionStoped_B1              g_dataBuffer_Display[1104+160+1]&bit1

#define EDR6CT_Door2OpenEnabled_B1                  g_dataBuffer_Display[1104+160+2]&bit7
#define EDR6CT_Door2IsOpen_B1                       g_dataBuffer_Display[1104+160+2]&bit6
#define EDR6CT_Door2IsClosed_B1                     g_dataBuffer_Display[1104+160+2]&bit5
#define EDR6CT_Door2IsEmgcyUnlock_B1                g_dataBuffer_Display[1104+160+2]&bit4
#define EDR6CT_Door2IsIsolated_B1                   g_dataBuffer_Display[1104+160+2]&bit3
#define EDR6CT_Door2ExtrusionProtecting_B1          g_dataBuffer_Display[1104+160+2]&bit2
#define EDR6CT_Door2ExtrusionStoped_B1              g_dataBuffer_Display[1104+160+2]&bit1

#define EDR6CT_Door3OpenEnabled_B1                  g_dataBuffer_Display[1104+160+3]&bit7
#define EDR6CT_Door3IsOpen_B1                       g_dataBuffer_Display[1104+160+3]&bit6
#define EDR6CT_Door3IsClosed_B1                     g_dataBuffer_Display[1104+160+3]&bit5
#define EDR6CT_Door3IsEmgcyUnlock_B1                g_dataBuffer_Display[1104+160+3]&bit4
#define EDR6CT_Door3IsIsolated_B1                   g_dataBuffer_Display[1104+160+3]&bit3
#define EDR6CT_Door3ExtrusionProtecting_B1          g_dataBuffer_Display[1104+160+3]&bit2
#define EDR6CT_Door3ExtrusionStoped_B1              g_dataBuffer_Display[1104+160+3]&bit1

#define EDR6CT_Door4OpenEnabled_B1                  g_dataBuffer_Display[1104+160+4]&bit7
#define EDR6CT_Door4IsOpen_B1                       g_dataBuffer_Display[1104+160+4]&bit6
#define EDR6CT_Door4IsClosed_B1                     g_dataBuffer_Display[1104+160+4]&bit5
#define EDR6CT_Door4IsEmgcyUnlock_B1                g_dataBuffer_Display[1104+160+4]&bit4
#define EDR6CT_Door4IsIsolated_B1                   g_dataBuffer_Display[1104+160+4]&bit3
#define EDR6CT_Door4ExtrusionProtecting_B1          g_dataBuffer_Display[1104+160+4]&bit2
#define EDR6CT_Door4ExtrusionStoped_B1              g_dataBuffer_Display[1104+160+4]&bit1

#define EDR6CT_Door5OpenEnabled_B1                  g_dataBuffer_Display[1104+160+5]&bit7
#define EDR6CT_Door5IsOpen_B1                       g_dataBuffer_Display[1104+160+5]&bit6
#define EDR6CT_Door5IsClosed_B1                     g_dataBuffer_Display[1104+160+5]&bit5
#define EDR6CT_Door5IsEmgcyUnlock_B1                g_dataBuffer_Display[1104+160+5]&bit4
#define EDR6CT_Door5IsIsolated_B1                   g_dataBuffer_Display[1104+160+5]&bit3
#define EDR6CT_Door5ExtrusionProtecting_B1          g_dataBuffer_Display[1104+160+5]&bit2
#define EDR6CT_Door5ExtrusionStoped_B1              g_dataBuffer_Display[1104+160+5]&bit1

#define EDR6CT_Door6OpenEnabled_B1                  g_dataBuffer_Display[1104+160+6]&bit7
#define EDR6CT_Door6IsOpen_B1                       g_dataBuffer_Display[1104+160+6]&bit6
#define EDR6CT_Door6IsClosed_B1                     g_dataBuffer_Display[1104+160+6]&bit5
#define EDR6CT_Door6IsEmgcyUnlock_B1                g_dataBuffer_Display[1104+160+6]&bit4
#define EDR6CT_Door6IsIsolated_B1                   g_dataBuffer_Display[1104+160+6]&bit3
#define EDR6CT_Door6ExtrusionProtecting_B1          g_dataBuffer_Display[1104+160+6]&bit2
#define EDR6CT_Door6ExtrusionStoped_B1              g_dataBuffer_Display[1104+160+6]&bit1

#define EDR6CT_Door7OpenEnabled_B1                  g_dataBuffer_Display[1104+160+7]&bit7
#define EDR6CT_Door7IsOpen_B1                       g_dataBuffer_Display[1104+160+7]&bit6
#define EDR6CT_Door7IsClosed_B1                     g_dataBuffer_Display[1104+160+7]&bit5
#define EDR6CT_Door7IsEmgcyUnlock_B1                g_dataBuffer_Display[1104+160+7]&bit4
#define EDR6CT_Door7IsIsolated_B1                   g_dataBuffer_Display[1104+160+7]&bit3
#define EDR6CT_Door7ExtrusionProtecting_B1          g_dataBuffer_Display[1104+160+7]&bit2
#define EDR6CT_Door7ExtrusionStoped_B1              g_dataBuffer_Display[1104+160+7]&bit1

#define EDR6CT_Door8OpenEnabled_B1                  g_dataBuffer_Display[1104+160+8]&bit7
#define EDR6CT_Door8IsOpen_B1                       g_dataBuffer_Display[1104+160+8]&bit6
#define EDR6CT_Door8IsClosed_B1                     g_dataBuffer_Display[1104+160+8]&bit5
#define EDR6CT_Door8IsEmgcyUnlock_B1                g_dataBuffer_Display[1104+160+8]&bit4
#define EDR6CT_Door8IsIsolated_B1                   g_dataBuffer_Display[1104+160+8]&bit3
#define EDR6CT_Door8ExtrusionProtecting_B1          g_dataBuffer_Display[1104+160+8]&bit2
#define EDR6CT_Door8ExtrusionStoped_B1              g_dataBuffer_Display[1104+160+8]&bit1

#define EDR6CT_Edcu2Version_U8                      g_dataBuffer_Display[1104+160+13]%256
#define EDR6CT_Edcu1Version_U8                      g_dataBuffer_Display[1104+160+13]/256
#define EDR6CT_EdcuState_U8                         g_dataBuffer_Display[1104+160+14]%256

//0x861

#define EDR6CT_Door1IsValid_B1                       g_dataBuffer_Display[1120+160]&bit7
#define EDR6CT_Door2IsValid_B1                       g_dataBuffer_Display[1120+160]&bit6
#define EDR6CT_Door3IsValid_B1                       g_dataBuffer_Display[1120+160]&bit5
#define EDR6CT_Door4IsValid_B1                       g_dataBuffer_Display[1120+160]&bit4
#define EDR6CT_Door5IsValid_B1                       g_dataBuffer_Display[1120+160]&bit3
#define EDR6CT_Door6IsValid_B1                       g_dataBuffer_Display[1120+160]&bit2
#define EDR6CT_Door7IsValid_B1                       g_dataBuffer_Display[1120+160]&bit1
#define EDR6CT_Door8IsValid_B1                       g_dataBuffer_Display[1120+160]&bit0
#define EDR6CT_Door1MotorIsOpenCircuit_B1            g_dataBuffer_Display[1120+160+1]&bit7
#define EDR6CT_Door1MotorOverCurrent_B1              g_dataBuffer_Display[1120+160+1]&bit6
#define EDR6CT_Door1PlateSwitchFault_B1              g_dataBuffer_Display[1120+160+1]&bit5
#define EDR6CT_Door1LockSwitchFault_B1               g_dataBuffer_Display[1120+160+1]&bit4
#define EDR6CT_Door1ElectroMagnetFault_B1            g_dataBuffer_Display[1120+160+1]&bit3
#define EDR6CT_Door1EncoderFault_B1                  g_dataBuffer_Display[1120+160+1]&bit2
#define EDR6CT_Door1OperationOverTime_B1             g_dataBuffer_Display[1120+160+1]&bit1
#define EDR6CT_Door1OutputShortCircuit_B1            g_dataBuffer_Display[1120+160+1]&bit0
#define EDR6CT_Door1GreenLoopFault_B1                g_dataBuffer_Display[1120+160+1]&bit15

#define EDR6CT_Door2MotorIsOpenCircuit_B1            g_dataBuffer_Display[1120+160+2]&bit7
#define EDR6CT_Door2MotorOverCurrent_B1              g_dataBuffer_Display[1120+160+2]&bit6
#define EDR6CT_Door2PlateSwitchFault_B1              g_dataBuffer_Display[1120+160+2]&bit5
#define EDR6CT_Door2LockSwitchFault_B1               g_dataBuffer_Display[1120+160+2]&bit4
#define EDR6CT_Door2ElectroMagnetFault_B1            g_dataBuffer_Display[1120+160+2]&bit3
#define EDR6CT_Door2EncoderFault_B1                  g_dataBuffer_Display[1120+160+2]&bit2
#define EDR6CT_Door2OperationOverTime_B1             g_dataBuffer_Display[1120+160+2]&bit1
#define EDR6CT_Door2OutputShortCircuit_B1            g_dataBuffer_Display[1120+160+2]&bit0
#define EDR6CT_Door2GreenLoopFault_B1                g_dataBuffer_Display[1120+160+2]&bit15

#define EDR6CT_Door3MotorIsOpenCircuit_B1            g_dataBuffer_Display[1120+160+3]&bit7
#define EDR6CT_Door3MotorOverCurrent_B1              g_dataBuffer_Display[1120+160+3]&bit6
#define EDR6CT_Door3PlateSwitchFault_B1              g_dataBuffer_Display[1120+160+3]&bit5
#define EDR6CT_Door3LockSwitchFault_B1               g_dataBuffer_Display[1120+160+3]&bit4
#define EDR6CT_Door3ElectroMagnetFault_B1            g_dataBuffer_Display[1120+160+3]&bit3
#define EDR6CT_Door3EncoderFault_B1                  g_dataBuffer_Display[1120+160+3]&bit2
#define EDR6CT_Door3OperationOverTime_B1             g_dataBuffer_Display[1120+160+3]&bit1
#define EDR6CT_Door3OutputShortCircuit_B1            g_dataBuffer_Display[1120+160+3]&bit0
#define EDR6CT_Door3GreenLoopFault_B1                g_dataBuffer_Display[1120+160+3]&bit15

#define EDR6CT_Door4MotorIsOpenCircuit_B1            g_dataBuffer_Display[1120+160+4]&bit7
#define EDR6CT_Door4MotorOverCurrent_B1              g_dataBuffer_Display[1120+160+4]&bit6
#define EDR6CT_Door4PlateSwitchFault_B1              g_dataBuffer_Display[1120+160+4]&bit5
#define EDR6CT_Door4LockSwitchFault_B1               g_dataBuffer_Display[1120+160+4]&bit4
#define EDR6CT_Door4ElectroMagnetFault_B1            g_dataBuffer_Display[1120+160+4]&bit3
#define EDR6CT_Door4EncoderFault_B1                  g_dataBuffer_Display[1120+160+4]&bit2
#define EDR6CT_Door4OperationOverTime_B1             g_dataBuffer_Display[1120+160+4]&bit1
#define EDR6CT_Door4OutputShortCircuit_B1            g_dataBuffer_Display[1120+160+4]&bit0
#define EDR6CT_Door4GreenLoopFault_B1                g_dataBuffer_Display[1120+160+4]&bit15

#define EDR6CT_Door5MotorIsOpenCircuit_B1            g_dataBuffer_Display[1120+160+5]&bit7
#define EDR6CT_Door5MotorOverCurrent_B1              g_dataBuffer_Display[1120+160+5]&bit6
#define EDR6CT_Door5PlateSwitchFault_B1              g_dataBuffer_Display[1120+160+5]&bit5
#define EDR6CT_Door5LockSwitchFault_B1               g_dataBuffer_Display[1120+160+5]&bit4
#define EDR6CT_Door5ElectroMagnetFault_B1            g_dataBuffer_Display[1120+160+5]&bit3
#define EDR6CT_Door5EncoderFault_B1                  g_dataBuffer_Display[1120+160+5]&bit2
#define EDR6CT_Door5OperationOverTime_B1             g_dataBuffer_Display[1120+160+5]&bit1
#define EDR6CT_Door5OutputShortCircuit_B1            g_dataBuffer_Display[1120+160+5]&bit0
#define EDR6CT_Door5GreenLoopFault_B1                g_dataBuffer_Display[1120+160+5]&bit15

#define EDR6CT_Door6MotorIsOpenCircuit_B1            g_dataBuffer_Display[1120+160+6]&bit7
#define EDR6CT_Door6MotorOverCurrent_B1              g_dataBuffer_Display[1120+160+6]&bit6
#define EDR6CT_Door6PlateSwitchFault_B1              g_dataBuffer_Display[1120+160+6]&bit5
#define EDR6CT_Door6LockSwitchFault_B1               g_dataBuffer_Display[1120+160+6]&bit4
#define EDR6CT_Door6ElectroMagnetFault_B1            g_dataBuffer_Display[1120+160+6]&bit3
#define EDR6CT_Door6EncoderFault_B1                  g_dataBuffer_Display[1120+160+6]&bit2
#define EDR6CT_Door6OperationOverTime_B1             g_dataBuffer_Display[1120+160+6]&bit1
#define EDR6CT_Door6OutputShortCircuit_B1            g_dataBuffer_Display[1120+160+6]&bit0
#define EDR6CT_Door6GreenLoopFault_B1                g_dataBuffer_Display[1120+160+6]&bit15

#define EDR6CT_Door7MotorIsOpenCircuit_B1            g_dataBuffer_Display[1120+160+7]&bit7
#define EDR6CT_Door7MotorOverCurrent_B1              g_dataBuffer_Display[1120+160+7]&bit6
#define EDR6CT_Door7PlateSwitchFault_B1              g_dataBuffer_Display[1120+160+7]&bit5
#define EDR6CT_Door7LockSwitchFault_B1               g_dataBuffer_Display[1120+160+7]&bit4
#define EDR6CT_Door7ElectroMagnetFault_B1            g_dataBuffer_Display[1120+160+7]&bit3
#define EDR6CT_Door7EncoderFault_B1                  g_dataBuffer_Display[1120+160+7]&bit2
#define EDR6CT_Door7OperationOverTime_B1             g_dataBuffer_Display[1120+160+7]&bit1
#define EDR6CT_Door7OutputShortCircuit_B1            g_dataBuffer_Display[1120+160+7]&bit0
#define EDR6CT_Door7GreenLoopFault_B1                g_dataBuffer_Display[1120+160+7]&bit15

#define EDR6CT_Door8MotorIsOpenCircuit_B1            g_dataBuffer_Display[1120+160+8]&bit7
#define EDR6CT_Door8MotorOverCurrent_B1              g_dataBuffer_Display[1120+160+8]&bit6
#define EDR6CT_Door8PlateSwitchFault_B1              g_dataBuffer_Display[1120+160+8]&bit5
#define EDR6CT_Door8LockSwitchFault_B1               g_dataBuffer_Display[1120+160+8]&bit4
#define EDR6CT_Door8ElectroMagnetFault_B1            g_dataBuffer_Display[1120+160+8]&bit3
#define EDR6CT_Door8EncoderFault_B1                  g_dataBuffer_Display[1120+160+8]&bit2
#define EDR6CT_Door8OperationOverTime_B1             g_dataBuffer_Display[1120+160+8]&bit1
#define EDR6CT_Door8OutputShortCircuit_B1            g_dataBuffer_Display[1120+160+8]&bit0
#define EDR6CT_Door8GreenLoopFault_B1                g_dataBuffer_Display[1120+160+8]&bit15

//0x870

#define EDR7CT_LifeSign_U16                         g_dataBuffer_Display[1136+160]
#define EDR7CT_Door1OpenEnabled_B1                  g_dataBuffer_Display[1136+160+1]&bit7
#define EDR7CT_Door1IsOpen_B1                       g_dataBuffer_Display[1136+160+1]&bit6
#define EDR7CT_Door1IsClosed_B1                     g_dataBuffer_Display[1136+160+1]&bit5
#define EDR7CT_Door1IsEmgcyUnlock_B1                g_dataBuffer_Display[1136+160+1]&bit4
#define EDR7CT_Door1IsIsolated_B1                   g_dataBuffer_Display[1136+160+1]&bit3
#define EDR7CT_Door1ExtrusionProtecting_B1          g_dataBuffer_Display[1136+160+1]&bit2
#define EDR7CT_Door1ExtrusionStoped_B1              g_dataBuffer_Display[1136+160+1]&bit1
#define EDR7CT_Door1SetOK_B1                        g_dataBuffer_Display[1136+160+1]&bit0

#define EDR7CT_Door2OpenEnabled_B1                  g_dataBuffer_Display[1136+160+2]&bit7
#define EDR7CT_Door2IsOpen_B1                       g_dataBuffer_Display[1136+160+2]&bit6
#define EDR7CT_Door2IsClosed_B1                     g_dataBuffer_Display[1136+160+2]&bit5
#define EDR7CT_Door2IsEmgcyUnlock_B1                g_dataBuffer_Display[1136+160+2]&bit4
#define EDR7CT_Door2IsIsolated_B1                   g_dataBuffer_Display[1136+160+2]&bit3
#define EDR7CT_Door2ExtrusionProtecting_B1          g_dataBuffer_Display[1136+160+2]&bit2
#define EDR7CT_Door2ExtrusionStoped_B1              g_dataBuffer_Display[1136+160+2]&bit1
#define EDR7CT_Door2SetOK_B1                        g_dataBuffer_Display[1136+160+2]&bit0

#define EDR7CT_Door3OpenEnabled_B1                  g_dataBuffer_Display[1136+160+3]&bit7
#define EDR7CT_Door3IsOpen_B1                       g_dataBuffer_Display[1136+160+3]&bit6
#define EDR7CT_Door3IsClosed_B1                     g_dataBuffer_Display[1136+160+3]&bit5
#define EDR7CT_Door3IsEmgcyUnlock_B1                g_dataBuffer_Display[1136+160+3]&bit4
#define EDR7CT_Door3IsIsolated_B1                   g_dataBuffer_Display[1136+160+3]&bit3
#define EDR7CT_Door3ExtrusionProtecting_B1          g_dataBuffer_Display[1136+160+3]&bit2
#define EDR7CT_Door3ExtrusionStoped_B1              g_dataBuffer_Display[1136+160+3]&bit1
#define EDR7CT_Door3SetOK_B1                        g_dataBuffer_Display[1136+160+3]&bit0

#define EDR7CT_Door4OpenEnabled_B1                  g_dataBuffer_Display[1136+160+4]&bit7
#define EDR7CT_Door4IsOpen_B1                       g_dataBuffer_Display[1136+160+4]&bit6
#define EDR7CT_Door4IsClosed_B1                     g_dataBuffer_Display[1136+160+4]&bit5
#define EDR7CT_Door4IsEmgcyUnlock_B1                g_dataBuffer_Display[1136+160+4]&bit4
#define EDR7CT_Door4IsIsolated_B1                   g_dataBuffer_Display[1136+160+4]&bit3
#define EDR7CT_Door4ExtrusionProtecting_B1          g_dataBuffer_Display[1136+160+4]&bit2
#define EDR7CT_Door4ExtrusionStoped_B1              g_dataBuffer_Display[1136+160+4]&bit1
#define EDR7CT_Door4SetOK_B1                        g_dataBuffer_Display[1136+160+4]&bit0

#define EDR7CT_Door5OpenEnabled_B1                  g_dataBuffer_Display[1136+160+5]&bit7
#define EDR7CT_Door5IsOpen_B1                       g_dataBuffer_Display[1136+160+5]&bit6
#define EDR7CT_Door5IsClosed_B1                     g_dataBuffer_Display[1136+160+5]&bit5
#define EDR7CT_Door5IsEmgcyUnlock_B1                g_dataBuffer_Display[1136+160+5]&bit4
#define EDR7CT_Door5IsIsolated_B1                   g_dataBuffer_Display[1136+160+5]&bit3
#define EDR7CT_Door5ExtrusionProtecting_B1          g_dataBuffer_Display[1136+160+5]&bit2
#define EDR7CT_Door5ExtrusionStoped_B1              g_dataBuffer_Display[1136+160+5]&bit1
#define EDR7CT_Door5SetOK_B1                        g_dataBuffer_Display[1136+160+5]&bit0

#define EDR7CT_Door6OpenEnabled_B1                  g_dataBuffer_Display[1136+160+6]&bit7
#define EDR7CT_Door6IsOpen_B1                       g_dataBuffer_Display[1136+160+6]&bit6
#define EDR7CT_Door6IsClosed_B1                     g_dataBuffer_Display[1136+160+6]&bit5
#define EDR7CT_Door6IsEmgcyUnlock_B1                g_dataBuffer_Display[1136+160+6]&bit4
#define EDR7CT_Door6IsIsolated_B1                   g_dataBuffer_Display[1136+160+6]&bit3
#define EDR7CT_Door6ExtrusionProtecting_B1          g_dataBuffer_Display[1136+160+6]&bit2
#define EDR7CT_Door6ExtrusionStoped_B1              g_dataBuffer_Display[1136+160+6]&bit1
#define EDR7CT_Door6SetOK_B1                        g_dataBuffer_Display[1136+160+6]&bit0

#define EDR7CT_Door7OpenEnabled_B1                  g_dataBuffer_Display[1136+160+7]&bit7
#define EDR7CT_Door7IsOpen_B1                       g_dataBuffer_Display[1136+160+7]&bit6
#define EDR7CT_Door7IsClosed_B1                     g_dataBuffer_Display[1136+160+7]&bit5
#define EDR7CT_Door7IsEmgcyUnlock_B1                g_dataBuffer_Display[1136+160+7]&bit4
#define EDR7CT_Door7IsIsolated_B1                   g_dataBuffer_Display[1136+160+7]&bit3
#define EDR7CT_Door7ExtrusionProtecting_B1          g_dataBuffer_Display[1136+160+7]&bit2
#define EDR7CT_Door7ExtrusionStoped_B1              g_dataBuffer_Display[1136+160+7]&bit1
#define EDR7CT_Door7SetOK_B1                        g_dataBuffer_Display[1136+160+7]&bit0

#define EDR7CT_Door8OpenEnabled_B1                  g_dataBuffer_Display[1136+160+8]&bit7
#define EDR7CT_Door8IsOpen_B1                       g_dataBuffer_Display[1136+160+8]&bit6
#define EDR7CT_Door8IsClosed_B1                     g_dataBuffer_Display[1136+160+8]&bit5
#define EDR7CT_Door8IsEmgcyUnlock_B1                g_dataBuffer_Display[1136+160+8]&bit4
#define EDR7CT_Door8IsIsolated_B1                   g_dataBuffer_Display[1136+160+8]&bit3
#define EDR7CT_Door8ExtrusionProtecting_B1          g_dataBuffer_Display[1136+160+8]&bit2
#define EDR7CT_Door8ExtrusionStoped_B1              g_dataBuffer_Display[1136+160+8]&bit1
#define EDR7CT_Door8SetOK_B1                        g_dataBuffer_Display[1136+160+8]&bit0

#define EDR7CT_Edcu2Version_U8                      g_dataBuffer_Display[1136+160+13]%256
#define EDR7CT_Edcu1Version_U8                      g_dataBuffer_Display[1136+160+13]/256
#define EDR7CT_EdcuState_U8                         g_dataBuffer_Display[1136+160+14]%256

//0x871

#define EDR7CT_Door1IsValid_B1                       g_dataBuffer_Display[1152+160]&bit7
#define EDR7CT_Door2IsValid_B1                       g_dataBuffer_Display[1152+160]&bit6
#define EDR7CT_Door3IsValid_B1                       g_dataBuffer_Display[1152+160]&bit5
#define EDR7CT_Door4IsValid_B1                       g_dataBuffer_Display[1152+160]&bit4
#define EDR7CT_Door5IsValid_B1                       g_dataBuffer_Display[1152+160]&bit3
#define EDR7CT_Door6IsValid_B1                       g_dataBuffer_Display[1152+160]&bit2
#define EDR7CT_Door7IsValid_B1                       g_dataBuffer_Display[1152+160]&bit1
#define EDR7CT_Door8IsValid_B1                       g_dataBuffer_Display[1152+160]&bit0
#define EDR7CT_Door1MotorIsOpenCircuit_B1            g_dataBuffer_Display[1152+160+1]&bit7
#define EDR7CT_Door1MotorOverCurrent_B1              g_dataBuffer_Display[1152+160+1]&bit6
#define EDR7CT_Door1PlateSwitchFault_B1              g_dataBuffer_Display[1152+160+1]&bit5
#define EDR7CT_Door1LockSwitchFault_B1               g_dataBuffer_Display[1152+160+1]&bit4
#define EDR7CT_Door1ElectroMagnetFault_B1            g_dataBuffer_Display[1152+160+1]&bit3
#define EDR7CT_Door1EncoderFault_B1                  g_dataBuffer_Display[1152+160+1]&bit2
#define EDR7CT_Door1OperationOverTime_B1             g_dataBuffer_Display[1152+160+1]&bit1
#define EDR7CT_Door1OutputShortCircuit_B1            g_dataBuffer_Display[1152+160+1]&bit0
#define EDR7CT_Door1GreenLoopFault_B1                g_dataBuffer_Display[1152+160+1]&bit15

#define EDR7CT_Door2MotorIsOpenCircuit_B1            g_dataBuffer_Display[1152+160+2]&bit7
#define EDR7CT_Door2MotorOverCurrent_B1              g_dataBuffer_Display[1152+160+2]&bit6
#define EDR7CT_Door2PlateSwitchFault_B1              g_dataBuffer_Display[1152+160+2]&bit5
#define EDR7CT_Door2LockSwitchFault_B1               g_dataBuffer_Display[1152+160+2]&bit4
#define EDR7CT_Door2ElectroMagnetFault_B1            g_dataBuffer_Display[1152+160+2]&bit3
#define EDR7CT_Door2EncoderFault_B1                  g_dataBuffer_Display[1152+160+2]&bit2
#define EDR7CT_Door2OperationOverTime_B1             g_dataBuffer_Display[1152+160+2]&bit1
#define EDR7CT_Door2OutputShortCircuit_B1            g_dataBuffer_Display[1152+160+2]&bit0
#define EDR7CT_Door2GreenLoopFault_B1                g_dataBuffer_Display[1152+160+2]&bit15

#define EDR7CT_Door3MotorIsOpenCircuit_B1            g_dataBuffer_Display[1152+160+3]&bit7
#define EDR7CT_Door3MotorOverCurrent_B1              g_dataBuffer_Display[1152+160+3]&bit6
#define EDR7CT_Door3PlateSwitchFault_B1              g_dataBuffer_Display[1152+160+3]&bit5
#define EDR7CT_Door3LockSwitchFault_B1               g_dataBuffer_Display[1152+160+3]&bit4
#define EDR7CT_Door3ElectroMagnetFault_B1            g_dataBuffer_Display[1152+160+3]&bit3
#define EDR7CT_Door3EncoderFault_B1                  g_dataBuffer_Display[1152+160+3]&bit2
#define EDR7CT_Door3OperationOverTime_B1             g_dataBuffer_Display[1152+160+3]&bit1
#define EDR7CT_Door3OutputShortCircuit_B1            g_dataBuffer_Display[1152+160+3]&bit0
#define EDR7CT_Door3GreenLoopFault_B1                g_dataBuffer_Display[1152+160+3]&bit15

#define EDR7CT_Door4MotorIsOpenCircuit_B1            g_dataBuffer_Display[1152+160+4]&bit7
#define EDR7CT_Door4MotorOverCurrent_B1              g_dataBuffer_Display[1152+160+4]&bit6
#define EDR7CT_Door4PlateSwitchFault_B1              g_dataBuffer_Display[1152+160+4]&bit5
#define EDR7CT_Door4LockSwitchFault_B1               g_dataBuffer_Display[1152+160+4]&bit4
#define EDR7CT_Door4ElectroMagnetFault_B1            g_dataBuffer_Display[1152+160+4]&bit3
#define EDR7CT_Door4EncoderFault_B1                  g_dataBuffer_Display[1152+160+4]&bit2
#define EDR7CT_Door4OperationOverTime_B1             g_dataBuffer_Display[1152+160+4]&bit1
#define EDR7CT_Door4OutputShortCircuit_B1            g_dataBuffer_Display[1152+160+4]&bit0
#define EDR7CT_Door4GreenLoopFault_B1                g_dataBuffer_Display[1152+160+4]&bit15

#define EDR7CT_Door5MotorIsOpenCircuit_B1            g_dataBuffer_Display[1152+160+5]&bit7
#define EDR7CT_Door5MotorOverCurrent_B1              g_dataBuffer_Display[1152+160+5]&bit6
#define EDR7CT_Door5PlateSwitchFault_B1              g_dataBuffer_Display[1152+160+5]&bit5
#define EDR7CT_Door5LockSwitchFault_B1               g_dataBuffer_Display[1152+160+5]&bit4
#define EDR7CT_Door5ElectroMagnetFault_B1            g_dataBuffer_Display[1152+160+5]&bit3
#define EDR7CT_Door5EncoderFault_B1                  g_dataBuffer_Display[1152+160+5]&bit2
#define EDR7CT_Door5OperationOverTime_B1             g_dataBuffer_Display[1152+160+5]&bit1
#define EDR7CT_Door5OutputShortCircuit_B1            g_dataBuffer_Display[1152+160+5]&bit0
#define EDR7CT_Door5GreenLoopFault_B1                g_dataBuffer_Display[1152+160+5]&bit15

#define EDR7CT_Door6MotorIsOpenCircuit_B1            g_dataBuffer_Display[1152+160+6]&bit7
#define EDR7CT_Door6MotorOverCurrent_B1              g_dataBuffer_Display[1152+160+6]&bit6
#define EDR7CT_Door6PlateSwitchFault_B1              g_dataBuffer_Display[1152+160+6]&bit5
#define EDR7CT_Door6LockSwitchFault_B1               g_dataBuffer_Display[1152+160+6]&bit4
#define EDR7CT_Door6ElectroMagnetFault_B1            g_dataBuffer_Display[1152+160+6]&bit3
#define EDR7CT_Door6EncoderFault_B1                  g_dataBuffer_Display[1152+160+6]&bit2
#define EDR7CT_Door6OperationOverTime_B1             g_dataBuffer_Display[1152+160+6]&bit1
#define EDR7CT_Door6OutputShortCircuit_B1            g_dataBuffer_Display[1152+160+6]&bit0
#define EDR7CT_Door6GreenLoopFault_B1                g_dataBuffer_Display[1152+160+6]&bit15

#define EDR7CT_Door7MotorIsOpenCircuit_B1            g_dataBuffer_Display[1152+160+7]&bit7
#define EDR7CT_Door7MotorOverCurrent_B1              g_dataBuffer_Display[1152+160+7]&bit6
#define EDR7CT_Door7PlateSwitchFault_B1              g_dataBuffer_Display[1152+160+7]&bit5
#define EDR7CT_Door7LockSwitchFault_B1               g_dataBuffer_Display[1152+160+7]&bit4
#define EDR7CT_Door7ElectroMagnetFault_B1            g_dataBuffer_Display[1152+160+7]&bit3
#define EDR7CT_Door7EncoderFault_B1                  g_dataBuffer_Display[1152+160+7]&bit2
#define EDR7CT_Door7OperationOverTime_B1             g_dataBuffer_Display[1152+160+7]&bit1
#define EDR7CT_Door7OutputShortCircuit_B1            g_dataBuffer_Display[1152+160+7]&bit0
#define EDR7CT_Door7GreenLoopFault_B1                g_dataBuffer_Display[1152+160+7]&bit15

#define EDR7CT_Door8MotorIsOpenCircuit_B1            g_dataBuffer_Display[1152+160+8]&bit7
#define EDR7CT_Door8MotorOverCurrent_B1              g_dataBuffer_Display[1152+160+8]&bit6
#define EDR7CT_Door8PlateSwitchFault_B1              g_dataBuffer_Display[1152+160+8]&bit5
#define EDR7CT_Door8LockSwitchFault_B1               g_dataBuffer_Display[1152+160+8]&bit4
#define EDR7CT_Door8ElectroMagnetFault_B1            g_dataBuffer_Display[1152+160+8]&bit3
#define EDR7CT_Door8EncoderFault_B1                  g_dataBuffer_Display[1152+160+8]&bit2
#define EDR7CT_Door8OperationOverTime_B1             g_dataBuffer_Display[1152+160+8]&bit1
#define EDR7CT_Door8OutputShortCircuit_B1            g_dataBuffer_Display[1152+160+8]&bit0
#define EDR7CT_Door8GreenLoopFault_B1                g_dataBuffer_Display[1152+160+8]&bit15


//0x880

#define EDR8CT_LifeSign_U16                         g_dataBuffer_Display[1168+160]
#define EDR8CT_Door1OpenEnabled_B1                  g_dataBuffer_Display[1168+160+1]&bit7
#define EDR8CT_Door1IsOpen_B1                       g_dataBuffer_Display[1168+160+1]&bit6
#define EDR8CT_Door1IsClosed_B1                     g_dataBuffer_Display[1168+160+1]&bit5
#define EDR8CT_Door1IsEmgcyUnlock_B1                g_dataBuffer_Display[1168+160+1]&bit4
#define EDR8CT_Door1IsIsolated_B1                   g_dataBuffer_Display[1168+160+1]&bit3
#define EDR8CT_Door1ExtrusionProtecting_B1          g_dataBuffer_Display[1168+160+1]&bit2
#define EDR8CT_Door1ExtrusionStoped_B1              g_dataBuffer_Display[1168+160+1]&bit1

#define EDR8CT_Door2OpenEnabled_B1                  g_dataBuffer_Display[1168+160+2]&bit7
#define EDR8CT_Door2IsOpen_B1                       g_dataBuffer_Display[1168+160+2]&bit6
#define EDR8CT_Door2IsClosed_B1                     g_dataBuffer_Display[1168+160+2]&bit5
#define EDR8CT_Door2IsEmgcyUnlock_B1                g_dataBuffer_Display[1168+160+2]&bit4
#define EDR8CT_Door2IsIsolated_B1                   g_dataBuffer_Display[1168+160+2]&bit3
#define EDR8CT_Door2ExtrusionProtecting_B1          g_dataBuffer_Display[1168+160+2]&bit2
#define EDR8CT_Door2ExtrusionStoped_B1              g_dataBuffer_Display[1168+160+2]&bit1

#define EDR8CT_Door3OpenEnabled_B1                  g_dataBuffer_Display[1168+160+3]&bit7
#define EDR8CT_Door3IsOpen_B1                       g_dataBuffer_Display[1168+160+3]&bit6
#define EDR8CT_Door3IsClosed_B1                     g_dataBuffer_Display[1168+160+3]&bit5
#define EDR8CT_Door3IsEmgcyUnlock_B1                g_dataBuffer_Display[1168+160+3]&bit4
#define EDR8CT_Door3IsIsolated_B1                   g_dataBuffer_Display[1168+160+3]&bit3
#define EDR8CT_Door3ExtrusionProtecting_B1          g_dataBuffer_Display[1168+160+3]&bit2
#define EDR8CT_Door3ExtrusionStoped_B1              g_dataBuffer_Display[1168+160+3]&bit1

#define EDR8CT_Door4OpenEnabled_B1                  g_dataBuffer_Display[1168+160+4]&bit7
#define EDR8CT_Door4IsOpen_B1                       g_dataBuffer_Display[1168+160+4]&bit6
#define EDR8CT_Door4IsClosed_B1                     g_dataBuffer_Display[1168+160+4]&bit5
#define EDR8CT_Door4IsEmgcyUnlock_B1                g_dataBuffer_Display[1168+160+4]&bit4
#define EDR8CT_Door4IsIsolated_B1                   g_dataBuffer_Display[1168+160+4]&bit3
#define EDR8CT_Door4ExtrusionProtecting_B1          g_dataBuffer_Display[1168+160+4]&bit2
#define EDR8CT_Door4ExtrusionStoped_B1              g_dataBuffer_Display[1168+160+4]&bit1

#define EDR8CT_Door5OpenEnabled_B1                  g_dataBuffer_Display[1168+160+5]&bit7
#define EDR8CT_Door5IsOpen_B1                       g_dataBuffer_Display[1168+160+5]&bit6
#define EDR8CT_Door5IsClosed_B1                     g_dataBuffer_Display[1168+160+5]&bit5
#define EDR8CT_Door5IsEmgcyUnlock_B1                g_dataBuffer_Display[1168+160+5]&bit4
#define EDR8CT_Door5IsIsolated_B1                   g_dataBuffer_Display[1168+160+5]&bit3
#define EDR8CT_Door5ExtrusionProtecting_B1          g_dataBuffer_Display[1168+160+5]&bit2
#define EDR8CT_Door5ExtrusionStoped_B1              g_dataBuffer_Display[1168+160+5]&bit1

#define EDR8CT_Door6OpenEnabled_B1                  g_dataBuffer_Display[1168+160+6]&bit7
#define EDR8CT_Door6IsOpen_B1                       g_dataBuffer_Display[1168+160+6]&bit6
#define EDR8CT_Door6IsClosed_B1                     g_dataBuffer_Display[1168+160+6]&bit5
#define EDR8CT_Door6IsEmgcyUnlock_B1                g_dataBuffer_Display[1168+160+6]&bit4
#define EDR8CT_Door6IsIsolated_B1                   g_dataBuffer_Display[1168+160+6]&bit3
#define EDR8CT_Door6ExtrusionProtecting_B1          g_dataBuffer_Display[1168+160+6]&bit2
#define EDR8CT_Door6ExtrusionStoped_B1              g_dataBuffer_Display[1168+160+6]&bit1

#define EDR8CT_Door7OpenEnabled_B1                  g_dataBuffer_Display[1168+160+7]&bit7
#define EDR8CT_Door7IsOpen_B1                       g_dataBuffer_Display[1168+160+7]&bit6
#define EDR8CT_Door7IsClosed_B1                     g_dataBuffer_Display[1168+160+7]&bit5
#define EDR8CT_Door7IsEmgcyUnlock_B1                g_dataBuffer_Display[1168+160+7]&bit4
#define EDR8CT_Door7IsIsolated_B1                   g_dataBuffer_Display[1168+160+7]&bit3
#define EDR8CT_Door7ExtrusionProtecting_B1          g_dataBuffer_Display[1168+160+7]&bit2
#define EDR8CT_Door7ExtrusionStoped_B1              g_dataBuffer_Display[1168+160+7]&bit1

#define EDR8CT_Door8OpenEnabled_B1                  g_dataBuffer_Display[1168+160+8]&bit7
#define EDR8CT_Door8IsOpen_B1                       g_dataBuffer_Display[1168+160+8]&bit6
#define EDR8CT_Door8IsClosed_B1                     g_dataBuffer_Display[1168+160+8]&bit5
#define EDR8CT_Door8IsEmgcyUnlock_B1                g_dataBuffer_Display[1168+160+8]&bit4
#define EDR8CT_Door8IsIsolated_B1                   g_dataBuffer_Display[1168+160+8]&bit3
#define EDR8CT_Door8ExtrusionProtecting_B1          g_dataBuffer_Display[1168+160+8]&bit2
#define EDR8CT_Door8ExtrusionStoped_B1              g_dataBuffer_Display[1168+160+8]&bit1

#define EDR8CT_Edcu2Version_U8                      g_dataBuffer_Display[1168+160+13]%256
#define EDR8CT_Edcu1Version_U8                      g_dataBuffer_Display[1168+160+13]/256
#define EDR8CT_EdcuState_U8                         g_dataBuffer_Display[1168+160+14]%256

//0x881

#define EDR8CT_Door1IsValid_B1                       g_dataBuffer_Display[1184+160]&bit7
#define EDR8CT_Door2IsValid_B1                       g_dataBuffer_Display[1184+160]&bit6
#define EDR8CT_Door3IsValid_B1                       g_dataBuffer_Display[1184+160]&bit5
#define EDR8CT_Door4IsValid_B1                       g_dataBuffer_Display[1184+160]&bit4
#define EDR8CT_Door5IsValid_B1                       g_dataBuffer_Display[1184+160]&bit3
#define EDR8CT_Door6IsValid_B1                       g_dataBuffer_Display[1184+160]&bit2
#define EDR8CT_Door7IsValid_B1                       g_dataBuffer_Display[1184+160]&bit1
#define EDR8CT_Door8IsValid_B1                       g_dataBuffer_Display[1184+160]&bit0
#define EDR8CT_Door1MotorIsOpenCircuit_B1            g_dataBuffer_Display[1184+160+1]&bit7
#define EDR8CT_Door1MotorOverCurrent_B1              g_dataBuffer_Display[1184+160+1]&bit6
#define EDR8CT_Door1PlateSwitchFault_B1              g_dataBuffer_Display[1184+160+1]&bit5
#define EDR8CT_Door1LockSwitchFault_B1               g_dataBuffer_Display[1184+160+1]&bit4
#define EDR8CT_Door1ElectroMagnetFault_B1            g_dataBuffer_Display[1184+160+1]&bit3
#define EDR8CT_Door1EncoderFault_B1                  g_dataBuffer_Display[1184+160+1]&bit2
#define EDR8CT_Door1OperationOverTime_B1             g_dataBuffer_Display[1184+160+1]&bit1
#define EDR8CT_Door1OutputShortCircuit_B1            g_dataBuffer_Display[1184+160+1]&bit0
#define EDR8CT_Door1GreenLoopFault_B1                g_dataBuffer_Display[1184+160+1]&bit15

#define EDR8CT_Door2MotorIsOpenCircuit_B1            g_dataBuffer_Display[1184+160+2]&bit7
#define EDR8CT_Door2MotorOverCurrent_B1              g_dataBuffer_Display[1184+160+2]&bit6
#define EDR8CT_Door2PlateSwitchFault_B1              g_dataBuffer_Display[1184+160+2]&bit5
#define EDR8CT_Door2LockSwitchFault_B1               g_dataBuffer_Display[1184+160+2]&bit4
#define EDR8CT_Door2ElectroMagnetFault_B1            g_dataBuffer_Display[1184+160+2]&bit3
#define EDR8CT_Door2EncoderFault_B1                  g_dataBuffer_Display[1184+160+2]&bit2
#define EDR8CT_Door2OperationOverTime_B1             g_dataBuffer_Display[1184+160+2]&bit1
#define EDR8CT_Door2OutputShortCircuit_B1            g_dataBuffer_Display[1184+160+2]&bit0
#define EDR8CT_Door2GreenLoopFault_B1                g_dataBuffer_Display[1184+160+2]&bit15

#define EDR8CT_Door3MotorIsOpenCircuit_B1            g_dataBuffer_Display[1184+160+3]&bit7
#define EDR8CT_Door3MotorOverCurrent_B1              g_dataBuffer_Display[1184+160+3]&bit6
#define EDR8CT_Door3PlateSwitchFault_B1              g_dataBuffer_Display[1184+160+3]&bit5
#define EDR8CT_Door3LockSwitchFault_B1               g_dataBuffer_Display[1184+160+3]&bit4
#define EDR8CT_Door3ElectroMagnetFault_B1            g_dataBuffer_Display[1184+160+3]&bit3
#define EDR8CT_Door3EncoderFault_B1                  g_dataBuffer_Display[1184+160+3]&bit2
#define EDR8CT_Door3OperationOverTime_B1             g_dataBuffer_Display[1184+160+3]&bit1
#define EDR8CT_Door3OutputShortCircuit_B1            g_dataBuffer_Display[1184+160+3]&bit0
#define EDR8CT_Door3GreenLoopFault_B1                g_dataBuffer_Display[1184+160+3]&bit15

#define EDR8CT_Door4MotorIsOpenCircuit_B1            g_dataBuffer_Display[1184+160+4]&bit7
#define EDR8CT_Door4MotorOverCurrent_B1              g_dataBuffer_Display[1184+160+4]&bit6
#define EDR8CT_Door4PlateSwitchFault_B1              g_dataBuffer_Display[1184+160+4]&bit5
#define EDR8CT_Door4LockSwitchFault_B1               g_dataBuffer_Display[1184+160+4]&bit4
#define EDR8CT_Door4ElectroMagnetFault_B1            g_dataBuffer_Display[1184+160+4]&bit3
#define EDR8CT_Door4EncoderFault_B1                  g_dataBuffer_Display[1184+160+4]&bit2
#define EDR8CT_Door4OperationOverTime_B1             g_dataBuffer_Display[1184+160+4]&bit1
#define EDR8CT_Door4OutputShortCircuit_B1            g_dataBuffer_Display[1184+160+4]&bit0
#define EDR8CT_Door4GreenLoopFault_B1                g_dataBuffer_Display[1184+160+4]&bit15

#define EDR8CT_Door5MotorIsOpenCircuit_B1            g_dataBuffer_Display[1184+160+5]&bit7
#define EDR8CT_Door5MotorOverCurrent_B1              g_dataBuffer_Display[1184+160+5]&bit6
#define EDR8CT_Door5PlateSwitchFault_B1              g_dataBuffer_Display[1184+160+5]&bit5
#define EDR8CT_Door5LockSwitchFault_B1               g_dataBuffer_Display[1184+160+5]&bit4
#define EDR8CT_Door5ElectroMagnetFault_B1            g_dataBuffer_Display[1184+160+5]&bit3
#define EDR8CT_Door5EncoderFault_B1                  g_dataBuffer_Display[1184+160+5]&bit2
#define EDR8CT_Door5OperationOverTime_B1             g_dataBuffer_Display[1184+160+5]&bit1
#define EDR8CT_Door5OutputShortCircuit_B1            g_dataBuffer_Display[1184+160+5]&bit0
#define EDR8CT_Door5GreenLoopFault_B1                g_dataBuffer_Display[1184+160+5]&bit15

#define EDR8CT_Door6MotorIsOpenCircuit_B1            g_dataBuffer_Display[1184+160+6]&bit7
#define EDR8CT_Door6MotorOverCurrent_B1              g_dataBuffer_Display[1184+160+6]&bit6
#define EDR8CT_Door6PlateSwitchFault_B1              g_dataBuffer_Display[1184+160+6]&bit5
#define EDR8CT_Door6LockSwitchFault_B1               g_dataBuffer_Display[1184+160+6]&bit4
#define EDR8CT_Door6ElectroMagnetFault_B1            g_dataBuffer_Display[1184+160+6]&bit3
#define EDR8CT_Door6EncoderFault_B1                  g_dataBuffer_Display[1184+160+6]&bit2
#define EDR8CT_Door6OperationOverTime_B1             g_dataBuffer_Display[1184+160+6]&bit1
#define EDR8CT_Door6OutputShortCircuit_B1            g_dataBuffer_Display[1184+160+6]&bit0
#define EDR8CT_Door6GreenLoopFault_B1                g_dataBuffer_Display[1184+160+6]&bit15

#define EDR8CT_Door7MotorIsOpenCircuit_B1            g_dataBuffer_Display[1184+160+7]&bit7
#define EDR8CT_Door7MotorOverCurrent_B1              g_dataBuffer_Display[1184+160+7]&bit6
#define EDR8CT_Door7PlateSwitchFault_B1              g_dataBuffer_Display[1184+160+7]&bit5
#define EDR8CT_Door7LockSwitchFault_B1               g_dataBuffer_Display[1184+160+7]&bit4
#define EDR8CT_Door7ElectroMagnetFault_B1            g_dataBuffer_Display[1184+160+7]&bit3
#define EDR8CT_Door7EncoderFault_B1                  g_dataBuffer_Display[1184+160+7]&bit2
#define EDR8CT_Door7OperationOverTime_B1             g_dataBuffer_Display[1184+160+7]&bit1
#define EDR8CT_Door7OutputShortCircuit_B1            g_dataBuffer_Display[1184+160+7]&bit0
#define EDR8CT_Door7GreenLoopFault_B1                g_dataBuffer_Display[1184+160+7]&bit15

#define EDR8CT_Door8MotorIsOpenCircuit_B1            g_dataBuffer_Display[1184+160+8]&bit7
#define EDR8CT_Door8MotorOverCurrent_B1              g_dataBuffer_Display[1184+160+8]&bit6
#define EDR8CT_Door8PlateSwitchFault_B1              g_dataBuffer_Display[1184+160+8]&bit5
#define EDR8CT_Door8LockSwitchFault_B1               g_dataBuffer_Display[1184+160+8]&bit4
#define EDR8CT_Door8ElectroMagnetFault_B1            g_dataBuffer_Display[1184+160+8]&bit3
#define EDR8CT_Door8EncoderFault_B1                  g_dataBuffer_Display[1184+160+8]&bit2
#define EDR8CT_Door8OperationOverTime_B1             g_dataBuffer_Display[1184+160+8]&bit1
#define EDR8CT_Door8OutputShortCircuit_B1            g_dataBuffer_Display[1184+160+8]&bit0
#define EDR8CT_Door8GreenLoopFault_B1                g_dataBuffer_Display[1184+160+8]&bit15


//0x890

#define EDR9CT_LifeSign_U16                         g_dataBuffer_Display[1200+160]
#define EDR9CT_Door1OpenEnabled_B1                  g_dataBuffer_Display[1200+160+1]&bit7
#define EDR9CT_Door1IsOpen_B1                       g_dataBuffer_Display[1200+160+1]&bit6
#define EDR9CT_Door1IsClosed_B1                     g_dataBuffer_Display[1200+160+1]&bit5
#define EDR9CT_Door1IsEmgcyUnlock_B1                g_dataBuffer_Display[1200+160+1]&bit4
#define EDR9CT_Door1IsIsolated_B1                   g_dataBuffer_Display[1200+160+1]&bit3
#define EDR9CT_Door1ExtrusionProtecting_B1          g_dataBuffer_Display[1200+160+1]&bit2
#define EDR9CT_Door1ExtrusionStoped_B1              g_dataBuffer_Display[1200+160+1]&bit1
#define EDR9CT_Door1SetOK_B1                        g_dataBuffer_Display[1200+160+1]&bit0

#define EDR9CT_Door2OpenEnabled_B1                  g_dataBuffer_Display[1200+160+2]&bit7
#define EDR9CT_Door2IsOpen_B1                       g_dataBuffer_Display[1200+160+2]&bit6
#define EDR9CT_Door2IsClosed_B1                     g_dataBuffer_Display[1200+160+2]&bit5
#define EDR9CT_Door2IsEmgcyUnlock_B1                g_dataBuffer_Display[1200+160+2]&bit4
#define EDR9CT_Door2IsIsolated_B1                   g_dataBuffer_Display[1200+160+2]&bit3
#define EDR9CT_Door2ExtrusionProtecting_B1          g_dataBuffer_Display[1200+160+2]&bit2
#define EDR9CT_Door2ExtrusionStoped_B1              g_dataBuffer_Display[1200+160+2]&bit1
#define EDR9CT_Door2SetOK_B1                        g_dataBuffer_Display[1200+160+2]&bit0

#define EDR9CT_Door3OpenEnabled_B1                  g_dataBuffer_Display[1200+160+3]&bit7
#define EDR9CT_Door3IsOpen_B1                       g_dataBuffer_Display[1200+160+3]&bit6
#define EDR9CT_Door3IsClosed_B1                     g_dataBuffer_Display[1200+160+3]&bit5
#define EDR9CT_Door3IsEmgcyUnlock_B1                g_dataBuffer_Display[1200+160+3]&bit4
#define EDR9CT_Door3IsIsolated_B1                   g_dataBuffer_Display[1200+160+3]&bit3
#define EDR9CT_Door3ExtrusionProtecting_B1          g_dataBuffer_Display[1200+160+3]&bit2
#define EDR9CT_Door3ExtrusionStoped_B1              g_dataBuffer_Display[1200+160+3]&bit1
#define EDR9CT_Door3SetOK_B1                        g_dataBuffer_Display[1200+160+3]&bit0


#define EDR9CT_Door4OpenEnabled_B1                  g_dataBuffer_Display[1200+160+4]&bit7
#define EDR9CT_Door4IsOpen_B1                       g_dataBuffer_Display[1200+160+4]&bit6
#define EDR9CT_Door4IsClosed_B1                     g_dataBuffer_Display[1200+160+4]&bit5
#define EDR9CT_Door4IsEmgcyUnlock_B1                g_dataBuffer_Display[1200+160+4]&bit4
#define EDR9CT_Door4IsIsolated_B1                   g_dataBuffer_Display[1200+160+4]&bit3
#define EDR9CT_Door4ExtrusionProtecting_B1          g_dataBuffer_Display[1200+160+4]&bit2
#define EDR9CT_Door4ExtrusionStoped_B1              g_dataBuffer_Display[1200+160+4]&bit1
#define EDR9CT_Door4SetOK_B1                        g_dataBuffer_Display[1200+160+4]&bit0

#define EDR9CT_Door5OpenEnabled_B1                  g_dataBuffer_Display[1200+160+5]&bit7
#define EDR9CT_Door5IsOpen_B1                       g_dataBuffer_Display[1200+160+5]&bit6
#define EDR9CT_Door5IsClosed_B1                     g_dataBuffer_Display[1200+160+5]&bit5
#define EDR9CT_Door5IsEmgcyUnlock_B1                g_dataBuffer_Display[1200+160+5]&bit4
#define EDR9CT_Door5IsIsolated_B1                   g_dataBuffer_Display[1200+160+5]&bit3
#define EDR9CT_Door5ExtrusionProtecting_B1          g_dataBuffer_Display[1200+160+5]&bit2
#define EDR9CT_Door5ExtrusionStoped_B1              g_dataBuffer_Display[1200+160+5]&bit1
#define EDR9CT_Door5SetOK_B1                        g_dataBuffer_Display[1200+160+5]&bit0

#define EDR9CT_Door6OpenEnabled_B1                  g_dataBuffer_Display[1200+160+6]&bit7
#define EDR9CT_Door6IsOpen_B1                       g_dataBuffer_Display[1200+160+6]&bit6
#define EDR9CT_Door6IsClosed_B1                     g_dataBuffer_Display[1200+160+6]&bit5
#define EDR9CT_Door6IsEmgcyUnlock_B1                g_dataBuffer_Display[1200+160+6]&bit4
#define EDR9CT_Door6IsIsolated_B1                   g_dataBuffer_Display[1200+160+6]&bit3
#define EDR9CT_Door6ExtrusionProtecting_B1          g_dataBuffer_Display[1200+160+6]&bit2
#define EDR9CT_Door6ExtrusionStoped_B1              g_dataBuffer_Display[1200+160+6]&bit1
#define EDR9CT_Door6SetOK_B1                        g_dataBuffer_Display[1200+160+6]&bit0

#define EDR9CT_Door7OpenEnabled_B1                  g_dataBuffer_Display[1200+160+7]&bit7
#define EDR9CT_Door7IsOpen_B1                       g_dataBuffer_Display[1200+160+7]&bit6
#define EDR9CT_Door7IsClosed_B1                     g_dataBuffer_Display[1200+160+7]&bit5
#define EDR9CT_Door7IsEmgcyUnlock_B1                g_dataBuffer_Display[1200+160+7]&bit4
#define EDR9CT_Door7IsIsolated_B1                   g_dataBuffer_Display[1200+160+7]&bit3
#define EDR9CT_Door7ExtrusionProtecting_B1          g_dataBuffer_Display[1200+160+7]&bit2
#define EDR9CT_Door7ExtrusionStoped_B1              g_dataBuffer_Display[1200+160+7]&bit1
#define EDR9CT_Door7SetOK_B1                        g_dataBuffer_Display[1200+160+7]&bit0

#define EDR9CT_Door8OpenEnabled_B1                  g_dataBuffer_Display[1200+160+8]&bit7
#define EDR9CT_Door8IsOpen_B1                       g_dataBuffer_Display[1200+160+8]&bit6
#define EDR9CT_Door8IsClosed_B1                     g_dataBuffer_Display[1200+160+8]&bit5
#define EDR9CT_Door8IsEmgcyUnlock_B1                g_dataBuffer_Display[1200+160+8]&bit4
#define EDR9CT_Door8IsIsolated_B1                   g_dataBuffer_Display[1200+160+8]&bit3
#define EDR9CT_Door8ExtrusionProtecting_B1          g_dataBuffer_Display[1200+160+8]&bit2
#define EDR9CT_Door8ExtrusionStoped_B1              g_dataBuffer_Display[1200+160+8]&bit1
#define EDR9CT_Door8SetOK_B1                        g_dataBuffer_Display[1200+160+8]&bit0

#define EDR9CT_Edcu2Version_U8                      g_dataBuffer_Display[1200+160+13]%256
#define EDR9CT_Edcu1Version_U8                      g_dataBuffer_Display[1200+160+13]/256
#define EDR9CT_EdcuState_U8                         g_dataBuffer_Display[1200+160+14]%256

//0x891

#define EDR9CT_Door1IsValid_B1                       g_dataBuffer_Display[1216+160]&bit7
#define EDR9CT_Door2IsValid_B1                       g_dataBuffer_Display[1216+160]&bit6
#define EDR9CT_Door3IsValid_B1                       g_dataBuffer_Display[1216+160]&bit5
#define EDR9CT_Door4IsValid_B1                       g_dataBuffer_Display[1216+160]&bit4
#define EDR9CT_Door5IsValid_B1                       g_dataBuffer_Display[1216+160]&bit3
#define EDR9CT_Door6IsValid_B1                       g_dataBuffer_Display[1216+160]&bit2
#define EDR9CT_Door7IsValid_B1                       g_dataBuffer_Display[1216+160]&bit1
#define EDR9CT_Door8IsValid_B1                       g_dataBuffer_Display[1216+160]&bit0
#define EDR9CT_Door1MotorIsOpenCircuit_B1            g_dataBuffer_Display[1216+160+1]&bit7
#define EDR9CT_Door1MotorOverCurrent_B1              g_dataBuffer_Display[1216+160+1]&bit6
#define EDR9CT_Door1PlateSwitchFault_B1              g_dataBuffer_Display[1216+160+1]&bit5
#define EDR9CT_Door1LockSwitchFault_B1               g_dataBuffer_Display[1216+160+1]&bit4
#define EDR9CT_Door1ElectroMagnetFault_B1            g_dataBuffer_Display[1216+160+1]&bit3
#define EDR9CT_Door1EncoderFault_B1                  g_dataBuffer_Display[1216+160+1]&bit2
#define EDR9CT_Door1OperationOverTime_B1             g_dataBuffer_Display[1216+160+1]&bit1
#define EDR9CT_Door1OutputShortCircuit_B1            g_dataBuffer_Display[1216+160+1]&bit0
#define EDR9CT_Door1GreenLoopFault_B1                g_dataBuffer_Display[1216+160+1]&bit15

#define EDR9CT_Door2MotorIsOpenCircuit_B1            g_dataBuffer_Display[1216+160+2]&bit7
#define EDR9CT_Door2MotorOverCurrent_B1              g_dataBuffer_Display[1216+160+2]&bit6
#define EDR9CT_Door2PlateSwitchFault_B1              g_dataBuffer_Display[1216+160+2]&bit5
#define EDR9CT_Door2LockSwitchFault_B1               g_dataBuffer_Display[1216+160+2]&bit4
#define EDR9CT_Door2ElectroMagnetFault_B1            g_dataBuffer_Display[1216+160+2]&bit3
#define EDR9CT_Door2EncoderFault_B1                  g_dataBuffer_Display[1216+160+2]&bit2
#define EDR9CT_Door2OperationOverTime_B1             g_dataBuffer_Display[1216+160+2]&bit1
#define EDR9CT_Door2OutputShortCircuit_B1            g_dataBuffer_Display[1216+160+2]&bit0
#define EDR9CT_Door2GreenLoopFault_B1                g_dataBuffer_Display[1216+160+2]&bit15

#define EDR9CT_Door3MotorIsOpenCircuit_B1            g_dataBuffer_Display[1216+160+3]&bit7
#define EDR9CT_Door3MotorOverCurrent_B1              g_dataBuffer_Display[1216+160+3]&bit6
#define EDR9CT_Door3PlateSwitchFault_B1              g_dataBuffer_Display[1216+160+3]&bit5
#define EDR9CT_Door3LockSwitchFault_B1               g_dataBuffer_Display[1216+160+3]&bit4
#define EDR9CT_Door3ElectroMagnetFault_B1            g_dataBuffer_Display[1216+160+3]&bit3
#define EDR9CT_Door3EncoderFault_B1                  g_dataBuffer_Display[1216+160+3]&bit2
#define EDR9CT_Door3OperationOverTime_B1             g_dataBuffer_Display[1216+160+3]&bit1
#define EDR9CT_Door3OutputShortCircuit_B1            g_dataBuffer_Display[1216+160+3]&bit0
#define EDR9CT_Door3GreenLoopFault_B1                g_dataBuffer_Display[1216+160+3]&bit15

#define EDR9CT_Door4MotorIsOpenCircuit_B1            g_dataBuffer_Display[1216+160+4]&bit7
#define EDR9CT_Door4MotorOverCurrent_B1              g_dataBuffer_Display[1216+160+4]&bit6
#define EDR9CT_Door4PlateSwitchFault_B1              g_dataBuffer_Display[1216+160+4]&bit5
#define EDR9CT_Door4LockSwitchFault_B1               g_dataBuffer_Display[1216+160+4]&bit4
#define EDR9CT_Door4ElectroMagnetFault_B1            g_dataBuffer_Display[1216+160+4]&bit3
#define EDR9CT_Door4EncoderFault_B1                  g_dataBuffer_Display[1216+160+4]&bit2
#define EDR9CT_Door4OperationOverTime_B1             g_dataBuffer_Display[1216+160+4]&bit1
#define EDR9CT_Door4OutputShortCircuit_B1            g_dataBuffer_Display[1216+160+4]&bit0
#define EDR9CT_Door4GreenLoopFault_B1                g_dataBuffer_Display[1216+160+4]&bit15

#define EDR9CT_Door5MotorIsOpenCircuit_B1            g_dataBuffer_Display[1216+160+5]&bit7
#define EDR9CT_Door5MotorOverCurrent_B1              g_dataBuffer_Display[1216+160+5]&bit6
#define EDR9CT_Door5PlateSwitchFault_B1              g_dataBuffer_Display[1216+160+5]&bit5
#define EDR9CT_Door5LockSwitchFault_B1               g_dataBuffer_Display[1216+160+5]&bit4
#define EDR9CT_Door5ElectroMagnetFault_B1            g_dataBuffer_Display[1216+160+5]&bit3
#define EDR9CT_Door5EncoderFault_B1                  g_dataBuffer_Display[1216+160+5]&bit2
#define EDR9CT_Door5OperationOverTime_B1             g_dataBuffer_Display[1216+160+5]&bit1
#define EDR9CT_Door5OutputShortCircuit_B1            g_dataBuffer_Display[1216+160+5]&bit0
#define EDR9CT_Door5GreenLoopFault_B1                g_dataBuffer_Display[1216+160+5]&bit15

#define EDR9CT_Door6MotorIsOpenCircuit_B1            g_dataBuffer_Display[1216+160+6]&bit7
#define EDR9CT_Door6MotorOverCurrent_B1              g_dataBuffer_Display[1216+160+6]&bit6
#define EDR9CT_Door6PlateSwitchFault_B1              g_dataBuffer_Display[1216+160+6]&bit5
#define EDR9CT_Door6LockSwitchFault_B1               g_dataBuffer_Display[1216+160+6]&bit4
#define EDR9CT_Door6ElectroMagnetFault_B1            g_dataBuffer_Display[1216+160+6]&bit3
#define EDR9CT_Door6EncoderFault_B1                  g_dataBuffer_Display[1216+160+6]&bit2
#define EDR9CT_Door6OperationOverTime_B1             g_dataBuffer_Display[1216+160+6]&bit1
#define EDR9CT_Door6OutputShortCircuit_B1            g_dataBuffer_Display[1216+160+6]&bit0
#define EDR9CT_Door6GreenLoopFault_B1                g_dataBuffer_Display[1216+160+6]&bit15

#define EDR9CT_Door7MotorIsOpenCircuit_B1            g_dataBuffer_Display[1216+160+7]&bit7
#define EDR9CT_Door7MotorOverCurrent_B1              g_dataBuffer_Display[1216+160+7]&bit6
#define EDR9CT_Door7PlateSwitchFault_B1              g_dataBuffer_Display[1216+160+7]&bit5
#define EDR9CT_Door7LockSwitchFault_B1               g_dataBuffer_Display[1216+160+7]&bit4
#define EDR9CT_Door7ElectroMagnetFault_B1            g_dataBuffer_Display[1216+160+7]&bit3
#define EDR9CT_Door7EncoderFault_B1                  g_dataBuffer_Display[1216+160+7]&bit2
#define EDR9CT_Door7OperationOverTime_B1             g_dataBuffer_Display[1216+160+7]&bit1
#define EDR9CT_Door7OutputShortCircuit_B1            g_dataBuffer_Display[1216+160+7]&bit0
#define EDR9CT_Door7GreenLoopFault_B1                g_dataBuffer_Display[1216+160+7]&bit15

#define EDR9CT_Door8MotorIsOpenCircuit_B1            g_dataBuffer_Display[1216+160+8]&bit7
#define EDR9CT_Door8MotorOverCurrent_B1              g_dataBuffer_Display[1216+160+8]&bit6
#define EDR9CT_Door8PlateSwitchFault_B1              g_dataBuffer_Display[1216+160+8]&bit5
#define EDR9CT_Door8LockSwitchFault_B1               g_dataBuffer_Display[1216+160+8]&bit4
#define EDR9CT_Door8ElectroMagnetFault_B1            g_dataBuffer_Display[1216+160+8]&bit3
#define EDR9CT_Door8EncoderFault_B1                  g_dataBuffer_Display[1216+160+8]&bit2
#define EDR9CT_Door8OperationOverTime_B1             g_dataBuffer_Display[1216+160+8]&bit1
#define EDR9CT_Door8OutputShortCircuit_B1            g_dataBuffer_Display[1216+160+8]&bit0
#define EDR9CT_Door8GreenLoopFault_B1                g_dataBuffer_Display[1216+160+8]&bit15

//0x8A0

#define EDRACT_LifeSign_U16                         g_dataBuffer_Display[1232+160]
#define EDRACT_Door1OpenEnabled_B1                  g_dataBuffer_Display[1232+160+1]&bit7
#define EDRACT_Door1IsOpen_B1                       g_dataBuffer_Display[1232+160+1]&bit6
#define EDRACT_Door1IsClosed_B1                     g_dataBuffer_Display[1232+160+1]&bit5
#define EDRACT_Door1IsEmgcyUnlock_B1                g_dataBuffer_Display[1232+160+1]&bit4
#define EDRACT_Door1IsIsolated_B1                   g_dataBuffer_Display[1232+160+1]&bit3
#define EDRACT_Door1ExtrusionProtecting_B1          g_dataBuffer_Display[1232+160+1]&bit2
#define EDRACT_Door1ExtrusionStoped_B1              g_dataBuffer_Display[1232+160+1]&bit1


#define EDRACT_Door2OpenEnabled_B1                  g_dataBuffer_Display[1232+160+2]&bit7
#define EDRACT_Door2IsOpen_B1                       g_dataBuffer_Display[1232+160+2]&bit6
#define EDRACT_Door2IsClosed_B1                     g_dataBuffer_Display[1232+160+2]&bit5
#define EDRACT_Door2IsEmgcyUnlock_B1                g_dataBuffer_Display[1232+160+2]&bit4
#define EDRACT_Door2IsIsolated_B1                   g_dataBuffer_Display[1232+160+2]&bit3
#define EDRACT_Door2ExtrusionProtecting_B1          g_dataBuffer_Display[1232+160+2]&bit2
#define EDRACT_Door2ExtrusionStoped_B1              g_dataBuffer_Display[1232+160+2]&bit1


#define EDRACT_Door3OpenEnabled_B1                  g_dataBuffer_Display[1232+160+3]&bit7
#define EDRACT_Door3IsOpen_B1                       g_dataBuffer_Display[1232+160+3]&bit6
#define EDRACT_Door3IsClosed_B1                     g_dataBuffer_Display[1232+160+3]&bit5
#define EDRACT_Door3IsEmgcyUnlock_B1                g_dataBuffer_Display[1232+160+3]&bit4
#define EDRACT_Door3IsIsolated_B1                   g_dataBuffer_Display[1232+160+3]&bit3
#define EDRACT_Door3ExtrusionProtecting_B1          g_dataBuffer_Display[1232+160+3]&bit2
#define EDRACT_Door3ExtrusionStoped_B1              g_dataBuffer_Display[1232+160+3]&bit1

#define EDRACT_Door4OpenEnabled_B1                  g_dataBuffer_Display[1232+160+4]&bit7
#define EDRACT_Door4IsOpen_B1                       g_dataBuffer_Display[1232+160+4]&bit6
#define EDRACT_Door4IsClosed_B1                     g_dataBuffer_Display[1232+160+4]&bit5
#define EDRACT_Door4IsEmgcyUnlock_B1                g_dataBuffer_Display[1232+160+4]&bit4
#define EDRACT_Door4IsIsolated_B1                   g_dataBuffer_Display[1232+160+4]&bit3
#define EDRACT_Door4ExtrusionProtecting_B1          g_dataBuffer_Display[1232+160+4]&bit2
#define EDRACT_Door4ExtrusionStoped_B1              g_dataBuffer_Display[1232+160+4]&bit1


#define EDRACT_Door5OpenEnabled_B1                  g_dataBuffer_Display[1232+160+5]&bit7
#define EDRACT_Door5IsOpen_B1                       g_dataBuffer_Display[1232+160+5]&bit6
#define EDRACT_Door5IsClosed_B1                     g_dataBuffer_Display[1232+160+5]&bit5
#define EDRACT_Door5IsEmgcyUnlock_B1                g_dataBuffer_Display[1232+160+5]&bit4
#define EDRACT_Door5IsIsolated_B1                   g_dataBuffer_Display[1232+160+5]&bit3
#define EDRACT_Door5ExtrusionProtecting_B1          g_dataBuffer_Display[1232+160+5]&bit2
#define EDRACT_Door5ExtrusionStoped_B1              g_dataBuffer_Display[1232+160+5]&bit1


#define EDRACT_Door6OpenEnabled_B1                  g_dataBuffer_Display[1232+160+6]&bit7
#define EDRACT_Door6IsOpen_B1                       g_dataBuffer_Display[1232+160+6]&bit6
#define EDRACT_Door6IsClosed_B1                     g_dataBuffer_Display[1232+160+6]&bit5
#define EDRACT_Door6IsEmgcyUnlock_B1                g_dataBuffer_Display[1232+160+6]&bit4
#define EDRACT_Door6IsIsolated_B1                   g_dataBuffer_Display[1232+160+6]&bit3
#define EDRACT_Door6ExtrusionProtecting_B1          g_dataBuffer_Display[1232+160+6]&bit2
#define EDRACT_Door6ExtrusionStoped_B1              g_dataBuffer_Display[1232+160+6]&bit1


#define EDRACT_Door7OpenEnabled_B1                  g_dataBuffer_Display[1232+160+7]&bit7
#define EDRACT_Door7IsOpen_B1                       g_dataBuffer_Display[1232+160+7]&bit6
#define EDRACT_Door7IsClosed_B1                     g_dataBuffer_Display[1232+160+7]&bit5
#define EDRACT_Door7IsEmgcyUnlock_B1                g_dataBuffer_Display[1232+160+7]&bit4
#define EDRACT_Door7IsIsolated_B1                   g_dataBuffer_Display[1232+160+7]&bit3
#define EDRACT_Door7ExtrusionProtecting_B1          g_dataBuffer_Display[1232+160+7]&bit2
#define EDRACT_Door7ExtrusionStoped_B1              g_dataBuffer_Display[1232+160+7]&bit1


#define EDRACT_Door8OpenEnabled_B1                  g_dataBuffer_Display[1232+160+8]&bit7
#define EDRACT_Door8IsOpen_B1                       g_dataBuffer_Display[1232+160+8]&bit6
#define EDRACT_Door8IsClosed_B1                     g_dataBuffer_Display[1232+160+8]&bit5
#define EDRACT_Door8IsEmgcyUnlock_B1                g_dataBuffer_Display[1232+160+8]&bit4
#define EDRACT_Door8IsIsolated_B1                   g_dataBuffer_Display[1232+160+8]&bit3
#define EDRACT_Door8ExtrusionProtecting_B1          g_dataBuffer_Display[1232+160+8]&bit2
#define EDRACT_Door8ExtrusionStoped_B1              g_dataBuffer_Display[1232+160+8]&bit1


#define EDRACT_Edcu2Version_U8                      g_dataBuffer_Display[1232+160+13]%256
#define EDRACT_Edcu1Version_U8                      g_dataBuffer_Display[1232+160+13]/256
#define EDRACT_EdcuState_U8                         g_dataBuffer_Display[1232+160+14]%256

//0x8A1

#define EDRACT_Door1IsValid_B1                       g_dataBuffer_Display[1248+160]&bit7
#define EDRACT_Door2IsValid_B1                       g_dataBuffer_Display[1248+160]&bit6
#define EDRACT_Door3IsValid_B1                       g_dataBuffer_Display[1248+160]&bit5
#define EDRACT_Door4IsValid_B1                       g_dataBuffer_Display[1248+160]&bit4
#define EDRACT_Door5IsValid_B1                       g_dataBuffer_Display[1248+160]&bit3
#define EDRACT_Door6IsValid_B1                       g_dataBuffer_Display[1248+160]&bit2
#define EDRACT_Door7IsValid_B1                       g_dataBuffer_Display[1248+160]&bit1
#define EDRACT_Door8IsValid_B1                       g_dataBuffer_Display[1248+160]&bit0
#define EDRACT_Door1MotorIsOpenCircuit_B1            g_dataBuffer_Display[1248+160+1]&bit7
#define EDRACT_Door1MotorOverCurrent_B1              g_dataBuffer_Display[1248+160+1]&bit6
#define EDRACT_Door1PlateSwitchFault_B1              g_dataBuffer_Display[1248+160+1]&bit5
#define EDRACT_Door1LockSwitchFault_B1               g_dataBuffer_Display[1248+160+1]&bit4
#define EDRACT_Door1ElectroMagnetFault_B1            g_dataBuffer_Display[1248+160+1]&bit3
#define EDRACT_Door1EncoderFault_B1                  g_dataBuffer_Display[1248+160+1]&bit2
#define EDRACT_Door1OperationOverTime_B1             g_dataBuffer_Display[1248+160+1]&bit1
#define EDRACT_Door1OutputShortCircuit_B1            g_dataBuffer_Display[1248+160+1]&bit0
#define EDRACT_Door1GreenLoopFault_B1                g_dataBuffer_Display[1248+160+1]&bit15

#define EDRACT_Door2MotorIsOpenCircuit_B1            g_dataBuffer_Display[1248+160+2]&bit7
#define EDRACT_Door2MotorOverCurrent_B1              g_dataBuffer_Display[1248+160+2]&bit6
#define EDRACT_Door2PlateSwitchFault_B1              g_dataBuffer_Display[1248+160+2]&bit5
#define EDRACT_Door2LockSwitchFault_B1               g_dataBuffer_Display[1248+160+2]&bit4
#define EDRACT_Door2ElectroMagnetFault_B1            g_dataBuffer_Display[1248+160+2]&bit3
#define EDRACT_Door2EncoderFault_B1                  g_dataBuffer_Display[1248+160+2]&bit2
#define EDRACT_Door2OperationOverTime_B1             g_dataBuffer_Display[1248+160+2]&bit1
#define EDRACT_Door2OutputShortCircuit_B1            g_dataBuffer_Display[1248+160+2]&bit0
#define EDRACT_Door2GreenLoopFault_B1                g_dataBuffer_Display[1248+160+2]&bit15

#define EDRACT_Door3MotorIsOpenCircuit_B1            g_dataBuffer_Display[1248+160+3]&bit7
#define EDRACT_Door3MotorOverCurrent_B1              g_dataBuffer_Display[1248+160+3]&bit6
#define EDRACT_Door3PlateSwitchFault_B1              g_dataBuffer_Display[1248+160+3]&bit5
#define EDRACT_Door3LockSwitchFault_B1               g_dataBuffer_Display[1248+160+3]&bit4
#define EDRACT_Door3ElectroMagnetFault_B1            g_dataBuffer_Display[1248+160+3]&bit3
#define EDRACT_Door3EncoderFault_B1                  g_dataBuffer_Display[1248+160+3]&bit2
#define EDRACT_Door3OperationOverTime_B1             g_dataBuffer_Display[1248+160+3]&bit1
#define EDRACT_Door3OutputShortCircuit_B1            g_dataBuffer_Display[1248+160+3]&bit0
#define EDRACT_Door3GreenLoopFault_B1                g_dataBuffer_Display[1248+160+3]&bit15

#define EDRACT_Door4MotorIsOpenCircuit_B1            g_dataBuffer_Display[1248+160+4]&bit7
#define EDRACT_Door4MotorOverCurrent_B1              g_dataBuffer_Display[1248+160+4]&bit6
#define EDRACT_Door4PlateSwitchFault_B1              g_dataBuffer_Display[1248+160+4]&bit5
#define EDRACT_Door4LockSwitchFault_B1               g_dataBuffer_Display[1248+160+4]&bit4
#define EDRACT_Door4ElectroMagnetFault_B1            g_dataBuffer_Display[1248+160+4]&bit3
#define EDRACT_Door4EncoderFault_B1                  g_dataBuffer_Display[1248+160+4]&bit2
#define EDRACT_Door4OperationOverTime_B1             g_dataBuffer_Display[1248+160+4]&bit1
#define EDRACT_Door4OutputShortCircuit_B1            g_dataBuffer_Display[1248+160+4]&bit0
#define EDRACT_Door4GreenLoopFault_B1                g_dataBuffer_Display[1248+160+4]&bit15

#define EDRACT_Door5MotorIsOpenCircuit_B1            g_dataBuffer_Display[1248+160+5]&bit7
#define EDRACT_Door5MotorOverCurrent_B1              g_dataBuffer_Display[1248+160+5]&bit6
#define EDRACT_Door5PlateSwitchFault_B1              g_dataBuffer_Display[1248+160+5]&bit5
#define EDRACT_Door5LockSwitchFault_B1               g_dataBuffer_Display[1248+160+5]&bit4
#define EDRACT_Door5ElectroMagnetFault_B1            g_dataBuffer_Display[1248+160+5]&bit3
#define EDRACT_Door5EncoderFault_B1                  g_dataBuffer_Display[1248+160+5]&bit2
#define EDRACT_Door5OperationOverTime_B1             g_dataBuffer_Display[1248+160+5]&bit1
#define EDRACT_Door5OutputShortCircuit_B1            g_dataBuffer_Display[1248+160+5]&bit0
#define EDRACT_Door5GreenLoopFault_B1                g_dataBuffer_Display[1248+160+5]&bit15

#define EDRACT_Door6MotorIsOpenCircuit_B1            g_dataBuffer_Display[1248+160+6]&bit7
#define EDRACT_Door6MotorOverCurrent_B1              g_dataBuffer_Display[1248+160+6]&bit6
#define EDRACT_Door6PlateSwitchFault_B1              g_dataBuffer_Display[1248+160+6]&bit5
#define EDRACT_Door6LockSwitchFault_B1               g_dataBuffer_Display[1248+160+6]&bit4
#define EDRACT_Door6ElectroMagnetFault_B1            g_dataBuffer_Display[1248+160+6]&bit3
#define EDRACT_Door6EncoderFault_B1                  g_dataBuffer_Display[1248+160+6]&bit2
#define EDRACT_Door6OperationOverTime_B1             g_dataBuffer_Display[1248+160+6]&bit1
#define EDRACT_Door6OutputShortCircuit_B1            g_dataBuffer_Display[1248+160+6]&bit0
#define EDRACT_Door6GreenLoopFault_B1                g_dataBuffer_Display[1248+160+6]&bit15

#define EDRACT_Door7MotorIsOpenCircuit_B1            g_dataBuffer_Display[1248+160+7]&bit7
#define EDRACT_Door7MotorOverCurrent_B1              g_dataBuffer_Display[1248+160+7]&bit6
#define EDRACT_Door7PlateSwitchFault_B1              g_dataBuffer_Display[1248+160+7]&bit5
#define EDRACT_Door7LockSwitchFault_B1               g_dataBuffer_Display[1248+160+7]&bit4
#define EDRACT_Door7ElectroMagnetFault_B1            g_dataBuffer_Display[1248+160+7]&bit3
#define EDRACT_Door7EncoderFault_B1                  g_dataBuffer_Display[1248+160+7]&bit2
#define EDRACT_Door7OperationOverTime_B1             g_dataBuffer_Display[1248+160+7]&bit1
#define EDRACT_Door7OutputShortCircuit_B1            g_dataBuffer_Display[1248+160+7]&bit0
#define EDRACT_Door7GreenLoopFault_B1                g_dataBuffer_Display[1248+160+7]&bit15

#define EDRACT_Door8MotorIsOpenCircuit_B1            g_dataBuffer_Display[1248+160+8]&bit7
#define EDRACT_Door8MotorOverCurrent_B1              g_dataBuffer_Display[1248+160+8]&bit6
#define EDRACT_Door8PlateSwitchFault_B1              g_dataBuffer_Display[1248+160+8]&bit5
#define EDRACT_Door8LockSwitchFault_B1               g_dataBuffer_Display[1248+160+8]&bit4
#define EDRACT_Door8ElectroMagnetFault_B1            g_dataBuffer_Display[1248+160+8]&bit3
#define EDRACT_Door8EncoderFault_B1                  g_dataBuffer_Display[1248+160+8]&bit2
#define EDRACT_Door8OperationOverTime_B1             g_dataBuffer_Display[1248+160+8]&bit1
#define EDRACT_Door8OutputShortCircuit_B1            g_dataBuffer_Display[1248+160+8]&bit0
#define EDRACT_Door8GreenLoopFault_B1                g_dataBuffer_Display[1248+160+8]&bit15

//0x8B0

#define EDRBCT_LifeSign_U16                         g_dataBuffer_Display[1264+160]
#define EDRBCT_Door1OpenEnabled_B1                  g_dataBuffer_Display[1264+160+1]&bit7
#define EDRBCT_Door1IsOpen_B1                       g_dataBuffer_Display[1264+160+1]&bit6
#define EDRBCT_Door1IsClosed_B1                     g_dataBuffer_Display[1264+160+1]&bit5
#define EDRBCT_Door1IsEmgcyUnlock_B1                g_dataBuffer_Display[1264+160+1]&bit4
#define EDRBCT_Door1IsIsolated_B1                   g_dataBuffer_Display[1264+160+1]&bit3
#define EDRBCT_Door1ExtrusionProtecting_B1          g_dataBuffer_Display[1264+160+1]&bit2
#define EDRBCT_Door1ExtrusionStoped_B1              g_dataBuffer_Display[1264+160+1]&bit1
#define EDRBCT_Door1SetOK_B1                        g_dataBuffer_Display[1264+160+1]&bit0

#define EDRBCT_Door2OpenEnabled_B1                  g_dataBuffer_Display[1264+160+2]&bit7
#define EDRBCT_Door2IsOpen_B1                       g_dataBuffer_Display[1264+160+2]&bit6
#define EDRBCT_Door2IsClosed_B1                     g_dataBuffer_Display[1264+160+2]&bit5
#define EDRBCT_Door2IsEmgcyUnlock_B1                g_dataBuffer_Display[1264+160+2]&bit4
#define EDRBCT_Door2IsIsolated_B1                   g_dataBuffer_Display[1264+160+2]&bit3
#define EDRBCT_Door2ExtrusionProtecting_B1          g_dataBuffer_Display[1264+160+2]&bit2
#define EDRBCT_Door2ExtrusionStoped_B1              g_dataBuffer_Display[1264+160+2]&bit1
#define EDRBCT_Door2SetOK_B1                        g_dataBuffer_Display[1264+160+2]&bit0

#define EDRBCT_Door3OpenEnabled_B1                  g_dataBuffer_Display[1264+160+3]&bit7
#define EDRBCT_Door3IsOpen_B1                       g_dataBuffer_Display[1264+160+3]&bit6
#define EDRBCT_Door3IsClosed_B1                     g_dataBuffer_Display[1264+160+3]&bit5
#define EDRBCT_Door3IsEmgcyUnlock_B1                g_dataBuffer_Display[1264+160+3]&bit4
#define EDRBCT_Door3IsIsolated_B1                   g_dataBuffer_Display[1264+160+3]&bit3
#define EDRBCT_Door3ExtrusionProtecting_B1          g_dataBuffer_Display[1264+160+3]&bit2
#define EDRBCT_Door3ExtrusionStoped_B1              g_dataBuffer_Display[1264+160+3]&bit1
#define EDRBCT_Door3SetOK_B1                        g_dataBuffer_Display[1264+160+3]&bit0

#define EDRBCT_Door4OpenEnabled_B1                  g_dataBuffer_Display[1264+160+4]&bit7
#define EDRBCT_Door4IsOpen_B1                       g_dataBuffer_Display[1264+160+4]&bit6
#define EDRBCT_Door4IsClosed_B1                     g_dataBuffer_Display[1264+160+4]&bit5
#define EDRBCT_Door4IsEmgcyUnlock_B1                g_dataBuffer_Display[1264+160+4]&bit4
#define EDRBCT_Door4IsIsolated_B1                   g_dataBuffer_Display[1264+160+4]&bit3
#define EDRBCT_Door4ExtrusionProtecting_B1          g_dataBuffer_Display[1264+160+4]&bit2
#define EDRBCT_Door4ExtrusionStoped_B1              g_dataBuffer_Display[1264+160+4]&bit1
#define EDRBCT_Door4SetOK_B1                        g_dataBuffer_Display[1264+160+4]&bit0

#define EDRBCT_Door5OpenEnabled_B1                  g_dataBuffer_Display[1264+160+5]&bit7
#define EDRBCT_Door5IsOpen_B1                       g_dataBuffer_Display[1264+160+5]&bit6
#define EDRBCT_Door5IsClosed_B1                     g_dataBuffer_Display[1264+160+5]&bit5
#define EDRBCT_Door5IsEmgcyUnlock_B1                g_dataBuffer_Display[1264+160+5]&bit4
#define EDRBCT_Door5IsIsolated_B1                   g_dataBuffer_Display[1264+160+5]&bit3
#define EDRBCT_Door5ExtrusionProtecting_B1          g_dataBuffer_Display[1264+160+5]&bit2
#define EDRBCT_Door5ExtrusionStoped_B1              g_dataBuffer_Display[1264+160+5]&bit1
#define EDRBCT_Door5SetOK_B1                        g_dataBuffer_Display[1264+160+5]&bit0

#define EDRBCT_Door6OpenEnabled_B1                  g_dataBuffer_Display[1264+160+6]&bit7
#define EDRBCT_Door6IsOpen_B1                       g_dataBuffer_Display[1264+160+6]&bit6
#define EDRBCT_Door6IsClosed_B1                     g_dataBuffer_Display[1264+160+6]&bit5
#define EDRBCT_Door6IsEmgcyUnlock_B1                g_dataBuffer_Display[1264+160+6]&bit4
#define EDRBCT_Door6IsIsolated_B1                   g_dataBuffer_Display[1264+160+6]&bit3
#define EDRBCT_Door6ExtrusionProtecting_B1          g_dataBuffer_Display[1264+160+6]&bit2
#define EDRBCT_Door6ExtrusionStoped_B1              g_dataBuffer_Display[1264+160+6]&bit1
#define EDRBCT_Door6SetOK_B1                        g_dataBuffer_Display[1264+160+6]&bit0

#define EDRBCT_Door7OpenEnabled_B1                  g_dataBuffer_Display[1264+160+7]&bit7
#define EDRBCT_Door7IsOpen_B1                       g_dataBuffer_Display[1264+160+7]&bit6
#define EDRBCT_Door7IsClosed_B1                     g_dataBuffer_Display[1264+160+7]&bit5
#define EDRBCT_Door7IsEmgcyUnlock_B1                g_dataBuffer_Display[1264+160+7]&bit4
#define EDRBCT_Door7IsIsolated_B1                   g_dataBuffer_Display[1264+160+7]&bit3
#define EDRBCT_Door7ExtrusionProtecting_B1          g_dataBuffer_Display[1264+160+7]&bit2
#define EDRBCT_Door7ExtrusionStoped_B1              g_dataBuffer_Display[1264+160+7]&bit1
#define EDRBCT_Door7SetOK_B1                        g_dataBuffer_Display[1264+160+7]&bit0


#define EDRBCT_Door8OpenEnabled_B1                  g_dataBuffer_Display[1264+160+8]&bit7
#define EDRBCT_Door8IsOpen_B1                       g_dataBuffer_Display[1264+160+8]&bit6
#define EDRBCT_Door8IsClosed_B1                     g_dataBuffer_Display[1264+160+8]&bit5
#define EDRBCT_Door8IsEmgcyUnlock_B1                g_dataBuffer_Display[1264+160+8]&bit4
#define EDRBCT_Door8IsIsolated_B1                   g_dataBuffer_Display[1264+160+8]&bit3
#define EDRBCT_Door8ExtrusionProtecting_B1          g_dataBuffer_Display[1264+160+8]&bit2
#define EDRBCT_Door8ExtrusionStoped_B1              g_dataBuffer_Display[1264+160+8]&bit1
#define EDRBCT_Door8SetOK_B1                        g_dataBuffer_Display[1264+160+8]&bit0

#define EDRBCT_Edcu2Version_U8                      g_dataBuffer_Display[1264+160+13]%256
#define EDRBCT_Edcu1Version_U8                      g_dataBuffer_Display[1264+160+13]/256
#define EDRBCT_EdcuState_U8                         g_dataBuffer_Display[1264+160+14]%256

//0x8B1

#define EDRBCT_Door1IsValid_B1                       g_dataBuffer_Display[1280+160]&bit7
#define EDRBCT_Door2IsValid_B1                       g_dataBuffer_Display[1280+160]&bit6
#define EDRBCT_Door3IsValid_B1                       g_dataBuffer_Display[1280+160]&bit5
#define EDRBCT_Door4IsValid_B1                       g_dataBuffer_Display[1280+160]&bit4
#define EDRBCT_Door5IsValid_B1                       g_dataBuffer_Display[1280+160]&bit3
#define EDRBCT_Door6IsValid_B1                       g_dataBuffer_Display[1280+160]&bit2
#define EDRBCT_Door7IsValid_B1                       g_dataBuffer_Display[1280+160]&bit1
#define EDRBCT_Door8IsValid_B1                       g_dataBuffer_Display[1280+160]&bit0
#define EDRBCT_Door1MotorIsOpenCircuit_B1            g_dataBuffer_Display[1280+160+1]&bit7
#define EDRBCT_Door1MotorOverCurrent_B1              g_dataBuffer_Display[1280+160+1]&bit6
#define EDRBCT_Door1PlateSwitchFault_B1              g_dataBuffer_Display[1280+160+1]&bit5
#define EDRBCT_Door1LockSwitchFault_B1               g_dataBuffer_Display[1280+160+1]&bit4
#define EDRBCT_Door1ElectroMagnetFault_B1            g_dataBuffer_Display[1280+160+1]&bit3
#define EDRBCT_Door1EncoderFault_B1                  g_dataBuffer_Display[1280+160+1]&bit2
#define EDRBCT_Door1OperationOverTime_B1             g_dataBuffer_Display[1280+160+1]&bit1
#define EDRBCT_Door1OutputShortCircuit_B1            g_dataBuffer_Display[1280+160+1]&bit0
#define EDRBCT_Door1GreenLoopFault_B1                g_dataBuffer_Display[1280+160+1]&bit15

#define EDRBCT_Door2MotorIsOpenCircuit_B1            g_dataBuffer_Display[1280+160+2]&bit7
#define EDRBCT_Door2MotorOverCurrent_B1              g_dataBuffer_Display[1280+160+2]&bit6
#define EDRBCT_Door2PlateSwitchFault_B1              g_dataBuffer_Display[1280+160+2]&bit5
#define EDRBCT_Door2LockSwitchFault_B1               g_dataBuffer_Display[1280+160+2]&bit4
#define EDRBCT_Door2ElectroMagnetFault_B1            g_dataBuffer_Display[1280+160+2]&bit3
#define EDRBCT_Door2EncoderFault_B1                  g_dataBuffer_Display[1280+160+2]&bit2
#define EDRBCT_Door2OperationOverTime_B1             g_dataBuffer_Display[1280+160+2]&bit1
#define EDRBCT_Door2OutputShortCircuit_B1            g_dataBuffer_Display[1280+160+2]&bit0
#define EDRBCT_Door2GreenLoopFault_B1                g_dataBuffer_Display[1280+160+2]&bit15

#define EDRBCT_Door3MotorIsOpenCircuit_B1            g_dataBuffer_Display[1280+160+3]&bit7
#define EDRBCT_Door3MotorOverCurrent_B1              g_dataBuffer_Display[1280+160+3]&bit6
#define EDRBCT_Door3PlateSwitchFault_B1              g_dataBuffer_Display[1280+160+3]&bit5
#define EDRBCT_Door3LockSwitchFault_B1               g_dataBuffer_Display[1280+160+3]&bit4
#define EDRBCT_Door3ElectroMagnetFault_B1            g_dataBuffer_Display[1280+160+3]&bit3
#define EDRBCT_Door3EncoderFault_B1                  g_dataBuffer_Display[1280+160+3]&bit2
#define EDRBCT_Door3OperationOverTime_B1             g_dataBuffer_Display[1280+160+3]&bit1
#define EDRBCT_Door3OutputShortCircuit_B1            g_dataBuffer_Display[1280+160+3]&bit0
#define EDRBCT_Door3GreenLoopFault_B1                g_dataBuffer_Display[1280+160+3]&bit15

#define EDRBCT_Door4MotorIsOpenCircuit_B1            g_dataBuffer_Display[1280+160+4]&bit7
#define EDRBCT_Door4MotorOverCurrent_B1              g_dataBuffer_Display[1280+160+4]&bit6
#define EDRBCT_Door4PlateSwitchFault_B1              g_dataBuffer_Display[1280+160+4]&bit5
#define EDRBCT_Door4LockSwitchFault_B1               g_dataBuffer_Display[1280+160+4]&bit4
#define EDRBCT_Door4ElectroMagnetFault_B1            g_dataBuffer_Display[1280+160+4]&bit3
#define EDRBCT_Door4EncoderFault_B1                  g_dataBuffer_Display[1280+160+4]&bit2
#define EDRBCT_Door4OperationOverTime_B1             g_dataBuffer_Display[1280+160+4]&bit1
#define EDRBCT_Door4OutputShortCircuit_B1            g_dataBuffer_Display[1280+160+4]&bit0
#define EDRBCT_Door4GreenLoopFault_B1                g_dataBuffer_Display[1280+160+4]&bit15

#define EDRBCT_Door5MotorIsOpenCircuit_B1            g_dataBuffer_Display[1280+160+5]&bit7
#define EDRBCT_Door5MotorOverCurrent_B1              g_dataBuffer_Display[1280+160+5]&bit6
#define EDRBCT_Door5PlateSwitchFault_B1              g_dataBuffer_Display[1280+160+5]&bit5
#define EDRBCT_Door5LockSwitchFault_B1               g_dataBuffer_Display[1280+160+5]&bit4
#define EDRBCT_Door5ElectroMagnetFault_B1            g_dataBuffer_Display[1280+160+5]&bit3
#define EDRBCT_Door5EncoderFault_B1                  g_dataBuffer_Display[1280+160+5]&bit2
#define EDRBCT_Door5OperationOverTime_B1             g_dataBuffer_Display[1280+160+5]&bit1
#define EDRBCT_Door5OutputShortCircuit_B1            g_dataBuffer_Display[1280+160+5]&bit0
#define EDRBCT_Door5GreenLoopFault_B1                g_dataBuffer_Display[1280+160+5]&bit15

#define EDRBCT_Door6MotorIsOpenCircuit_B1            g_dataBuffer_Display[1280+160+6]&bit7
#define EDRBCT_Door6MotorOverCurrent_B1              g_dataBuffer_Display[1280+160+6]&bit6
#define EDRBCT_Door6PlateSwitchFault_B1              g_dataBuffer_Display[1280+160+6]&bit5
#define EDRBCT_Door6LockSwitchFault_B1               g_dataBuffer_Display[1280+160+6]&bit4
#define EDRBCT_Door6ElectroMagnetFault_B1            g_dataBuffer_Display[1280+160+6]&bit3
#define EDRBCT_Door6EncoderFault_B1                  g_dataBuffer_Display[1280+160+6]&bit2
#define EDRBCT_Door6OperationOverTime_B1             g_dataBuffer_Display[1280+160+6]&bit1
#define EDRBCT_Door6OutputShortCircuit_B1            g_dataBuffer_Display[1280+160+6]&bit0
#define EDRBCT_Door6GreenLoopFault_B1                g_dataBuffer_Display[1280+160+6]&bit15

#define EDRBCT_Door7MotorIsOpenCircuit_B1            g_dataBuffer_Display[1280+160+7]&bit7
#define EDRBCT_Door7MotorOverCurrent_B1              g_dataBuffer_Display[1280+160+7]&bit6
#define EDRBCT_Door7PlateSwitchFault_B1              g_dataBuffer_Display[1280+160+7]&bit5
#define EDRBCT_Door7LockSwitchFault_B1               g_dataBuffer_Display[1280+160+7]&bit4
#define EDRBCT_Door7ElectroMagnetFault_B1            g_dataBuffer_Display[1280+160+7]&bit3
#define EDRBCT_Door7EncoderFault_B1                  g_dataBuffer_Display[1280+160+7]&bit2
#define EDRBCT_Door7OperationOverTime_B1             g_dataBuffer_Display[1280+160+7]&bit1
#define EDRBCT_Door7OutputShortCircuit_B1            g_dataBuffer_Display[1280+160+7]&bit0
#define EDRBCT_Door7GreenLoopFault_B1                g_dataBuffer_Display[1280+160+7]&bit15

#define EDRBCT_Door8MotorIsOpenCircuit_B1            g_dataBuffer_Display[1280+160+8]&bit7
#define EDRBCT_Door8MotorOverCurrent_B1              g_dataBuffer_Display[1280+160+8]&bit6
#define EDRBCT_Door8PlateSwitchFault_B1              g_dataBuffer_Display[1280+160+8]&bit5
#define EDRBCT_Door8LockSwitchFault_B1               g_dataBuffer_Display[1280+160+8]&bit4
#define EDRBCT_Door8ElectroMagnetFault_B1            g_dataBuffer_Display[1280+160+8]&bit3
#define EDRBCT_Door8EncoderFault_B1                  g_dataBuffer_Display[1280+160+8]&bit2
#define EDRBCT_Door8OperationOverTime_B1             g_dataBuffer_Display[1280+160+8]&bit1
#define EDRBCT_Door8OutputShortCircuit_B1            g_dataBuffer_Display[1280+160+8]&bit0
#define EDRBCT_Door8GreenLoopFault_B1                g_dataBuffer_Display[1280+160+8]&bit15

//0x8C0

#define EDRCCT_LifeSign_U16                         g_dataBuffer_Display[1296+160]
#define EDRCCT_Door1OpenEnabled_B1                  g_dataBuffer_Display[1296+160+1]&bit7
#define EDRCCT_Door1IsOpen_B1                       g_dataBuffer_Display[1296+160+1]&bit6
#define EDRCCT_Door1IsClosed_B1                     g_dataBuffer_Display[1296+160+1]&bit5
#define EDRCCT_Door1IsEmgcyUnlock_B1                g_dataBuffer_Display[1296+160+1]&bit4
#define EDRCCT_Door1IsIsolated_B1                   g_dataBuffer_Display[1296+160+1]&bit3
#define EDRCCT_Door1ExtrusionProtecting_B1          g_dataBuffer_Display[1296+160+1]&bit2
#define EDRCCT_Door1ExtrusionStoped_B1              g_dataBuffer_Display[1296+160+1]&bit1

#define EDRCCT_Door2OpenEnabled_B1                  g_dataBuffer_Display[1296+160+2]&bit7
#define EDRCCT_Door2IsOpen_B1                       g_dataBuffer_Display[1296+160+2]&bit6
#define EDRCCT_Door2IsClosed_B1                     g_dataBuffer_Display[1296+160+2]&bit5
#define EDRCCT_Door2IsEmgcyUnlock_B1                g_dataBuffer_Display[1296+160+2]&bit4
#define EDRCCT_Door2IsIsolated_B1                   g_dataBuffer_Display[1296+160+2]&bit3
#define EDRCCT_Door2ExtrusionProtecting_B1          g_dataBuffer_Display[1296+160+2]&bit2
#define EDRCCT_Door2ExtrusionStoped_B1              g_dataBuffer_Display[1296+160+2]&bit1

#define EDRCCT_Door3OpenEnabled_B1                  g_dataBuffer_Display[1296+160+3]&bit7
#define EDRCCT_Door3IsOpen_B1                       g_dataBuffer_Display[1296+160+3]&bit6
#define EDRCCT_Door3IsClosed_B1                     g_dataBuffer_Display[1296+160+3]&bit5
#define EDRCCT_Door3IsEmgcyUnlock_B1                g_dataBuffer_Display[1296+160+3]&bit4
#define EDRCCT_Door3IsIsolated_B1                   g_dataBuffer_Display[1296+160+3]&bit3
#define EDRCCT_Door3ExtrusionProtecting_B1          g_dataBuffer_Display[1296+160+3]&bit2
#define EDRCCT_Door3ExtrusionStoped_B1              g_dataBuffer_Display[1296+160+3]&bit1

#define EDRCCT_Door4OpenEnabled_B1                  g_dataBuffer_Display[1296+160+4]&bit7
#define EDRCCT_Door4IsOpen_B1                       g_dataBuffer_Display[1296+160+4]&bit6
#define EDRCCT_Door4IsClosed_B1                     g_dataBuffer_Display[1296+160+4]&bit5
#define EDRCCT_Door4IsEmgcyUnlock_B1                g_dataBuffer_Display[1296+160+4]&bit4
#define EDRCCT_Door4IsIsolated_B1                   g_dataBuffer_Display[1296+160+4]&bit3
#define EDRCCT_Door4ExtrusionProtecting_B1          g_dataBuffer_Display[1296+160+4]&bit2
#define EDRCCT_Door4ExtrusionStoped_B1              g_dataBuffer_Display[1296+160+4]&bit1

#define EDRCCT_Door5OpenEnabled_B1                  g_dataBuffer_Display[1296+160+5]&bit7
#define EDRCCT_Door5IsOpen_B1                       g_dataBuffer_Display[1296+160+5]&bit6
#define EDRCCT_Door5IsClosed_B1                     g_dataBuffer_Display[1296+160+5]&bit5
#define EDRCCT_Door5IsEmgcyUnlock_B1                g_dataBuffer_Display[1296+160+5]&bit4
#define EDRCCT_Door5IsIsolated_B1                   g_dataBuffer_Display[1296+160+5]&bit3
#define EDRCCT_Door5ExtrusionProtecting_B1          g_dataBuffer_Display[1296+160+5]&bit2
#define EDRCCT_Door5ExtrusionStoped_B1              g_dataBuffer_Display[1296+160+5]&bit1

#define EDRCCT_Door6OpenEnabled_B1                  g_dataBuffer_Display[1296+160+6]&bit7
#define EDRCCT_Door6IsOpen_B1                       g_dataBuffer_Display[1296+160+6]&bit6
#define EDRCCT_Door6IsClosed_B1                     g_dataBuffer_Display[1296+160+6]&bit5
#define EDRCCT_Door6IsEmgcyUnlock_B1                g_dataBuffer_Display[1296+160+6]&bit4
#define EDRCCT_Door6IsIsolated_B1                   g_dataBuffer_Display[1296+160+6]&bit3
#define EDRCCT_Door6ExtrusionProtecting_B1          g_dataBuffer_Display[1296+160+6]&bit2
#define EDRCCT_Door6ExtrusionStoped_B1              g_dataBuffer_Display[1296+160+6]&bit1

#define EDRCCT_Door7OpenEnabled_B1                  g_dataBuffer_Display[1296+160+7]&bit7
#define EDRCCT_Door7IsOpen_B1                       g_dataBuffer_Display[1296+160+7]&bit6
#define EDRCCT_Door7IsClosed_B1                     g_dataBuffer_Display[1296+160+7]&bit5
#define EDRCCT_Door7IsEmgcyUnlock_B1                g_dataBuffer_Display[1296+160+7]&bit4
#define EDRCCT_Door7IsIsolated_B1                   g_dataBuffer_Display[1296+160+7]&bit3
#define EDRCCT_Door7ExtrusionProtecting_B1          g_dataBuffer_Display[1296+160+7]&bit2
#define EDRCCT_Door7ExtrusionStoped_B1              g_dataBuffer_Display[1296+160+7]&bit1

#define EDRCCT_Door8OpenEnabled_B1                  g_dataBuffer_Display[1296+160+8]&bit7
#define EDRCCT_Door8IsOpen_B1                       g_dataBuffer_Display[1296+160+8]&bit6
#define EDRCCT_Door8IsClosed_B1                     g_dataBuffer_Display[1296+160+8]&bit5
#define EDRCCT_Door8IsEmgcyUnlock_B1                g_dataBuffer_Display[1296+160+8]&bit4
#define EDRCCT_Door8IsIsolated_B1                   g_dataBuffer_Display[1296+160+8]&bit3
#define EDRCCT_Door8ExtrusionProtecting_B1          g_dataBuffer_Display[1296+160+8]&bit2
#define EDRCCT_Door8ExtrusionStoped_B1              g_dataBuffer_Display[1296+160+8]&bit1

#define EDRCCT_Edcu2Version_U8                      g_dataBuffer_Display[1296+160+13]%256
#define EDRCCT_Edcu1Version_U8                      g_dataBuffer_Display[1296+160+13]/256
#define EDRCCT_EdcuState_U8                         g_dataBuffer_Display[1296+160+14]%256

//0x8C1

#define EDRCCT_Door1IsValid_B1                       g_dataBuffer_Display[1312+160]&bit7
#define EDRCCT_Door2IsValid_B1                       g_dataBuffer_Display[1312+160]&bit6
#define EDRCCT_Door3IsValid_B1                       g_dataBuffer_Display[1312+160]&bit5
#define EDRCCT_Door4IsValid_B1                       g_dataBuffer_Display[1312+160]&bit4
#define EDRCCT_Door5IsValid_B1                       g_dataBuffer_Display[1312+160]&bit3
#define EDRCCT_Door6IsValid_B1                       g_dataBuffer_Display[1312+160]&bit2
#define EDRCCT_Door7IsValid_B1                       g_dataBuffer_Display[1312+160]&bit1
#define EDRCCT_Door8IsValid_B1                       g_dataBuffer_Display[1312+160]&bit0
#define EDRCCT_Door1MotorIsOpenCircuit_B1            g_dataBuffer_Display[1312+160+1]&bit7
#define EDRCCT_Door1MotorOverCurrent_B1              g_dataBuffer_Display[1312+160+1]&bit6
#define EDRCCT_Door1PlateSwitchFault_B1              g_dataBuffer_Display[1312+160+1]&bit5
#define EDRCCT_Door1LockSwitchFault_B1               g_dataBuffer_Display[1312+160+1]&bit4
#define EDRCCT_Door1ElectroMagnetFault_B1            g_dataBuffer_Display[1312+160+1]&bit3
#define EDRCCT_Door1EncoderFault_B1                  g_dataBuffer_Display[1312+160+1]&bit2
#define EDRCCT_Door1OperationOverTime_B1             g_dataBuffer_Display[1312+160+1]&bit1
#define EDRCCT_Door1OutputShortCircuit_B1            g_dataBuffer_Display[1312+160+1]&bit0
#define EDRCCT_Door1GreenLoopFault_B1                g_dataBuffer_Display[1312+160+1]&bit15

#define EDRCCT_Door2MotorIsOpenCircuit_B1            g_dataBuffer_Display[1312+160+2]&bit7
#define EDRCCT_Door2MotorOverCurrent_B1              g_dataBuffer_Display[1312+160+2]&bit6
#define EDRCCT_Door2PlateSwitchFault_B1              g_dataBuffer_Display[1312+160+2]&bit5
#define EDRCCT_Door2LockSwitchFault_B1               g_dataBuffer_Display[1312+160+2]&bit4
#define EDRCCT_Door2ElectroMagnetFault_B1            g_dataBuffer_Display[1312+160+2]&bit3
#define EDRCCT_Door2EncoderFault_B1                  g_dataBuffer_Display[1312+160+2]&bit2
#define EDRCCT_Door2OperationOverTime_B1             g_dataBuffer_Display[1312+160+2]&bit1
#define EDRCCT_Door2OutputShortCircuit_B1            g_dataBuffer_Display[1312+160+2]&bit0
#define EDRCCT_Door2GreenLoopFault_B1                g_dataBuffer_Display[1312+160+2]&bit15

#define EDRCCT_Door3MotorIsOpenCircuit_B1            g_dataBuffer_Display[1312+160+3]&bit7
#define EDRCCT_Door3MotorOverCurrent_B1              g_dataBuffer_Display[1312+160+3]&bit6
#define EDRCCT_Door3PlateSwitchFault_B1              g_dataBuffer_Display[1312+160+3]&bit5
#define EDRCCT_Door3LockSwitchFault_B1               g_dataBuffer_Display[1312+160+3]&bit4
#define EDRCCT_Door3ElectroMagnetFault_B1            g_dataBuffer_Display[1312+160+3]&bit3
#define EDRCCT_Door3EncoderFault_B1                  g_dataBuffer_Display[1312+160+3]&bit2
#define EDRCCT_Door3OperationOverTime_B1             g_dataBuffer_Display[1312+160+3]&bit1
#define EDRCCT_Door3OutputShortCircuit_B1            g_dataBuffer_Display[1312+160+3]&bit0
#define EDRCCT_Door3GreenLoopFault_B1                g_dataBuffer_Display[1312+160+3]&bit15

#define EDRCCT_Door4MotorIsOpenCircuit_B1            g_dataBuffer_Display[1312+160+4]&bit7
#define EDRCCT_Door4MotorOverCurrent_B1              g_dataBuffer_Display[1312+160+4]&bit6
#define EDRCCT_Door4PlateSwitchFault_B1              g_dataBuffer_Display[1312+160+4]&bit5
#define EDRCCT_Door4LockSwitchFault_B1               g_dataBuffer_Display[1312+160+4]&bit4
#define EDRCCT_Door4ElectroMagnetFault_B1            g_dataBuffer_Display[1312+160+4]&bit3
#define EDRCCT_Door4EncoderFault_B1                  g_dataBuffer_Display[1312+160+4]&bit2
#define EDRCCT_Door4OperationOverTime_B1             g_dataBuffer_Display[1312+160+4]&bit1
#define EDRCCT_Door4OutputShortCircuit_B1            g_dataBuffer_Display[1312+160+4]&bit0
#define EDRCCT_Door4GreenLoopFault_B1                g_dataBuffer_Display[1312+160+4]&bit15

#define EDRCCT_Door5MotorIsOpenCircuit_B1            g_dataBuffer_Display[1312+160+5]&bit7
#define EDRCCT_Door5MotorOverCurrent_B1              g_dataBuffer_Display[1312+160+5]&bit6
#define EDRCCT_Door5PlateSwitchFault_B1              g_dataBuffer_Display[1312+160+5]&bit5
#define EDRCCT_Door5LockSwitchFault_B1               g_dataBuffer_Display[1312+160+5]&bit4
#define EDRCCT_Door5ElectroMagnetFault_B1            g_dataBuffer_Display[1312+160+5]&bit3
#define EDRCCT_Door5EncoderFault_B1                  g_dataBuffer_Display[1312+160+5]&bit2
#define EDRCCT_Door5OperationOverTime_B1             g_dataBuffer_Display[1312+160+5]&bit1
#define EDRCCT_Door5OutputShortCircuit_B1            g_dataBuffer_Display[1312+160+5]&bit0
#define EDRCCT_Door5GreenLoopFault_B1                g_dataBuffer_Display[1312+160+5]&bit15

#define EDRCCT_Door6MotorIsOpenCircuit_B1            g_dataBuffer_Display[1312+160+6]&bit7
#define EDRCCT_Door6MotorOverCurrent_B1              g_dataBuffer_Display[1312+160+6]&bit6
#define EDRCCT_Door6PlateSwitchFault_B1              g_dataBuffer_Display[1312+160+6]&bit5
#define EDRCCT_Door6LockSwitchFault_B1               g_dataBuffer_Display[1312+160+6]&bit4
#define EDRCCT_Door6ElectroMagnetFault_B1            g_dataBuffer_Display[1312+160+6]&bit3
#define EDRCCT_Door6EncoderFault_B1                  g_dataBuffer_Display[1312+160+6]&bit2
#define EDRCCT_Door6OperationOverTime_B1             g_dataBuffer_Display[1312+160+6]&bit1
#define EDRCCT_Door6OutputShortCircuit_B1            g_dataBuffer_Display[1312+160+6]&bit0
#define EDRCCT_Door6GreenLoopFault_B1                g_dataBuffer_Display[1312+160+6]&bit15

#define EDRCCT_Door7MotorIsOpenCircuit_B1            g_dataBuffer_Display[1312+160+7]&bit7
#define EDRCCT_Door7MotorOverCurrent_B1              g_dataBuffer_Display[1312+160+7]&bit6
#define EDRCCT_Door7PlateSwitchFault_B1              g_dataBuffer_Display[1312+160+7]&bit5
#define EDRCCT_Door7LockSwitchFault_B1               g_dataBuffer_Display[1312+160+7]&bit4
#define EDRCCT_Door7ElectroMagnetFault_B1            g_dataBuffer_Display[1312+160+7]&bit3
#define EDRCCT_Door7EncoderFault_B1                  g_dataBuffer_Display[1312+160+7]&bit2
#define EDRCCT_Door7OperationOverTime_B1             g_dataBuffer_Display[1312+160+7]&bit1
#define EDRCCT_Door7OutputShortCircuit_B1            g_dataBuffer_Display[1312+160+7]&bit0
#define EDRCCT_Door7GreenLoopFault_B1                g_dataBuffer_Display[1312+160+7]&bit15

#define EDRCCT_Door8MotorIsOpenCircuit_B1            g_dataBuffer_Display[1312+160+8]&bit7
#define EDRCCT_Door8MotorOverCurrent_B1              g_dataBuffer_Display[1312+160+8]&bit6
#define EDRCCT_Door8PlateSwitchFault_B1              g_dataBuffer_Display[1312+160+8]&bit5
#define EDRCCT_Door8LockSwitchFault_B1               g_dataBuffer_Display[1312+160+8]&bit4
#define EDRCCT_Door8ElectroMagnetFault_B1            g_dataBuffer_Display[1312+160+8]&bit3
#define EDRCCT_Door8EncoderFault_B1                  g_dataBuffer_Display[1312+160+8]&bit2
#define EDRCCT_Door8OperationOverTime_B1             g_dataBuffer_Display[1312+160+8]&bit1
#define EDRCCT_Door8OutputShortCircuit_B1            g_dataBuffer_Display[1312+160+8]&bit0
#define EDRCCT_Door8GreenLoopFault_B1                g_dataBuffer_Display[1312+160+8]&bit15




//0x910
#define AC1CT_LifeSign_U16                          g_dataBuffer_Display[1440+48]
#define AC1CT_Version1_U8                           g_dataBuffer_Display[1440+48+1]%256
#define AC1CT_Version2_U8                           g_dataBuffer_Display[1440+48+1]/256
#define AC1CT_WorkMode_U8                           g_dataBuffer_Display[1440+48+2]%256
#define AC1CT_IndoorTemp_U8                         g_dataBuffer_Display[1440+48+2]/256
#define AC1CT_OutdoorTemp_U8                        g_dataBuffer_Display[1440+48+3]%256
#define AC1CT_SetTemp_U8                            g_dataBuffer_Display[1440+48+3]/256
#define AC1CT_ControlMode_B1                        g_dataBuffer_Display[1440+48+4]&bit7
#define AC1CT_HalfRunState_B1                       g_dataBuffer_Display[1440+48+4]&bit6
#define AC1CT_HeaterControlCmd_B1                   g_dataBuffer_Display[1440+48+4]&bit5

#define AC1CT_1_1FanState_B1                        g_dataBuffer_Display[1440+48+5]&bit7
#define AC1CT_1_2FanState_B1                        g_dataBuffer_Display[1440+48+5]&bit6
#define AC1CT_2_1FanState_B1                        g_dataBuffer_Display[1440+48+5]&bit5
#define AC1CT_2_2FanState_B1                        g_dataBuffer_Display[1440+48+5]&bit4
#define AC1CT_1_1CompressorState_B1                 g_dataBuffer_Display[1440+48+5]&bit3
#define AC1CT_1_2CompressorState_B1                 g_dataBuffer_Display[1440+48+5]&bit2
#define AC1CT_2_1CompressorState_B1                 g_dataBuffer_Display[1440+48+5]&bit1
#define AC1CT_2_2CompressorState_B1                 g_dataBuffer_Display[1440+48+5]&bit0
#define AC1CT_1_1CondensateState_B1                 g_dataBuffer_Display[1440+48+5]&bit15
#define AC1CT_1_2CondensateState_B1                 g_dataBuffer_Display[1440+48+5]&bit14
#define AC1CT_2_1CondensateState_B1                 g_dataBuffer_Display[1440+48+5]&bit13
#define AC1CT_2_2CondensateState_B1                 g_dataBuffer_Display[1440+48+5]&bit12
#define AC1CT_1_1PreHeaterState_B1                  g_dataBuffer_Display[1440+48+5]&bit11
#define AC1CT_1_2PreHeaterState_B1                  g_dataBuffer_Display[1440+48+5]&bit10
#define AC1CT_2_1PreHeaterState_B1                  g_dataBuffer_Display[1440+48+5]&bit9
#define AC1CT_2_2PreHeaterState_B1                  g_dataBuffer_Display[1440+48+5]&bit8


//0x920
#define AC2CT_LifeSign_U16                          g_dataBuffer_Display[1456+48]
#define AC2CT_Version1_U8                           g_dataBuffer_Display[1456+48+1]%256
#define AC2CT_Version2_U8                           g_dataBuffer_Display[1456+48+1]/256
#define AC2CT_WorkMode_U8                           g_dataBuffer_Display[1456+48+2]%256
#define AC2CT_IndoorTemp_U8                         g_dataBuffer_Display[1456+48+2]/256
#define AC2CT_OutdoorTemp_U8                        g_dataBuffer_Display[1456+48+3]%256
#define AC2CT_SetTemp_U8                            g_dataBuffer_Display[1456+48+3]/256
#define AC2CT_ControlMode_B1                        g_dataBuffer_Display[1456+48+4]&bit7
#define AC2CT_HalfRunState_B1                        g_dataBuffer_Display[1456+48+4]&bit6
#define AC2CT_HeaterControlCmd_B1                    g_dataBuffer_Display[1456+48+4]&bit5

#define AC2CT_1_1FanState_B1                        g_dataBuffer_Display[1456+48+5]&bit7
#define AC2CT_1_2FanState_B1                        g_dataBuffer_Display[1456+48+5]&bit6
#define AC2CT_2_1FanState_B1                        g_dataBuffer_Display[1456+48+5]&bit5
#define AC2CT_2_2FanState_B1                        g_dataBuffer_Display[1456+48+5]&bit4
#define AC2CT_1_1CompressorState_B1                 g_dataBuffer_Display[1456+48+5]&bit3
#define AC2CT_1_2CompressorState_B1                 g_dataBuffer_Display[1456+48+5]&bit2
#define AC2CT_2_1CompressorState_B1                 g_dataBuffer_Display[1456+48+5]&bit1
#define AC2CT_2_2CompressorState_B1                 g_dataBuffer_Display[1456+48+5]&bit0
#define AC2CT_1_1CondensateState_B1                 g_dataBuffer_Display[1456+48+5]&bit15
#define AC2CT_1_2CondensateState_B1                 g_dataBuffer_Display[1456+48+5]&bit14
#define AC2CT_2_1CondensateState_B1                 g_dataBuffer_Display[1456+48+5]&bit13
#define AC2CT_2_2CondensateState_B1                 g_dataBuffer_Display[1456+48+5]&bit12
#define AC2CT_1_1PreHeaterState_B1                  g_dataBuffer_Display[1456+48+5]&bit11
#define AC2CT_1_2PreHeaterState_B1                  g_dataBuffer_Display[1456+48+5]&bit10
#define AC2CT_2_1PreHeaterState_B1                  g_dataBuffer_Display[1456+48+5]&bit9
#define AC2CT_2_2PreHeaterState_B1                  g_dataBuffer_Display[1456+48+5]&bit8


//0x930
#define AC3CT_LifeSign_U16                          g_dataBuffer_Display[1472+48]
#define AC3CT_Version1_U8                           g_dataBuffer_Display[1472+48+1]%256
#define AC3CT_Version2_U8                           g_dataBuffer_Display[1472+48+1]/256
#define AC3CT_WorkMode_U8                           g_dataBuffer_Display[1472+48+2]%256
#define AC3CT_IndoorTemp_U8                         g_dataBuffer_Display[1472+48+2]/256
#define AC3CT_OutdoorTemp_U8                        g_dataBuffer_Display[1472+48+3]%256
#define AC3CT_SetTemp_U8                            g_dataBuffer_Display[1472+48+3]/256
#define AC3CT_ControlMode_B1                        g_dataBuffer_Display[1472+48+4]&bit7
#define AC3CT_HalfRunState_B1                        g_dataBuffer_Display[1472+48+4]&bit6
#define AC3CT_HeaterControlCmd_B1                   g_dataBuffer_Display[1472+48+4]&bit5


#define AC3CT_1_1FanState_B1                        g_dataBuffer_Display[1472+48+5]&bit7
#define AC3CT_1_2FanState_B1                        g_dataBuffer_Display[1472+48+5]&bit6
#define AC3CT_2_1FanState_B1                        g_dataBuffer_Display[1472+48+5]&bit5
#define AC3CT_2_2FanState_B1                        g_dataBuffer_Display[1472+48+5]&bit4
#define AC3CT_1_1CompressorState_B1                 g_dataBuffer_Display[1472+48+5]&bit3
#define AC3CT_1_2CompressorState_B1                 g_dataBuffer_Display[1472+48+5]&bit2
#define AC3CT_2_1CompressorState_B1                 g_dataBuffer_Display[1472+48+5]&bit1
#define AC3CT_2_2CompressorState_B1                 g_dataBuffer_Display[1472+48+5]&bit0
#define AC3CT_1_1CondensateState_B1                 g_dataBuffer_Display[1472+48+5]&bit15
#define AC3CT_1_2CondensateState_B1                 g_dataBuffer_Display[1472+48+5]&bit14
#define AC3CT_2_1CondensateState_B1                 g_dataBuffer_Display[1472+48+5]&bit13
#define AC3CT_2_2CondensateState_B1                 g_dataBuffer_Display[1472+48+5]&bit12
#define AC3CT_1_1PreHeaterState_B1                  g_dataBuffer_Display[1472+48+5]&bit11
#define AC3CT_1_2PreHeaterState_B1                  g_dataBuffer_Display[1472+48+5]&bit10
#define AC3CT_2_1PreHeaterState_B1                  g_dataBuffer_Display[1472+48+5]&bit9
#define AC3CT_2_2PreHeaterState_B1                  g_dataBuffer_Display[1472+48+5]&bit8


//0x940
#define AC4CT_LifeSign_U16                          g_dataBuffer_Display[1488+48]
#define AC4CT_Version1_U8                           g_dataBuffer_Display[1488+48+1]%256
#define AC4CT_Version2_U8                           g_dataBuffer_Display[1488+48+1]/256
#define AC4CT_WorkMode_U8                           g_dataBuffer_Display[1488+48+2]%256
#define AC4CT_IndoorTemp_U8                         g_dataBuffer_Display[1488+48+2]/256
#define AC4CT_OutdoorTemp_U8                        g_dataBuffer_Display[1488+48+3]%256
#define AC4CT_SetTemp_U8                            g_dataBuffer_Display[1488+48+3]/256
#define AC4CT_ControlMode_B1                        g_dataBuffer_Display[1488+48+4]&bit7
#define AC4CT_HalfRunState_B1                        g_dataBuffer_Display[1488+48+4]&bit6
#define AC4CT_HeaterControlCmd_B1                   g_dataBuffer_Display[1488+48+4]&bit5

#define AC4CT_1_1FanState_B1                        g_dataBuffer_Display[1488+48+5]&bit7
#define AC4CT_1_2FanState_B1                        g_dataBuffer_Display[1488+48+5]&bit6
#define AC4CT_2_1FanState_B1                        g_dataBuffer_Display[1488+48+5]&bit5
#define AC4CT_2_2FanState_B1                        g_dataBuffer_Display[1488+48+5]&bit4
#define AC4CT_1_1CompressorState_B1                 g_dataBuffer_Display[1488+48+5]&bit3
#define AC4CT_1_2CompressorState_B1                 g_dataBuffer_Display[1488+48+5]&bit2
#define AC4CT_2_1CompressorState_B1                 g_dataBuffer_Display[1488+48+5]&bit1
#define AC4CT_2_2CompressorState_B1                 g_dataBuffer_Display[1488+48+5]&bit0
#define AC4CT_1_1CondensateState_B1                 g_dataBuffer_Display[1488+48+5]&bit15
#define AC4CT_1_2CondensateState_B1                 g_dataBuffer_Display[1488+48+5]&bit14
#define AC4CT_2_1CondensateState_B1                 g_dataBuffer_Display[1488+48+5]&bit13
#define AC4CT_2_2CondensateState_B1                 g_dataBuffer_Display[1488+48+5]&bit12
#define AC4CT_1_1PreHeaterState_B1                  g_dataBuffer_Display[1488+48+5]&bit11
#define AC4CT_1_2PreHeaterState_B1                  g_dataBuffer_Display[1488+48+5]&bit10
#define AC4CT_2_1PreHeaterState_B1                  g_dataBuffer_Display[1488+48+5]&bit9
#define AC4CT_2_2PreHeaterState_B1                  g_dataBuffer_Display[1488+48+5]&bit8


//0x950
#define AC5CT_LifeSign_U16                          g_dataBuffer_Display[1504+48]
#define AC5CT_Version1_U8                           g_dataBuffer_Display[1504+48+1]%256
#define AC5CT_Version2_U8                           g_dataBuffer_Display[1504+48+1]/256
#define AC5CT_WorkMode_U8                           g_dataBuffer_Display[1504+48+2]%256
#define AC5CT_IndoorTemp_U8                         g_dataBuffer_Display[1504+48+2]/256
#define AC5CT_OutdoorTemp_U8                        g_dataBuffer_Display[1504+48+3]%256
#define AC5CT_SetTemp_U8                            g_dataBuffer_Display[1504+48+3]/256
#define AC5CT_ControlMode_B1                        g_dataBuffer_Display[1504+48+4]&bit7
#define AC5CT_HalfRunState_B1                       g_dataBuffer_Display[1504+48+4]&bit6
#define AC5CT_HeaterControlCmd_B1                   g_dataBuffer_Display[1504+48+4]&bit5

#define AC5CT_1_1FanState_B1                        g_dataBuffer_Display[1504+48+5]&bit7
#define AC5CT_1_2FanState_B1                        g_dataBuffer_Display[1504+48+5]&bit6
#define AC5CT_2_1FanState_B1                        g_dataBuffer_Display[1504+48+5]&bit5
#define AC5CT_2_2FanState_B1                        g_dataBuffer_Display[1504+48+5]&bit4
#define AC5CT_1_1CompressorState_B1                 g_dataBuffer_Display[1504+48+5]&bit3
#define AC5CT_1_2CompressorState_B1                 g_dataBuffer_Display[1504+48+5]&bit2
#define AC5CT_2_1CompressorState_B1                 g_dataBuffer_Display[1504+48+5]&bit1
#define AC5CT_2_2CompressorState_B1                 g_dataBuffer_Display[1504+48+5]&bit0
#define AC5CT_1_1CondensateState_B1                 g_dataBuffer_Display[1504+48+5]&bit15
#define AC5CT_1_2CondensateState_B1                 g_dataBuffer_Display[1504+48+5]&bit14
#define AC5CT_2_1CondensateState_B1                 g_dataBuffer_Display[1504+48+5]&bit13
#define AC5CT_2_2CondensateState_B1                 g_dataBuffer_Display[1504+48+5]&bit12
#define AC5CT_1_1PreHeaterState_B1                  g_dataBuffer_Display[1504+48+5]&bit11
#define AC5CT_1_2PreHeaterState_B1                  g_dataBuffer_Display[1504+48+5]&bit10
#define AC5CT_2_1PreHeaterState_B1                  g_dataBuffer_Display[1504+48+5]&bit9
#define AC5CT_2_2PreHeaterState_B1                  g_dataBuffer_Display[1504+48+5]&bit8


//0x960
#define AC6CT_LifeSign_U16                          g_dataBuffer_Display[1520+48]
#define AC6CT_Version1_U8                           g_dataBuffer_Display[1520+48+1]%256
#define AC6CT_Version2_U8                           g_dataBuffer_Display[1520+48+1]/256
#define AC6CT_WorkMode_U8                           g_dataBuffer_Display[1520+48+2]%256
#define AC6CT_IndoorTemp_U8                         g_dataBuffer_Display[1520+48+2]/256
#define AC6CT_OutdoorTemp_U8                        g_dataBuffer_Display[1520+48+3]%256
#define AC6CT_SetTemp_U8                            g_dataBuffer_Display[1520+48+3]/256
#define AC6CT_ControlMode_B1                        g_dataBuffer_Display[1520+48+4]&bit7
#define AC6CT_HalfRunState_B1                        g_dataBuffer_Display[1520+48+4]&bit6
#define AC6CT_HeaterControlCmd_B1                   g_dataBuffer_Display[1520+48+4]&bit5

#define AC6CT_1_1FanState_B1                        g_dataBuffer_Display[1520+48+5]&bit7
#define AC6CT_1_2FanState_B1                        g_dataBuffer_Display[1520+48+5]&bit6
#define AC6CT_2_1FanState_B1                        g_dataBuffer_Display[1520+48+5]&bit5
#define AC6CT_2_2FanState_B1                        g_dataBuffer_Display[1520+48+5]&bit4
#define AC6CT_1_1CompressorState_B1                 g_dataBuffer_Display[1520+48+5]&bit3
#define AC6CT_1_2CompressorState_B1                 g_dataBuffer_Display[1520+48+5]&bit2
#define AC6CT_2_1CompressorState_B1                 g_dataBuffer_Display[1520+48+5]&bit1
#define AC6CT_2_2CompressorState_B1                 g_dataBuffer_Display[1520+48+5]&bit0
#define AC6CT_1_1CondensateState_B1                 g_dataBuffer_Display[1520+48+5]&bit15
#define AC6CT_1_2CondensateState_B1                 g_dataBuffer_Display[1520+48+5]&bit14
#define AC6CT_2_1CondensateState_B1                 g_dataBuffer_Display[1520+48+5]&bit13
#define AC6CT_2_2CondensateState_B1                 g_dataBuffer_Display[1520+48+5]&bit12
#define AC6CT_1_1PreHeaterState_B1                  g_dataBuffer_Display[1520+48+5]&bit11
#define AC6CT_1_2PreHeaterState_B1                  g_dataBuffer_Display[1520+48+5]&bit10
#define AC6CT_2_1PreHeaterState_B1                  g_dataBuffer_Display[1520+48+5]&bit9
#define AC6CT_2_2PreHeaterState_B1                  g_dataBuffer_Display[1520+48+5]&bit8



//0xB10
#define PIS1CT_LifeSign_U16                              g_dataBuffer_Display[1648]
#define PIS1CT_Version_U8                               g_dataBuffer_Display[1649] % 256
#define PIS1CT_RunDirection_B1                          g_dataBuffer_Display[1649] & bit15
#define PIS1CT_ThisNoStop_B1                            g_dataBuffer_Display[1649] & bit14
#define PIS1CT_NextNoStop_B1                            g_dataBuffer_Display[1649] & bit13
#define PIS1CT_OpenRightDoor_B1                         g_dataBuffer_Display[1649] & bit11
#define PIS1CT_OpenLeftDoor_B1                          g_dataBuffer_Display[1649] & bit10
#define PIS1CT_StartStationID_U16                       g_dataBuffer_Display[1650]
#define PIS1CT_FinalStationID_U16                       g_dataBuffer_Display[1651]
#define PIS1CT_NextStationID_U16                        g_dataBuffer_Display[1652]
#define PIS1CT_EmgcyBroadcastID_U8                      g_dataBuffer_Display[1653] % 256
#define PIS1CT_PISMaster_B1                             g_dataBuffer_Display[1653] & bit15
#define PIS1CT_PISAutoMode_B1                           g_dataBuffer_Display[1653] & bit14
#define PIS1CT_CabCommunication_B1                      g_dataBuffer_Display[1653] & bit13
#define PIS1CT_IsBroadCasting_B1                        g_dataBuffer_Display[1653] & bit12
#define PIS1CT_OCCIsBroadCasting_B1                     g_dataBuffer_Display[1653] & bit11
#define PIS1CT_BroadcastID_U8                           g_dataBuffer_Display[1654] % 256
#define PIS1CT_Tc1EmgcyAlert1Active_B1                  g_dataBuffer_Display[1654] & bit15
#define PIS1CT_Tc1EmgcyAlert1Received_B1                g_dataBuffer_Display[1654] & bit14
#define PIS1CT_Tc1EmgcyAlert2Active_B1                  g_dataBuffer_Display[1654] & bit13
#define PIS1CT_Tc1EmgcyAlert2Received_B1                g_dataBuffer_Display[1654] & bit12
#define PIS1CT_Mp1EmgcyAlert1Active_B1                  g_dataBuffer_Display[1654] & bit11
#define PIS1CT_Mp1EmgcyAlert1Received_B1                g_dataBuffer_Display[1654] & bit10
#define PIS1CT_Mp1EmgcyAlert2Active_B1                  g_dataBuffer_Display[1654] & bit9
#define PIS1CT_Mp1EmgcyAlert2Received_B1                g_dataBuffer_Display[1654] & bit8
#define PIS1CT_M1EmgcyAlert1Active_B1                   g_dataBuffer_Display[1655] & bit7
#define PIS1CT_M1EmgcyAlert1Received_B1                 g_dataBuffer_Display[1655] & bit6
#define PIS1CT_M1EmgcyAlert2Active_B1                   g_dataBuffer_Display[1655] & bit5
#define PIS1CT_M1EmgcyAlert2Received_B1                 g_dataBuffer_Display[1655] & bit4
#define PIS1CT_M2EmgcyAlert1Active_B1                   g_dataBuffer_Display[1655] & bit3
#define PIS1CT_M2EmgcyAlert1Received_B1                 g_dataBuffer_Display[1655] & bit2
#define PIS1CT_M2EmgcyAlert2Active_B1                   g_dataBuffer_Display[1655] & bit1
#define PIS1CT_M2EmgcyAlert2Received_B1                 g_dataBuffer_Display[1655] & bit0
#define PIS1CT_Mp2EmgcyAlert1Active_B1                  g_dataBuffer_Display[1655] & bit15
#define PIS1CT_Mp2EmgcyAlert1Received_B1                g_dataBuffer_Display[1655] & bit14
#define PIS1CT_Mp2EmgcyAlert2Active_B1                  g_dataBuffer_Display[1655] & bit13
#define PIS1CT_Mp2EmgcyAlert2Received_B1                g_dataBuffer_Display[1655] & bit12
#define PIS1CT_Tc2EmgcyAlert1Active_B1                  g_dataBuffer_Display[1655] & bit11
#define PIS1CT_Tc2EmgcyAlert1Received_B1                g_dataBuffer_Display[1655] & bit10
#define PIS1CT_Tc2EmgcyAlert2Active_B1                  g_dataBuffer_Display[1655] & bit9
#define PIS1CT_Tc2EmgcyAlert2Received_B1                g_dataBuffer_Display[1655] & bit8


#define PIS1CT_Tc1EmgcyAlert3Active_B1                  g_dataBuffer_Display[1656] & bit7
#define PIS1CT_Tc1EmgcyAlert3Received_B1                g_dataBuffer_Display[1656] & bit6
#define PIS1CT_Tc1EmgcyAlert4Active_B1                  g_dataBuffer_Display[1656] & bit5
#define PIS1CT_Tc1EmgcyAlert4Received_B1                g_dataBuffer_Display[1656] & bit4
#define PIS1CT_Mp1EmgcyAlert3Active_B1                  g_dataBuffer_Display[1656] & bit3
#define PIS1CT_Mp1EmgcyAlert3Received_B1                g_dataBuffer_Display[1656] & bit2
#define PIS1CT_Mp1EmgcyAlert4Active_B1                  g_dataBuffer_Display[1656] & bit1
#define PIS1CT_Mp1EmgcyAlert4Received_B1                g_dataBuffer_Display[1656] & bit0
#define PIS1CT_M1EmgcyAlert3Active_B1                   g_dataBuffer_Display[1656] & bit15
#define PIS1CT_M1EmgcyAlert3Received_B1                 g_dataBuffer_Display[1656] & bit14
#define PIS1CT_M1EmgcyAlert4Active_B1                   g_dataBuffer_Display[1656] & bit13
#define PIS1CT_M1EmgcyAlert4Received_B1                 g_dataBuffer_Display[1656] & bit12
#define PIS1CT_M2EmgcyAlert3Active_B1                   g_dataBuffer_Display[1656] & bit11
#define PIS1CT_M2EmgcyAlert3Received_B1                 g_dataBuffer_Display[1656] & bit10
#define PIS1CT_M2EmgcyAlert4Active_B1                   g_dataBuffer_Display[1656] & bit9
#define PIS1CT_M2EmgcyAlert4Received_B1                 g_dataBuffer_Display[1656] & bit8
#define PIS1CT_Mp2EmgcyAlert3Active_B1                  g_dataBuffer_Display[1657] & bit7
#define PIS1CT_Mp2EmgcyAlert3Received_B1                g_dataBuffer_Display[1657] & bit6
#define PIS1CT_Mp2EmgcyAlert4Active_B1                  g_dataBuffer_Display[1657] & bit5
#define PIS1CT_Mp2EmgcyAlert4Received_B1                g_dataBuffer_Display[1657] & bit4
#define PIS1CT_Tc2EmgcyAlert3Active_B1                  g_dataBuffer_Display[1657] & bit3
#define PIS1CT_Tc2EmgcyAlert3Received_B1                g_dataBuffer_Display[1657] & bit2
#define PIS1CT_Tc2EmgcyAlert4Active_B1                  g_dataBuffer_Display[1657] & bit1
#define PIS1CT_Tc2EmgcyAlert4Received_B1                g_dataBuffer_Display[1657] & bit0


//0xB11

#define PIS1CT_Tc1CabControllerFault_B1                  g_dataBuffer_Display[1664] & bit7
#define PIS1CT_Tc1BroadcastControllerFault_B1            g_dataBuffer_Display[1664] & bit6
#define PIS1CT_Tc1FinalLedFault_B1                       g_dataBuffer_Display[1664] & bit5
#define PIS1CT_Tc1PassengerControllerFault_B1            g_dataBuffer_Display[1664] & bit4
#define PIS1CT_Tc1PassengerLed1Fault_B1                  g_dataBuffer_Display[1664] & bit3
#define PIS1CT_Tc1PassengerLed2Fault_B1                  g_dataBuffer_Display[1664] & bit2
#define PIS1CT_Tc1LedMap1Fault_B1                        g_dataBuffer_Display[1664] & bit1
#define PIS1CT_Tc1LedMap2Fault_B1                        g_dataBuffer_Display[1664] & bit0
#define PIS1CT_Tc1LedMap3Fault_B1                        g_dataBuffer_Display[1664] & bit15
#define PIS1CT_Tc1LedMap4Fault_B1                        g_dataBuffer_Display[1664] & bit14
#define PIS1CT_Tc1LedMap5Fault_B1                        g_dataBuffer_Display[1664] & bit13
#define PIS1CT_Tc1LedMap6Fault_B1                        g_dataBuffer_Display[1664] & bit12
#define PIS1CT_Tc1LedMap7Fault_B1                        g_dataBuffer_Display[1664] & bit11
#define PIS1CT_Tc1LedMap8Fault_B1                        g_dataBuffer_Display[1664] & bit10
#define PIS1CT_Mp1PassengerControllerFault_B1            g_dataBuffer_Display[1664] & bit9
#define PIS1CT_Mp1PassengerLed1Fault_B1                  g_dataBuffer_Display[1664] & bit8
#define PIS1CT_Mp1PassengerLed2Fault_B1                  g_dataBuffer_Display[1665] & bit7
#define PIS1CT_Mp1LedMap1Fault_B1                        g_dataBuffer_Display[1665] & bit6
#define PIS1CT_Mp1LedMap2Fault_B1                        g_dataBuffer_Display[1665] & bit5
#define PIS1CT_Mp1LedMap3Fault_B1                        g_dataBuffer_Display[1665] & bit4
#define PIS1CT_Mp1LedMap4Fault_B1                        g_dataBuffer_Display[1665] & bit3
#define PIS1CT_Mp1LedMap5Fault_B1                        g_dataBuffer_Display[1665] & bit2
#define PIS1CT_Mp1LedMap6Fault_B1                        g_dataBuffer_Display[1665] & bit1
#define PIS1CT_Mp1LedMap7Fault_B1                        g_dataBuffer_Display[1665] & bit0
#define PIS1CT_Mp1LedMap8Fault_B1                        g_dataBuffer_Display[1665] & bit15
#define PIS1CT_M1PassengerControllerFault_B1             g_dataBuffer_Display[1665] & bit14
#define PIS1CT_M1PassengerLed1Fault_B1                   g_dataBuffer_Display[1665] & bit13
#define PIS1CT_M1PassengerLed2Fault_B1                   g_dataBuffer_Display[1665] & bit12
#define PIS1CT_M1LedMap1Fault_B1                         g_dataBuffer_Display[1665] & bit11
#define PIS1CT_M1LedMap2Fault_B1                         g_dataBuffer_Display[1665] & bit10
#define PIS1CT_M1LedMap3Fault_B1                         g_dataBuffer_Display[1665] & bit9
#define PIS1CT_M1LedMap4Fault_B1                         g_dataBuffer_Display[1665] & bit8
#define PIS1CT_M1LedMap5Fault_B1                         g_dataBuffer_Display[1666] & bit7
#define PIS1CT_M1LedMap6Fault_B1                         g_dataBuffer_Display[1666] & bit6
#define PIS1CT_M1LedMap7Fault_B1                         g_dataBuffer_Display[1666] & bit5
#define PIS1CT_M1LedMap8Fault_B1                         g_dataBuffer_Display[1666] & bit4
#define PIS1CT_M2PassengerControllerFault_B1             g_dataBuffer_Display[1666] & bit3
#define PIS1CT_M2PassengerLed1Fault_B1                   g_dataBuffer_Display[1666] & bit2
#define PIS1CT_M2PassengerLed2Fault_B1                   g_dataBuffer_Display[1666] & bit1
#define PIS1CT_M2LedMap1Fault_B1                         g_dataBuffer_Display[1666] & bit0
#define PIS1CT_M2LedMap2Fault_B1                         g_dataBuffer_Display[1666] & bit15
#define PIS1CT_M2LedMap3Fault_B1                         g_dataBuffer_Display[1666] & bit14
#define PIS1CT_M2LedMap4Fault_B1                         g_dataBuffer_Display[1666] & bit13
#define PIS1CT_M2LedMap5Fault_B1                         g_dataBuffer_Display[1666] & bit12
#define PIS1CT_M2LedMap6Fault_B1                         g_dataBuffer_Display[1666] & bit11
#define PIS1CT_M2LedMap7Fault_B1                         g_dataBuffer_Display[1666] & bit10
#define PIS1CT_M2LedMap8Fault_B1                         g_dataBuffer_Display[1666] & bit9
#define PIS1CT_Mp2PassengerControllerFault_B1            g_dataBuffer_Display[1666] & bit8
#define PIS1CT_Mp2PassengerLed1Fault_B1                  g_dataBuffer_Display[1667] & bit7
#define PIS1CT_Mp2PassengerLed2Fault_B1                  g_dataBuffer_Display[1667] & bit6
#define PIS1CT_Mp2LedMap1Fault_B1                        g_dataBuffer_Display[1667] & bit5
#define PIS1CT_Mp2LedMap2Fault_B1                        g_dataBuffer_Display[1667] & bit4
#define PIS1CT_Mp2LedMap3Fault_B1                        g_dataBuffer_Display[1667] & bit3
#define PIS1CT_Mp2LedMap4Fault_B1                        g_dataBuffer_Display[1667] & bit2
#define PIS1CT_Mp2LedMap5Fault_B1                        g_dataBuffer_Display[1667] & bit1
#define PIS1CT_Mp2LedMap6Fault_B1                        g_dataBuffer_Display[1667] & bit0
#define PIS1CT_Mp2LedMap7Fault_B1                        g_dataBuffer_Display[1667] & bit15
#define PIS1CT_Mp2LedMap8Fault_B1                        g_dataBuffer_Display[1667] & bit14
#define PIS1CT_Tc2CabControllerFault_B1                  g_dataBuffer_Display[1667] & bit13
#define PIS1CT_Tc2BroadcastControllerFault_B1            g_dataBuffer_Display[1667] & bit12
#define PIS1CT_Tc2FinalLedFault_B1                       g_dataBuffer_Display[1667] & bit11
#define PIS1CT_Tc2PassengerControllerFault_B             g_dataBuffer_Display[1667] & bit10
#define PIS1CT_Tc2PassengerLed1Fault_B1                  g_dataBuffer_Display[1667] & bit9
#define PIS1CT_Tc2PassengerLed2Fault_B1                  g_dataBuffer_Display[1667] & bit8
#define PIS1CT_Tc2LedMap1Fault_B1                        g_dataBuffer_Display[1668] & bit7
#define PIS1CT_Tc2LedMap2Fault_B1                        g_dataBuffer_Display[1668] & bit6
#define PIS1CT_Tc2LedMap3Fault_B1                        g_dataBuffer_Display[1668] & bit5
#define PIS1CT_Tc2LedMap4Fault_B1                        g_dataBuffer_Display[1668] & bit4
#define PIS1CT_Tc2LedMap5Fault_B1                        g_dataBuffer_Display[1668] & bit3
#define PIS1CT_Tc2LedMap6Fault_B1                        g_dataBuffer_Display[1668] & bit2
#define PIS1CT_Tc2LedMap7Fault_B1                        g_dataBuffer_Display[1668] & bit1
#define PIS1CT_Tc2LedMap8Fault_B1                        g_dataBuffer_Display[1668] & bit0
#define PIS1CT_Tc1Camera1Fault_B1                        g_dataBuffer_Display[1668] & bit15
#define PIS1CT_Tc1Camera2Fault_B1                        g_dataBuffer_Display[1668] & bit14
#define PIS1CT_Tc1Camera3Fault_B1                        g_dataBuffer_Display[1668] & bit13
#define PIS1CT_Mp1Camera1Fault_B1                        g_dataBuffer_Display[1668] & bit12
#define PIS1CT_Mp1Camera2Fault_B1                        g_dataBuffer_Display[1668] & bit11
#define PIS1CT_M1Camera1Fault_B1                         g_dataBuffer_Display[1668] & bit10
#define PIS1CT_M1Camera2Fault_B1                         g_dataBuffer_Display[1668] & bit9
#define PIS1CT_M2Camera1Fault_B1                         g_dataBuffer_Display[1668] & bit8
#define PIS1CT_M2Camera2Fault_B1                         g_dataBuffer_Display[1669] & bit7
#define PIS1CT_Mp2Camera1Fault_B1                        g_dataBuffer_Display[1669] & bit6
#define PIS1CT_Mp2Camera2Fault_B1                        g_dataBuffer_Display[1669] & bit5
#define PIS1CT_Tc2Camera1Fault_B1                        g_dataBuffer_Display[1669] & bit4
#define PIS1CT_Tc2Camera2Fault_B1                        g_dataBuffer_Display[1669] & bit3
#define PIS1CT_Tc2Camera3Fault_B1                        g_dataBuffer_Display[1669] & bit2



//0xB20
#define PIS2CT_LifeSign_U16                             g_dataBuffer_Display[32+1648]
#define PIS2CT_Version_U8                               g_dataBuffer_Display[32+1649] % 256
#define PIS2CT_RunDirection_B1                          g_dataBuffer_Display[32+1649] & bit15
#define PIS2CT_ThisNoStop_B1                            g_dataBuffer_Display[32+1649] & bit14
#define PIS2CT_NextNoStop_B1                            g_dataBuffer_Display[32+1649] & bit13
#define PIS2CT_OpenRightDoor_B1                         g_dataBuffer_Display[32+1649] & bit11
#define PIS2CT_OpenLeftDoor_B1                          g_dataBuffer_Display[32+1649] & bit10
#define PIS2CT_StartStationID_U16                       g_dataBuffer_Display[32+1650]
#define PIS2CT_FinalStationID_U16                       g_dataBuffer_Display[32+1651]
#define PIS2CT_NextStationID_U16                        g_dataBuffer_Display[32+1652]
#define PIS2CT_EmgcyBroadcastID_U8                      g_dataBuffer_Display[32+1653] % 256
#define PIS2CT_PISMaster_B1                             g_dataBuffer_Display[32+1653] & bit15
#define PIS2CT_PISAutoMode_B1                           g_dataBuffer_Display[32+1653] & bit14
#define PIS2CT_CabCommunication_B1                      g_dataBuffer_Display[32+1653] & bit13
#define PIS2CT_IsBroadCasting_B1                        g_dataBuffer_Display[32+1653] & bit12
#define PIS2CT_OCCIsBroadCasting_B1                     g_dataBuffer_Display[32+1653] & bit11
#define PIS2CT_BroadcastID_U8                           g_dataBuffer_Display[32+1654] % 256
#define PIS2CT_Tc1EmgcyAlert1Active_B1                  g_dataBuffer_Display[32+1654] & bit15
#define PIS2CT_Tc1EmgcyAlert1Received_B1                g_dataBuffer_Display[32+1654] & bit14
#define PIS2CT_Tc1EmgcyAlert2Active_B1                  g_dataBuffer_Display[32+1654] & bit13
#define PIS2CT_Tc1EmgcyAlert2Received_B1                g_dataBuffer_Display[32+1654] & bit12
#define PIS2CT_Mp1EmgcyAlert1Active_B1                  g_dataBuffer_Display[32+1654] & bit11
#define PIS2CT_Mp1EmgcyAlert1Received_B1                g_dataBuffer_Display[32+1654] & bit10
#define PIS2CT_Mp1EmgcyAlert2Active_B1                  g_dataBuffer_Display[32+1654] & bit9
#define PIS2CT_Mp1EmgcyAlert2Received_B1                g_dataBuffer_Display[32+1654] & bit8
#define PIS2CT_M1EmgcyAlert1Active_B1                   g_dataBuffer_Display[32+1655] & bit7
#define PIS2CT_M1EmgcyAlert1Received_B1                 g_dataBuffer_Display[32+1655] & bit6
#define PIS2CT_M1EmgcyAlert2Active_B1                   g_dataBuffer_Display[32+1655] & bit5
#define PIS2CT_M1EmgcyAlert2Received_B1                 g_dataBuffer_Display[32+1655] & bit4
#define PIS2CT_M2EmgcyAlert1Active_B1                   g_dataBuffer_Display[32+1655] & bit3
#define PIS2CT_M2EmgcyAlert1Received_B1                 g_dataBuffer_Display[32+1655] & bit2
#define PIS2CT_M2EmgcyAlert2Active_B1                   g_dataBuffer_Display[32+1655] & bit1
#define PIS2CT_M2EmgcyAlert2Received_B1                 g_dataBuffer_Display[32+1655] & bit0
#define PIS2CT_Mp2EmgcyAlert1Active_B1                  g_dataBuffer_Display[32+1655] & bit15
#define PIS2CT_Mp2EmgcyAlert1Received_B1                g_dataBuffer_Display[32+1655] & bit14
#define PIS2CT_Mp2EmgcyAlert2Active_B1                  g_dataBuffer_Display[32+1655] & bit13
#define PIS2CT_Mp2EmgcyAlert2Received_B1                g_dataBuffer_Display[32+1655] & bit12
#define PIS2CT_Tc2EmgcyAlert1Active_B1                  g_dataBuffer_Display[32+1655] & bit11
#define PIS2CT_Tc2EmgcyAlert1Received_B1                g_dataBuffer_Display[32+1655] & bit10
#define PIS2CT_Tc2EmgcyAlert2Active_B1                  g_dataBuffer_Display[32+1655] & bit9
#define PIS2CT_Tc2EmgcyAlert2Received_B1                g_dataBuffer_Display[32+1655] & bit8

#define PIS2CT_Tc1EmgcyAlert3Active_B1                  g_dataBuffer_Display[32+1656] & bit7
#define PIS2CT_Tc1EmgcyAlert3Received_B1                g_dataBuffer_Display[32+1656] & bit6
#define PIS2CT_Tc1EmgcyAlert4Active_B1                  g_dataBuffer_Display[32+1656] & bit5
#define PIS2CT_Tc1EmgcyAlert4Received_B1                g_dataBuffer_Display[32+1656] & bit4
#define PIS2CT_Mp1EmgcyAlert3Active_B1                  g_dataBuffer_Display[32+1656] & bit3
#define PIS2CT_Mp1EmgcyAlert3Received_B1                g_dataBuffer_Display[32+1656] & bit2
#define PIS2CT_Mp1EmgcyAlert4Active_B1                  g_dataBuffer_Display[32+1656] & bit1
#define PIS2CT_Mp1EmgcyAlert4Received_B1                g_dataBuffer_Display[32+1656] & bit0
#define PIS2CT_M1EmgcyAlert3Active_B1                   g_dataBuffer_Display[32+1656] & bit15
#define PIS2CT_M1EmgcyAlert3Received_B1                 g_dataBuffer_Display[32+1656] & bit14
#define PIS2CT_M1EmgcyAlert4Active_B1                   g_dataBuffer_Display[32+1656] & bit13
#define PIS2CT_M1EmgcyAlert4Received_B1                 g_dataBuffer_Display[32+1656] & bit12
#define PIS2CT_M2EmgcyAlert3Active_B1                   g_dataBuffer_Display[32+1656] & bit11
#define PIS2CT_M2EmgcyAlert3Received_B1                 g_dataBuffer_Display[32+1656] & bit10
#define PIS2CT_M2EmgcyAlert4Active_B1                   g_dataBuffer_Display[32+1656] & bit9
#define PIS2CT_M2EmgcyAlert4Received_B1                 g_dataBuffer_Display[32+1656] & bit8
#define PIS2CT_Mp2EmgcyAlert3Active_B1                  g_dataBuffer_Display[32+1657] & bit7
#define PIS2CT_Mp2EmgcyAlert3Received_B1                g_dataBuffer_Display[32+1657] & bit6
#define PIS2CT_Mp2EmgcyAlert4Active_B1                  g_dataBuffer_Display[32+1657] & bit5
#define PIS2CT_Mp2EmgcyAlert4Received_B1                g_dataBuffer_Display[32+1657] & bit4
#define PIS2CT_Tc2EmgcyAlert3Active_B1                  g_dataBuffer_Display[32+1657] & bit3
#define PIS2CT_Tc2EmgcyAlert3Received_B1                g_dataBuffer_Display[32+1657] & bit2
#define PIS2CT_Tc2EmgcyAlert4Active_B1                  g_dataBuffer_Display[32+1657] & bit1
#define PIS2CT_Tc2EmgcyAlert4Received_B1                g_dataBuffer_Display[32+1657] & bit0




//0xB21

#define PIS2CT_Tc1CabControllerFault_B1                  g_dataBuffer_Display[32+1664] & bit7
#define PIS2CT_Tc1BroadcastControllerFault_B1            g_dataBuffer_Display[32+1664] & bit6
#define PIS2CT_Tc1FinalLedFault_B1                       g_dataBuffer_Display[32+1664] & bit5
#define PIS2CT_Tc1PassengerControllerFault_B1            g_dataBuffer_Display[32+1664] & bit4
#define PIS2CT_Tc1PassengerLed1Fault_B1                  g_dataBuffer_Display[32+1664] & bit3
#define PIS2CT_Tc1PassengerLed2Fault_B1                  g_dataBuffer_Display[32+1664] & bit2
#define PIS2CT_Tc1LedMap1Fault_B1                        g_dataBuffer_Display[32+1664] & bit1
#define PIS2CT_Tc1LedMap2Fault_B1                        g_dataBuffer_Display[32+1664] & bit0
#define PIS2CT_Tc1LedMap3Fault_B1                        g_dataBuffer_Display[32+1664] & bit15
#define PIS2CT_Tc1LedMap4Fault_B1                        g_dataBuffer_Display[32+1664] & bit14
#define PIS2CT_Tc1LedMap5Fault_B1                        g_dataBuffer_Display[32+1664] & bit13
#define PIS2CT_Tc1LedMap6Fault_B1                        g_dataBuffer_Display[32+1664] & bit12
#define PIS2CT_Tc1LedMap7Fault_B1                        g_dataBuffer_Display[32+1664] & bit11
#define PIS2CT_Tc1LedMap8Fault_B1                        g_dataBuffer_Display[32+1664] & bit10
#define PIS2CT_Mp1PassengerControllerFault_B1            g_dataBuffer_Display[32+1664] & bit9
#define PIS2CT_Mp1PassengerLed1Fault_B1                  g_dataBuffer_Display[32+1664] & bit8
#define PIS2CT_Mp1PassengerLed2Fault_B1                  g_dataBuffer_Display[32+1665] & bit7
#define PIS2CT_Mp1LedMap1Fault_B1                        g_dataBuffer_Display[32+1665] & bit6
#define PIS2CT_Mp1LedMap2Fault_B1                        g_dataBuffer_Display[32+1665] & bit5
#define PIS2CT_Mp1LedMap3Fault_B1                        g_dataBuffer_Display[32+1665] & bit4
#define PIS2CT_Mp1LedMap4Fault_B1                        g_dataBuffer_Display[32+1665] & bit3
#define PIS2CT_Mp1LedMap5Fault_B1                        g_dataBuffer_Display[32+1665] & bit2
#define PIS2CT_Mp1LedMap6Fault_B1                        g_dataBuffer_Display[32+1665] & bit1
#define PIS2CT_Mp1LedMap7Fault_B1                        g_dataBuffer_Display[32+1665] & bit0
#define PIS2CT_Mp1LedMap8Fault_B1                        g_dataBuffer_Display[32+1665] & bit15
#define PIS2CT_M1PassengerControllerFault_B1             g_dataBuffer_Display[32+1665] & bit14
#define PIS2CT_M1PassengerLed1Fault_B1                   g_dataBuffer_Display[32+1665] & bit13
#define PIS2CT_M1PassengerLed2Fault_B1                   g_dataBuffer_Display[32+1665] & bit12
#define PIS2CT_M1LedMap1Fault_B1                         g_dataBuffer_Display[32+1665] & bit11
#define PIS2CT_M1LedMap2Fault_B1                         g_dataBuffer_Display[32+1665] & bit10
#define PIS2CT_M1LedMap3Fault_B1                         g_dataBuffer_Display[32+1665] & bit9
#define PIS2CT_M1LedMap4Fault_B1                         g_dataBuffer_Display[32+1665] & bit8
#define PIS2CT_M1LedMap5Fault_B1                         g_dataBuffer_Display[32+1666] & bit7
#define PIS2CT_M1LedMap6Fault_B1                         g_dataBuffer_Display[32+1666] & bit6
#define PIS2CT_M1LedMap7Fault_B1                         g_dataBuffer_Display[32+1666] & bit5
#define PIS2CT_M1LedMap8Fault_B1                         g_dataBuffer_Display[32+1666] & bit4
#define PIS2CT_M2PassengerControllerFault_B1             g_dataBuffer_Display[32+1666] & bit3
#define PIS2CT_M2PassengerLed1Fault_B1                   g_dataBuffer_Display[32+1666] & bit2
#define PIS2CT_M2PassengerLed2Fault_B1                   g_dataBuffer_Display[32+1666] & bit1
#define PIS2CT_M2LedMap1Fault_B1                         g_dataBuffer_Display[32+1666] & bit0
#define PIS2CT_M2LedMap2Fault_B1                         g_dataBuffer_Display[32+1666] & bit15
#define PIS2CT_M2LedMap3Fault_B1                         g_dataBuffer_Display[32+1666] & bit14
#define PIS2CT_M2LedMap4Fault_B1                         g_dataBuffer_Display[32+1666] & bit13
#define PIS2CT_M2LedMap5Fault_B1                         g_dataBuffer_Display[32+1666] & bit12
#define PIS2CT_M2LedMap6Fault_B1                         g_dataBuffer_Display[32+1666] & bit11
#define PIS2CT_M2LedMap7Fault_B1                         g_dataBuffer_Display[32+1666] & bit10
#define PIS2CT_M2LedMap8Fault_B1                         g_dataBuffer_Display[32+1666] & bit9
#define PIS2CT_Mp2PassengerControllerFault_B1            g_dataBuffer_Display[32+1666] & bit8
#define PIS2CT_Mp2PassengerLed1Fault_B1                  g_dataBuffer_Display[32+1667] & bit7
#define PIS2CT_Mp2PassengerLed2Fault_B1                  g_dataBuffer_Display[32+1667] & bit6
#define PIS2CT_Mp2LedMap1Fault_B1                        g_dataBuffer_Display[32+1667] & bit5
#define PIS2CT_Mp2LedMap2Fault_B1                        g_dataBuffer_Display[32+1667] & bit4
#define PIS2CT_Mp2LedMap3Fault_B1                        g_dataBuffer_Display[32+1667] & bit3
#define PIS2CT_Mp2LedMap4Fault_B1                        g_dataBuffer_Display[32+1667] & bit2
#define PIS2CT_Mp2LedMap5Fault_B1                        g_dataBuffer_Display[32+1667] & bit1
#define PIS2CT_Mp2LedMap6Fault_B1                        g_dataBuffer_Display[32+1667] & bit0
#define PIS2CT_Mp2LedMap7Fault_B1                        g_dataBuffer_Display[32+1667] & bit15
#define PIS2CT_Mp2LedMap8Fault_B1                        g_dataBuffer_Display[32+1667] & bit14
#define PIS2CT_Tc2CabControllerFault_B1                  g_dataBuffer_Display[32+1667] & bit13
#define PIS2CT_Tc2BroadcastControllerFault_B1            g_dataBuffer_Display[32+1667] & bit12
#define PIS2CT_Tc2FinalLedFault_B1                       g_dataBuffer_Display[32+1667] & bit11
#define PIS2CT_Tc2PassengerControllerFault_B             g_dataBuffer_Display[32+1667] & bit10
#define PIS2CT_Tc2PassengerLed1Fault_B1                  g_dataBuffer_Display[32+1667] & bit9
#define PIS2CT_Tc2PassengerLed2Fault_B1                  g_dataBuffer_Display[32+1667] & bit8
#define PIS2CT_Tc2LedMap1Fault_B1                        g_dataBuffer_Display[32+1668] & bit7
#define PIS2CT_Tc2LedMap2Fault_B1                        g_dataBuffer_Display[32+1668] & bit6
#define PIS2CT_Tc2LedMap3Fault_B1                        g_dataBuffer_Display[32+1668] & bit5
#define PIS2CT_Tc2LedMap4Fault_B1                        g_dataBuffer_Display[32+1668] & bit4
#define PIS2CT_Tc2LedMap5Fault_B1                        g_dataBuffer_Display[32+1668] & bit3
#define PIS2CT_Tc2LedMap6Fault_B1                        g_dataBuffer_Display[32+1668] & bit2
#define PIS2CT_Tc2LedMap7Fault_B1                        g_dataBuffer_Display[32+1668] & bit1
#define PIS2CT_Tc2LedMap8Fault_B1                        g_dataBuffer_Display[32+1668] & bit0
#define PIS2CT_Tc1Camera1Fault_B1                        g_dataBuffer_Display[32+1668] & bit15
#define PIS2CT_Tc1Camera2Fault_B1                        g_dataBuffer_Display[32+1668] & bit14
#define PIS2CT_Tc1Camera3Fault_B1                        g_dataBuffer_Display[32+1668] & bit13
#define PIS2CT_Mp1Camera1Fault_B1                        g_dataBuffer_Display[32+1668] & bit12
#define PIS2CT_Mp1Camera2Fault_B1                        g_dataBuffer_Display[32+1668] & bit11
#define PIS2CT_M1Camera1Fault_B1                         g_dataBuffer_Display[32+1668] & bit10
#define PIS2CT_M1Camera2Fault_B1                         g_dataBuffer_Display[32+1668] & bit9
#define PIS2CT_M2Camera1Fault_B1                         g_dataBuffer_Display[32+1668] & bit8
#define PIS2CT_M2Camera2Fault_B1                         g_dataBuffer_Display[32+1669] & bit7
#define PIS2CT_Mp2Camera1Fault_B1                        g_dataBuffer_Display[32+1669] & bit6
#define PIS2CT_Mp2Camera2Fault_B1                        g_dataBuffer_Display[32+1669] & bit5
#define PIS2CT_Tc2Camera1Fault_B1                        g_dataBuffer_Display[32+1669] & bit4
#define PIS2CT_Tc2Camera2Fault_B1                        g_dataBuffer_Display[32+1669] & bit3
#define PIS2CT_Tc2Camera3Fault_B1                        g_dataBuffer_Display[32+1669] & bit2



//0xB08

#define CTPIS_TrainVelocity_U16                           g_dataBuffer_Display[2408]
#define CTPIS_EmgcyBroadcastID_U8                         g_dataBuffer_Display[2409] % 256
#define CTPIS_ATCLifeSign_U8                              g_dataBuffer_Display[2411] % 256
#define CTPIS_RunDirection_B1                             g_dataBuffer_Display[2411] & bit15
#define CTPIS_ThisNoStop_B1                               g_dataBuffer_Display[2411] & bit14
#define CTPIS_NextNoStop_B1                               g_dataBuffer_Display[2411] & bit13
#define CTPIS_OpenRightDoor_B1                            g_dataBuffer_Display[2411] & bit12
#define CTPIS_OpenLeftDoor_B1                             g_dataBuffer_Display[2411] & bit11
#define CTPIS_StartStationID_U16                          g_dataBuffer_Display[2412]
#define CTPIS_FinalStationID_U16                          g_dataBuffer_Display[2413]
#define CTPIS_NextStationID_U16                           g_dataBuffer_Display[2414]
#define CTPIS_EmgcyBroadcastID_U16                        g_dataBuffer_Display[2415]
#define CTPIS_DistanceToNextStation_U16                   g_dataBuffer_Display[2416]
#define CTPIS_Tc1IsActive_B1                              g_dataBuffer_Display[2418] & bit7
#define CTPIS_Tc2IsActive_B1                              g_dataBuffer_Display[2418] & bit6
#define CTPIS_CloseRightDoorCMD_B1                        g_dataBuffer_Display[2418] & bit5
#define CTPIS_OpenRightDoorCMD_B1                         g_dataBuffer_Display[2418] & bit4
#define CTPIS_CloseLeftDoorC_B1                           g_dataBuffer_Display[2418] & bit3
#define CTPIS_OpenLeftDoorCMD_B1                          g_dataBuffer_Display[2418] & bit2
#define CTPIS_AllDoorClosed_B1                            g_dataBuffer_Display[2418] & bit1
#define CTPIS_ATOIsActive_B1                              g_dataBuffer_Display[2418] & bit0
#define CTPIS_Cab1CameraActive_B1                         g_dataBuffer_Display[2418] & bit15
#define CTPIS_Tc1Camera1Active_B1                         g_dataBuffer_Display[2418] & bit14
#define CTPIS_Tc1Camera2Active_B1                         g_dataBuffer_Display[2418] & bit13
#define CTPIS_Mp1Camera1Active_B1                         g_dataBuffer_Display[2418] & bit12
#define CTPIS_Mp1Camera2Active_B1                         g_dataBuffer_Display[2418] & bit11
#define CTPIS_M1Camera1Active_B1                          g_dataBuffer_Display[2418] & bit10
#define CTPIS_M1Camera2Active_B1                          g_dataBuffer_Display[2418] & bit9
#define CTPIS_M2Camera1Active_B1                          g_dataBuffer_Display[2418] & bit8
#define CTPIS_M2Camera2Active_B1                          g_dataBuffer_Display[2418] & bit8
#define CTPIS_Mp2Camera1Active_B1                         g_dataBuffer_Display[2419] & bit7
#define CTPIS_Mp2Camera2Active_B1                         g_dataBuffer_Display[2419] & bit6
#define CTPIS_Tc2Camera1Active_B1                         g_dataBuffer_Display[2419] & bit5
#define CTPIS_Tc2Camera2Active_B1                         g_dataBuffer_Display[2419] & bit4
#define CTPIS_Cab2CameraActive_B1                         g_dataBuffer_Display[2419] & bit3

#define CTPIS_Fault1_B1                                   g_dataBuffer_Display[2419] & bit15
#define CTPIS_Fault2_B1                                   g_dataBuffer_Display[2419] & bit14
#define CTPIS_Fault3_B1                                   g_dataBuffer_Display[2419] & bit13
#define CTPIS_Fault4_B1                                   g_dataBuffer_Display[2419] & bit12
#define CTPIS_Fault5_B1                                   g_dataBuffer_Display[2419] & bit11
#define CTPIS_Fault6_B1                                   g_dataBuffer_Display[2419] & bit10
#define CTPIS_Fault7_B1                                   g_dataBuffer_Display[2419] & bit9
#define CTPIS_Fault8_B1                                   g_dataBuffer_Display[2419] & bit8
#define CTPIS_Fault9_B1                                   g_dataBuffer_Display[2420] & bit7
#define CTPIS_Fault10_B1                                  g_dataBuffer_Display[2420] & bit6
#define CTPIS_Fault11_B1                                  g_dataBuffer_Display[2420] & bit5
#define CTPIS_Fault12_B1                                  g_dataBuffer_Display[2420] & bit4
#define CTPIS_Fault13_B1                                  g_dataBuffer_Display[2420] & bit3
#define CTPIS_Fault14_B1                                  g_dataBuffer_Display[2420] & bit2
#define CTPIS_Fault15_B1                                  g_dataBuffer_Display[2420] & bit1
#define CTPIS_Fault16_B1                                  g_dataBuffer_Display[2420] & bit0
#define CTPIS_Fault17_B1                                  g_dataBuffer_Display[2420 & bit15
#define CTPIS_Fault18_B1                                  g_dataBuffer_Display[2420] & bit14
#define CTPIS_Fault19_B1                                  g_dataBuffer_Display[2420] & bit13
#define CTPIS_Fault20_B1                                  g_dataBuffer_Display[2420] & bit12
#define CTPIS_Fault21_B1                                   g_dataBuffer_Display[2420] & bit11
#define CTPIS_Fault22_B1                                   g_dataBuffer_Display[2420] & bit10
#define CTPIS_Fault23_B1                                   g_dataBuffer_Display[2420] & bit9
#define CTPIS_Fault24_B1                                   g_dataBuffer_Display[2420] & bit8
#define CTPIS_Fault25_B1                                   g_dataBuffer_Display[2421] & bit7
#define CTPIS_Fault26_B1                                   g_dataBuffer_Display[2421] & bit6
#define CTPIS_Fault27_B1                                   g_dataBuffer_Display[2421] & bit5
#define CTPIS_Fault28_B1                                   g_dataBuffer_Display[2421] & bit4
#define CTPIS_Fault29_B1                                   g_dataBuffer_Display[2421] & bit3
#define CTPIS_Fault30_B1                                  g_dataBuffer_Display[2421] & bit2
#define CTPIS_Fault31_B1                                  g_dataBuffer_Display[2421] & bit1
#define CTPIS_Fault32_B1                                  g_dataBuffer_Display[2421] & bit0
#define CTPIS_Fault33_B1                                  g_dataBuffer_Display[2421] & bit15
#define CTPIS_Fault34_B1                                  g_dataBuffer_Display[2421] & bit14
#define CTPIS_Fault35_B1                                  g_dataBuffer_Display[2421] & bit13
#define CTPIS_Fault36_B1                                  g_dataBuffer_Display[2421] & bit12
#define CTPIS_Fault37_B1                                  g_dataBuffer_Display[2421] & bit11
#define CTPIS_Fault38_B1                                  g_dataBuffer_Display[2421] & bit10
#define CTPIS_Fault39_B1                                  g_dataBuffer_Display[2421] & bit9
#define CTPIS_Fault40_B1                                  g_dataBuffer_Display[2421] & bit8
#define CTPIS_Fault41_B1                                  g_dataBuffer_Display[2422] & bit7
#define CTPIS_Fault42_B1                                  g_dataBuffer_Display[2422] & bit6
#define CTPIS_Fault43_B1                                  g_dataBuffer_Display[2422] & bit5
#define CTPIS_Fault44_B1                                  g_dataBuffer_Display[2422] & bit4
#define CTPIS_Fault45_B1                                  g_dataBuffer_Display[2422] & bit3
#define CTPIS_Fault46_B1                                  g_dataBuffer_Display[2422] & bit2
#define CTPIS_Fault47_B1                                  g_dataBuffer_Display[2422] & bit1
#define CTPIS_Fault48_B1                                  g_dataBuffer_Display[2422] & bit0
#define CTPIS_Fault49_B1                                  g_dataBuffer_Display[2422] & bit15
#define CTPIS_Fault50_B1                                  g_dataBuffer_Display[2422] & bit14
#define CTPIS_Fault51_B1                                  g_dataBuffer_Display[2422] & bit13
#define CTPIS_Fault52_B1                                  g_dataBuffer_Display[2422] & bit12
#define CTPIS_Fault53_B1                                  g_dataBuffer_Display[2422] & bit11
#define CTPIS_Fault54_B1                                  g_dataBuffer_Display[2422] & bit10
#define CTPIS_Fault55_B1                                  g_dataBuffer_Display[2422] & bit9
#define CTPIS_Fault56_B1                                  g_dataBuffer_Display[2422] & bit8
#define CTPIS_Fault57_B1                                  g_dataBuffer_Display[2423] & bit7
#define CTPIS_Fault58_B1                                  g_dataBuffer_Display[2423] & bit6
#define CTPIS_Fault59_B1                                  g_dataBuffer_Display[2423] & bit5
#define CTPIS_Fault60_B1                                  g_dataBuffer_Display[2423] & bit4
#define CTPIS_Fault61_B1                                  g_dataBuffer_Display[2423] & bit3
#define CTPIS_Fault62_B1                                  g_dataBuffer_Display[2423] & bit2
#define CTPIS_Fault63_B1                                  g_dataBuffer_Display[2423] & bit1
#define CTPIS_Fault64_B1                                  g_dataBuffer_Display[2423] & bit0
#define CTPIS_Fault65_B1                                  g_dataBuffer_Display[2423] & bit15
#define CTPIS_Fault66_B1                                  g_dataBuffer_Display[2423] & bit14
#define CTPIS_Fault67_B1                                  g_dataBuffer_Display[2423] & bit13
#define CTPIS_Fault68_B1                                  g_dataBuffer_Display[2423] & bit12
#define CTPIS_Fault69_B1                                  g_dataBuffer_Display[2423] & bit11
#define CTPIS_Fault70_B1                                  g_dataBuffer_Display[2423] & bit10
#define CTPIS_Fault71_B1                                  g_dataBuffer_Display[2423] & bit9
#define CTPIS_Fault72_B1                                  g_dataBuffer_Display[2423] & bit8

//0XC10
#define FAU1CT_LifeSign_U8                     g_dataBuffer_Display[1712+14]/256
#define FAU1CT_VersionX_U8                     g_dataBuffer_Display[1712+15]%256

//#define FAU1CT_LifeSign_U8                     g_dataBuffer_Display[1712]%256
#define FAU1CT_CommuFaultBtwnFDCU_B1           g_dataBuffer_Display[1712]&bit15
//#define FAU1CT_VersionX_U8                     g_dataBuffer_Display[1713]%256
#define FAU1CT_VersionY_U8                     g_dataBuffer_Display[1713]/256

#define FAU1CT_FAU1Iso_B1                      g_dataBuffer_Display[1714]&bit7
#define FAU1CT_FAU1FaultShortCircuit_B1        g_dataBuffer_Display[1714]&bit5
#define FAU1CT_FAU1FaultOpenCircuit_B1         g_dataBuffer_Display[1714]&bit4
#define FAU1CT_FAU1FaultFan_B1                 g_dataBuffer_Display[1714]&bit3
#define FAU1CT_FAU1Pollute_B1                  g_dataBuffer_Display[1714]&bit2
#define FAU1CT_FAU1FaultCommu_B1               g_dataBuffer_Display[1714]&bit1
#define FAU1CT_FAU1FireAlert_B1                g_dataBuffer_Display[1714]&bit0

#define FAU1CT_FAU2Iso_B1                      g_dataBuffer_Display[1714]&bit15
#define FAU1CT_FAU2FaultShortCircuit_B1        g_dataBuffer_Display[1714]&bit13
#define FAU1CT_FAU2FaultOpenCircuit_B1         g_dataBuffer_Display[1714]&bit12
#define FAU1CT_FAU2FaultFan_B1                 g_dataBuffer_Display[1714]&bit11
#define FAU1CT_FAU2Pollute_B1                  g_dataBuffer_Display[1714]&bit10
#define FAU1CT_FAU2FaultCommu_B1               g_dataBuffer_Display[1714]&bit9
#define FAU1CT_FAU2FireAlert_B1                g_dataBuffer_Display[1714]&bit8

#define FAU1CT_FAU3Iso_B1                      g_dataBuffer_Display[1715]&bit7
#define FAU1CT_FAU3FaultShortCircuit_B1        g_dataBuffer_Display[1715]&bit5
#define FAU1CT_FAU3FaultOpenCircuit_B1         g_dataBuffer_Display[1715]&bit4
#define FAU1CT_FAU3FaultFan_B1                 g_dataBuffer_Display[1715]&bit3
#define FAU1CT_FAU3Pollute_B1                  g_dataBuffer_Display[1715]&bit2
#define FAU1CT_FAU3FaultCommu_B1               g_dataBuffer_Display[1715]&bit1
#define FAU1CT_FAU3FireAlert_B1                g_dataBuffer_Display[1715]&bit0

#define FAU1CT_FAU4Iso_B1                      g_dataBuffer_Display[1715]&bit15
#define FAU1CT_FAU4FaultShortCircuit_B1        g_dataBuffer_Display[1715]&bit13
#define FAU1CT_FAU4FaultOpenCircuit_B1         g_dataBuffer_Display[1715]&bit12
#define FAU1CT_FAU4FaultFan_B1                 g_dataBuffer_Display[1715]&bit11
#define FAU1CT_FAU4Pollute_B1                  g_dataBuffer_Display[1715]&bit10
#define FAU1CT_FAU4FaultCommu_B1               g_dataBuffer_Display[1715]&bit9
#define FAU1CT_FAU4FireAlert_B1                g_dataBuffer_Display[1715]&bit8

#define FAU1CT_FAU5Iso_B1                      g_dataBuffer_Display[1716]&bit7
#define FAU1CT_FAU5FaultShortCircuit_B1        g_dataBuffer_Display[1716]&bit5
#define FAU1CT_FAU5FaultOpenCircuit_B1         g_dataBuffer_Display[1716]&bit4
#define FAU1CT_FAU5FaultFan_B1                 g_dataBuffer_Display[1716]&bit3
#define FAU1CT_FAU5Pollute_B1                  g_dataBuffer_Display[1716]&bit2
#define FAU1CT_FAU5FaultCommu_B1               g_dataBuffer_Display[1716]&bit1
#define FAU1CT_FAU5FireAlert_B1                g_dataBuffer_Display[1716]&bit0

#define FAU1CT_FAU6Iso_B1                      g_dataBuffer_Display[1716]&bit15
#define FAU1CT_FAU6FaultShortCircuit_B1        g_dataBuffer_Display[1716]&bit13
#define FAU1CT_FAU6FaultOpenCircuit_B1         g_dataBuffer_Display[1716]&bit12
#define FAU1CT_FAU6FaultFan_B1                 g_dataBuffer_Display[1716]&bit11
#define FAU1CT_FAU6Pollute_B1                  g_dataBuffer_Display[1716]&bit10
#define FAU1CT_FAU6FaultCommu_B1               g_dataBuffer_Display[1716]&bit9
#define FAU1CT_FAU6FireAlert_B1                g_dataBuffer_Display[1716]&bit8

#define FAU1CT_FAU7Iso_B1                      g_dataBuffer_Display[1717]&bit7
#define FAU1CT_FAU7FaultShortCircuit_B1        g_dataBuffer_Display[1717]&bit5
#define FAU1CT_FAU7FaultOpenCircuit_B1         g_dataBuffer_Display[1717]&bit4
#define FAU1CT_FAU7FaultFan_B1                 g_dataBuffer_Display[1717]&bit3
#define FAU1CT_FAU7Pollute_B1                  g_dataBuffer_Display[1717]&bit2
#define FAU1CT_FAU7FaultCommu_B1               g_dataBuffer_Display[1717]&bit1
#define FAU1CT_FAU7FireAlert_B1                g_dataBuffer_Display[1717]&bit0

#define FAU1CT_FAU8Iso_B1                      g_dataBuffer_Display[1717]&bit15
#define FAU1CT_FAU8FaultShortCircuit_B1        g_dataBuffer_Display[1717]&bit13
#define FAU1CT_FAU8FaultOpenCircuit_B1         g_dataBuffer_Display[1717]&bit12
#define FAU1CT_FAU8FaultFan_B1                 g_dataBuffer_Display[1717]&bit11
#define FAU1CT_FAU8Pollute_B1                  g_dataBuffer_Display[1717]&bit10
#define FAU1CT_FAU8FaultCommu_B1               g_dataBuffer_Display[1717]&bit9
#define FAU1CT_FAU8FireAlert_B1                g_dataBuffer_Display[1717]&bit8

#define FAU1CT_FAU9Iso_B1                      g_dataBuffer_Display[1718]&bit7
#define FAU1CT_FAU9FaultShortCircuit_B1        g_dataBuffer_Display[1718]&bit5
#define FAU1CT_FAU9FaultOpenCircuit_B1         g_dataBuffer_Display[1718]&bit4
#define FAU1CT_FAU9FaultFan_B1                 g_dataBuffer_Display[1718]&bit3
#define FAU1CT_FAU9Pollute_B1                  g_dataBuffer_Display[1718]&bit2
#define FAU1CT_FAU9FaultCommu_B1               g_dataBuffer_Display[1718]&bit1
#define FAU1CT_FAU9FireAlert_B1                g_dataBuffer_Display[1718]&bit0

#define FAU1CT_FAU10Iso_B1                      g_dataBuffer_Display[1718]&bit15
#define FAU1CT_FAU10FaultShortCircuit_B1        g_dataBuffer_Display[1718]&bit13
#define FAU1CT_FAU10FaultOpenCircuit_B1         g_dataBuffer_Display[1718]&bit12
#define FAU1CT_FAU10FaultFan_B1                 g_dataBuffer_Display[1718]&bit11
#define FAU1CT_FAU10Pollute_B1                  g_dataBuffer_Display[1718]&bit10
#define FAU1CT_FAU10FaultCommu_B1               g_dataBuffer_Display[1718]&bit9
#define FAU1CT_FAU10FireAlert_B1                g_dataBuffer_Display[1718]&bit8

#define FAU1CT_FAU11Iso_B1                      g_dataBuffer_Display[1719]&bit7
#define FAU1CT_FAU11FaultShortCircuit_B1        g_dataBuffer_Display[1719]&bit5
#define FAU1CT_FAU11FaultOpenCircuit_B1         g_dataBuffer_Display[1719]&bit4
#define FAU1CT_FAU11FaultFan_B1                 g_dataBuffer_Display[1719]&bit3
#define FAU1CT_FAU11Pollute_B1                  g_dataBuffer_Display[1719]&bit2
#define FAU1CT_FAU11FaultCommu_B1               g_dataBuffer_Display[1719]&bit1
#define FAU1CT_FAU11FireAlert_B1                g_dataBuffer_Display[1719]&bit0

#define FAU1CT_FAU12Iso_B1                      g_dataBuffer_Display[1719]&bit15
#define FAU1CT_FAU12FaultShortCircuit_B1        g_dataBuffer_Display[1719]&bit13
#define FAU1CT_FAU12FaultOpenCircuit_B1         g_dataBuffer_Display[1719]&bit12
#define FAU1CT_FAU12FaultFan_B1                 g_dataBuffer_Display[1719]&bit11
#define FAU1CT_FAU12Pollute_B1                  g_dataBuffer_Display[1719]&bit10
#define FAU1CT_FAU12FaultCommu_B1               g_dataBuffer_Display[1719]&bit9
#define FAU1CT_FAU12FireAlert_B1                g_dataBuffer_Display[1719]&bit8

#define FAU1CT_FAU13Iso_B1                      g_dataBuffer_Display[1720]&bit7
#define FAU1CT_FAU13FaultShortCircuit_B1        g_dataBuffer_Display[1720]&bit5
#define FAU1CT_FAU13FaultOpenCircuit_B1         g_dataBuffer_Display[1720]&bit4
#define FAU1CT_FAU13FaultFan_B1                 g_dataBuffer_Display[1720]&bit3
#define FAU1CT_FAU13Pollute_B1                  g_dataBuffer_Display[1720]&bit2
#define FAU1CT_FAU13FaultCommu_B1               g_dataBuffer_Display[1720]&bit1
#define FAU1CT_FAU13FireAlert_B1                g_dataBuffer_Display[1720]&bit0

#define FAU1CT_FAU14Iso_B1                      g_dataBuffer_Display[1720]&bit15
#define FAU1CT_FAU14FaultShortCircuit_B1        g_dataBuffer_Display[1720]&bit13
#define FAU1CT_FAU14FaultOpenCircuit_B1         g_dataBuffer_Display[1720]&bit12
#define FAU1CT_FAU14FaultFan_B1                 g_dataBuffer_Display[1720]&bit11
#define FAU1CT_FAU14Pollute_B1                  g_dataBuffer_Display[1720]&bit10
#define FAU1CT_FAU14FaultCommu_B1               g_dataBuffer_Display[1720]&bit9
#define FAU1CT_FAU14FireAlert_B1                g_dataBuffer_Display[1720]&bit8

#define FAU1CT_FAU15Iso_B1                      g_dataBuffer_Display[1721]&bit7
#define FAU1CT_FAU15FaultShortCircuit_B1        g_dataBuffer_Display[1721]&bit5
#define FAU1CT_FAU15FaultOpenCircuit_B1         g_dataBuffer_Display[1721]&bit4
#define FAU1CT_FAU15FaultFan_B1                 g_dataBuffer_Display[1721]&bit3
#define FAU1CT_FAU15Pollute_B1                  g_dataBuffer_Display[1721]&bit2
#define FAU1CT_FAU15FaultCommu_B1               g_dataBuffer_Display[1721]&bit1
#define FAU1CT_FAU15FireAlert_B1                g_dataBuffer_Display[1721]&bit0

#define FAU1CT_FAU16Iso_B1                      g_dataBuffer_Display[1721]&bit15
#define FAU1CT_FAU16FaultShortCircuit_B1        g_dataBuffer_Display[1721]&bit13
#define FAU1CT_FAU16FaultOpenCircuit_B1         g_dataBuffer_Display[1721]&bit12
#define FAU1CT_FAU16FaultFan_B1                 g_dataBuffer_Display[1721]&bit11
#define FAU1CT_FAU16Pollute_B1                  g_dataBuffer_Display[1721]&bit10
#define FAU1CT_FAU16FaultCommu_B1               g_dataBuffer_Display[1721]&bit9
#define FAU1CT_FAU16FireAlert_B1                g_dataBuffer_Display[1721]&bit8

#define FAU1CT_FAU17Iso_B1                      g_dataBuffer_Display[1722]&bit7
#define FAU1CT_FAU17FaultShortCircuit_B1        g_dataBuffer_Display[1722]&bit5
#define FAU1CT_FAU17FaultOpenCircuit_B1         g_dataBuffer_Display[1722]&bit4
#define FAU1CT_FAU17FaultFan_B1                 g_dataBuffer_Display[1722]&bit3
#define FAU1CT_FAU17Pollute_B1                  g_dataBuffer_Display[1722]&bit2
#define FAU1CT_FAU17FaultCommu_B1               g_dataBuffer_Display[1722]&bit1
#define FAU1CT_FAU17FireAlert_B1                g_dataBuffer_Display[1722]&bit0

#define FAU1CT_FAU18Iso_B1                      g_dataBuffer_Display[1722]&bit15
#define FAU1CT_FAU18FaultShortCircuit_B1        g_dataBuffer_Display[1722]&bit13
#define FAU1CT_FAU18FaultOpenCircuit_B1         g_dataBuffer_Display[1722]&bit12
#define FAU1CT_FAU18FaultFan_B1                 g_dataBuffer_Display[1722]&bit11
#define FAU1CT_FAU18Pollute_B1                  g_dataBuffer_Display[1722]&bit10
#define FAU1CT_FAU18FaultCommu_B1               g_dataBuffer_Display[1722]&bit9
#define FAU1CT_FAU18FireAlert_B1                g_dataBuffer_Display[1722]&bit8

#define FAU1CT_FAU19Iso_B1                      g_dataBuffer_Display[1723]&bit7
#define FAU1CT_FAU19FaultShortCircuit_B1        g_dataBuffer_Display[1723]&bit5
#define FAU1CT_FAU19FaultOpenCircuit_B1         g_dataBuffer_Display[1723]&bit4
#define FAU1CT_FAU19FaultFan_B1                 g_dataBuffer_Display[1723]&bit3
#define FAU1CT_FAU19Pollute_B1                  g_dataBuffer_Display[1723]&bit2
#define FAU1CT_FAU19FaultCommu_B1               g_dataBuffer_Display[1723]&bit1
#define FAU1CT_FAU19FireAlert_B1                g_dataBuffer_Display[1723]&bit0

#define FAU1CT_FAU20Iso_B1                      g_dataBuffer_Display[1723]&bit15
#define FAU1CT_FAU20FaultShortCircuit_B1        g_dataBuffer_Display[1723]&bit13
#define FAU1CT_FAU20FaultOpenCircuit_B1         g_dataBuffer_Display[1723]&bit12
#define FAU1CT_FAU20FaultFan_B1                 g_dataBuffer_Display[1723]&bit11
#define FAU1CT_FAU20Pollute_B1                  g_dataBuffer_Display[1723]&bit10
#define FAU1CT_FAU20FaultCommu_B1               g_dataBuffer_Display[1723]&bit9
#define FAU1CT_FAU20FireAlert_B1                g_dataBuffer_Display[1723]&bit8

#define FAU1CT_FAU21Iso_B1                      g_dataBuffer_Display[1724]&bit7
#define FAU1CT_FAU21FaultShortCircuit_B1        g_dataBuffer_Display[1724]&bit5
#define FAU1CT_FAU21FaultOpenCircuit_B1         g_dataBuffer_Display[1724]&bit4
#define FAU1CT_FAU21FaultFan_B1                 g_dataBuffer_Display[1724]&bit3
#define FAU1CT_FAU21Pollute_B1                  g_dataBuffer_Display[1724]&bit2
#define FAU1CT_FAU21FaultCommu_B1               g_dataBuffer_Display[1724]&bit1
#define FAU1CT_FAU21FireAlert_B1                g_dataBuffer_Display[1724]&bit0

#define FAU1CT_FAU22Iso_B1                      g_dataBuffer_Display[1724]&bit15
#define FAU1CT_FAU22FaultShortCircuit_B1        g_dataBuffer_Display[1724]&bit13
#define FAU1CT_FAU22FaultOpenCircuit_B1         g_dataBuffer_Display[1724]&bit12
#define FAU1CT_FAU22FaultFan_B1                 g_dataBuffer_Display[1724]&bit11
#define FAU1CT_FAU22Pollute_B1                  g_dataBuffer_Display[1724]&bit10
#define FAU1CT_FAU22FaultCommu_B1               g_dataBuffer_Display[1724]&bit9
#define FAU1CT_FAU22FireAlert_B1                g_dataBuffer_Display[1724]&bit8

#define FAU1CT_FAU23Iso_B1                      g_dataBuffer_Display[1725]&bit7
#define FAU1CT_FAU23FaultShortCircuit_B1        g_dataBuffer_Display[1725]&bit5
#define FAU1CT_FAU23FaultOpenCircuit_B1         g_dataBuffer_Display[1725]&bit4
#define FAU1CT_FAU23FaultFan_B1                 g_dataBuffer_Display[1725]&bit3
#define FAU1CT_FAU23Pollute_B1                  g_dataBuffer_Display[1725]&bit2
#define FAU1CT_FAU23FaultCommu_B1               g_dataBuffer_Display[1725]&bit1
#define FAU1CT_FAU23FireAlert_B1                g_dataBuffer_Display[1725]&bit0

#define FAU1CT_FAU24Iso_B1                      g_dataBuffer_Display[1725]&bit15
#define FAU1CT_FAU24FaultShortCircuit_B1        g_dataBuffer_Display[1725]&bit13
#define FAU1CT_FAU24FaultOpenCircuit_B1         g_dataBuffer_Display[1725]&bit12
#define FAU1CT_FAU24FaultFan_B1                 g_dataBuffer_Display[1725]&bit11
#define FAU1CT_FAU24Pollute_B1                  g_dataBuffer_Display[1725]&bit10
#define FAU1CT_FAU24FaultCommu_B1               g_dataBuffer_Display[1725]&bit9
#define FAU1CT_FAU24FireAlert_B1                g_dataBuffer_Display[1725]&bit8

#define FAU1CT_FAU25Iso_B1                      g_dataBuffer_Display[1726]&bit7
#define FAU1CT_FAU25FaultShortCircuit_B1        g_dataBuffer_Display[1726]&bit5
#define FAU1CT_FAU25FaultOpenCircuit_B1         g_dataBuffer_Display[1726]&bit4
#define FAU1CT_FAU25FaultFan_B1                 g_dataBuffer_Display[1726]&bit3
#define FAU1CT_FAU25Pollute_B1                  g_dataBuffer_Display[1726]&bit2
#define FAU1CT_FAU25FaultCommu_B1               g_dataBuffer_Display[1726]&bit1
#define FAU1CT_FAU25FireAlert_B1                g_dataBuffer_Display[1726]&bit0

#define FAU1CT_FAU26Iso_B1                      g_dataBuffer_Display[1726]&bit15
#define FAU1CT_FAU26FaultShortCircuit_B1        g_dataBuffer_Display[1726]&bit13
#define FAU1CT_FAU26FaultOpenCircuit_B1         g_dataBuffer_Display[1726]&bit12
#define FAU1CT_FAU26FaultFan_B1                 g_dataBuffer_Display[1726]&bit11
#define FAU1CT_FAU26Pollute_B1                  g_dataBuffer_Display[1726]&bit10
#define FAU1CT_FAU26FaultCommu_B1               g_dataBuffer_Display[1726]&bit9
#define FAU1CT_FAU26FireAlert_B1                g_dataBuffer_Display[1726]&bit8

#define FAU1CT_FAU27Iso_B1                      g_dataBuffer_Display[1727]&bit7
#define FAU1CT_FAU27FaultShortCircuit_B1        g_dataBuffer_Display[1727]&bit5
#define FAU1CT_FAU27FaultOpenCircuit_B1         g_dataBuffer_Display[1727]&bit4
#define FAU1CT_FAU27FaultFan_B1                 g_dataBuffer_Display[1727]&bit3
#define FAU1CT_FAU27Pollute_B1                  g_dataBuffer_Display[1727]&bit2
#define FAU1CT_FAU27FaultCommu_B1               g_dataBuffer_Display[1727]&bit1
#define FAU1CT_FAU27FireAlert_B1                g_dataBuffer_Display[1727]&bit0

#define FAU1CT_FAU28Iso_B1                      g_dataBuffer_Display[1727]&bit15
#define FAU1CT_FAU28FaultShortCircuit_B1        g_dataBuffer_Display[1727]&bit13
#define FAU1CT_FAU28FaultOpenCircuit_B1         g_dataBuffer_Display[1727]&bit12
#define FAU1CT_FAU28FaultFan_B1                 g_dataBuffer_Display[1727]&bit11
#define FAU1CT_FAU28Pollute_B1                  g_dataBuffer_Display[1727]&bit10
#define FAU1CT_FAU28FaultCommu_B1               g_dataBuffer_Display[1727]&bit9
#define FAU1CT_FAU28FireAlert_B1                g_dataBuffer_Display[1727]&bit8

//0XC20
#define FAU2CT_LifeSign_U8                     g_dataBuffer_Display[16+1712+14]/256
#define FAU2CT_VersionX_U8                     g_dataBuffer_Display[16+1712+15]%256

//#define FAU2CT_LifeSign_U8                     g_dataBuffer_Display[16+1712]%256
#define FAU2CT_CommuFaultBtwnFDCU_B1           g_dataBuffer_Display[16+1712]&bit15
//#define FAU2CT_VersionX_U8                     g_dataBuffer_Display[16+1713]%256
#define FAU2CT_VersionY_U8                     g_dataBuffer_Display[16+1713]/256

#define FAU2CT_FAU1Iso_B1                      g_dataBuffer_Display[16+1714]&bit7
#define FAU2CT_FAU1FaultShortCircuit_B1        g_dataBuffer_Display[16+1714]&bit5
#define FAU2CT_FAU1FaultOpenCircuit_B1         g_dataBuffer_Display[16+1714]&bit4
#define FAU2CT_FAU1FaultFan_B1                 g_dataBuffer_Display[16+1714]&bit3
#define FAU2CT_FAU1Pollute_B1                  g_dataBuffer_Display[16+1714]&bit2
#define FAU2CT_FAU1FaultCommu_B1               g_dataBuffer_Display[16+1714]&bit1
#define FAU2CT_FAU1FireAlert_B1                g_dataBuffer_Display[16+1714]&bit0

#define FAU2CT_FAU2Iso_B1                      g_dataBuffer_Display[16+1714]&bit15
#define FAU2CT_FAU2FaultShortCircuit_B1        g_dataBuffer_Display[16+1714]&bit13
#define FAU2CT_FAU2FaultOpenCircuit_B1         g_dataBuffer_Display[16+1714]&bit12
#define FAU2CT_FAU2FaultFan_B1                 g_dataBuffer_Display[16+1714]&bit11
#define FAU2CT_FAU2Pollute_B1                  g_dataBuffer_Display[16+1714]&bit10
#define FAU2CT_FAU2FaultCommu_B1               g_dataBuffer_Display[16+1714]&bit9
#define FAU2CT_FAU2FireAlert_B1                g_dataBuffer_Display[16+1714]&bit8

#define FAU2CT_FAU3Iso_B1                      g_dataBuffer_Display[16+1715]&bit7
#define FAU2CT_FAU3FaultShortCircuit_B1        g_dataBuffer_Display[16+1715]&bit5
#define FAU2CT_FAU3FaultOpenCircuit_B1         g_dataBuffer_Display[16+1715]&bit4
#define FAU2CT_FAU3FaultFan_B1                 g_dataBuffer_Display[16+1715]&bit3
#define FAU2CT_FAU3Pollute_B1                  g_dataBuffer_Display[16+1715]&bit2
#define FAU2CT_FAU3FaultCommu_B1               g_dataBuffer_Display[16+1715]&bit1
#define FAU2CT_FAU3FireAlert_B1                g_dataBuffer_Display[16+1715]&bit0

#define FAU2CT_FAU4Iso_B1                      g_dataBuffer_Display[16+1715]&bit15
#define FAU2CT_FAU4FaultShortCircuit_B1        g_dataBuffer_Display[16+1715]&bit13
#define FAU2CT_FAU4FaultOpenCircuit_B1         g_dataBuffer_Display[16+1715]&bit12
#define FAU2CT_FAU4FaultFan_B1                 g_dataBuffer_Display[16+1715]&bit11
#define FAU2CT_FAU4Pollute_B1                  g_dataBuffer_Display[16+1715]&bit10
#define FAU2CT_FAU4FaultCommu_B1               g_dataBuffer_Display[16+1715]&bit9
#define FAU2CT_FAU4FireAlert_B1                g_dataBuffer_Display[16+1715]&bit8

#define FAU2CT_FAU5Iso_B1                      g_dataBuffer_Display[16+1716]&bit7
#define FAU2CT_FAU5FaultShortCircuit_B1        g_dataBuffer_Display[16+1716]&bit5
#define FAU2CT_FAU5FaultOpenCircuit_B1         g_dataBuffer_Display[16+1716]&bit4
#define FAU2CT_FAU5FaultFan_B1                 g_dataBuffer_Display[16+1716]&bit3
#define FAU2CT_FAU5Pollute_B1                  g_dataBuffer_Display[16+1716]&bit2
#define FAU2CT_FAU5FaultCommu_B1               g_dataBuffer_Display[16+1716]&bit1
#define FAU2CT_FAU5FireAlert_B1                g_dataBuffer_Display[16+1716]&bit0

#define FAU2CT_FAU6Iso_B1                      g_dataBuffer_Display[16+1716]&bit15
#define FAU2CT_FAU6FaultShortCircuit_B1        g_dataBuffer_Display[16+1716]&bit13
#define FAU2CT_FAU6FaultOpenCircuit_B1         g_dataBuffer_Display[16+1716]&bit12
#define FAU2CT_FAU6FaultFan_B1                 g_dataBuffer_Display[16+1716]&bit11
#define FAU2CT_FAU6Pollute_B1                  g_dataBuffer_Display[16+1716]&bit10
#define FAU2CT_FAU6FaultCommu_B1               g_dataBuffer_Display[16+1716]&bit9
#define FAU2CT_FAU6FireAlert_B1                g_dataBuffer_Display[16+1716]&bit8

#define FAU2CT_FAU7Iso_B1                      g_dataBuffer_Display[16+1717]&bit7
#define FAU2CT_FAU7FaultShortCircuit_B1        g_dataBuffer_Display[16+1717]&bit5
#define FAU2CT_FAU7FaultOpenCircuit_B1         g_dataBuffer_Display[16+1717]&bit4
#define FAU2CT_FAU7FaultFan_B1                 g_dataBuffer_Display[16+1717]&bit3
#define FAU2CT_FAU7Pollute_B1                  g_dataBuffer_Display[16+1717]&bit2
#define FAU2CT_FAU7FaultCommu_B1               g_dataBuffer_Display[16+1717]&bit1
#define FAU2CT_FAU7FireAlert_B1                g_dataBuffer_Display[16+1717]&bit0

#define FAU2CT_FAU8Iso_B1                      g_dataBuffer_Display[16+1717]&bit15
#define FAU2CT_FAU8FaultShortCircuit_B1        g_dataBuffer_Display[16+1717]&bit13
#define FAU2CT_FAU8FaultOpenCircuit_B1         g_dataBuffer_Display[16+1717]&bit12
#define FAU2CT_FAU8FaultFan_B1                 g_dataBuffer_Display[16+1717]&bit11
#define FAU2CT_FAU8Pollute_B1                  g_dataBuffer_Display[16+1717]&bit10
#define FAU2CT_FAU8FaultCommu_B1               g_dataBuffer_Display[16+1717]&bit9
#define FAU2CT_FAU8FireAlert_B1                g_dataBuffer_Display[16+1717]&bit8

#define FAU2CT_FAU9Iso_B1                      g_dataBuffer_Display[16+1718]&bit7
#define FAU2CT_FAU9FaultShortCircuit_B1        g_dataBuffer_Display[16+1718]&bit5
#define FAU2CT_FAU9FaultOpenCircuit_B1         g_dataBuffer_Display[16+1718]&bit4
#define FAU2CT_FAU9FaultFan_B1                 g_dataBuffer_Display[16+1718]&bit3
#define FAU2CT_FAU9Pollute_B1                  g_dataBuffer_Display[16+1718]&bit2
#define FAU2CT_FAU9FaultCommu_B1               g_dataBuffer_Display[16+1718]&bit1
#define FAU2CT_FAU9FireAlert_B1                g_dataBuffer_Display[16+1718]&bit0

#define FAU2CT_FAU10Iso_B1                      g_dataBuffer_Display[16+1718]&bit15
#define FAU2CT_FAU10FaultShortCircuit_B1        g_dataBuffer_Display[16+1718]&bit13
#define FAU2CT_FAU10FaultOpenCircuit_B1         g_dataBuffer_Display[16+1718]&bit12
#define FAU2CT_FAU10FaultFan_B1                 g_dataBuffer_Display[16+1718]&bit11
#define FAU2CT_FAU10Pollute_B1                  g_dataBuffer_Display[16+1718]&bit10
#define FAU2CT_FAU10FaultCommu_B1               g_dataBuffer_Display[16+1718]&bit9
#define FAU2CT_FAU10FireAlert_B1                g_dataBuffer_Display[16+1718]&bit8

#define FAU2CT_FAU11Iso_B1                      g_dataBuffer_Display[16+1719]&bit7
#define FAU2CT_FAU11FaultShortCircuit_B1        g_dataBuffer_Display[16+1719]&bit5
#define FAU2CT_FAU11FaultOpenCircuit_B1         g_dataBuffer_Display[16+1719]&bit4
#define FAU2CT_FAU11FaultFan_B1                 g_dataBuffer_Display[16+1719]&bit3
#define FAU2CT_FAU11Pollute_B1                  g_dataBuffer_Display[16+1719]&bit2
#define FAU2CT_FAU11FaultCommu_B1               g_dataBuffer_Display[16+1719]&bit1
#define FAU2CT_FAU11FireAlert_B1                g_dataBuffer_Display[16+1719]&bit0

#define FAU2CT_FAU12Iso_B1                      g_dataBuffer_Display[16+1719]&bit15
#define FAU2CT_FAU12FaultShortCircuit_B1        g_dataBuffer_Display[16+1719]&bit13
#define FAU2CT_FAU12FaultOpenCircuit_B1         g_dataBuffer_Display[16+1719]&bit12
#define FAU2CT_FAU12FaultFan_B1                 g_dataBuffer_Display[16+1719]&bit11
#define FAU2CT_FAU12Pollute_B1                  g_dataBuffer_Display[16+1719]&bit10
#define FAU2CT_FAU12FaultCommu_B1               g_dataBuffer_Display[16+1719]&bit9
#define FAU2CT_FAU12FireAlert_B1                g_dataBuffer_Display[16+1719]&bit8

#define FAU2CT_FAU13Iso_B1                      g_dataBuffer_Display[16+1720]&bit7
#define FAU2CT_FAU13FaultShortCircuit_B1        g_dataBuffer_Display[16+1720]&bit5
#define FAU2CT_FAU13FaultOpenCircuit_B1         g_dataBuffer_Display[16+1720]&bit4
#define FAU2CT_FAU13FaultFan_B1                 g_dataBuffer_Display[16+1720]&bit3
#define FAU2CT_FAU13Pollute_B1                  g_dataBuffer_Display[16+1720]&bit2
#define FAU2CT_FAU13FaultCommu_B1               g_dataBuffer_Display[16+1720]&bit1
#define FAU2CT_FAU13FireAlert_B1                g_dataBuffer_Display[16+1720]&bit0

#define FAU2CT_FAU14Iso_B1                      g_dataBuffer_Display[16+1720]&bit15
#define FAU2CT_FAU14FaultShortCircuit_B1        g_dataBuffer_Display[16+1720]&bit13
#define FAU2CT_FAU14FaultOpenCircuit_B1         g_dataBuffer_Display[16+1720]&bit12
#define FAU2CT_FAU14FaultFan_B1                 g_dataBuffer_Display[16+1720]&bit11
#define FAU2CT_FAU14Pollute_B1                  g_dataBuffer_Display[16+1720]&bit10
#define FAU2CT_FAU14FaultCommu_B1               g_dataBuffer_Display[16+1720]&bit9
#define FAU2CT_FAU14FireAlert_B1                g_dataBuffer_Display[16+1720]&bit8

#define FAU2CT_FAU15Iso_B1                      g_dataBuffer_Display[16+1721]&bit7
#define FAU2CT_FAU15FaultShortCircuit_B1        g_dataBuffer_Display[16+1721]&bit5
#define FAU2CT_FAU15FaultOpenCircuit_B1         g_dataBuffer_Display[16+1721]&bit4
#define FAU2CT_FAU15FaultFan_B1                 g_dataBuffer_Display[16+1721]&bit3
#define FAU2CT_FAU15Pollute_B1                  g_dataBuffer_Display[16+1721]&bit2
#define FAU2CT_FAU15FaultCommu_B1               g_dataBuffer_Display[16+1721]&bit1
#define FAU2CT_FAU15FireAlert_B1                g_dataBuffer_Display[16+1721]&bit0

#define FAU2CT_FAU16Iso_B1                      g_dataBuffer_Display[16+1721]&bit15
#define FAU2CT_FAU16FaultShortCircuit_B1        g_dataBuffer_Display[16+1721]&bit13
#define FAU2CT_FAU16FaultOpenCircuit_B1         g_dataBuffer_Display[16+1721]&bit12
#define FAU2CT_FAU16FaultFan_B1                 g_dataBuffer_Display[16+1721]&bit11
#define FAU2CT_FAU16Pollute_B1                  g_dataBuffer_Display[16+1721]&bit10
#define FAU2CT_FAU16FaultCommu_B1               g_dataBuffer_Display[16+1721]&bit9
#define FAU2CT_FAU16FireAlert_B1                g_dataBuffer_Display[16+1721]&bit8

#define FAU2CT_FAU17Iso_B1                      g_dataBuffer_Display[16+1722]&bit7
#define FAU2CT_FAU17FaultShortCircuit_B1        g_dataBuffer_Display[16+1722]&bit5
#define FAU2CT_FAU17FaultOpenCircuit_B1         g_dataBuffer_Display[16+1722]&bit4
#define FAU2CT_FAU17FaultFan_B1                 g_dataBuffer_Display[16+1722]&bit3
#define FAU2CT_FAU17Pollute_B1                  g_dataBuffer_Display[16+1722]&bit2
#define FAU2CT_FAU17FaultCommu_B1               g_dataBuffer_Display[16+1722]&bit1
#define FAU2CT_FAU17FireAlert_B1                g_dataBuffer_Display[16+1722]&bit0

#define FAU2CT_FAU18Iso_B1                      g_dataBuffer_Display[16+1722]&bit15
#define FAU2CT_FAU18FaultShortCircuit_B1        g_dataBuffer_Display[16+1722]&bit13
#define FAU2CT_FAU18FaultOpenCircuit_B1         g_dataBuffer_Display[16+1722]&bit12
#define FAU2CT_FAU18FaultFan_B1                 g_dataBuffer_Display[16+1722]&bit11
#define FAU2CT_FAU18Pollute_B1                  g_dataBuffer_Display[16+1722]&bit10
#define FAU2CT_FAU18FaultCommu_B1               g_dataBuffer_Display[16+1722]&bit9
#define FAU2CT_FAU18FireAlert_B1                g_dataBuffer_Display[16+1722]&bit8

#define FAU2CT_FAU19Iso_B1                      g_dataBuffer_Display[16+1723]&bit7
#define FAU2CT_FAU19FaultShortCircuit_B1        g_dataBuffer_Display[16+1723]&bit5
#define FAU2CT_FAU19FaultOpenCircuit_B1         g_dataBuffer_Display[16+1723]&bit4
#define FAU2CT_FAU19FaultFan_B1                 g_dataBuffer_Display[16+1723]&bit3
#define FAU2CT_FAU19Pollute_B1                  g_dataBuffer_Display[16+1723]&bit2
#define FAU2CT_FAU19FaultCommu_B1               g_dataBuffer_Display[16+1723]&bit1
#define FAU2CT_FAU19FireAlert_B1                g_dataBuffer_Display[16+1723]&bit0

#define FAU2CT_FAU20Iso_B1                      g_dataBuffer_Display[16+1723]&bit15
#define FAU2CT_FAU20FaultShortCircuit_B1        g_dataBuffer_Display[16+1723]&bit13
#define FAU2CT_FAU20FaultOpenCircuit_B1         g_dataBuffer_Display[16+1723]&bit12
#define FAU2CT_FAU20FaultFan_B1                 g_dataBuffer_Display[16+1723]&bit11
#define FAU2CT_FAU20Pollute_B1                  g_dataBuffer_Display[16+1723]&bit10
#define FAU2CT_FAU20FaultCommu_B1               g_dataBuffer_Display[16+1723]&bit9
#define FAU2CT_FAU20FireAlert_B1                g_dataBuffer_Display[16+1723]&bit8

#define FAU2CT_FAU21Iso_B1                      g_dataBuffer_Display[16+1724]&bit7
#define FAU2CT_FAU21FaultShortCircuit_B1        g_dataBuffer_Display[16+1724]&bit5
#define FAU2CT_FAU21FaultOpenCircuit_B1         g_dataBuffer_Display[16+1724]&bit4
#define FAU2CT_FAU21FaultFan_B1                 g_dataBuffer_Display[16+1724]&bit3
#define FAU2CT_FAU21Pollute_B1                  g_dataBuffer_Display[16+1724]&bit2
#define FAU2CT_FAU21FaultCommu_B1               g_dataBuffer_Display[16+1724]&bit1
#define FAU2CT_FAU21FireAlert_B1                g_dataBuffer_Display[16+1724]&bit0

#define FAU2CT_FAU22Iso_B1                      g_dataBuffer_Display[16+1724]&bit15
#define FAU2CT_FAU22FaultShortCircuit_B1        g_dataBuffer_Display[16+1724]&bit13
#define FAU2CT_FAU22FaultOpenCircuit_B1         g_dataBuffer_Display[16+1724]&bit12
#define FAU2CT_FAU22FaultFan_B1                 g_dataBuffer_Display[16+1724]&bit11
#define FAU2CT_FAU22Pollute_B1                  g_dataBuffer_Display[16+1724]&bit10
#define FAU2CT_FAU22FaultCommu_B1               g_dataBuffer_Display[16+1724]&bit9
#define FAU2CT_FAU22FireAlert_B1                g_dataBuffer_Display[16+1724]&bit8

#define FAU2CT_FAU23Iso_B1                      g_dataBuffer_Display[16+1725]&bit7
#define FAU2CT_FAU23FaultShortCircuit_B1        g_dataBuffer_Display[16+1725]&bit5
#define FAU2CT_FAU23FaultOpenCircuit_B1         g_dataBuffer_Display[16+1725]&bit4
#define FAU2CT_FAU23FaultFan_B1                 g_dataBuffer_Display[16+1725]&bit3
#define FAU2CT_FAU23Pollute_B1                  g_dataBuffer_Display[16+1725]&bit2
#define FAU2CT_FAU23FaultCommu_B1               g_dataBuffer_Display[16+1725]&bit1
#define FAU2CT_FAU23FireAlert_B1                g_dataBuffer_Display[16+1725]&bit0

#define FAU2CT_FAU24Iso_B1                      g_dataBuffer_Display[16+1725]&bit15
#define FAU2CT_FAU24FaultShortCircuit_B1        g_dataBuffer_Display[16+1725]&bit13
#define FAU2CT_FAU24FaultOpenCircuit_B1         g_dataBuffer_Display[16+1725]&bit12
#define FAU2CT_FAU24FaultFan_B1                 g_dataBuffer_Display[16+1725]&bit11
#define FAU2CT_FAU24Pollute_B1                  g_dataBuffer_Display[16+1725]&bit10
#define FAU2CT_FAU24FaultCommu_B1               g_dataBuffer_Display[16+1725]&bit9
#define FAU2CT_FAU24FireAlert_B1                g_dataBuffer_Display[16+1725]&bit8

#define FAU2CT_FAU25Iso_B1                      g_dataBuffer_Display[16+1726]&bit7
#define FAU2CT_FAU25FaultShortCircuit_B1        g_dataBuffer_Display[16+1726]&bit5
#define FAU2CT_FAU25FaultOpenCircuit_B1         g_dataBuffer_Display[16+1726]&bit4
#define FAU2CT_FAU25FaultFan_B1                 g_dataBuffer_Display[16+1726]&bit3
#define FAU2CT_FAU25Pollute_B1                  g_dataBuffer_Display[16+1726]&bit2
#define FAU2CT_FAU25FaultCommu_B1               g_dataBuffer_Display[16+1726]&bit1
#define FAU2CT_FAU25FireAlert_B1                g_dataBuffer_Display[16+1726]&bit0

#define FAU2CT_FAU26Iso_B1                      g_dataBuffer_Display[16+1726]&bit15
#define FAU2CT_FAU26FaultShortCircuit_B1        g_dataBuffer_Display[16+1726]&bit13
#define FAU2CT_FAU26FaultOpenCircuit_B1         g_dataBuffer_Display[16+1726]&bit12
#define FAU2CT_FAU26FaultFan_B1                 g_dataBuffer_Display[16+1726]&bit11
#define FAU2CT_FAU26Pollute_B1                  g_dataBuffer_Display[16+1726]&bit10
#define FAU2CT_FAU26FaultCommu_B1               g_dataBuffer_Display[16+1726]&bit9
#define FAU2CT_FAU26FireAlert_B1                g_dataBuffer_Display[16+1726]&bit8

#define FAU2CT_FAU27Iso_B1                      g_dataBuffer_Display[16+1727]&bit7
#define FAU2CT_FAU27FaultShortCircuit_B1        g_dataBuffer_Display[16+1727]&bit5
#define FAU2CT_FAU27FaultOpenCircuit_B1         g_dataBuffer_Display[16+1727]&bit4
#define FAU2CT_FAU27FaultFan_B1                 g_dataBuffer_Display[16+1727]&bit3
#define FAU2CT_FAU27Pollute_B1                  g_dataBuffer_Display[16+1727]&bit2
#define FAU2CT_FAU27FaultCommu_B1               g_dataBuffer_Display[16+1727]&bit1
#define FAU2CT_FAU27FireAlert_B1                g_dataBuffer_Display[16+1727]&bit0

#define FAU2CT_FAU28Iso_B1                      g_dataBuffer_Display[16+1727]&bit15
#define FAU2CT_FAU28FaultShortCircuit_B1        g_dataBuffer_Display[16+1727]&bit13
#define FAU2CT_FAU28FaultOpenCircuit_B1         g_dataBuffer_Display[16+1727]&bit12
#define FAU2CT_FAU28FaultFan_B1                 g_dataBuffer_WH_Display[16+1727]&bit11
#define FAU2CT_FAU28Pollute_B1                  g_dataBuffer_WH_Display[16+1727]&bit10
#define FAU2CT_FAU28FaultCommu_B1               g_dataBuffer_WH_Display[16+1727]&bit9
#define FAU2CT_FAU28FireAlert_B1                g_dataBuffer_WH_Display[16+1727]&bit8




extern WORD PIS_Master_9i0_1;
extern WORD PIS_Master_9i0_2;
extern WORD PIS_Master_9i0_3;
extern WORD PIS_Master_9i0_4;
extern WORD PIS_Master_9i0_5;
extern WORD PIS_Master_9i0_6;
extern WORD PIS_Master_9i0_7;
extern WORD PIS_Master_9i0_8;
extern WORD PIS_Master_9i0_9;
extern WORD PIS_Master_9i0_10;
extern WORD PIS_Master_9i0_11;
extern WORD PIS_Master_9i0_12;
extern WORD PIS_Master_9i0_13;
extern WORD PIS_Master_9i0_14;
extern WORD PIS_Master_9i0_15;
extern WORD PIS_Master_9i0_16;

extern WORD PIS_Master_9i1_1;
extern WORD PIS_Master_9i1_2;
extern WORD PIS_Master_9i1_3;
extern WORD PIS_Master_9i1_4;
extern WORD PIS_Master_9i1_5;
extern WORD PIS_Master_9i1_6;
extern WORD PIS_Master_9i1_7;
extern WORD PIS_Master_9i1_8;
extern WORD PIS_Master_9i1_9;
extern WORD PIS_Master_9i1_10;
extern WORD PIS_Master_9i1_11;
extern WORD PIS_Master_9i1_12;
extern WORD PIS_Master_9i1_13;
extern WORD PIS_Master_9i1_14;
extern WORD PIS_Master_9i1_15;
extern WORD PIS_Master_9i1_16;

extern WORD  FAS_Master_Bi0_1;
extern WORD  FAS_Master_Bi0_2;
extern WORD  FAS_Master_Bi0_3;
extern WORD  FAS_Master_Bi0_4;
extern WORD  FAS_Master_Bi0_5;
extern WORD  FAS_Master_Bi0_6;
extern WORD  FAS_Master_Bi0_7;
extern WORD  FAS_Master_Bi0_8;
extern WORD  FAS_Master_Bi0_9;
extern WORD  FAS_Master_Bi0_10;
extern WORD  FAS_Master_Bi0_11;
extern WORD  FAS_Master_Bi0_12;
extern WORD  FAS_Master_Bi0_13;
extern WORD  FAS_Master_Bi0_14;
extern WORD  FAS_Master_Bi0_15;
extern WORD  FAS_Master_Bi0_16;

extern WORD DI_110_1 ;
extern WORD DI_110_2 ;
extern WORD DI_110_3 ;
extern WORD DI_110_4 ;
extern WORD DI_110_5 ;
extern WORD DI_110_6 ;
extern WORD DI_110_7 ;
extern WORD DI_110_8 ;
extern WORD DI_110_9 ;
extern WORD DI_110_10 ;
extern WORD DI_110_11 ;
extern WORD DI_110_12 ;
extern WORD DI_110_13 ;
extern WORD DI_110_14 ;
extern WORD DI_110_15 ;
extern WORD DI_110_16 ;

extern WORD AX_114_1 ;
extern WORD AX_114_2 ;
extern WORD AX_114_3 ;
extern WORD AX_114_4 ;
extern WORD AX_114_5 ;
extern WORD AX_114_6 ;
extern WORD AX_114_7 ;
extern WORD AX_114_8 ;
extern WORD AX_114_9 ;
extern WORD AX_114_10 ;
extern WORD AX_114_11 ;
extern WORD AX_114_12 ;
extern WORD AX_114_13 ;
extern WORD AX_114_14 ;
extern WORD AX_114_15 ;
extern WORD AX_114_16 ;

extern WORD DI_120_1 ;
extern WORD DI_120_2 ;
extern WORD DI_120_3 ;
extern WORD DI_120_4 ;
extern WORD DI_120_5 ;
extern WORD DI_120_6 ;
extern WORD DI_120_7 ;
extern WORD DI_120_8 ;
extern WORD DI_120_9 ;
extern WORD DI_120_10 ;
extern WORD DI_120_11 ;
extern WORD DI_120_12 ;
extern WORD DI_120_13 ;
extern WORD DI_120_14 ;
extern WORD DI_120_15 ;
extern WORD DI_120_16 ;

extern WORD DI_130_1 ;
extern WORD DI_130_2 ;
extern WORD DI_130_3 ;
extern WORD DI_130_4 ;
extern WORD DI_130_5 ;
extern WORD DI_130_6 ;
extern WORD DI_130_7 ;
extern WORD DI_130_8 ;
extern WORD DI_130_9 ;
extern WORD DI_130_10 ;
extern WORD DI_130_11 ;
extern WORD DI_130_12 ;
extern WORD DI_130_13 ;
extern WORD DI_130_14 ;
extern WORD DI_130_15 ;
extern WORD DI_130_16 ;

extern WORD DI_140_1 ;
extern WORD DI_140_2 ;
extern WORD DI_140_3 ;
extern WORD DI_140_4 ;
extern WORD DI_140_5 ;
extern WORD DI_140_6 ;
extern WORD DI_140_7 ;
extern WORD DI_140_8 ;
extern WORD DI_140_9 ;
extern WORD DI_140_10 ;
extern WORD DI_140_11 ;
extern WORD DI_140_12 ;
extern WORD DI_140_13 ;
extern WORD DI_140_14 ;
extern WORD DI_140_15 ;
extern WORD DI_140_16 ;

extern WORD DI_150_1 ;
extern WORD DI_150_2 ;
extern WORD DI_150_3 ;
extern WORD DI_150_4 ;
extern WORD DI_150_5 ;
extern WORD DI_150_6 ;
extern WORD DI_150_7 ;
extern WORD DI_150_8 ;
extern WORD DI_150_9 ;
extern WORD DI_150_10 ;
extern WORD DI_150_11 ;
extern WORD DI_150_12 ;
extern WORD DI_150_13 ;
extern WORD DI_150_14 ;
extern WORD DI_150_15 ;
extern WORD DI_150_16 ;

extern WORD DI_160_1 ;
extern WORD DI_160_2 ;
extern WORD DI_160_3 ;
extern WORD DI_160_4 ;
extern WORD DI_160_5 ;
extern WORD DI_160_6 ;
extern WORD DI_160_7 ;
extern WORD DI_160_8 ;
extern WORD DI_160_9 ;
extern WORD DI_160_10 ;
extern WORD DI_160_11 ;
extern WORD DI_160_12 ;
extern WORD DI_160_13 ;
extern WORD DI_160_14 ;
extern WORD DI_160_15 ;
extern WORD DI_160_16 ;

extern WORD DI_170_1 ;
extern WORD DI_170_2 ;
extern WORD DI_170_3 ;
extern WORD DI_170_4 ;
extern WORD DI_170_5 ;
extern WORD DI_170_6 ;
extern WORD DI_170_7 ;
extern WORD DI_170_8 ;
extern WORD DI_170_9 ;
extern WORD DI_170_10 ;
extern WORD DI_170_11 ;
extern WORD DI_170_12 ;
extern WORD DI_170_13 ;
extern WORD DI_170_14 ;
extern WORD DI_170_15 ;
extern WORD DI_170_16 ;

extern WORD DI_180_1 ;
extern WORD DI_180_2 ;
extern WORD DI_180_3 ;
extern WORD DI_180_4 ;
extern WORD DI_180_5 ;
extern WORD DI_180_6 ;
extern WORD DI_180_7 ;
extern WORD DI_180_8 ;
extern WORD DI_180_9 ;
extern WORD DI_180_10 ;
extern WORD DI_180_11 ;
extern WORD DI_180_12 ;
extern WORD DI_180_13 ;
extern WORD DI_180_14 ;
extern WORD DI_180_15 ;
extern WORD DI_180_16 ;

extern WORD AX_184_1 ;
extern WORD AX_184_2 ;
extern WORD AX_184_3 ;
extern WORD AX_184_4 ;
extern WORD AX_184_5 ;
extern WORD AX_184_6 ;
extern WORD AX_184_7 ;
extern WORD AX_184_8 ;
extern WORD AX_184_9 ;
extern WORD AX_184_10 ;
extern WORD AX_184_11 ;
extern WORD AX_184_12 ;
extern WORD AX_184_13 ;
extern WORD AX_184_14 ;
extern WORD AX_184_15 ;
extern WORD AX_184_16 ;


extern WORD HMI_200_1;
extern WORD HMI_280_1;


extern WORD HMI_202_1;
extern WORD HMI_202_2;
extern WORD HMI_282_1;
extern WORD HMI_282_2;


extern WORD BCU_410_1;
extern WORD BCU_410_2;
extern WORD BCU_410_3;
extern WORD BCU_410_4;
extern WORD BCU_410_5;
extern WORD BCU_410_6;
extern WORD BCU_410_7;
extern WORD BCU_410_8;
extern WORD BCU_410_9;
extern WORD BCU_410_10;
extern WORD BCU_410_11;
extern WORD BCU_410_12;
extern WORD BCU_410_13;
extern WORD BCU_410_14;
extern WORD BCU_410_15;
extern WORD BCU_410_16;

extern WORD BCU_411_1;
extern WORD BCU_411_2;
extern WORD BCU_411_3;
extern WORD BCU_411_4;
extern WORD BCU_411_5;
extern WORD BCU_411_6;
extern WORD BCU_411_7;
extern WORD BCU_411_8;
extern WORD BCU_411_9;
extern WORD BCU_411_10;
extern WORD BCU_411_11;
extern WORD BCU_411_12;
extern WORD BCU_411_13;
extern WORD BCU_411_14;
extern WORD BCU_411_15;
extern WORD BCU_411_16;

extern WORD BCU_412_1;
extern WORD BCU_412_2;
extern WORD BCU_412_3;
extern WORD BCU_412_4;
extern WORD BCU_412_5;
extern WORD BCU_412_6;
extern WORD BCU_412_7;
extern WORD BCU_412_8;
extern WORD BCU_412_9;
extern WORD BCU_412_10;
extern WORD BCU_412_11;
extern WORD BCU_412_12;
extern WORD BCU_412_13;
extern WORD BCU_412_14;
extern WORD BCU_412_15;
extern WORD BCU_412_16;

extern WORD BCU_413_1;
extern WORD BCU_413_2;
extern WORD BCU_413_3;
extern WORD BCU_413_4;
extern WORD BCU_413_5;
extern WORD BCU_413_6;
extern WORD BCU_413_7;
extern WORD BCU_413_8;
extern WORD BCU_413_9;
extern WORD BCU_413_10;
extern WORD BCU_413_11;
extern WORD BCU_413_12;
extern WORD BCU_413_13;
extern WORD BCU_413_14;
extern WORD BCU_413_15;
extern WORD BCU_413_16;

extern WORD BCU_414_1;
extern WORD BCU_414_2;
extern WORD BCU_414_3;
extern WORD BCU_414_4;
extern WORD BCU_414_5;
extern WORD BCU_414_6;
extern WORD BCU_414_7;
extern WORD BCU_414_8;
extern WORD BCU_414_9;
extern WORD BCU_414_10;
extern WORD BCU_414_11;
extern WORD BCU_414_12;
extern WORD BCU_414_13;
extern WORD BCU_414_14;
extern WORD BCU_414_15;
extern WORD BCU_414_16;

extern WORD BCU_420_1;
extern WORD BCU_420_2;
extern WORD BCU_420_3;
extern WORD BCU_420_4;
extern WORD BCU_420_5;
extern WORD BCU_420_6;
extern WORD BCU_420_7;
extern WORD BCU_420_8;
extern WORD BCU_420_9;
extern WORD BCU_420_10;
extern WORD BCU_420_11;
extern WORD BCU_420_12;
extern WORD BCU_420_13;
extern WORD BCU_420_14;
extern WORD BCU_420_15;
extern WORD BCU_420_16;

extern WORD BCU_421_1;
extern WORD BCU_421_2;
extern WORD BCU_421_3;
extern WORD BCU_421_4;
extern WORD BCU_421_5;
extern WORD BCU_421_6;
extern WORD BCU_421_7;
extern WORD BCU_421_8;
extern WORD BCU_421_9;
extern WORD BCU_421_10;
extern WORD BCU_421_11;
extern WORD BCU_421_12;
extern WORD BCU_421_13;
extern WORD BCU_421_14;
extern WORD BCU_421_15;
extern WORD BCU_421_16;

extern WORD BCU_422_1;
extern WORD BCU_422_2;
extern WORD BCU_422_3;
extern WORD BCU_422_4;
extern WORD BCU_422_5;
extern WORD BCU_422_6;
extern WORD BCU_422_7;
extern WORD BCU_422_8;
extern WORD BCU_422_9;
extern WORD BCU_422_10;
extern WORD BCU_422_11;
extern WORD BCU_422_12;
extern WORD BCU_422_13;
extern WORD BCU_422_14;
extern WORD BCU_422_15;
extern WORD BCU_422_16;

extern WORD BCU_423_1;
extern WORD BCU_423_2;
extern WORD BCU_423_3;
extern WORD BCU_423_4;
extern WORD BCU_423_5;
extern WORD BCU_423_6;
extern WORD BCU_423_7;
extern WORD BCU_423_8;
extern WORD BCU_423_9;
extern WORD BCU_423_10;
extern WORD BCU_423_11;
extern WORD BCU_423_12;
extern WORD BCU_423_13;
extern WORD BCU_423_14;
extern WORD BCU_423_15;
extern WORD BCU_423_16;

extern WORD BCU_424_1;
extern WORD BCU_424_2;
extern WORD BCU_424_3;
extern WORD BCU_424_4;
extern WORD BCU_424_5;
extern WORD BCU_424_6;
extern WORD BCU_424_7;
extern WORD BCU_424_8;
extern WORD BCU_424_9;
extern WORD BCU_424_10;
extern WORD BCU_424_11;
extern WORD BCU_424_12;
extern WORD BCU_424_13;
extern WORD BCU_424_14;
extern WORD BCU_424_15;
extern WORD BCU_424_16;

extern WORD BCU_430_1;
extern WORD BCU_430_2;
extern WORD BCU_430_3;
extern WORD BCU_430_4;
extern WORD BCU_430_5;
extern WORD BCU_430_6;
extern WORD BCU_430_7;
extern WORD BCU_430_8;
extern WORD BCU_430_9;
extern WORD BCU_430_10;
extern WORD BCU_430_11;
extern WORD BCU_430_12;
extern WORD BCU_430_13;
extern WORD BCU_430_14;
extern WORD BCU_430_15;
extern WORD BCU_430_16;

extern WORD BCU_431_1;
extern WORD BCU_431_2;
extern WORD BCU_431_3;
extern WORD BCU_431_4;
extern WORD BCU_431_5;
extern WORD BCU_431_6;
extern WORD BCU_431_7;
extern WORD BCU_431_8;
extern WORD BCU_431_9;
extern WORD BCU_431_10;
extern WORD BCU_431_11;
extern WORD BCU_431_12;
extern WORD BCU_431_13;
extern WORD BCU_431_14;
extern WORD BCU_431_15;
extern WORD BCU_431_16;

extern WORD BCU_432_1;
extern WORD BCU_432_2;
extern WORD BCU_432_3;
extern WORD BCU_432_4;
extern WORD BCU_432_5;
extern WORD BCU_432_6;
extern WORD BCU_432_7;
extern WORD BCU_432_8;
extern WORD BCU_432_9;
extern WORD BCU_432_10;
extern WORD BCU_432_11;
extern WORD BCU_432_12;
extern WORD BCU_432_13;
extern WORD BCU_432_14;
extern WORD BCU_432_15;
extern WORD BCU_432_16;

extern WORD BCU_433_1;
extern WORD BCU_433_2;
extern WORD BCU_433_3;
extern WORD BCU_433_4;
extern WORD BCU_433_5;
extern WORD BCU_433_6;
extern WORD BCU_433_7;
extern WORD BCU_433_8;
extern WORD BCU_433_9;
extern WORD BCU_433_10;
extern WORD BCU_433_11;
extern WORD BCU_433_12;
extern WORD BCU_433_13;
extern WORD BCU_433_14;
extern WORD BCU_433_15;
extern WORD BCU_433_16;

extern WORD BCU_434_1;
extern WORD BCU_434_2;
extern WORD BCU_434_3;
extern WORD BCU_434_4;
extern WORD BCU_434_5;
extern WORD BCU_434_6;
extern WORD BCU_434_7;
extern WORD BCU_434_8;
extern WORD BCU_434_9;
extern WORD BCU_434_10;
extern WORD BCU_434_11;
extern WORD BCU_434_12;
extern WORD BCU_434_13;
extern WORD BCU_434_14;
extern WORD BCU_434_15;
extern WORD BCU_434_16;

extern WORD BCU_440_1;
extern WORD BCU_440_2;
extern WORD BCU_440_3;
extern WORD BCU_440_4;
extern WORD BCU_440_5;
extern WORD BCU_440_6;
extern WORD BCU_440_7;
extern WORD BCU_440_8;
extern WORD BCU_440_9;
extern WORD BCU_440_10;
extern WORD BCU_440_11;
extern WORD BCU_440_12;
extern WORD BCU_440_13;
extern WORD BCU_440_14;
extern WORD BCU_440_15;
extern WORD BCU_440_16;

extern WORD BCU_441_1;
extern WORD BCU_441_2;
extern WORD BCU_441_3;
extern WORD BCU_441_4;
extern WORD BCU_441_5;
extern WORD BCU_441_6;
extern WORD BCU_441_7;
extern WORD BCU_441_8;
extern WORD BCU_441_9;
extern WORD BCU_441_10;
extern WORD BCU_441_11;
extern WORD BCU_441_12;
extern WORD BCU_441_13;
extern WORD BCU_441_14;
extern WORD BCU_441_15;
extern WORD BCU_441_16;

extern WORD BCU_442_1;
extern WORD BCU_442_2;
extern WORD BCU_442_3;
extern WORD BCU_442_4;
extern WORD BCU_442_5;
extern WORD BCU_442_6;
extern WORD BCU_442_7;
extern WORD BCU_442_8;
extern WORD BCU_442_9;
extern WORD BCU_442_10;
extern WORD BCU_442_11;
extern WORD BCU_442_12;
extern WORD BCU_442_13;
extern WORD BCU_442_14;
extern WORD BCU_442_15;
extern WORD BCU_442_16;

extern WORD BCU_443_1;
extern WORD BCU_443_2;
extern WORD BCU_443_3;
extern WORD BCU_443_4;
extern WORD BCU_443_5;
extern WORD BCU_443_6;
extern WORD BCU_443_7;
extern WORD BCU_443_8;
extern WORD BCU_443_9;
extern WORD BCU_443_10;
extern WORD BCU_443_11;
extern WORD BCU_443_12;
extern WORD BCU_443_13;
extern WORD BCU_443_14;
extern WORD BCU_443_15;
extern WORD BCU_443_16;

extern WORD BCU_444_1;
extern WORD BCU_444_2;
extern WORD BCU_444_3;
extern WORD BCU_444_4;
extern WORD BCU_444_5;
extern WORD BCU_444_6;
extern WORD BCU_444_7;
extern WORD BCU_444_8;
extern WORD BCU_444_9;
extern WORD BCU_444_10;
extern WORD BCU_444_11;
extern WORD BCU_444_12;
extern WORD BCU_444_13;
extern WORD BCU_444_14;
extern WORD BCU_444_15;
extern WORD BCU_444_16;



extern WORD TCU_510_1;
extern WORD TCU_510_2;
extern WORD TCU_510_3;
extern WORD TCU_510_4;
extern WORD TCU_510_5;
extern WORD TCU_510_6;
extern WORD TCU_510_7;
extern WORD TCU_510_8;
extern WORD TCU_510_9;
extern WORD TCU_510_10;
extern WORD TCU_510_11;
extern WORD TCU_510_12;
extern WORD TCU_510_13;
extern WORD TCU_510_14;
extern WORD TCU_510_15;
extern WORD TCU_510_16;

extern WORD TCU_520_1;
extern WORD TCU_520_2;
extern WORD TCU_520_3;
extern WORD TCU_520_4;
extern WORD TCU_520_5;
extern WORD TCU_520_6;
extern WORD TCU_520_7;
extern WORD TCU_520_8;
extern WORD TCU_520_9;
extern WORD TCU_520_10;
extern WORD TCU_520_11;
extern WORD TCU_520_12;
extern WORD TCU_520_13;
extern WORD TCU_520_14;
extern WORD TCU_520_15;
extern WORD TCU_520_16;

extern WORD TCU_530_1;
extern WORD TCU_530_2;
extern WORD TCU_530_3;
extern WORD TCU_530_4;
extern WORD TCU_530_5;
extern WORD TCU_530_6;
extern WORD TCU_530_7;
extern WORD TCU_530_8;
extern WORD TCU_530_9;
extern WORD TCU_530_10;
extern WORD TCU_530_11;
extern WORD TCU_530_12;
extern WORD TCU_530_13;
extern WORD TCU_530_14;
extern WORD TCU_530_15;
extern WORD TCU_530_16;

extern WORD TCU_540_1;
extern WORD TCU_540_2;
extern WORD TCU_540_3;
extern WORD TCU_540_4;
extern WORD TCU_540_5;
extern WORD TCU_540_6;
extern WORD TCU_540_7;
extern WORD TCU_540_8;
extern WORD TCU_540_9;
extern WORD TCU_540_10;
extern WORD TCU_540_11;
extern WORD TCU_540_12;
extern WORD TCU_540_13;
extern WORD TCU_540_14;
extern WORD TCU_540_15;
extern WORD TCU_540_16;

extern WORD TCU_550_1;
extern WORD TCU_550_2;
extern WORD TCU_550_3;
extern WORD TCU_550_4;
extern WORD TCU_550_5;
extern WORD TCU_550_6;
extern WORD TCU_550_7;
extern WORD TCU_550_8;
extern WORD TCU_550_9;
extern WORD TCU_550_10;
extern WORD TCU_550_11;
extern WORD TCU_550_12;
extern WORD TCU_550_13;
extern WORD TCU_550_14;
extern WORD TCU_550_15;
extern WORD TCU_550_16;

extern WORD TCU_560_1;
extern WORD TCU_560_2;
extern WORD TCU_560_3;
extern WORD TCU_560_4;
extern WORD TCU_560_5;
extern WORD TCU_560_6;
extern WORD TCU_560_7;
extern WORD TCU_560_8;
extern WORD TCU_560_9;
extern WORD TCU_560_10;
extern WORD TCU_560_11;
extern WORD TCU_560_12;
extern WORD TCU_560_13;
extern WORD TCU_560_14;
extern WORD TCU_560_15;
extern WORD TCU_560_16;

extern WORD TCU_511_1;
extern WORD TCU_511_2;
extern WORD TCU_511_3;
extern WORD TCU_511_4;
extern WORD TCU_511_5;
extern WORD TCU_511_6;
extern WORD TCU_511_7;
extern WORD TCU_511_8;
extern WORD TCU_511_9;
extern WORD TCU_511_10;
extern WORD TCU_511_11;
extern WORD TCU_511_12;
extern WORD TCU_511_13;
extern WORD TCU_511_14;
extern WORD TCU_511_15;
extern WORD TCU_511_16;

extern WORD TCU_521_1;
extern WORD TCU_521_2;
extern WORD TCU_521_3;
extern WORD TCU_521_4;
extern WORD TCU_521_5;
extern WORD TCU_521_6;
extern WORD TCU_521_7;
extern WORD TCU_521_8;
extern WORD TCU_521_9;
extern WORD TCU_521_10;
extern WORD TCU_521_11;
extern WORD TCU_521_12;
extern WORD TCU_521_13;
extern WORD TCU_521_14;
extern WORD TCU_521_15;
extern WORD TCU_521_16;

extern WORD TCU_531_1;
extern WORD TCU_531_2;
extern WORD TCU_531_3;
extern WORD TCU_531_4;
extern WORD TCU_531_5;
extern WORD TCU_531_6;
extern WORD TCU_531_7;
extern WORD TCU_531_8;
extern WORD TCU_531_9;
extern WORD TCU_531_10;
extern WORD TCU_531_11;
extern WORD TCU_531_12;
extern WORD TCU_531_13;
extern WORD TCU_531_14;
extern WORD TCU_531_15;
extern WORD TCU_531_16;

extern WORD TCU_541_1;
extern WORD TCU_541_2;
extern WORD TCU_541_3;
extern WORD TCU_541_4;
extern WORD TCU_541_5;
extern WORD TCU_541_6;
extern WORD TCU_541_7;
extern WORD TCU_541_8;
extern WORD TCU_541_9;
extern WORD TCU_541_10;
extern WORD TCU_541_11;
extern WORD TCU_541_12;
extern WORD TCU_541_13;
extern WORD TCU_541_14;
extern WORD TCU_541_15;
extern WORD TCU_541_16;

extern WORD TCU_551_1;
extern WORD TCU_551_2;
extern WORD TCU_551_3;
extern WORD TCU_551_4;
extern WORD TCU_551_5;
extern WORD TCU_551_6;
extern WORD TCU_551_7;
extern WORD TCU_551_8;
extern WORD TCU_551_9;
extern WORD TCU_551_10;
extern WORD TCU_551_11;
extern WORD TCU_551_12;
extern WORD TCU_551_13;
extern WORD TCU_551_14;
extern WORD TCU_551_15;
extern WORD TCU_551_16;

extern WORD TCU_561_1;
extern WORD TCU_561_2;
extern WORD TCU_561_3;
extern WORD TCU_561_4;
extern WORD TCU_561_5;
extern WORD TCU_561_6;
extern WORD TCU_561_7;
extern WORD TCU_561_8;
extern WORD TCU_561_9;
extern WORD TCU_561_10;
extern WORD TCU_561_11;
extern WORD TCU_561_12;
extern WORD TCU_561_13;
extern WORD TCU_561_14;
extern WORD TCU_561_15;
extern WORD TCU_561_16;

extern WORD ACU_610_1;
extern WORD ACU_610_2;
extern WORD ACU_610_3;
extern WORD ACU_610_4;
extern WORD ACU_610_5;
extern WORD ACU_610_6;
extern WORD ACU_610_7;
extern WORD ACU_610_8;
extern WORD ACU_610_9;
extern WORD ACU_610_10;
extern WORD ACU_610_11;
extern WORD ACU_610_12;
extern WORD ACU_610_13;
extern WORD ACU_610_14;
extern WORD ACU_610_15;
extern WORD ACU_610_16;

extern WORD ACU_611_1;
extern WORD ACU_611_2;
extern WORD ACU_611_3;
extern WORD ACU_611_4;
extern WORD ACU_611_5;
extern WORD ACU_611_6;
extern WORD ACU_611_7;
extern WORD ACU_611_8;
extern WORD ACU_611_9;
extern WORD ACU_611_10;
extern WORD ACU_611_11;
extern WORD ACU_611_12;
extern WORD ACU_611_13;
extern WORD ACU_611_14;
extern WORD ACU_611_15;
extern WORD ACU_611_16;

extern WORD ACU_620_1;
extern WORD ACU_620_2;
extern WORD ACU_620_3;
extern WORD ACU_620_4;
extern WORD ACU_620_5;
extern WORD ACU_620_6;
extern WORD ACU_620_7;
extern WORD ACU_620_8;
extern WORD ACU_620_9;
extern WORD ACU_620_10;
extern WORD ACU_620_11;
extern WORD ACU_620_12;
extern WORD ACU_620_13;
extern WORD ACU_620_14;
extern WORD ACU_620_15;
extern WORD ACU_620_16;

extern WORD ACU_621_1;
extern WORD ACU_621_2;
extern WORD ACU_621_3;
extern WORD ACU_621_4;
extern WORD ACU_621_5;
extern WORD ACU_621_6;
extern WORD ACU_621_7;
extern WORD ACU_621_8;
extern WORD ACU_621_9;
extern WORD ACU_621_10;
extern WORD ACU_621_11;
extern WORD ACU_621_12;
extern WORD ACU_621_13;
extern WORD ACU_621_14;
extern WORD ACU_621_15;
extern WORD ACU_621_16;

extern WORD DCU_710_1;
extern WORD DCU_710_2;
extern WORD DCU_710_3;
extern WORD DCU_710_4;
extern WORD DCU_710_5;
extern WORD DCU_710_6;
extern WORD DCU_710_7;
extern WORD DCU_710_8;
extern WORD DCU_710_9;
extern WORD DCU_710_10;
extern WORD DCU_710_11;
extern WORD DCU_710_12;
extern WORD DCU_710_13;
extern WORD DCU_710_14;
extern WORD DCU_710_15;
extern WORD DCU_710_16;

extern WORD DCU_711_1;
extern WORD DCU_711_2;
extern WORD DCU_711_3;
extern WORD DCU_711_4;
extern WORD DCU_711_5;
extern WORD DCU_711_6;
extern WORD DCU_711_7;
extern WORD DCU_711_8;
extern WORD DCU_711_9;
extern WORD DCU_711_10;
extern WORD DCU_711_11;
extern WORD DCU_711_12;
extern WORD DCU_711_13;
extern WORD DCU_711_14;
extern WORD DCU_711_15;
extern WORD DCU_711_16;

extern WORD DCU_720_1;
extern WORD DCU_720_2;
extern WORD DCU_720_3;
extern WORD DCU_720_4;
extern WORD DCU_720_5;
extern WORD DCU_720_6;
extern WORD DCU_720_7;
extern WORD DCU_720_8;
extern WORD DCU_720_9;
extern WORD DCU_720_10;
extern WORD DCU_720_11;
extern WORD DCU_720_12;
extern WORD DCU_720_13;
extern WORD DCU_720_14;
extern WORD DCU_720_15;
extern WORD DCU_720_16;

extern WORD DCU_721_1;
extern WORD DCU_721_2;
extern WORD DCU_721_3;
extern WORD DCU_721_4;
extern WORD DCU_721_5;
extern WORD DCU_721_6;
extern WORD DCU_721_7;
extern WORD DCU_721_8;
extern WORD DCU_721_9;
extern WORD DCU_721_10;
extern WORD DCU_721_11;
extern WORD DCU_721_12;
extern WORD DCU_721_13;
extern WORD DCU_721_14;
extern WORD DCU_721_15;
extern WORD DCU_721_16;

extern WORD DCU_730_1;
extern WORD DCU_730_2;
extern WORD DCU_730_3;
extern WORD DCU_730_4;
extern WORD DCU_730_5;
extern WORD DCU_730_6;
extern WORD DCU_730_7;
extern WORD DCU_730_8;
extern WORD DCU_730_9;
extern WORD DCU_730_10;
extern WORD DCU_730_11;
extern WORD DCU_730_12;
extern WORD DCU_730_13;
extern WORD DCU_730_14;
extern WORD DCU_730_15;
extern WORD DCU_730_16;

extern WORD DCU_731_1;
extern WORD DCU_731_2;
extern WORD DCU_731_3;
extern WORD DCU_731_4;
extern WORD DCU_731_5;
extern WORD DCU_731_6;
extern WORD DCU_731_7;
extern WORD DCU_731_8;
extern WORD DCU_731_9;
extern WORD DCU_731_10;
extern WORD DCU_731_11;
extern WORD DCU_731_12;
extern WORD DCU_731_13;
extern WORD DCU_731_14;
extern WORD DCU_731_15;
extern WORD DCU_731_16;

extern WORD DCU_740_1;
extern WORD DCU_740_2;
extern WORD DCU_740_3;
extern WORD DCU_740_4;
extern WORD DCU_740_5;
extern WORD DCU_740_6;
extern WORD DCU_740_7;
extern WORD DCU_740_8;
extern WORD DCU_740_9;
extern WORD DCU_740_10;
extern WORD DCU_740_11;
extern WORD DCU_740_12;
extern WORD DCU_740_13;
extern WORD DCU_740_14;
extern WORD DCU_740_15;
extern WORD DCU_740_16;

extern WORD DCU_741_1;
extern WORD DCU_741_2;
extern WORD DCU_741_3;
extern WORD DCU_741_4;
extern WORD DCU_741_5;
extern WORD DCU_741_6;
extern WORD DCU_741_7;
extern WORD DCU_741_8;
extern WORD DCU_741_9;
extern WORD DCU_741_10;
extern WORD DCU_741_11;
extern WORD DCU_741_12;
extern WORD DCU_741_13;
extern WORD DCU_741_14;
extern WORD DCU_741_15;
extern WORD DCU_741_16;

extern WORD DCU_750_1;
extern WORD DCU_750_2;
extern WORD DCU_750_3;
extern WORD DCU_750_4;
extern WORD DCU_750_5;
extern WORD DCU_750_6;
extern WORD DCU_750_7;
extern WORD DCU_750_8;
extern WORD DCU_750_9;
extern WORD DCU_750_10;
extern WORD DCU_750_11;
extern WORD DCU_750_12;
extern WORD DCU_750_13;
extern WORD DCU_750_14;
extern WORD DCU_750_15;
extern WORD DCU_750_16;

extern WORD DCU_751_1;
extern WORD DCU_751_2;
extern WORD DCU_751_3;
extern WORD DCU_751_4;
extern WORD DCU_751_5;
extern WORD DCU_751_6;
extern WORD DCU_751_7;
extern WORD DCU_751_8;
extern WORD DCU_751_9;
extern WORD DCU_751_10;
extern WORD DCU_751_11;
extern WORD DCU_751_12;
extern WORD DCU_751_13;
extern WORD DCU_751_14;
extern WORD DCU_751_15;
extern WORD DCU_751_16;

extern WORD DCU_760_1;
extern WORD DCU_760_2;
extern WORD DCU_760_3;
extern WORD DCU_760_4;
extern WORD DCU_760_5;
extern WORD DCU_760_6;
extern WORD DCU_760_7;
extern WORD DCU_760_8;
extern WORD DCU_760_9;
extern WORD DCU_760_10;
extern WORD DCU_760_11;
extern WORD DCU_760_12;
extern WORD DCU_760_13;
extern WORD DCU_760_14;
extern WORD DCU_760_15;
extern WORD DCU_760_16;

extern WORD DCU_761_1;
extern WORD DCU_761_2;
extern WORD DCU_761_3;
extern WORD DCU_761_4;
extern WORD DCU_761_5;
extern WORD DCU_761_6;
extern WORD DCU_761_7;
extern WORD DCU_761_8;
extern WORD DCU_761_9;
extern WORD DCU_761_10;
extern WORD DCU_761_11;
extern WORD DCU_761_12;
extern WORD DCU_761_13;
extern WORD DCU_761_14;
extern WORD DCU_761_15;
extern WORD DCU_761_16;

extern WORD DCU_770_1;
extern WORD DCU_770_2;
extern WORD DCU_770_3;
extern WORD DCU_770_4;
extern WORD DCU_770_5;
extern WORD DCU_770_6;
extern WORD DCU_770_7;
extern WORD DCU_770_8;
extern WORD DCU_770_9;
extern WORD DCU_770_10;
extern WORD DCU_770_11;
extern WORD DCU_770_12;
extern WORD DCU_770_13;
extern WORD DCU_770_14;
extern WORD DCU_770_15;
extern WORD DCU_770_16;

extern WORD DCU_771_1;
extern WORD DCU_771_2;
extern WORD DCU_771_3;
extern WORD DCU_771_4;
extern WORD DCU_771_5;
extern WORD DCU_771_6;
extern WORD DCU_771_7;
extern WORD DCU_771_8;
extern WORD DCU_771_9;
extern WORD DCU_771_10;
extern WORD DCU_771_11;
extern WORD DCU_771_12;
extern WORD DCU_771_13;
extern WORD DCU_771_14;
extern WORD DCU_771_15;
extern WORD DCU_771_16;

extern WORD DCU_780_1;
extern WORD DCU_780_2;
extern WORD DCU_780_3;
extern WORD DCU_780_4;
extern WORD DCU_780_5;
extern WORD DCU_780_6;
extern WORD DCU_780_7;
extern WORD DCU_780_8;
extern WORD DCU_780_9;
extern WORD DCU_780_10;
extern WORD DCU_780_11;
extern WORD DCU_780_12;
extern WORD DCU_780_13;
extern WORD DCU_780_14;
extern WORD DCU_780_15;
extern WORD DCU_780_16;

extern WORD DCU_781_1;
extern WORD DCU_781_2;
extern WORD DCU_781_3;
extern WORD DCU_781_4;
extern WORD DCU_781_5;
extern WORD DCU_781_6;
extern WORD DCU_781_7;
extern WORD DCU_781_8;
extern WORD DCU_781_9;
extern WORD DCU_781_10;
extern WORD DCU_781_11;
extern WORD DCU_781_12;
extern WORD DCU_781_13;
extern WORD DCU_781_14;
extern WORD DCU_781_15;
extern WORD DCU_781_16;

extern WORD DCU_OLD_710_1;
extern WORD DCU_OLD_710_2;
extern WORD DCU_OLD_710_3;
extern WORD DCU_OLD_710_4;
extern WORD DCU_OLD_710_5;
extern WORD DCU_OLD_710_6;
extern WORD DCU_OLD_710_7;
extern WORD DCU_OLD_710_8;
extern WORD DCU_OLD_710_9;
extern WORD DCU_OLD_710_10;
extern WORD DCU_OLD_710_11;
extern WORD DCU_OLD_710_12;
extern WORD DCU_OLD_710_13;
extern WORD DCU_OLD_710_14;
extern WORD DCU_OLD_710_15;
extern WORD DCU_OLD_710_16;

extern WORD DCU_OLD_711_1;
extern WORD DCU_OLD_711_2;
extern WORD DCU_OLD_711_3;
extern WORD DCU_OLD_711_4;
extern WORD DCU_OLD_711_5;
extern WORD DCU_OLD_711_6;
extern WORD DCU_OLD_711_7;
extern WORD DCU_OLD_711_8;
extern WORD DCU_OLD_711_9;
extern WORD DCU_OLD_711_10;
extern WORD DCU_OLD_711_11;
extern WORD DCU_OLD_711_12;
extern WORD DCU_OLD_711_13;
extern WORD DCU_OLD_711_14;
extern WORD DCU_OLD_711_15;
extern WORD DCU_OLD_711_16;

extern WORD DCU_OLD_720_1;
extern WORD DCU_OLD_720_2;
extern WORD DCU_OLD_720_3;
extern WORD DCU_OLD_720_4;
extern WORD DCU_OLD_720_5;
extern WORD DCU_OLD_720_6;
extern WORD DCU_OLD_720_7;
extern WORD DCU_OLD_720_8;
extern WORD DCU_OLD_720_9;
extern WORD DCU_OLD_720_10;
extern WORD DCU_OLD_720_11;
extern WORD DCU_OLD_720_12;
extern WORD DCU_OLD_720_13;
extern WORD DCU_OLD_720_14;
extern WORD DCU_OLD_720_15;
extern WORD DCU_OLD_720_16;

extern WORD DCU_OLD_721_1;
extern WORD DCU_OLD_721_2;
extern WORD DCU_OLD_721_3;
extern WORD DCU_OLD_721_4;
extern WORD DCU_OLD_721_5;
extern WORD DCU_OLD_721_6;
extern WORD DCU_OLD_721_7;
extern WORD DCU_OLD_721_8;
extern WORD DCU_OLD_721_9;
extern WORD DCU_OLD_721_10;
extern WORD DCU_OLD_721_11;
extern WORD DCU_OLD_721_12;
extern WORD DCU_OLD_721_13;
extern WORD DCU_OLD_721_14;
extern WORD DCU_OLD_721_15;
extern WORD DCU_OLD_721_16;

extern WORD DCU_OLD_730_1;
extern WORD DCU_OLD_730_2;
extern WORD DCU_OLD_730_3;
extern WORD DCU_OLD_730_4;
extern WORD DCU_OLD_730_5;
extern WORD DCU_OLD_730_6;
extern WORD DCU_OLD_730_7;
extern WORD DCU_OLD_730_8;
extern WORD DCU_OLD_730_9;
extern WORD DCU_OLD_730_10;
extern WORD DCU_OLD_730_11;
extern WORD DCU_OLD_730_12;
extern WORD DCU_OLD_730_13;
extern WORD DCU_OLD_730_14;
extern WORD DCU_OLD_730_15;
extern WORD DCU_OLD_730_16;

extern WORD DCU_OLD_731_1;
extern WORD DCU_OLD_731_2;
extern WORD DCU_OLD_731_3;
extern WORD DCU_OLD_731_4;
extern WORD DCU_OLD_731_5;
extern WORD DCU_OLD_731_6;
extern WORD DCU_OLD_731_7;
extern WORD DCU_OLD_731_8;
extern WORD DCU_OLD_731_9;
extern WORD DCU_OLD_731_10;
extern WORD DCU_OLD_731_11;
extern WORD DCU_OLD_731_12;
extern WORD DCU_OLD_731_13;
extern WORD DCU_OLD_731_14;
extern WORD DCU_OLD_731_15;
extern WORD DCU_OLD_731_16;

extern WORD DCU_OLD_740_1;
extern WORD DCU_OLD_740_2;
extern WORD DCU_OLD_740_3;
extern WORD DCU_OLD_740_4;
extern WORD DCU_OLD_740_5;
extern WORD DCU_OLD_740_6;
extern WORD DCU_OLD_740_7;
extern WORD DCU_OLD_740_8;
extern WORD DCU_OLD_740_9;
extern WORD DCU_OLD_740_10;
extern WORD DCU_OLD_740_11;
extern WORD DCU_OLD_740_12;
extern WORD DCU_OLD_740_13;
extern WORD DCU_OLD_740_14;
extern WORD DCU_OLD_740_15;
extern WORD DCU_OLD_740_16;

extern WORD DCU_OLD_741_1;
extern WORD DCU_OLD_741_2;
extern WORD DCU_OLD_741_3;
extern WORD DCU_OLD_741_4;
extern WORD DCU_OLD_741_5;
extern WORD DCU_OLD_741_6;
extern WORD DCU_OLD_741_7;
extern WORD DCU_OLD_741_8;
extern WORD DCU_OLD_741_9;
extern WORD DCU_OLD_741_10;
extern WORD DCU_OLD_741_11;
extern WORD DCU_OLD_741_12;
extern WORD DCU_OLD_741_13;
extern WORD DCU_OLD_741_14;
extern WORD DCU_OLD_741_15;
extern WORD DCU_OLD_741_16;

extern WORD DCU_OLD_750_1;
extern WORD DCU_OLD_750_2;
extern WORD DCU_OLD_750_3;
extern WORD DCU_OLD_750_4;
extern WORD DCU_OLD_750_5;
extern WORD DCU_OLD_750_6;
extern WORD DCU_OLD_750_7;
extern WORD DCU_OLD_750_8;
extern WORD DCU_OLD_750_9;
extern WORD DCU_OLD_750_10;
extern WORD DCU_OLD_750_11;
extern WORD DCU_OLD_750_12;
extern WORD DCU_OLD_750_13;
extern WORD DCU_OLD_750_14;
extern WORD DCU_OLD_750_15;
extern WORD DCU_OLD_750_16;

extern WORD DCU_OLD_751_1;
extern WORD DCU_OLD_751_2;
extern WORD DCU_OLD_751_3;
extern WORD DCU_OLD_751_4;
extern WORD DCU_OLD_751_5;
extern WORD DCU_OLD_751_6;
extern WORD DCU_OLD_751_7;
extern WORD DCU_OLD_751_8;
extern WORD DCU_OLD_751_9;
extern WORD DCU_OLD_751_10;
extern WORD DCU_OLD_751_11;
extern WORD DCU_OLD_751_12;
extern WORD DCU_OLD_751_13;
extern WORD DCU_OLD_751_14;
extern WORD DCU_OLD_751_15;
extern WORD DCU_OLD_751_16;

extern WORD DCU_OLD_760_1;
extern WORD DCU_OLD_760_2;
extern WORD DCU_OLD_760_3;
extern WORD DCU_OLD_760_4;
extern WORD DCU_OLD_760_5;
extern WORD DCU_OLD_760_6;
extern WORD DCU_OLD_760_7;
extern WORD DCU_OLD_760_8;
extern WORD DCU_OLD_760_9;
extern WORD DCU_OLD_760_10;
extern WORD DCU_OLD_760_11;
extern WORD DCU_OLD_760_12;
extern WORD DCU_OLD_760_13;
extern WORD DCU_OLD_760_14;
extern WORD DCU_OLD_760_15;
extern WORD DCU_OLD_760_16;

extern WORD DCU_OLD_761_1;
extern WORD DCU_OLD_761_2;
extern WORD DCU_OLD_761_3;
extern WORD DCU_OLD_761_4;
extern WORD DCU_OLD_761_5;
extern WORD DCU_OLD_761_6;
extern WORD DCU_OLD_761_7;
extern WORD DCU_OLD_761_8;
extern WORD DCU_OLD_761_9;
extern WORD DCU_OLD_761_10;
extern WORD DCU_OLD_761_11;
extern WORD DCU_OLD_761_12;
extern WORD DCU_OLD_761_13;
extern WORD DCU_OLD_761_14;
extern WORD DCU_OLD_761_15;
extern WORD DCU_OLD_761_16;

extern WORD DCU_OLD_770_1;
extern WORD DCU_OLD_770_2;
extern WORD DCU_OLD_770_3;
extern WORD DCU_OLD_770_4;
extern WORD DCU_OLD_770_5;
extern WORD DCU_OLD_770_6;
extern WORD DCU_OLD_770_7;
extern WORD DCU_OLD_770_8;
extern WORD DCU_OLD_770_9;
extern WORD DCU_OLD_770_10;
extern WORD DCU_OLD_770_11;
extern WORD DCU_OLD_770_12;
extern WORD DCU_OLD_770_13;
extern WORD DCU_OLD_770_14;
extern WORD DCU_OLD_770_15;
extern WORD DCU_OLD_770_16;

extern WORD DCU_OLD_771_1;
extern WORD DCU_OLD_771_2;
extern WORD DCU_OLD_771_3;
extern WORD DCU_OLD_771_4;
extern WORD DCU_OLD_771_5;
extern WORD DCU_OLD_771_6;
extern WORD DCU_OLD_771_7;
extern WORD DCU_OLD_771_8;
extern WORD DCU_OLD_771_9;
extern WORD DCU_OLD_771_10;
extern WORD DCU_OLD_771_11;
extern WORD DCU_OLD_771_12;
extern WORD DCU_OLD_771_13;
extern WORD DCU_OLD_771_14;
extern WORD DCU_OLD_771_15;
extern WORD DCU_OLD_771_16;

extern WORD DCU_OLD_780_1;
extern WORD DCU_OLD_780_2;
extern WORD DCU_OLD_780_3;
extern WORD DCU_OLD_780_4;
extern WORD DCU_OLD_780_5;
extern WORD DCU_OLD_780_6;
extern WORD DCU_OLD_780_7;
extern WORD DCU_OLD_780_8;
extern WORD DCU_OLD_780_9;
extern WORD DCU_OLD_780_10;
extern WORD DCU_OLD_780_11;
extern WORD DCU_OLD_780_12;
extern WORD DCU_OLD_780_13;
extern WORD DCU_OLD_780_14;
extern WORD DCU_OLD_780_15;
extern WORD DCU_OLD_780_16;

extern WORD DCU_OLD_781_1;
extern WORD DCU_OLD_781_2;
extern WORD DCU_OLD_781_3;
extern WORD DCU_OLD_781_4;
extern WORD DCU_OLD_781_5;
extern WORD DCU_OLD_781_6;
extern WORD DCU_OLD_781_7;
extern WORD DCU_OLD_781_8;
extern WORD DCU_OLD_781_9;
extern WORD DCU_OLD_781_10;
extern WORD DCU_OLD_781_11;
extern WORD DCU_OLD_781_12;
extern WORD DCU_OLD_781_13;
extern WORD DCU_OLD_781_14;
extern WORD DCU_OLD_781_15;
extern WORD DCU_OLD_781_16;

extern WORD DCU_OLD_790_1;
extern WORD DCU_OLD_790_2;
extern WORD DCU_OLD_790_3;
extern WORD DCU_OLD_790_4;
extern WORD DCU_OLD_790_5;
extern WORD DCU_OLD_790_6;
extern WORD DCU_OLD_790_7;
extern WORD DCU_OLD_790_8;
extern WORD DCU_OLD_790_9;
extern WORD DCU_OLD_790_10;
extern WORD DCU_OLD_790_11;
extern WORD DCU_OLD_790_12;
extern WORD DCU_OLD_790_13;
extern WORD DCU_OLD_790_14;
extern WORD DCU_OLD_790_15;
extern WORD DCU_OLD_790_16;

extern WORD DCU_OLD_791_1;
extern WORD DCU_OLD_791_2;
extern WORD DCU_OLD_791_3;
extern WORD DCU_OLD_791_4;
extern WORD DCU_OLD_791_5;
extern WORD DCU_OLD_791_6;
extern WORD DCU_OLD_791_7;
extern WORD DCU_OLD_791_8;
extern WORD DCU_OLD_791_9;
extern WORD DCU_OLD_791_10;
extern WORD DCU_OLD_791_11;
extern WORD DCU_OLD_791_12;
extern WORD DCU_OLD_791_13;
extern WORD DCU_OLD_791_14;
extern WORD DCU_OLD_791_15;
extern WORD DCU_OLD_791_16;

extern WORD DCU_OLD_7A0_1;
extern WORD DCU_OLD_7A0_2;
extern WORD DCU_OLD_7A0_3;
extern WORD DCU_OLD_7A0_4;
extern WORD DCU_OLD_7A0_5;
extern WORD DCU_OLD_7A0_6;
extern WORD DCU_OLD_7A0_7;
extern WORD DCU_OLD_7A0_8;
extern WORD DCU_OLD_7A0_9;
extern WORD DCU_OLD_7A0_10;
extern WORD DCU_OLD_7A0_11;
extern WORD DCU_OLD_7A0_12;
extern WORD DCU_OLD_7A0_13;
extern WORD DCU_OLD_7A0_14;
extern WORD DCU_OLD_7A0_15;
extern WORD DCU_OLD_7A0_16;

extern WORD DCU_OLD_7A1_1;
extern WORD DCU_OLD_7A1_2;
extern WORD DCU_OLD_7A1_3;
extern WORD DCU_OLD_7A1_4;
extern WORD DCU_OLD_7A1_5;
extern WORD DCU_OLD_7A1_6;
extern WORD DCU_OLD_7A1_7;
extern WORD DCU_OLD_7A1_8;
extern WORD DCU_OLD_7A1_9;
extern WORD DCU_OLD_7A1_10;
extern WORD DCU_OLD_7A1_11;
extern WORD DCU_OLD_7A1_12;
extern WORD DCU_OLD_7A1_13;
extern WORD DCU_OLD_7A1_14;
extern WORD DCU_OLD_7A1_15;
extern WORD DCU_OLD_7A1_16;

extern WORD DCU_OLD_7B0_1;
extern WORD DCU_OLD_7B0_2;
extern WORD DCU_OLD_7B0_3;
extern WORD DCU_OLD_7B0_4;
extern WORD DCU_OLD_7B0_5;
extern WORD DCU_OLD_7B0_6;
extern WORD DCU_OLD_7B0_7;
extern WORD DCU_OLD_7B0_8;
extern WORD DCU_OLD_7B0_9;
extern WORD DCU_OLD_7B0_10;
extern WORD DCU_OLD_7B0_11;
extern WORD DCU_OLD_7B0_12;
extern WORD DCU_OLD_7B0_13;
extern WORD DCU_OLD_7B0_14;
extern WORD DCU_OLD_7B0_15;
extern WORD DCU_OLD_7B0_16;

extern WORD DCU_OLD_7B1_1;
extern WORD DCU_OLD_7B1_2;
extern WORD DCU_OLD_7B1_3;
extern WORD DCU_OLD_7B1_4;
extern WORD DCU_OLD_7B1_5;
extern WORD DCU_OLD_7B1_6;
extern WORD DCU_OLD_7B1_7;
extern WORD DCU_OLD_7B1_8;
extern WORD DCU_OLD_7B1_9;
extern WORD DCU_OLD_7B1_10;
extern WORD DCU_OLD_7B1_11;
extern WORD DCU_OLD_7B1_12;
extern WORD DCU_OLD_7B1_13;
extern WORD DCU_OLD_7B1_14;
extern WORD DCU_OLD_7B1_15;
extern WORD DCU_OLD_7B1_16;

extern WORD DCU_OLD_7C0_1;
extern WORD DCU_OLD_7C0_2;
extern WORD DCU_OLD_7C0_3;
extern WORD DCU_OLD_7C0_4;
extern WORD DCU_OLD_7C0_5;
extern WORD DCU_OLD_7C0_6;
extern WORD DCU_OLD_7C0_7;
extern WORD DCU_OLD_7C0_8;
extern WORD DCU_OLD_7C0_9;
extern WORD DCU_OLD_7C0_10;
extern WORD DCU_OLD_7C0_11;
extern WORD DCU_OLD_7C0_12;
extern WORD DCU_OLD_7C0_13;
extern WORD DCU_OLD_7C0_14;
extern WORD DCU_OLD_7C0_15;
extern WORD DCU_OLD_7C0_16;

extern WORD DCU_OLD_7C1_1;
extern WORD DCU_OLD_7C1_2;
extern WORD DCU_OLD_7C1_3;
extern WORD DCU_OLD_7C1_4;
extern WORD DCU_OLD_7C1_5;
extern WORD DCU_OLD_7C1_6;
extern WORD DCU_OLD_7C1_7;
extern WORD DCU_OLD_7C1_8;
extern WORD DCU_OLD_7C1_9;
extern WORD DCU_OLD_7C1_10;
extern WORD DCU_OLD_7C1_11;
extern WORD DCU_OLD_7C1_12;
extern WORD DCU_OLD_7C1_13;
extern WORD DCU_OLD_7C1_14;
extern WORD DCU_OLD_7C1_15;
extern WORD DCU_OLD_7C1_16;

extern WORD DCU_OLD_7D0_1;
extern WORD DCU_OLD_7D0_2;
extern WORD DCU_OLD_7D0_3;
extern WORD DCU_OLD_7D0_4;
extern WORD DCU_OLD_7D0_5;
extern WORD DCU_OLD_7D0_6;
extern WORD DCU_OLD_7D0_7;
extern WORD DCU_OLD_7D0_8;
extern WORD DCU_OLD_7D0_9;
extern WORD DCU_OLD_7D0_10;
extern WORD DCU_OLD_7D0_11;
extern WORD DCU_OLD_7D0_12;
extern WORD DCU_OLD_7D0_13;
extern WORD DCU_OLD_7D0_14;
extern WORD DCU_OLD_7D0_15;
extern WORD DCU_OLD_7D0_16;

extern WORD DCU_OLD_7D1_1;
extern WORD DCU_OLD_7D1_2;
extern WORD DCU_OLD_7D1_3;
extern WORD DCU_OLD_7D1_4;
extern WORD DCU_OLD_7D1_5;
extern WORD DCU_OLD_7D1_6;
extern WORD DCU_OLD_7D1_7;
extern WORD DCU_OLD_7D1_8;
extern WORD DCU_OLD_7D1_9;
extern WORD DCU_OLD_7D1_10;
extern WORD DCU_OLD_7D1_11;
extern WORD DCU_OLD_7D1_12;
extern WORD DCU_OLD_7D1_13;
extern WORD DCU_OLD_7D1_14;
extern WORD DCU_OLD_7D1_15;
extern WORD DCU_OLD_7D1_16;

extern WORD DCU_OLD_7E0_1;
extern WORD DCU_OLD_7E0_2;
extern WORD DCU_OLD_7E0_3;
extern WORD DCU_OLD_7E0_4;
extern WORD DCU_OLD_7E0_5;
extern WORD DCU_OLD_7E0_6;
extern WORD DCU_OLD_7E0_7;
extern WORD DCU_OLD_7E0_8;
extern WORD DCU_OLD_7E0_9;
extern WORD DCU_OLD_7E0_10;
extern WORD DCU_OLD_7E0_11;
extern WORD DCU_OLD_7E0_12;
extern WORD DCU_OLD_7E0_13;
extern WORD DCU_OLD_7E0_14;
extern WORD DCU_OLD_7E0_15;
extern WORD DCU_OLD_7E0_16;

extern WORD DCU_OLD_7E1_1;
extern WORD DCU_OLD_7E1_2;
extern WORD DCU_OLD_7E1_3;
extern WORD DCU_OLD_7E1_4;
extern WORD DCU_OLD_7E1_5;
extern WORD DCU_OLD_7E1_6;
extern WORD DCU_OLD_7E1_7;
extern WORD DCU_OLD_7E1_8;
extern WORD DCU_OLD_7E1_9;
extern WORD DCU_OLD_7E1_10;
extern WORD DCU_OLD_7E1_11;
extern WORD DCU_OLD_7E1_12;
extern WORD DCU_OLD_7E1_13;
extern WORD DCU_OLD_7E1_14;
extern WORD DCU_OLD_7E1_15;
extern WORD DCU_OLD_7E1_16;

extern WORD DCU_OLD_7F0_1;
extern WORD DCU_OLD_7F0_2;
extern WORD DCU_OLD_7F0_3;
extern WORD DCU_OLD_7F0_4;
extern WORD DCU_OLD_7F0_5;
extern WORD DCU_OLD_7F0_6;
extern WORD DCU_OLD_7F0_7;
extern WORD DCU_OLD_7F0_8;
extern WORD DCU_OLD_7F0_9;
extern WORD DCU_OLD_7F0_10;
extern WORD DCU_OLD_7F0_11;
extern WORD DCU_OLD_7F0_12;
extern WORD DCU_OLD_7F0_13;
extern WORD DCU_OLD_7F0_14;
extern WORD DCU_OLD_7F0_15;
extern WORD DCU_OLD_7F0_16;

extern WORD DCU_OLD_7F1_1;
extern WORD DCU_OLD_7F1_2;
extern WORD DCU_OLD_7F1_3;
extern WORD DCU_OLD_7F1_4;
extern WORD DCU_OLD_7F1_5;
extern WORD DCU_OLD_7F1_6;
extern WORD DCU_OLD_7F1_7;
extern WORD DCU_OLD_7F1_8;
extern WORD DCU_OLD_7F1_9;
extern WORD DCU_OLD_7F1_10;
extern WORD DCU_OLD_7F1_11;
extern WORD DCU_OLD_7F1_12;
extern WORD DCU_OLD_7F1_13;
extern WORD DCU_OLD_7F1_14;
extern WORD DCU_OLD_7F1_15;
extern WORD DCU_OLD_7F1_16;

extern WORD DCU_OLD_700_1;
extern WORD DCU_OLD_700_2;
extern WORD DCU_OLD_700_3;
extern WORD DCU_OLD_700_4;
extern WORD DCU_OLD_700_5;
extern WORD DCU_OLD_700_6;
extern WORD DCU_OLD_700_7;
extern WORD DCU_OLD_700_8;
extern WORD DCU_OLD_700_9;
extern WORD DCU_OLD_700_10;
extern WORD DCU_OLD_700_11;
extern WORD DCU_OLD_700_12;
extern WORD DCU_OLD_700_13;
extern WORD DCU_OLD_700_14;
extern WORD DCU_OLD_700_15;
extern WORD DCU_OLD_700_16;

extern WORD DCU_OLD_701_1;
extern WORD DCU_OLD_701_2;
extern WORD DCU_OLD_701_3;
extern WORD DCU_OLD_701_4;
extern WORD DCU_OLD_701_5;
extern WORD DCU_OLD_701_6;
extern WORD DCU_OLD_701_7;
extern WORD DCU_OLD_701_8;
extern WORD DCU_OLD_701_9;
extern WORD DCU_OLD_701_10;
extern WORD DCU_OLD_701_11;
extern WORD DCU_OLD_701_12;
extern WORD DCU_OLD_701_13;
extern WORD DCU_OLD_701_14;
extern WORD DCU_OLD_701_15;
extern WORD DCU_OLD_701_16;

extern WORD HVAC_810_1;
extern WORD HVAC_810_2;
extern WORD HVAC_810_3;
extern WORD HVAC_810_4;
extern WORD HVAC_810_5;
extern WORD HVAC_810_6;
extern WORD HVAC_810_7;
extern WORD HVAC_810_8;
extern WORD HVAC_810_9;
extern WORD HVAC_810_10;
extern WORD HVAC_810_11;
extern WORD HVAC_810_12;
extern WORD HVAC_810_13;
extern WORD HVAC_810_14;
extern WORD HVAC_810_15;
extern WORD HVAC_810_16;

extern WORD HVAC_820_1;
extern WORD HVAC_820_2;
extern WORD HVAC_820_3;
extern WORD HVAC_820_4;
extern WORD HVAC_820_5;
extern WORD HVAC_820_6;
extern WORD HVAC_820_7;
extern WORD HVAC_820_8;
extern WORD HVAC_820_9;
extern WORD HVAC_820_10;
extern WORD HVAC_820_11;
extern WORD HVAC_820_12;
extern WORD HVAC_820_13;
extern WORD HVAC_820_14;
extern WORD HVAC_820_15;
extern WORD HVAC_820_16;

extern WORD HVAC_830_1;
extern WORD HVAC_830_2;
extern WORD HVAC_830_3;
extern WORD HVAC_830_4;
extern WORD HVAC_830_5;
extern WORD HVAC_830_6;
extern WORD HVAC_830_7;
extern WORD HVAC_830_8;
extern WORD HVAC_830_9;
extern WORD HVAC_830_10;
extern WORD HVAC_830_11;
extern WORD HVAC_830_12;
extern WORD HVAC_830_13;
extern WORD HVAC_830_14;
extern WORD HVAC_830_15;
extern WORD HVAC_830_16;

extern WORD HVAC_840_1;
extern WORD HVAC_840_2;
extern WORD HVAC_840_3;
extern WORD HVAC_840_4;
extern WORD HVAC_840_5;
extern WORD HVAC_840_6;
extern WORD HVAC_840_7;
extern WORD HVAC_840_8;
extern WORD HVAC_840_9;
extern WORD HVAC_840_10;
extern WORD HVAC_840_11;
extern WORD HVAC_840_12;
extern WORD HVAC_840_13;
extern WORD HVAC_840_14;
extern WORD HVAC_840_15;
extern WORD HVAC_840_16;

extern WORD HVAC_850_1;
extern WORD HVAC_850_2;
extern WORD HVAC_850_3;
extern WORD HVAC_850_4;
extern WORD HVAC_850_5;
extern WORD HVAC_850_6;
extern WORD HVAC_850_7;
extern WORD HVAC_850_8;
extern WORD HVAC_850_9;
extern WORD HVAC_850_10;
extern WORD HVAC_850_11;
extern WORD HVAC_850_12;
extern WORD HVAC_850_13;
extern WORD HVAC_850_14;
extern WORD HVAC_850_15;
extern WORD HVAC_850_16;

extern WORD HVAC_860_1;
extern WORD HVAC_860_2;
extern WORD HVAC_860_3;
extern WORD HVAC_860_4;
extern WORD HVAC_860_5;
extern WORD HVAC_860_6;
extern WORD HVAC_860_7;
extern WORD HVAC_860_8;
extern WORD HVAC_860_9;
extern WORD HVAC_860_10;
extern WORD HVAC_860_11;
extern WORD HVAC_860_12;
extern WORD HVAC_860_13;
extern WORD HVAC_860_14;
extern WORD HVAC_860_15;
extern WORD HVAC_860_16;

extern WORD HVAC_870_1;
extern WORD HVAC_870_2;
extern WORD HVAC_870_3;
extern WORD HVAC_870_4;
extern WORD HVAC_870_5;
extern WORD HVAC_870_6;
extern WORD HVAC_870_7;
extern WORD HVAC_870_8;
extern WORD HVAC_870_9;
extern WORD HVAC_870_10;
extern WORD HVAC_870_11;
extern WORD HVAC_870_12;
extern WORD HVAC_870_13;
extern WORD HVAC_870_14;
extern WORD HVAC_870_15;
extern WORD HVAC_870_16;

extern WORD HVAC_880_1;
extern WORD HVAC_880_2;
extern WORD HVAC_880_3;
extern WORD HVAC_880_4;
extern WORD HVAC_880_5;
extern WORD HVAC_880_6;
extern WORD HVAC_880_7;
extern WORD HVAC_880_8;
extern WORD HVAC_880_9;
extern WORD HVAC_880_10;
extern WORD HVAC_880_11;
extern WORD HVAC_880_12;
extern WORD HVAC_880_13;
extern WORD HVAC_880_14;
extern WORD HVAC_880_15;
extern WORD HVAC_880_16;

extern WORD PIS_910_1;
extern WORD PIS_910_2;
extern WORD PIS_910_3;
extern WORD PIS_910_4;
extern WORD PIS_910_5;
extern WORD PIS_910_6;
extern WORD PIS_910_7;
extern WORD PIS_910_8;
extern WORD PIS_910_9;
extern WORD PIS_910_10;
extern WORD PIS_910_11;
extern WORD PIS_910_12;
extern WORD PIS_910_13;
extern WORD PIS_910_14;
extern WORD PIS_910_15;
extern WORD PIS_910_16;

extern WORD PIS_911_1;
extern WORD PIS_911_2;
extern WORD PIS_911_3;
extern WORD PIS_911_4;
extern WORD PIS_911_5;
extern WORD PIS_911_6;
extern WORD PIS_911_7;
extern WORD PIS_911_8;
extern WORD PIS_911_9;
extern WORD PIS_911_10;
extern WORD PIS_911_11;
extern WORD PIS_911_12;
extern WORD PIS_911_13;
extern WORD PIS_911_14;
extern WORD PIS_911_15;
extern WORD PIS_911_16;

extern WORD PIS_920_1;
extern WORD PIS_920_2;
extern WORD PIS_920_3;
extern WORD PIS_920_4;
extern WORD PIS_920_5;
extern WORD PIS_920_6;
extern WORD PIS_920_7;
extern WORD PIS_920_8;
extern WORD PIS_920_9;
extern WORD PIS_920_10;
extern WORD PIS_920_11;
extern WORD PIS_920_12;
extern WORD PIS_920_13;
extern WORD PIS_920_14;
extern WORD PIS_920_15;
extern WORD PIS_920_16;

extern WORD PIS_921_1;
extern WORD PIS_921_2;
extern WORD PIS_921_3;
extern WORD PIS_921_4;
extern WORD PIS_921_5;
extern WORD PIS_921_6;
extern WORD PIS_921_7;
extern WORD PIS_921_8;
extern WORD PIS_921_9;
extern WORD PIS_921_10;
extern WORD PIS_921_11;
extern WORD PIS_921_12;
extern WORD PIS_921_13;
extern WORD PIS_921_14;
extern WORD PIS_921_15;
extern WORD PIS_921_16;

extern WORD ATC_A10_1;
extern WORD ATC_A10_2;
extern WORD ATC_A10_3;
extern WORD ATC_A10_4;
extern WORD ATC_A10_5;
extern WORD ATC_A10_6;
extern WORD ATC_A10_7;
extern WORD ATC_A10_8;
extern WORD ATC_A10_9;
extern WORD ATC_A10_10;
extern WORD ATC_A10_11;
extern WORD ATC_A10_12;
extern WORD ATC_A10_13;
extern WORD ATC_A10_14;
extern WORD ATC_A10_15;
extern WORD ATC_A10_16;

extern WORD ATC_A11_1;
extern WORD ATC_A11_2;
extern WORD ATC_A11_3;
extern WORD ATC_A11_4;
extern WORD ATC_A11_5;
extern WORD ATC_A11_6;
extern WORD ATC_A11_7;
extern WORD ATC_A11_8;
extern WORD ATC_A11_9;
extern WORD ATC_A11_10;
extern WORD ATC_A11_11;
extern WORD ATC_A11_12;
extern WORD ATC_A11_13;
extern WORD ATC_A11_14;
extern WORD ATC_A11_15;
extern WORD ATC_A11_16;

extern WORD  FAS_B10_1;
extern WORD  FAS_B10_2;
extern WORD  FAS_B10_3;
extern WORD  FAS_B10_4;
extern WORD  FAS_B10_5;
extern WORD  FAS_B10_6;
extern WORD  FAS_B10_7;
extern WORD  FAS_B10_8;
extern WORD  FAS_B10_9;
extern WORD  FAS_B10_10;
extern WORD  FAS_B10_11;
extern WORD  FAS_B10_12;
extern WORD  FAS_B10_13;
extern WORD  FAS_B10_14;
extern WORD  FAS_B10_15;
extern WORD  FAS_B10_16;

extern WORD  FAS_B20_1;
extern WORD  FAS_B20_2;
extern WORD  FAS_B20_3;
extern WORD  FAS_B20_4;
extern WORD  FAS_B20_5;
extern WORD  FAS_B20_6;
extern WORD  FAS_B20_7;
extern WORD  FAS_B20_8;
extern WORD  FAS_B20_9;
extern WORD  FAS_B20_10;
extern WORD  FAS_B20_11;
extern WORD  FAS_B20_12;
extern WORD  FAS_B20_13;
extern WORD  FAS_B20_14;
extern WORD  FAS_B20_15;
extern WORD  FAS_B20_16;

extern WORD ERM_F00_1;
extern WORD ERM_F00_2;
extern WORD ERM_F00_3;
extern WORD ERM_F00_4;
extern WORD ERM_F00_5;
extern WORD ERM_F00_6;
extern WORD ERM_F00_7;
extern WORD ERM_F00_8;
extern WORD ERM_F00_9;
extern WORD ERM_F00_10;
extern WORD ERM_F00_11;
extern WORD ERM_F00_12;
extern WORD ERM_F00_13;
extern WORD ERM_F00_14;
extern WORD ERM_F00_15;
extern WORD ERM_F00_16;

extern WORD ERM_F01_1;
extern WORD ERM_F01_2;
extern WORD ERM_F01_3;
extern WORD ERM_F01_4;
extern WORD ERM_F01_5;
extern WORD ERM_F01_6;
extern WORD ERM_F01_7;
extern WORD ERM_F01_8;
extern WORD ERM_F01_9;
extern WORD ERM_F01_10;
extern WORD ERM_F01_11;
extern WORD ERM_F01_12;
extern WORD ERM_F01_13;
extern WORD ERM_F01_14;
extern WORD ERM_F01_15;
extern WORD ERM_F01_16;

extern WORD ERM_F02_1;
extern WORD ERM_F02_2;
extern WORD ERM_F02_3;
extern WORD ERM_F02_4;
extern WORD ERM_F02_5;
extern WORD ERM_F02_6;
extern WORD ERM_F02_7;
extern WORD ERM_F02_8;
extern WORD ERM_F02_9;
extern WORD ERM_F02_10;
extern WORD ERM_F02_11;
extern WORD ERM_F02_12;
extern WORD ERM_F02_13;
extern WORD ERM_F02_14;
extern WORD ERM_F02_15;
extern WORD ERM_F02_16;

extern WORD ERM_F03_1;
extern WORD ERM_F03_2;
extern WORD ERM_F03_3;
extern WORD ERM_F03_4;
extern WORD ERM_F03_5;
extern WORD ERM_F03_6;
extern WORD ERM_F03_7;
extern WORD ERM_F03_8;
extern WORD ERM_F03_9;
extern WORD ERM_F03_10;
extern WORD ERM_F03_11;
extern WORD ERM_F03_12;
extern WORD ERM_F03_13;
extern WORD ERM_F03_14;
extern WORD ERM_F03_15;
extern WORD ERM_F03_16;

extern WORD ERM_F10_1;
extern WORD ERM_F10_2;
extern WORD ERM_F10_3;
extern WORD ERM_F10_4;
extern WORD ERM_F10_5;
extern WORD ERM_F10_6;
extern WORD ERM_F10_7;
extern WORD ERM_F10_8;
extern WORD ERM_F10_9;
extern WORD ERM_F10_10;
extern WORD ERM_F10_11;
extern WORD ERM_F10_12;
extern WORD ERM_F10_13;
extern WORD ERM_F10_14;
extern WORD ERM_F10_15;
extern WORD ERM_F10_16;

extern WORD ERM_F11_1;
extern WORD ERM_F11_2;
extern WORD ERM_F11_3;
extern WORD ERM_F11_4;
extern WORD ERM_F11_5;
extern WORD ERM_F11_6;
extern WORD ERM_F11_7;
extern WORD ERM_F11_8;
extern WORD ERM_F11_9;
extern WORD ERM_F11_10;
extern WORD ERM_F11_11;
extern WORD ERM_F11_12;
extern WORD ERM_F11_13;
extern WORD ERM_F11_14;
extern WORD ERM_F11_15;
extern WORD ERM_F11_16;

extern WORD ERM_F12_1;
extern WORD ERM_F12_2;
extern WORD ERM_F12_3;
extern WORD ERM_F12_4;
extern WORD ERM_F12_5;
extern WORD ERM_F12_6;
extern WORD ERM_F12_7;
extern WORD ERM_F12_8;
extern WORD ERM_F12_9;
extern WORD ERM_F12_10;
extern WORD ERM_F12_11;
extern WORD ERM_F12_12;
extern WORD ERM_F12_13;
extern WORD ERM_F12_14;
extern WORD ERM_F12_15;
extern WORD ERM_F12_16;

extern WORD ERM_F13_1;
extern WORD ERM_F13_2;
extern WORD ERM_F13_3;
extern WORD ERM_F13_4;
extern WORD ERM_F13_5;
extern WORD ERM_F13_6;
extern WORD ERM_F13_7;
extern WORD ERM_F13_8;
extern WORD ERM_F13_9;
extern WORD ERM_F13_10;
extern WORD ERM_F13_11;
extern WORD ERM_F13_12;
extern WORD ERM_F13_13;
extern WORD ERM_F13_14;
extern WORD ERM_F13_15;
extern WORD ERM_F13_16;

extern WORD CCU_HMI_220_1;
extern WORD CCU_HMI_220_2;
extern WORD CCU_HMI_220_3;
extern WORD CCU_HMI_220_4;
extern WORD CCU_HMI_220_5;
extern WORD CCU_HMI_220_6;
extern WORD CCU_HMI_220_7;
extern WORD CCU_HMI_220_8;
extern WORD CCU_HMI_220_9;
extern WORD CCU_HMI_220_10;
extern WORD CCU_HMI_220_11;
extern WORD CCU_HMI_220_12;
extern WORD CCU_HMI_220_13;
extern WORD CCU_HMI_220_14;
extern WORD CCU_HMI_220_15;
extern WORD CCU_HMI_220_16;

extern WORD CCU_HMI_221_1;
extern WORD CCU_HMI_221_2;
extern WORD CCU_HMI_221_3;
extern WORD CCU_HMI_221_4;
extern WORD CCU_HMI_221_5;
extern WORD CCU_HMI_221_6;
extern WORD CCU_HMI_221_7;
extern WORD CCU_HMI_221_8;
extern WORD CCU_HMI_221_9;
extern WORD CCU_HMI_221_10;
extern WORD CCU_HMI_221_11;
extern WORD CCU_HMI_221_12;
extern WORD CCU_HMI_221_13;
extern WORD CCU_HMI_221_14;
extern WORD CCU_HMI_221_15;
extern WORD CCU_HMI_221_16;

extern WORD CCU_HMI_222_1;
extern WORD CCU_HMI_222_2;
extern WORD CCU_HMI_222_3;
extern WORD CCU_HMI_222_4;
extern WORD CCU_HMI_222_5;
extern WORD CCU_HMI_222_6;
extern WORD CCU_HMI_222_7;
extern WORD CCU_HMI_222_8;
extern WORD CCU_HMI_222_9;
extern WORD CCU_HMI_222_10;
extern WORD CCU_HMI_222_11;
extern WORD CCU_HMI_222_12;
extern WORD CCU_HMI_222_13;
extern WORD CCU_HMI_222_14;
extern WORD CCU_HMI_222_15;
extern WORD CCU_HMI_222_16;

extern WORD CCU_HMI_223_1;
extern WORD CCU_HMI_223_2;
extern WORD CCU_HMI_223_3;
extern WORD CCU_HMI_223_4;
extern WORD CCU_HMI_223_5;
extern WORD CCU_HMI_223_6;
extern WORD CCU_HMI_223_7;
extern WORD CCU_HMI_223_8;
extern WORD CCU_HMI_223_9;
extern WORD CCU_HMI_223_10;
extern WORD CCU_HMI_223_11;
extern WORD CCU_HMI_223_12;
extern WORD CCU_HMI_223_13;
extern WORD CCU_HMI_223_14;
extern WORD CCU_HMI_223_15;
extern WORD CCU_HMI_223_16;


extern WORD comm_status_data1;
extern WORD comm_status_data2;
extern WORD comm_status_data3;
extern WORD comm_status_data4;
extern WORD comm_status_data5;
extern WORD comm_status_data6;
extern WORD comm_status_data7;
extern WORD comm_status_data8;
extern WORD comm_status_data9;
extern WORD comm_status_data10;
extern WORD comm_status_data11;
extern WORD comm_status_data12;
extern WORD comm_status_data13;
extern WORD comm_status_data14;
extern WORD comm_status_data15;
extern WORD comm_status_data16;
extern WORD comm_status_data17;
extern WORD comm_status_data18;
extern WORD comm_status_data19;
extern WORD comm_status_data20;
extern WORD comm_status_data21;
extern WORD comm_status_data22;
extern WORD comm_status_data23;
extern WORD comm_status_data24;
extern WORD comm_status_data25;
extern WORD comm_status_data26;
extern WORD comm_status_data27;
extern WORD comm_status_data28;
extern WORD comm_status_data29;
extern WORD comm_status_data30;
extern WORD comm_status_data31;
extern WORD comm_status_data32;
extern WORD comm_status_data33;
extern WORD comm_status_data34;
extern WORD comm_status_data35;
extern WORD comm_status_data36;
extern WORD comm_status_data37;
extern WORD comm_status_data38;
extern WORD comm_status_data39;
extern WORD comm_status_data40;
extern WORD comm_status_data41;
extern WORD comm_status_data42;
extern WORD comm_status_data43;
extern WORD comm_status_data44;
extern WORD comm_status_data45;
extern WORD comm_status_data46;
extern WORD comm_status_data47;
extern WORD comm_status_data48;
extern WORD comm_status_data49;
extern WORD comm_status_data50;
extern WORD comm_status_data51;
extern WORD comm_status_data52;
extern WORD comm_status_data53;
extern WORD comm_status_data54;
extern WORD comm_status_data55;
extern WORD comm_status_data56;
extern WORD comm_status_data57;
extern WORD comm_status_data58;
extern WORD comm_status_data59;
extern WORD comm_status_data60;
extern WORD comm_status_data61;
extern WORD comm_status_data62;
extern WORD comm_status_data63;
extern WORD comm_status_data64;
extern WORD comm_status_data65;
extern WORD comm_status_data66;
extern WORD comm_status_data67;
extern WORD comm_status_data68;
extern WORD comm_status_data69;
extern WORD comm_status_data70;
extern WORD comm_status_data71;
extern WORD comm_status_data72;
extern WORD comm_status_data73;
extern WORD comm_status_data74;
extern WORD comm_status_data75;
extern WORD comm_status_data76;
extern WORD comm_status_data77;
extern WORD comm_status_data78;
extern WORD comm_status_data79;
extern WORD comm_status_data80;
extern WORD comm_status_data81;
extern WORD comm_status_data82;
extern WORD comm_status_data83;
extern WORD comm_status_data84;
extern WORD comm_status_data85;
extern WORD comm_status_data86;
extern WORD comm_status_data87;
extern WORD comm_status_data88;
extern WORD comm_status_data89;
extern WORD comm_status_data90;
extern WORD comm_status_data91;
extern WORD error_code;
extern WORD error_code1;
extern WORD error_code2;
extern WORD error_code3;
extern WORD error_code4;
extern WORD error_code5;
extern WORD error_code6;
extern WORD error_code7;
extern WORD error_code8;
extern WORD error_code9;
extern WORD error_code10;
extern WORD error_code11;
extern WORD error_code12;
extern WORD error_code13;
extern WORD error_code14;
extern WORD error_code15;
extern WORD error_code16;
extern WORD error_code17;
extern WORD error_code18;
extern WORD error_code19;
extern WORD error_code20;
extern WORD error_code21;
extern WORD error_code22;
extern WORD error_code23;
extern WORD error_code24;
extern WORD error_code25;
extern WORD error_code26;
extern WORD error_code27;
extern WORD error_code28;
extern WORD error_code29;
extern WORD error_code30;
extern WORD error_code31;
extern WORD error_code32;
extern WORD error_code33;
extern WORD error_code34;
extern WORD error_code35;
extern WORD error_code36;
extern WORD error_code37;
extern WORD error_code38;
extern WORD error_code39;
extern WORD error_code40;
extern WORD error_code41;
extern WORD error_code42;
extern WORD error_code43;
extern WORD error_code44;
extern WORD error_code45;
extern WORD error_code46;
extern WORD error_code47;
extern WORD error_code48;
extern WORD error_code49;
extern WORD error_code50;
extern WORD error_code51;
extern WORD error_code52;
extern WORD error_code53;
extern WORD error_code54;
extern WORD error_code55;
extern WORD error_code56;
extern WORD error_code57;
extern WORD error_code58;
extern WORD error_code59;
extern WORD error_code60;
extern WORD currency_data1;
extern WORD currency_data2;
extern WORD currency_data3;
extern WORD currency_data4;
extern WORD currency_data5;
extern WORD currency_data6;
extern WORD currency_data7;
extern WORD run_status_data1;
extern WORD run_status_data2;
extern WORD run_status_data3;
extern WORD run_status_data4;
extern WORD run_status_data5;
extern WORD run_status_data6;
extern WORD run_status_data7;
extern WORD run_status_data8;
extern WORD run_status_data9;
extern WORD run_status_data10;
extern WORD run_status_data11;
extern WORD run_status_data12;
extern WORD run_status_data13;
extern WORD run_status_data14;
extern WORD run_status_data15;
extern WORD run_status_data16;
extern WORD run_status_data17;
extern WORD run_status_data18;
extern WORD run_status_data19;
extern WORD run_status_data20;
extern WORD run_status_data21;
extern WORD run_status_data22;
extern WORD run_status_data23;
extern WORD run_status_data24;
extern WORD run_status_data25;
extern WORD run_status_data26;
extern WORD run_status_data27;
extern WORD run_status_data28;
extern WORD run_status_data29;
extern WORD run_status_data30;
extern WORD run_status_data31;
extern WORD run_status_data32;
extern WORD run_status_data33;
extern WORD run_status_data34;
extern WORD run_status_data35;
extern WORD run_status_data36;
extern WORD run_status_data37;
extern WORD run_status_data38;
extern WORD run_status_data39;
extern WORD run_status_data40;
extern WORD run_status_data41;
extern WORD run_status_data42;
extern WORD run_status_data43;
extern WORD run_status_data44;
extern WORD run_status_data45;
extern WORD run_status_data46;
extern WORD run_status_data47;
extern WORD run_status_data48;
extern WORD run_status_data49;
extern WORD run_status_data50;
extern WORD run_status_data51;
extern WORD run_status_data52;
extern WORD run_status_data53;
extern WORD run_status_data54;
extern WORD run_status_data55;
extern WORD run_status_data56;
extern WORD run_status_data57;
extern WORD run_status_data58;
extern WORD run_status_data59;
extern WORD run_status_data60;
extern WORD run_status_data61;
extern WORD run_status_data62;
extern WORD run_status_data63;
extern WORD run_status_data64;
extern WORD run_status_data65;
extern WORD run_status_data66;
extern WORD run_status_data67;
extern WORD run_status_data68;
extern WORD run_status_data69;
extern WORD run_status_data70;
extern WORD run_status_data71;
extern WORD run_status_data72;
extern WORD run_status_data73;
extern WORD run_status_data74;
extern WORD run_status_data75;
extern WORD run_status_data76;
extern WORD run_status_data77;
extern WORD run_status_data78;
extern WORD run_status_data79;
extern WORD run_status_data80;
extern WORD run_status_data81;
extern WORD run_status_data82;
extern WORD run_status_data83;
extern WORD run_status_data84;
extern WORD run_status_data85;
extern WORD run_status_data86;
extern WORD run_status_data87;
extern WORD run_status_data88;
extern WORD run_status_data89;
extern WORD run_status_data90;
extern WORD run_status_data91;
extern WORD run_status_data92;
extern WORD run_status_data93;
extern WORD run_status_data94;
extern WORD run_status_data95;
extern WORD run_status_data96;
extern WORD run_status_data97;
extern WORD run_status_data98;
extern WORD run_status_data99;
extern WORD run_status_data100;
extern WORD run_status_data101;
extern WORD run_status_data102;
extern WORD run_status_data103;
extern WORD train_status_data1;
extern WORD train_status_data2;
extern WORD train_status_data3;
extern WORD train_status_data4;
extern WORD train_status_data5;
extern WORD train_status_data6;
extern WORD train_status_data7;
extern WORD train_status_data8;
extern WORD train_status_data9;
extern WORD train_status_data10;
extern WORD train_status_data11;
extern WORD train_status_data12;
extern WORD train_status_data13;
extern WORD train_status_data14;
extern WORD train_status_data15;
extern WORD train_status_data16;
extern WORD train_status_data17;
extern WORD train_status_data18;
extern WORD train_status_data19;
extern WORD train_status_data20;
extern WORD train_status_data21;
extern WORD train_status_data22;
extern WORD train_status_data23;
extern WORD train_status_data24;
extern WORD train_status_data25;
extern WORD train_status_data26;
extern WORD train_status_data27;
extern WORD train_status_data28;
extern WORD train_status_data29;
extern WORD train_status_data30;
extern WORD train_status_data31;
extern WORD train_status_data32;
extern WORD train_status_data33;
extern WORD train_status_data34;
extern WORD train_status2_data1;
extern WORD train_status2_data2;
extern WORD train_status2_data3;
extern WORD train_status2_data4;
extern WORD train_status2_data5;
extern WORD train_status2_data6;
extern WORD train_status2_data7;
extern WORD train_status2_data8;
extern WORD train_status2_data9;
extern WORD train_status2_data10;
extern WORD train_status2_data11;
extern WORD train_status2_data12;
extern WORD train_status2_data13;
extern WORD train_status2_data14;
extern WORD train_status2_data15;
extern WORD train_status2_data16;
extern WORD train_status2_data17;
extern WORD train_status2_data18;
extern WORD train_status2_data19;
extern WORD train_status2_data20;
extern WORD train_status2_data21;
extern WORD train_status3_data1;
extern WORD train_status3_data2;
extern WORD train_status3_data3;
extern WORD hvac_status_data1;
extern WORD hvac_status_data2;
extern WORD hvac_status_data3;
extern WORD hvac_status_data4;
extern WORD hvac_status_data5;
extern WORD hvac_status_data6;
extern WORD hvac_status_data7;
extern WORD hvac_status_data8;
extern WORD hvac_status_data9;
extern WORD hvac_status_data10;
extern WORD hvac_status_data11;
extern WORD hvac_status_data12;
extern WORD hvac_status_data13;
extern WORD hvac_status_data14;
extern WORD hvac_status_data15;
extern WORD hvac_status_data16;
extern WORD hvac_status_data17;
extern WORD hvac_status_data18;
extern WORD hvac_status_data19;
extern WORD hvac_status_data20;
extern WORD hvac_status_data21;
extern WORD hvac_status_data22;
extern WORD hvac_status_data23;
extern WORD hvac_status_data24;
extern WORD hvac_status_data25;
extern WORD hvac_status_data26;
extern WORD hvac_status_data27;
extern WORD hvac_status_data28;
extern WORD hvac_status_data29;
extern WORD hvac_status_data30;
extern WORD hvac_status_data31;
extern WORD hvac_status_data32;
extern WORD hvac_status_data33;
extern WORD hvac_status_data34;
extern WORD hvac_status_data35;
extern WORD hvac_status_data36;
extern WORD hvac_status_data37;
extern WORD hvac_status_data38;
extern WORD hvac_status_data39;
extern WORD hvac_status_data40;
extern WORD hvac_status_data41;
extern WORD hvac_status_data42;
extern WORD hvac_status_data43;
extern WORD hvac_status_data44;
extern WORD parameter_setting_data1;
extern WORD parameter_setting_data2;
extern WORD parameter_setting_data3;
extern WORD parameter_setting_data4;
extern WORD parameter_setting_data5;
extern WORD parameter_setting_data6;
extern WORD parameter_setting_data7;
extern WORD parameter_setting_data8;
extern WORD parameter_setting_data9;
extern WORD parameter_setting_data10;
extern WORD parameter_setting_data11;
extern WORD parameter_setting_data12;
extern WORD parameter_setting_data13;
extern WORD parameter_setting_data14;
extern WORD parameter_setting_data15;
extern WORD parameter_setting_data16;
extern WORD parameter_setting_data17;
extern WORD parameter_setting_data18;
extern WORD parameter_setting_data19;
extern WORD parameter_setting_data20;
extern WORD parameter_setting_data21;
extern WORD parameter_setting_data22;
extern WORD parameter_setting_data23;
extern WORD parameter_setting_data24;
extern WORD parameter_setting_data25;
extern WORD parameter_setting_data26;
extern WORD parameter_setting_data27;
extern WORD parameter_setting_data28;
extern WORD parameter_setting_data29;
extern WORD Door_test_data1;
extern WORD Door_test_data2;
extern WORD Door_test_data3;
extern WORD Door_test_data4;
extern WORD Door_test_data5;
extern WORD Door_test_data6;
extern WORD TCU_test_data1;
extern WORD TCU_test_data2;
extern WORD TCU_test_data3;
extern WORD TCU_test_data4;
extern WORD TCU_test_data5;
extern WORD TCU_test_data6;
extern WORD TCU_test_data7;
extern WORD TCU_test_data8;
extern WORD TCU_test_data9;
extern WORD TCU_test_data10;
extern WORD TCU_test_data11;
extern WORD TCU_test_data12;
extern WORD TCU_test_data13;
extern WORD TCU_test_data14;
extern WORD TCU_test_data15;
extern WORD TCU_test_data16;
extern WORD TCU_test_data17;
extern WORD TCU_test_data18;
extern WORD ACU_test_data1;
extern WORD ACU_test_data2;
extern WORD ACU_test_data3;
extern WORD ACU_test_data4;
extern WORD BCU_test_data1;
extern WORD BCU_test_data2;
extern WORD BCU_test_data3;
extern WORD BCU_test_data4;
extern WORD BCU_selftest_data1;
extern WORD BCU_selftest_data2;
extern WORD BCU_selftest_data3;
extern WORD BCU_selftest_data4;
extern WORD BCU_selftest_data5;
extern WORD BCU_selftest_data6;
extern WORD BCU_selftest_data7;
extern WORD BCU_selftest_data8;
extern WORD BCU_selftest_data9;
extern WORD BCU_selftest_data10;
extern WORD BCU_selftest_data11;
extern WORD BCU_selftest_data12;
extern WORD BCU_selftest_data13;
extern WORD BCU_selftest_data14;
extern WORD BCU_selftest_data15;
extern WORD BCU_selftest_data16;
extern WORD run_record_data1;
extern WORD run_record_data2;
extern WORD run_record_data3;
extern WORD run_record_data4;
extern WORD run_record_data5;
extern WORD run_record_data6;
extern WORD run_record_data7;
extern WORD run_record_data8;
extern WORD run_record_data9;
extern WORD run_record_data10;
extern WORD run_record_data11;
extern WORD run_record_data12;
extern WORD run_record_data13;
extern WORD run_record_data14;
extern WORD station_new_setting1;
extern WORD station_new_setting2;
extern WORD station_new_setting3;
extern WORD station_new_setting4;
extern WORD station_new_setting5;
extern WORD station_new_setting6;
extern WORD station_new_setting7;
extern WORD setting_time1;
extern WORD setting_time2;
extern WORD setting_time3;
extern WORD preoperation_acceleration;
extern WORD preoperation_brake_distance;
extern WORD preoperation_determine_kind;
extern WORD preoperation_level;
extern WORD preoperation_brake_start_speed;
extern WORD preoperation_reproduce;
extern WORD soft_version1;
extern WORD soft_version2;
extern WORD soft_version3;
extern WORD soft_version4;
extern WORD soft_version5;
extern WORD soft_version6;
extern WORD soft_version7;
extern WORD soft_version8;
extern WORD soft_version9;
extern WORD soft_version10;
extern WORD soft_version11;
extern WORD soft_version12;
extern WORD soft_version13;
extern WORD soft_version14;
extern WORD soft_version15;
extern WORD soft_version16;
extern WORD soft_version17;
extern WORD soft_version18;
extern WORD soft_version19;
extern WORD soft_version20;
extern WORD soft_version21;
extern WORD soft_version22;
extern WORD soft_version23;
extern WORD soft_version24;
extern WORD soft_version25;
extern WORD soft_version26;
extern WORD soft_version27;
extern WORD soft_version28;
extern WORD soft_version29;
extern WORD soft_version30;
extern WORD soft_version31;
extern WORD soft_version32;
extern WORD soft_version33;
extern WORD soft_version34;
extern WORD soft_version35;
extern WORD soft_version36;
extern WORD soft_version37;
extern WORD soft_version38;
extern WORD soft_version39;
extern WORD soft_version40;
extern WORD soft_version41;
extern WORD soft_version42;
extern WORD soft_version43;
extern WORD soft_version44;
extern WORD soft_version45;
extern WORD soft_version46;
extern WORD soft_version47;
extern WORD soft_version48;
extern WORD soft_version49;
extern WORD soft_version50;
extern WORD soft_version51;
extern WORD soft_version52;
extern WORD soft_version53;
extern WORD soft_version54;
extern WORD soft_version55;
extern WORD soft_version56;
extern WORD soft_version57;
extern WORD soft_version58;
extern WORD soft_version59;
extern WORD soft_version60;
extern WORD soft_version61;
extern WORD soft_version62;
extern WORD soft_version63;
extern WORD soft_version64;
extern WORD soft_version65;
extern WORD soft_version66;
extern WORD soft_version67;
extern WORD soft_version68;
extern WORD soft_version69;
extern WORD soft_version70;
extern WORD soft_version71;
extern WORD soft_version72;
extern WORD soft_version73;
extern WORD soft_version74;
extern WORD soft_version75;
extern WORD soft_version76;
extern WORD soft_version77;
extern WORD soft_version78;
extern WORD soft_version79;
extern WORD soft_version80;
extern WORD soft_version81;
extern WORD soft_version82;
extern WORD soft_version83;
extern WORD soft_version84;
extern WORD soft_version85;
extern WORD soft_version86;
extern WORD soft_version87;
extern WORD soft_version88;
extern WORD soft_version89;
extern WORD soft_version90;
extern WORD refresh_time1;
extern WORD refresh_time2;
extern WORD refresh_time3;
extern WORD refresh_time4;
extern WORD refresh_time5;
extern WORD refresh_time6;
extern WORD refresh_time7;
extern WORD refresh_time8;
extern WORD refresh_time9;
extern WORD refresh_time10;
extern WORD refresh_time11;
extern WORD refresh_time12;
extern WORD refresh_time13;
extern WORD refresh_time14;
extern WORD refresh_time15;
extern WORD refresh_time16;
extern WORD refresh_time17;
extern WORD refresh_time18;
extern WORD refresh_time19;
extern WORD refresh_time20;
extern WORD refresh_time21;
extern WORD refresh_time22;
extern WORD refresh_time23;
extern WORD refresh_time24;
extern WORD refresh_time25;
extern WORD refresh_time26;
extern WORD refresh_time27;
extern WORD refresh_time28;
extern WORD refresh_time29;
extern WORD refresh_time30;
extern WORD refresh_time31;
extern WORD refresh_time32;
extern WORD refresh_time33;
extern WORD refresh_time34;
extern WORD refresh_time35;
extern WORD refresh_time36;
extern WORD refresh_time37;
extern WORD refresh_time38;
extern WORD refresh_time39;
extern WORD refresh_time40;
extern WORD refresh_time41;
extern WORD refresh_time42;
extern WORD refresh_time43;
extern WORD refresh_time44;
extern WORD refresh_time45;
extern WORD refresh_time46;
extern WORD refresh_time47;
extern WORD refresh_time48;
extern WORD refresh_time49;
extern WORD refresh_time50;
extern WORD refresh_time51;
extern WORD refresh_time52;
extern WORD refresh_time53;
extern WORD refresh_time54;
extern WORD refresh_time55;
extern WORD refresh_time56;
extern WORD refresh_time57;
extern WORD refresh_time58;
extern WORD refresh_time59;
extern WORD refresh_time60;
extern WORD refresh_time61;
extern WORD refresh_time62;
extern WORD refresh_time63;
extern WORD refresh_time64;
extern WORD refresh_time65;
extern WORD refresh_time66;
extern WORD refresh_time67;
extern WORD refresh_time68;
extern WORD refresh_time69;
extern WORD refresh_time70;
extern WORD refresh_time71;
extern WORD refresh_time72;
extern WORD refresh_time73;
extern WORD refresh_time74;
extern WORD refresh_time75;
extern WORD refresh_time76;
extern WORD refresh_time77;
extern WORD refresh_time78;
extern WORD refresh_time79;
extern WORD refresh_time80;
extern WORD RIOM_Data1;
extern WORD RIOM_Data2;
extern WORD RIOM_Data3;
extern WORD RIOM_Data4;
extern WORD RIOM_Data5;
extern WORD RIOM_Data6;
extern WORD RIOM_Data7;
extern WORD RIOM_Data8;
extern WORD RIOM_Data9;
extern WORD RIOM_Data10;
extern WORD RIOM_Data11;
extern WORD RIOM_Data12;
extern WORD RIOM_Data13;
extern WORD RIOM_Data14;
extern WORD RIOM_Data15;
extern WORD RIOM_Data16;
extern WORD RIOM_Data17;
extern WORD RIOM_Data18;
extern WORD RIOM_Data19;
extern WORD RIOM_Data20;
extern WORD RIOM_Data21;
extern WORD RIOM_Data22;
extern WORD RIOM_Data23;
extern WORD RIOM_Data24;
extern WORD RIOM_Data25;
extern WORD RIOM_Data26;
extern WORD RIOM_Data27;
extern WORD RIOM_Data28;
extern WORD error_code61;
extern WORD error_code62;
extern WORD error_code63;
extern WORD error_code64;
extern WORD error_code65;
extern WORD error_code66;
extern WORD error_code67;
extern WORD error_code68;
extern WORD error_code69;
extern WORD error_code70;
extern WORD error_code71;
extern WORD error_code72;
extern WORD error_code73;
extern WORD error_code74;
extern WORD error_code75;
extern WORD error_code76;
extern WORD error_code77;
extern WORD error_code78;
extern WORD error_code79;
extern WORD error_code80;
extern WORD error_code81;
extern WORD error_code82;
extern WORD error_code83;
extern WORD error_code84;
extern WORD error_code85;
extern WORD error_code86;
extern WORD error_code87;
extern WORD error_code88;
extern WORD error_code89;
extern WORD error_code90;
extern WORD error_code91;
extern WORD error_code92;
extern WORD error_code93;
extern WORD error_code94;
extern WORD error_code95;
extern WORD error_code96;
extern WORD error_code97;
extern WORD error_code98;
extern WORD error_code99;
extern WORD error_code100;
extern WORD ATC_time_flag;
extern WORD ATC_time1;
extern WORD ATC_time2;
extern WORD ATC_time3;

extern WORD DO_118_1;
extern WORD DO_118_2;
extern WORD DO_118_3;
extern WORD DO_118_4;
extern WORD DO_118_5;
extern WORD DO_118_6;
extern WORD DO_118_7;
extern WORD DO_118_8;

extern WORD DO_128_1;
extern WORD DO_128_2;
extern WORD DO_128_3;
extern WORD DO_128_4;
extern WORD DO_128_5;
extern WORD DO_128_6;
extern WORD DO_128_7;
extern WORD DO_128_8;

extern WORD DO_138_1;
extern WORD DO_138_2;
extern WORD DO_138_3;
extern WORD DO_138_4;
extern WORD DO_138_5;
extern WORD DO_138_6;
extern WORD DO_138_7;
extern WORD DO_138_8;

extern WORD DO_148_1;
extern WORD DO_148_2;
extern WORD DO_148_3;
extern WORD DO_148_4;
extern WORD DO_148_5;
extern WORD DO_148_6;
extern WORD DO_148_7;
extern WORD DO_148_8;

extern WORD DO_158_1;
extern WORD DO_158_2;
extern WORD DO_158_3;
extern WORD DO_158_4;
extern WORD DO_158_5;
extern WORD DO_158_6;
extern WORD DO_158_7;
extern WORD DO_158_8;

extern WORD DO_168_1;
extern WORD DO_168_2;
extern WORD DO_168_3;
extern WORD DO_168_4;
extern WORD DO_168_5;
extern WORD DO_168_6;
extern WORD DO_168_7;
extern WORD DO_168_8;

extern WORD DO_178_1;
extern WORD DO_178_2;
extern WORD DO_178_3;
extern WORD DO_178_4;
extern WORD DO_178_5;
extern WORD DO_178_6;
extern WORD DO_178_7;
extern WORD DO_178_8;

extern WORD DO_188_1;
extern WORD DO_188_2;
extern WORD DO_188_3;
extern WORD DO_188_4;
extern WORD DO_188_5;
extern WORD DO_188_6;
extern WORD DO_188_7;
extern WORD DO_188_8;

extern WORD BCU_TC1_410_420_1;
extern WORD BCU_TC1_410_420_2;
extern WORD BCU_TC1_410_420_3;
extern WORD BCU_TC1_410_420_4;
extern WORD BCU_TC1_410_420_5;
extern WORD BCU_TC1_410_420_6;
extern WORD BCU_TC1_410_420_7;
extern WORD BCU_TC1_410_420_8;
extern WORD BCU_TC1_410_420_9;
extern WORD BCU_TC1_410_420_10;
extern WORD BCU_TC1_410_420_11;
extern WORD BCU_TC1_410_420_12;
extern WORD BCU_TC1_410_420_13;
extern WORD BCU_TC1_410_420_14;
extern WORD BCU_TC1_410_420_15;
extern WORD BCU_TC1_410_420_16;

extern WORD BCU_TC1_411_421_1;
extern WORD BCU_TC1_411_421_2;
extern WORD BCU_TC1_411_421_3;
extern WORD BCU_TC1_411_421_4;
extern WORD BCU_TC1_411_421_5;
extern WORD BCU_TC1_411_421_6;
extern WORD BCU_TC1_411_421_7;
extern WORD BCU_TC1_411_421_8;
extern WORD BCU_TC1_411_421_9;
extern WORD BCU_TC1_411_421_10;
extern WORD BCU_TC1_411_421_11;
extern WORD BCU_TC1_411_421_12;
extern WORD BCU_TC1_411_421_13;
extern WORD BCU_TC1_411_421_14;
extern WORD BCU_TC1_411_421_15;
extern WORD BCU_TC1_411_421_16;

extern WORD BCU_TC1_412_422_1;
extern WORD BCU_TC1_412_422_2;
extern WORD BCU_TC1_412_422_3;
extern WORD BCU_TC1_412_422_4;
extern WORD BCU_TC1_412_422_5;
extern WORD BCU_TC1_412_422_6;
extern WORD BCU_TC1_412_422_7;
extern WORD BCU_TC1_412_422_8;
extern WORD BCU_TC1_412_422_9;
extern WORD BCU_TC1_412_422_10;
extern WORD BCU_TC1_412_422_11;
extern WORD BCU_TC1_412_422_12;
extern WORD BCU_TC1_412_422_13;
extern WORD BCU_TC1_412_422_14;
extern WORD BCU_TC1_412_422_15;
extern WORD BCU_TC1_412_422_16;

extern WORD BCU_TC1_413_423_1;
extern WORD BCU_TC1_413_423_2;
extern WORD BCU_TC1_413_423_3;
extern WORD BCU_TC1_413_423_4;
extern WORD BCU_TC1_413_423_5;
extern WORD BCU_TC1_413_423_6;
extern WORD BCU_TC1_413_423_7;
extern WORD BCU_TC1_413_423_8;
extern WORD BCU_TC1_413_423_9;
extern WORD BCU_TC1_413_423_10;
extern WORD BCU_TC1_413_423_11;
extern WORD BCU_TC1_413_423_12;
extern WORD BCU_TC1_413_423_13;
extern WORD BCU_TC1_413_423_14;
extern WORD BCU_TC1_413_423_15;
extern WORD BCU_TC1_413_423_16;

extern WORD BCU_TC1_414_424_1;
extern WORD BCU_TC1_414_424_2;
extern WORD BCU_TC1_414_424_3;
extern WORD BCU_TC1_414_424_4;
extern WORD BCU_TC1_414_424_5;
extern WORD BCU_TC1_414_424_6;
extern WORD BCU_TC1_414_424_7;
extern WORD BCU_TC1_414_424_8;
extern WORD BCU_TC1_414_424_9;
extern WORD BCU_TC1_414_424_10;
extern WORD BCU_TC1_414_424_11;
extern WORD BCU_TC1_414_424_12;
extern WORD BCU_TC1_414_424_13;
extern WORD BCU_TC1_414_424_14;
extern WORD BCU_TC1_414_424_15;
extern WORD BCU_TC1_414_424_16;

extern WORD BCU_TC2_430_440_1;
extern WORD BCU_TC2_430_440_2;
extern WORD BCU_TC2_430_440_3;
extern WORD BCU_TC2_430_440_4;
extern WORD BCU_TC2_430_440_5;
extern WORD BCU_TC2_430_440_6;
extern WORD BCU_TC2_430_440_7;
extern WORD BCU_TC2_430_440_8;
extern WORD BCU_TC2_430_440_9;
extern WORD BCU_TC2_430_440_10;
extern WORD BCU_TC2_430_440_11;
extern WORD BCU_TC2_430_440_12;
extern WORD BCU_TC2_430_440_13;
extern WORD BCU_TC2_430_440_14;
extern WORD BCU_TC2_430_440_15;
extern WORD BCU_TC2_430_440_16;

extern WORD BCU_TC2_431_441_1;
extern WORD BCU_TC2_431_441_2;
extern WORD BCU_TC2_431_441_3;
extern WORD BCU_TC2_431_441_4;
extern WORD BCU_TC2_431_441_5;
extern WORD BCU_TC2_431_441_6;
extern WORD BCU_TC2_431_441_7;
extern WORD BCU_TC2_431_441_8;
extern WORD BCU_TC2_431_441_9;
extern WORD BCU_TC2_431_441_10;
extern WORD BCU_TC2_431_441_11;
extern WORD BCU_TC2_431_441_12;
extern WORD BCU_TC2_431_441_13;
extern WORD BCU_TC2_431_441_14;
extern WORD BCU_TC2_431_441_15;
extern WORD BCU_TC2_431_441_16;

extern WORD BCU_TC2_432_442_1;
extern WORD BCU_TC2_432_442_2;
extern WORD BCU_TC2_432_442_3;
extern WORD BCU_TC2_432_442_4;
extern WORD BCU_TC2_432_442_5;
extern WORD BCU_TC2_432_442_6;
extern WORD BCU_TC2_432_442_7;
extern WORD BCU_TC2_432_442_8;
extern WORD BCU_TC2_432_442_9;
extern WORD BCU_TC2_432_442_10;
extern WORD BCU_TC2_432_442_11;
extern WORD BCU_TC2_432_442_12;
extern WORD BCU_TC2_432_442_13;
extern WORD BCU_TC2_432_442_14;
extern WORD BCU_TC2_432_442_15;
extern WORD BCU_TC2_432_442_16;

extern WORD BCU_TC2_433_443_1;
extern WORD BCU_TC2_433_443_2;
extern WORD BCU_TC2_433_443_3;
extern WORD BCU_TC2_433_443_4;
extern WORD BCU_TC2_433_443_5;
extern WORD BCU_TC2_433_443_6;
extern WORD BCU_TC2_433_443_7;
extern WORD BCU_TC2_433_443_8;
extern WORD BCU_TC2_433_443_9;
extern WORD BCU_TC2_433_443_10;
extern WORD BCU_TC2_433_443_11;
extern WORD BCU_TC2_433_443_12;
extern WORD BCU_TC2_433_443_13;
extern WORD BCU_TC2_433_443_14;
extern WORD BCU_TC2_433_443_15;
extern WORD BCU_TC2_433_443_16;

extern WORD BCU_TC2_434_444_1;
extern WORD BCU_TC2_434_444_2;
extern WORD BCU_TC2_434_444_3;
extern WORD BCU_TC2_434_444_4;
extern WORD BCU_TC2_434_444_5;
extern WORD BCU_TC2_434_444_6;
extern WORD BCU_TC2_434_444_7;
extern WORD BCU_TC2_434_444_8;
extern WORD BCU_TC2_434_444_9;
extern WORD BCU_TC2_434_444_10;
extern WORD BCU_TC2_434_444_11;
extern WORD BCU_TC2_434_444_12;
extern WORD BCU_TC2_434_444_13;
extern WORD BCU_TC2_434_444_14;
extern WORD BCU_TC2_434_444_15;
extern WORD BCU_TC2_434_444_16;

extern WORD refresh_time_f;
extern WORD refresh_time_1;
extern WORD refresh_time_2;


extern WORD refresh_time_110;
extern WORD refresh_time_111;
extern WORD refresh_time_112;
extern WORD refresh_time_120;
extern WORD refresh_time_121;
extern WORD refresh_time_130;
extern WORD refresh_time_131;
extern WORD refresh_time_140;
extern WORD refresh_time_141;
extern WORD refresh_time_150;
extern WORD refresh_time_151;
extern WORD refresh_time_160;
extern WORD refresh_time_161;
extern WORD refresh_time_162;

extern WORD refresh_time_118;
extern WORD refresh_time_128;
extern WORD refresh_time_138;
extern WORD refresh_time_148;
extern WORD refresh_time_158;
extern WORD refresh_time_168;


extern WORD refresh_time_210;
extern WORD refresh_time_211;
extern WORD refresh_time_212;
extern WORD refresh_time_213;
extern WORD refresh_time_220;
extern WORD refresh_time_221;
extern WORD refresh_time_222;
extern WORD refresh_time_223;

extern WORD refresh_time_218;
extern WORD refresh_time_228;


extern WORD refresh_time_310;
extern WORD refresh_time_311;
extern WORD refresh_time_312;
extern WORD refresh_time_313;

extern WORD refresh_time_320;
extern WORD refresh_time_321;
extern WORD refresh_time_322;
extern WORD refresh_time_323;

extern WORD refresh_time_308;
extern WORD refresh_time_309;
extern WORD refresh_time_318;
extern WORD refresh_time_328;



extern WORD refresh_time_510;
extern WORD refresh_time_511;
extern WORD refresh_time_512;
extern WORD refresh_time_513;
extern WORD refresh_time_514;
extern WORD refresh_time_515;
extern WORD refresh_time_520;
extern WORD refresh_time_521;
extern WORD refresh_time_522;
extern WORD refresh_time_523;
extern WORD refresh_time_524;
extern WORD refresh_time_525;
extern WORD refresh_time_530;
extern WORD refresh_time_531;
extern WORD refresh_time_532;
extern WORD refresh_time_533;
extern WORD refresh_time_534;
extern WORD refresh_time_535;
extern WORD refresh_time_540;
extern WORD refresh_time_541;
extern WORD refresh_time_542;
extern WORD refresh_time_543;
extern WORD refresh_time_544;
extern WORD refresh_time_545;

extern WORD refresh_time_508;


extern WORD refresh_time_610;
extern WORD refresh_time_611;
extern WORD refresh_time_612;
extern WORD refresh_time_620;
extern WORD refresh_time_621;
extern WORD refresh_time_622;
extern WORD refresh_time_630;
extern WORD refresh_time_631;
extern WORD refresh_time_632;
extern WORD refresh_time_640;
extern WORD refresh_time_641;
extern WORD refresh_time_642;

extern WORD refresh_time_618;
extern WORD refresh_time_628;
extern WORD refresh_time_638;
extern WORD refresh_time_648;



extern WORD refresh_time_710;
extern WORD refresh_time_720;
extern WORD refresh_time_730;
extern WORD refresh_time_740;

extern WORD refresh_time_718;
extern WORD refresh_time_728;


extern WORD refresh_time_810;
extern WORD refresh_time_811;
extern WORD refresh_time_820;
extern WORD refresh_time_821;
extern WORD refresh_time_830;
extern WORD refresh_time_831;
extern WORD refresh_time_840;
extern WORD refresh_time_841;
extern WORD refresh_time_850;
extern WORD refresh_time_851;
extern WORD refresh_time_860;
extern WORD refresh_time_861;
extern WORD refresh_time_870;
extern WORD refresh_time_871;
extern WORD refresh_time_880;
extern WORD refresh_time_881;
extern WORD refresh_time_890;
extern WORD refresh_time_891;
extern WORD refresh_time_8A0;
extern WORD refresh_time_8A1;
extern WORD refresh_time_8B0;
extern WORD refresh_time_8B1;
extern WORD refresh_time_8C0;
extern WORD refresh_time_8C1;

extern WORD refresh_time_808;



extern WORD refresh_time_910;
extern WORD refresh_time_920;
extern WORD refresh_time_930;
extern WORD refresh_time_940;
extern WORD refresh_time_950;
extern WORD refresh_time_960;

extern WORD refresh_time_918;
extern WORD refresh_time_928;
extern WORD refresh_time_938;
extern WORD refresh_time_948;
extern WORD refresh_time_958;
extern WORD refresh_time_968;


extern WORD refresh_time_A10;
extern WORD refresh_time_A20;

extern WORD refresh_time_A18;

extern WORD refresh_time_B10;
extern WORD refresh_time_B11;
extern WORD refresh_time_B20;
extern WORD refresh_time_B21;
extern WORD refresh_time_B08;

extern WORD refresh_time_C10;
extern WORD refresh_time_C20;

extern WORD refresh_time_C08;
extern WORD refresh_time_C18;
extern WORD refresh_time_C28;

extern WORD refresh_time_D10;
extern WORD refresh_time_D20;

extern WORD refresh_time_D18;
extern WORD refresh_time_D28;


extern unsigned short refresh_time_udp_100 ;
extern unsigned short refresh_time_udp_110 ;
extern unsigned short refresh_time_udp_114 ;
extern unsigned short refresh_time_udp_120 ;
extern unsigned short refresh_time_udp_130 ;
extern unsigned short refresh_time_udp_140 ;
extern unsigned short refresh_time_udp_150 ;
extern WORD refresh_time_udp_160 ;
extern WORD refresh_time_udp_170 ;
extern WORD refresh_time_udp_180 ;
extern WORD refresh_time_udp_184 ;
extern WORD refresh_time_udp_200 ;
extern WORD refresh_time_udp_201 ;
extern WORD refresh_time_udp_202 ;
extern WORD refresh_time_udp_203 ;
extern WORD refresh_time_udp_280 ;
extern WORD refresh_time_udp_281 ;
extern WORD refresh_time_udp_282 ;
extern WORD refresh_time_udp_283 ;
extern WORD refresh_time_udp_400 ;


extern WORD refresh_time_udp_410 ;
extern WORD refresh_time_udp_411 ;
extern WORD refresh_time_udp_412 ;
extern WORD refresh_time_udp_413 ;
extern WORD refresh_time_udp_414 ;
extern WORD refresh_time_udp_420 ;
extern WORD refresh_time_udp_421 ;
extern WORD refresh_time_udp_422 ;
extern WORD refresh_time_udp_423 ;
extern WORD refresh_time_udp_424 ;
extern WORD refresh_time_udp_430 ;
extern WORD refresh_time_udp_431 ;
extern WORD refresh_time_udp_432 ;
extern WORD refresh_time_udp_433 ;
extern WORD refresh_time_udp_434 ;
extern WORD refresh_time_udp_440 ;
extern WORD refresh_time_udp_441 ;
extern WORD refresh_time_udp_442 ;
extern WORD refresh_time_udp_443 ;
extern WORD refresh_time_udp_444 ;

extern WORD refresh_time_udp_500 ;
extern WORD refresh_time_udp_510 ;
extern WORD refresh_time_udp_511 ;
extern WORD refresh_time_udp_520 ;
extern WORD refresh_time_udp_521 ;
extern WORD refresh_time_udp_530 ;
extern WORD refresh_time_udp_531 ;
extern WORD refresh_time_udp_540 ;
extern WORD refresh_time_udp_541 ;
extern WORD refresh_time_udp_550 ;
extern WORD refresh_time_udp_551 ;
extern WORD refresh_time_udp_560 ;
extern WORD refresh_time_udp_561 ;
extern WORD refresh_time_udp_600 ;
extern WORD refresh_time_udp_610 ;
extern WORD refresh_time_udp_611 ;
extern WORD refresh_time_udp_620 ;
extern WORD refresh_time_udp_621 ;

extern WORD refresh_time_udp_700 ;
extern WORD refresh_time_udp_701 ;

extern WORD refresh_time_udp_710 ;
extern WORD refresh_time_udp_711 ;
extern WORD refresh_time_udp_720 ;
extern WORD refresh_time_udp_721 ;
extern WORD refresh_time_udp_730 ;
extern WORD refresh_time_udp_731 ;
extern WORD refresh_time_udp_740 ;
extern WORD refresh_time_udp_741 ;
extern WORD refresh_time_udp_750 ;
extern WORD refresh_time_udp_751 ;
extern WORD refresh_time_udp_760 ;
extern WORD refresh_time_udp_761 ;
extern WORD refresh_time_udp_770 ;
extern WORD refresh_time_udp_771 ;
extern WORD refresh_time_udp_780 ;
extern WORD refresh_time_udp_781 ;
extern WORD refresh_time_udp_790 ;
extern WORD refresh_time_udp_791 ;
extern WORD refresh_time_udp_7A0 ;
extern WORD refresh_time_udp_7A1 ;
extern WORD refresh_time_udp_7B0 ;
extern WORD refresh_time_udp_7B1 ;
extern WORD refresh_time_udp_7C0 ;
extern WORD refresh_time_udp_7C1 ;
extern WORD refresh_time_udp_7D0 ;
extern WORD refresh_time_udp_7D1 ;
extern WORD refresh_time_udp_7E0 ;
extern WORD refresh_time_udp_7E1 ;
extern WORD refresh_time_udp_7F0 ;
extern WORD refresh_time_udp_7F1 ;

extern WORD refresh_time_udp_800 ;
extern WORD refresh_time_udp_810 ;
extern WORD refresh_time_udp_820 ;
extern WORD refresh_time_udp_830 ;
extern WORD refresh_time_udp_840 ;
extern WORD refresh_time_udp_850 ;
extern WORD refresh_time_udp_860 ;
extern WORD refresh_time_udp_870 ;
extern WORD refresh_time_udp_880 ;

extern WORD refresh_time_udp_900 ;
extern WORD refresh_time_udp_910 ;
extern WORD refresh_time_udp_911 ;
extern WORD refresh_time_udp_920 ;
extern WORD refresh_time_udp_921 ;

extern WORD refresh_time_udp_A00 ;
extern WORD refresh_time_udp_A10 ;
extern WORD refresh_time_udp_A11 ;

extern WORD refresh_time_udp_B00 ;
extern WORD refresh_time_udp_B10 ;
extern WORD refresh_time_udp_B20 ;

extern WORD refresh_time_udp_F00 ;
extern WORD refresh_time_udp_F01 ;
extern WORD refresh_time_udp_F02 ;
extern WORD refresh_time_udp_F03 ;

extern WORD refresh_time_udp_F10 ;
extern WORD refresh_time_udp_F11 ;
extern WORD refresh_time_udp_F12 ;
extern WORD refresh_time_udp_F13 ;

extern WORD refresh_time_udp_220 ;
extern WORD refresh_time_udp_221 ;
extern WORD refresh_time_udp_222 ;
extern WORD refresh_time_udp_223 ;






#endif // DATABUFFER_H
