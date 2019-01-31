#ifndef CRunStatePage_H
#define CRunStatePage_H

#include "CPage.h"
#include "DataBuffer.h"
#include "CRealTimeFaultsWarnningDialog.h"
#include "qlabel.h"

#define ID_PIBRUNSTATE_ARROW_RIGHT                         0X0001
#define ID_PIBRUNSTATE_ARROW_LEFT                          0X0002
#define ID_PIBRUNSTATE_TRAIN                               0X0003
#define ID_PIBRUNSTATE_LABEL_ATOMODE                       0X0004

#define ID_PIBRUNSTATE_BUTTON_EMERGENCYBROADCAST           0X0008
#define ID_PIBRUNSTATE_LABEL_CAR1DOOR1                     0X0009
#define ID_PIBRUNSTATE_LABEL_CAR1DOOR2                     0X0034
#define ID_PIBRUNSTATE_LABEL_CAR1DOOR3                     0X0035
#define ID_PIBRUNSTATE_LABEL_CAR1DOOR4                     0X0036
#define ID_PIBRUNSTATE_LABEL_CAR1DOOR5                     0X0037//ADD
#define ID_PIBRUNSTATE_LABEL_CAR1DOOR6                     0X000A
#define ID_PIBRUNSTATE_LABEL_CAR1DOOR7                     0X000B
#define ID_PIBRUNSTATE_LABEL_CAR1DOOR8                     0X000C
#define ID_PIBRUNSTATE_LABEL_CAR2DOOR1                     0X000D
#define ID_PIBRUNSTATE_LABEL_CAR2DOOR2                     0X000E
#define ID_PIBRUNSTATE_LABEL_CAR2DOOR3                     0X000F
#define ID_PIBRUNSTATE_LABEL_CAR2DOOR4                     0X0010
#define ID_PIBRUNSTATE_LABEL_CAR2DOOR5                     0X0011
#define ID_PIBRUNSTATE_LABEL_CAR2DOOR6                     0X0012
#define ID_PIBRUNSTATE_LABEL_CAR2DOOR7                     0X0013
#define ID_PIBRUNSTATE_LABEL_CAR2DOOR8                     0X0014
#define ID_PIBRUNSTATE_LABEL_CAR3DOOR1                     0X0015
#define ID_PIBRUNSTATE_LABEL_CAR3DOOR2                     0X0016
#define ID_PIBRUNSTATE_LABEL_CAR3DOOR3                     0X0017
#define ID_PIBRUNSTATE_LABEL_CAR3DOOR4                     0X0018
#define ID_PIBRUNSTATE_LABEL_CAR3DOOR5                     0X0019
#define ID_PIBRUNSTATE_LABEL_CAR3DOOR6                     0X001A
#define ID_PIBRUNSTATE_LABEL_CAR3DOOR7                     0X001B
#define ID_PIBRUNSTATE_LABEL_CAR3DOOR8                     0X001C
#define ID_PIBRUNSTATE_LABEL_CAR4DOOR1                     0X001D
#define ID_PIBRUNSTATE_LABEL_CAR4DOOR2                     0X001E
#define ID_PIBRUNSTATE_LABEL_CAR4DOOR3                     0X001F
#define ID_PIBRUNSTATE_LABEL_CAR4DOOR4                     0X0020
#define ID_PIBRUNSTATE_LABEL_CAR4DOOR5                     0X0021
#define ID_PIBRUNSTATE_LABEL_CAR4DOOR6                     0X0022
#define ID_PIBRUNSTATE_LABEL_CAR4DOOR7                     0X0023
#define ID_PIBRUNSTATE_LABEL_CAR4DOOR8                     0X0024
#define ID_PIBRUNSTATE_LABEL_CAR5DOOR1                     0X0025
#define ID_PIBRUNSTATE_LABEL_CAR5DOOR2                     0X0026
#define ID_PIBRUNSTATE_LABEL_CAR5DOOR3                     0X0027
#define ID_PIBRUNSTATE_LABEL_CAR5DOOR4                     0X0028
#define ID_PIBRUNSTATE_LABEL_CAR5DOOR5                     0X0029
#define ID_PIBRUNSTATE_LABEL_CAR5DOOR6                     0X002A
#define ID_PIBRUNSTATE_LABEL_CAR5DOOR7                     0X002B
#define ID_PIBRUNSTATE_LABEL_CAR5DOOR8                     0X002C
#define ID_PIBRUNSTATE_LABEL_CAR6DOOR1                     0X002D
#define ID_PIBRUNSTATE_LABEL_CAR6DOOR2                     0X002E
#define ID_PIBRUNSTATE_LABEL_CAR6DOOR3                     0X002F
#define ID_PIBRUNSTATE_LABEL_CAR6DOOR4                     0X0030
#define ID_PIBRUNSTATE_LABEL_CAR6DOOR5                     0X0031
#define ID_PIBRUNSTATE_LABEL_CAR6DOOR6                     0X0032
#define ID_PIBRUNSTATE_LABEL_CAR6DOOR7                     0X0033
#define ID_PIBRUNSTATE_LABEL_CAR6DOOR8                     0X0038
//#define ID_PIBRUNSTATE_LABEL_CAR1BCUPRESSURE1              0X0039
//#define ID_PIBRUNSTATE_LABEL_CAR1BCUPRESSURE2              0X003A
//#define ID_PIBRUNSTATE_LABEL_CAR2BCUPRESSURE1              0X003B
//#define ID_PIBRUNSTATE_LABEL_CAR2BCUPRESSURE2              0X003C
//#define ID_PIBRUNSTATE_LABEL_CAR3BCUPRESSURE1              0X003D
//#define ID_PIBRUNSTATE_LABEL_CAR3BCUPRESSURE2              0X003E
//#define ID_PIBRUNSTATE_LABEL_CAR4BCUPRESSURE1              0X003F
//#define ID_PIBRUNSTATE_LABEL_CAR4BCUPRESSURE2              0X0040
//#define ID_PIBRUNSTATE_LABEL_CAR5BCUPRESSURE1              0X0041
//#define ID_PIBRUNSTATE_LABEL_CAR5BCUPRESSURE2              0X0042
//#define ID_PIBRUNSTATE_LABEL_CAR6BCUPRESSURE1              0X0043
//#define ID_PIBRUNSTATE_LABEL_CAR6BCUPRESSURE2              0X0044
//#define ID_PIBRUNSTATE_LABEL_CAR1ASPRESSURE1               0X0045
//#define ID_PIBRUNSTATE_LABEL_CAR1ASPRESSURE2               0X0046
//#define ID_PIBRUNSTATE_LABEL_CAR2ASPRESSURE1               0X0047
//#define ID_PIBRUNSTATE_LABEL_CAR2ASPRESSURE2               0X0048
//#define ID_PIBRUNSTATE_LABEL_CAR3ASPRESSURE1               0X0049
//#define ID_PIBRUNSTATE_LABEL_CAR3ASPRESSURE2               0X004A
//#define ID_PIBRUNSTATE_LABEL_CAR4ASPRESSURE1               0X004B
//#define ID_PIBRUNSTATE_LABEL_CAR4ASPRESSURE2               0X004C
//#define ID_PIBRUNSTATE_LABEL_CAR5ASPRESSURE1               0X004D
//#define ID_PIBRUNSTATE_LABEL_CAR5ASPRESSURE2               0X004E
//#define ID_PIBRUNSTATE_LABEL_CAR6ASPRESSURE1               0X004F
//#define ID_PIBRUNSTATE_LABEL_CAR6ASPRESSURE2               0X0050
//#define ID_PIBRUNSTATE_LABEL_CAR1SIDETEMP                  0X0051
//#define ID_PIBRUNSTATE_LABEL_CAR2SIDETEMP                  0X0052
//#define ID_PIBRUNSTATE_LABEL_CAR3SIDETEMP                  0X0053
//#define ID_PIBRUNSTATE_LABEL_CAR4SIDETEMP                  0X0054
//#define ID_PIBRUNSTATE_LABEL_CAR5SIDETEMP                  0X0055
//#define ID_PIBRUNSTATE_LABEL_CAR6SIDETEMP                  0X0056
//#define ID_PIBRUNSTATE_LABEL_CAR1PLACESTATE                0X0057
//#define ID_PIBRUNSTATE_LABEL_CAR2PLACESTATE                0X0058
//#define ID_PIBRUNSTATE_LABEL_CAR3PLACESTATE                0X0059
//#define ID_PIBRUNSTATE_LABEL_CAR4PLACESTATE                0X005A
//#define ID_PIBRUNSTATE_LABEL_CAR5PLACESTATE                0X005B
//#define ID_PIBRUNSTATE_LABEL_CAR6PLACESTATE                0X005C
//#define ID_PIBRUNSTATE_LABEL_CAR1WARNING1                  0X005D
//#define ID_PIBRUNSTATE_LABEL_CAR1WARNING2                  0X005E
//#define ID_PIBRUNSTATE_LABEL_CAR2WARNING1                  0X005F
//#define ID_PIBRUNSTATE_LABEL_CAR2WARNING2                  0X0060
//#define ID_PIBRUNSTATE_LABEL_CAR3WARNING1                  0X0061
//#define ID_PIBRUNSTATE_LABEL_CAR3WARNING2                  0X0062
//#define ID_PIBRUNSTATE_LABEL_CAR4WARNING1                  0X0063
//#define ID_PIBRUNSTATE_LABEL_CAR4WARNING2                  0X0064
//#define ID_PIBRUNSTATE_LABEL_CAR5WARNING1                  0X0065
//#define ID_PIBRUNSTATE_LABEL_CAR5WARNING2                  0X0066
//#define ID_PIBRUNSTATE_LABEL_CAR6WARNING1                  0X0067
//#define ID_PIBRUNSTATE_LABEL_CAR6WARNING2                  0X0068
//#define ID_PIBRUNSTATE_ICON_WARNNING                       0X0069
//#define ID_PIBRUNSTATE_LABEL_CAR2DRAWSYSSTATE              0X006A
//#define ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE              0X006B
//#define ID_PIBRUNSTATE_LABEL_CAR4DRAWSYSSTATE              0X006C
//#define ID_PIBRUNSTATE_LABEL_CAR5DRAWSYSSTATE              0X006D
//#define ID_PIBRUNSTATE_LABEL_CAR1AIRCOMPRESSORSTATE        0X006E
//#define ID_PIBRUNSTATE_LABEL_CAR6AIRCOMPRESSORSTATE        0X006F
//#define ID_PIBRUNSTATE_LABEL_CAR1BCUSEPARATE1              0X0070
//#define ID_PIBRUNSTATE_LABEL_CAR1BCUSEPARATE2              0X0071
//#define ID_PIBRUNSTATE_LABEL_CAR2BCUSEPARATE1              0X0072
//#define ID_PIBRUNSTATE_LABEL_CAR2BCUSEPARATE2              0X0073
//#define ID_PIBRUNSTATE_LABEL_CAR3BCUSEPARATE1              0X0074
//#define ID_PIBRUNSTATE_LABEL_CAR3BCUSEPARATE2              0X0075
//#define ID_PIBRUNSTATE_LABEL_CAR4BCUSEPARATE1              0X0076
//#define ID_PIBRUNSTATE_LABEL_CAR4BCUSEPARATE2              0X0077
//#define ID_PIBRUNSTATE_LABEL_CAR5BCUSEPARATE1              0X0078
//#define ID_PIBRUNSTATE_LABEL_CAR5BCUSEPARATE2              0X0079
//#define ID_PIBRUNSTATE_LABEL_CAR6BCUSEPARATE1              0X007A
//#define ID_PIBRUNSTATE_LABEL_CAR6BCUSEPARATE2              0X007B
#define ID_PIBRUNSTATE_LABEL_TERMINALSTATION               0X007C
#define ID_PIBRUNSTATE_LABEL1_ARRIVETERMINALFLAG           0X007D
//#define ID_PIBRUNSTATE_LABEL2_ARRIVETERMINALFLAG           0X0083//ADD
#define ID_PIBRUNSTATE_LABEL_DRAWBCUGRADE                  0X007E

#define ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION1         0X0080
#define ID_PIBRUNSTATE_LABEL_NETVOLTAGE                    0X0081
#define ID_PIBRUNSTATE_LABEL_NETCURRENT                    0X0082
#define ID_PIBRUNSTATE_LABEL_V                             0X0084
#define ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION2         0X0085
#define ID_PIBRUNSTATE_LABEL_NUM1                          0X0086
#define ID_PIBRUNSTATE_LABEL_NUM2                          0X0087
#define ID_PIBRUNSTATE_INTERRUPT                           0X0088

#define ID_PIBRUNSTATE_LABEL_A                            0X0089
#define ID_PIBRUNSTATE_LABEL_TRACTIONMODEL                0X008A
#define ID_PIBRUNSTATE_LABEL_SPEED                        0X008B

#define ID_PIBRUNSTATE_BUTTON_EMERGENCYRESCUE             0X008C
#define ID_PIBRUNSTATE_LABEL_TCU_ENABLE1                   0X008D
#define ID_PIBRUNSTATE_LABEL_TCU_ENABLE2                   0X008E

#define ID_PIBRUNSTATE_LABEL_CAR7DOOR1                     0X008F
#define ID_PIBRUNSTATE_LABEL_CAR7DOOR2                     0X0090
#define ID_PIBRUNSTATE_LABEL_CAR7DOOR3                     0X0091
#define ID_PIBRUNSTATE_LABEL_CAR7DOOR4                     0X0092
#define ID_PIBRUNSTATE_LABEL_CAR7DOOR5                     0X0093
#define ID_PIBRUNSTATE_LABEL_CAR7DOOR6                     0X0094
#define ID_PIBRUNSTATE_LABEL_CAR7DOOR7                     0X0095
#define ID_PIBRUNSTATE_LABEL_CAR7DOOR8                     0X0096
#define ID_PIBRUNSTATE_LABEL_CAR8DOOR1                     0X0097
#define ID_PIBRUNSTATE_LABEL_CAR8DOOR2                     0X0098
#define ID_PIBRUNSTATE_LABEL_CAR8DOOR3                     0X0099
#define ID_PIBRUNSTATE_LABEL_CAR8DOOR4                     0X009A
#define ID_PIBRUNSTATE_LABEL_CAR8DOOR5                     0X009B
#define ID_PIBRUNSTATE_LABEL_CAR8DOOR6                     0X009C
#define ID_PIBRUNSTATE_LABEL_CAR8DOOR7                     0X009D
#define ID_PIBRUNSTATE_LABEL_CAR8DOOR8                     0X009E

#/*define ID_PIBRUNSTATE_LABEL_CAR7BCUPRESSURE1              0X009F
#define ID_PIBRUNSTATE_LABEL_CAR7BCUPRESSURE2              0X00A0
#define ID_PIBRUNSTATE_LABEL_CAR8BCUPRESSURE1              0X00A1
#define ID_PIBRUNSTATE_LABEL_CAR8BCUPRESSURE2              0X00A2

#define ID_PIBRUNSTATE_LABEL_CAR7ASPRESSURE1               0X00A3
#define ID_PIBRUNSTATE_LABEL_CAR7ASPRESSURE2               0X00A4
#define ID_PIBRUNSTATE_LABEL_CAR8ASPRESSURE1               0X00A5
#define ID_PIBRUNSTATE_LABEL_CAR8ASPRESSURE2               0X00A6

#define ID_PIBRUNSTATE_LABEL_CAR7SIDETEMP                  0X00A7
#define ID_PIBRUNSTATE_LABEL_CAR8SIDETEMP                  0X00A8

#define ID_PIBRUNSTATE_LABEL_CAR7PLACESTATE                0X00A9
#define ID_PIBRUNSTATE_LABEL_CAR8PLACESTATE                0X00AA

#define ID_PIBRUNSTATE_LABEL_CAR7WARNING1                  0X00AB
#define ID_PIBRUNSTATE_LABEL_CAR7WARNING2                  0X00AC
#define ID_PIBRUNSTATE_LABEL_CAR8WARNING1                  0X00AD
#define ID_PIBRUNSTATE_LABEL_CAR8WARNING2                  0X00AE

#define ID_PIBRUNSTATE_LABEL_CAR6DRAWSYSSTATE              0X00AF
#define ID_PIBRUNSTATE_LABEL_CAR7DRAWSYSSTATE              0X00B0

#define ID_PIBRUNSTATE_LABEL_CAR7BCUSEPARATE1              0X00B1
#define ID_PIBRUNSTATE_LABEL_CAR7BCUSEPARATE2              0X00B2
#define ID_PIBRUNSTATE_LABEL_CAR8BCUSEPARATE1              0X00B3
#define ID_PIBRUNSTATE_LABEL_CAR8BCUSEPARATE2              0X00B4*/

#define   ID_PIBRUNSTATE_LABEL_CAR1RIDINGRATE         0X00B5
#define   ID_PIBRUNSTATE_LABEL_CAR2RIDINGRATE         0X00B6
#define   ID_PIBRUNSTATE_LABEL_CAR3RIDINGRATE         0X00B7
#define   ID_PIBRUNSTATE_LABEL_CAR4RIDINGRATE         0X00B8
#define   ID_PIBRUNSTATE_LABEL_CAR5RIDINGRATE         0X00B9
#define   ID_PIBRUNSTATE_LABEL_CAR6RIDINGRATE         0X00BA
#define   ID_PIBRUNSTATE_LABEL_CAR7RIDINGRATE         0X00BB
#define   ID_PIBRUNSTATE_LABEL_CAR8RIDINGRATE         0X00BC
#define   ID_PIBRUNSTATE_BUTTON_FASPAGE               0X00BD
#define   ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V          0X00BE
#define   ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V          0X00BF
#define   ID_PIBRUNSTATE_LABEL_CAR4KAUXSTATE          0X00C0

#define ID_PIBRUNSTATE_LABEL_ByPass                   0X00C1
#define ID_PIBRUNSTATE_LABEL_FAS_status               0X00C2

#define ID_PIBRUNSTATE_LABEL_CAR1DOOR9                0X00C3
#define ID_PIBRUNSTATE_LABEL_CAR1DOOR10               0X00C4
#define ID_PIBRUNSTATE_LABEL_CAR2DOOR9                0X00C5
#define ID_PIBRUNSTATE_LABEL_CAR2DOOR10               0X00C6
#define ID_PIBRUNSTATE_LABEL_CAR3DOOR9                0X00C7
#define ID_PIBRUNSTATE_LABEL_CAR3DOOR10               0X00C8
#define ID_PIBRUNSTATE_LABEL_CAR4DOOR9                0X00C9
#define ID_PIBRUNSTATE_LABEL_CAR4DOOR10               0X00CA
#define ID_PIBRUNSTATE_LABEL_CAR5DOOR9                0X00CB
#define ID_PIBRUNSTATE_LABEL_CAR5DOOR10               0X00CC
#define ID_PIBRUNSTATE_LABEL_CAR8DOOR9                0X00CD
#define ID_PIBRUNSTATE_LABEL_CAR8DOOR10               0X00CE
#define ID_PIBRUNSTATE_LABEL_CAR0DOOR1                0X00CF
#define ID_PIBRUNSTATE_LABEL_CAR0DOOR2                0X00D0
#define ID_PIBRUNSTATE_LABEL_CAR9DOOR1                0X00D1
#define ID_PIBRUNSTATE_LABEL_CAR9DOOR2                0X00D2
#define ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT             0X00D3
#define ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT2            0X00D4
//#define ID_PIBRUNSTATE_LABEL_TOWMODE                   0X00C7

//#define ID_PIBRUNSTATE_LABEL_DisEBTest               0X00C8
#define ID_PIBRUNSTATE_LABEL_LINE1CAR1                0x0101
#define ID_PIBRUNSTATE_LABEL_LINE1CAR2                0x0102
#define ID_PIBRUNSTATE_LABEL_LINE1CAR3                0x0103
#define ID_PIBRUNSTATE_LABEL_LINE1CAR4                0x0104
#define ID_PIBRUNSTATE_LABEL_LINE1CAR5                0x0105
#define ID_PIBRUNSTATE_LABEL_LINE1CAR6                0x0106

#define ID_PIBRUNSTATE_LABEL_LINE2CAR1                0x0201
#define ID_PIBRUNSTATE_LABEL_LINE2CAR2                0x0202
#define ID_PIBRUNSTATE_LABEL_LINE2CAR3                0x0203
#define ID_PIBRUNSTATE_LABEL_LINE2CAR4                0x0204
#define ID_PIBRUNSTATE_LABEL_LINE2CAR5                0x0205
#define ID_PIBRUNSTATE_LABEL_LINE2CAR6                0x0206

#define ID_PIBRUNSTATE_LABEL_LINE3CAR1                0x0301
#define ID_PIBRUNSTATE_LABEL_LINE3CAR2                0x0302
#define ID_PIBRUNSTATE_LABEL_LINE3CAR3                0x0303
#define ID_PIBRUNSTATE_LABEL_LINE3CAR4                0x0304
#define ID_PIBRUNSTATE_LABEL_LINE3CAR5                0x0305
#define ID_PIBRUNSTATE_LABEL_LINE3CAR6                0x0306

#define ID_PIBRUNSTATE_LABEL_LINE4CAR1                0x0401
#define ID_PIBRUNSTATE_LABEL_LINE4CAR2                0x0402
#define ID_PIBRUNSTATE_LABEL_LINE4CAR3                0x0403
#define ID_PIBRUNSTATE_LABEL_LINE4CAR4                0x0404
#define ID_PIBRUNSTATE_LABEL_LINE4CAR5                0x0405
#define ID_PIBRUNSTATE_LABEL_LINE4CAR6                0x0406

#define ID_PIBRUNSTATE_LABEL_LINE5CAR1_1                  0x0511
#define ID_PIBRUNSTATE_LABEL_LINE5CAR2_1                  0x0512
#define ID_PIBRUNSTATE_LABEL_LINE5CAR3_1                  0x0513
#define ID_PIBRUNSTATE_LABEL_LINE5CAR4_1                  0x0514
#define ID_PIBRUNSTATE_LABEL_LINE5CAR5_1                  0x0515
#define ID_PIBRUNSTATE_LABEL_LINE5CAR6_1                  0x0516

#define ID_PIBRUNSTATE_LABEL_LINE5CAR1_2                  0x0521
#define ID_PIBRUNSTATE_LABEL_LINE5CAR2_2                  0x0522
#define ID_PIBRUNSTATE_LABEL_LINE5CAR3_2                  0x0523
#define ID_PIBRUNSTATE_LABEL_LINE5CAR4_2                  0x0524
#define ID_PIBRUNSTATE_LABEL_LINE5CAR5_2                  0x0525
#define ID_PIBRUNSTATE_LABEL_LINE5CAR6_2                  0x0526

#define ID_PIBRUNSTATE_LABEL_LINE7CAR1                0x0701
#define ID_PIBRUNSTATE_LABEL_LINE7CAR2                0x0702
#define ID_PIBRUNSTATE_LABEL_LINE7CAR3                0x0703
#define ID_PIBRUNSTATE_LABEL_LINE7CAR4                0x0704
#define ID_PIBRUNSTATE_LABEL_LINE7CAR5                0x0705
#define ID_PIBRUNSTATE_LABEL_LINE7CAR6                0x0706

#define ID_PIBRUNSTATE_LABEL_LINE8CAR1                0x0801
#define ID_PIBRUNSTATE_LABEL_LINE8CAR2                0x0802
#define ID_PIBRUNSTATE_LABEL_LINE8CAR3                0x0803
#define ID_PIBRUNSTATE_LABEL_LINE8CAR4                0x0804
#define ID_PIBRUNSTATE_LABEL_LINE8CAR5                0x0805
#define ID_PIBRUNSTATE_LABEL_LINE8CAR6                0x0806

#define ID_PIBRUNSTATE_LABEL_LINE9CAR1                0x0901
#define ID_PIBRUNSTATE_LABEL_LINE9CAR2                0x0902
#define ID_PIBRUNSTATE_LABEL_LINE9CAR3                0x0903
#define ID_PIBRUNSTATE_LABEL_LINE9CAR4                0x0904
#define ID_PIBRUNSTATE_LABEL_LINE9CAR5                0x0905
#define ID_PIBRUNSTATE_LABEL_LINE9CAR6                0x0906

#define ID_RUNSTATEPAGE_ARRIVE                        0x0907
////////////MY ADD
#define ID_LABEL_ATO                                 0x0910
#define ID_LABEL_BYPASS                                 0x0911
#define ID_LABEL_FIRE                                 0x0912
#define ID_LABEL_PASSAGEALARM                        0x0913

#define ID_LABEL_POWER_CAR02_1                       0X0914
#define ID_LABEL_POWER_CAR02_2                       0X0915
#define ID_LABEL_POWER_CAR03                         0X0916
#define ID_LABEL_POWER_CAR04                         0X0917
#define ID_LABEL_POWER_CAR05_1                       0X0918
#define ID_LABEL_POWER_CAR05_2                       0X0919

#define ID_LABEL_TCU_CAR02                           0X091A
#define ID_LABEL_TCU_CAR03                           0X091B
#define ID_LABEL_TCU_CAR04                           0X091C
#define ID_LABEL_TCU_CAR05                           0X091D

#define ID_LABEL_ACU_CAR01                           0X091E
#define ID_LABEL_ACU_CAR03                           0X091F
#define ID_LABEL_ACU_CAR06                           0X0920


#define ID_LABEL_BCU_CAR01_1                       0X0921
#define ID_LABEL_BCU_CAR01_2                       0X0922
#define ID_LABEL_BCU_CAR02_1                       0X0923
#define ID_LABEL_BCU_CAR02_2                       0X0924
#define ID_LABEL_BCU_CAR03_1                       0X0925
#define ID_LABEL_BCU_CAR03_2                       0X0926
#define ID_LABEL_BCU_CAR04_1                       0X0927
#define ID_LABEL_BCU_CAR04_2                       0X0928
#define ID_LABEL_BCU_CAR05_1                       0X0929
#define ID_LABEL_BCU_CAR05_2                       0X092A
#define ID_LABEL_BCU_CAR06_1                       0X092B
#define ID_LABEL_BCU_CAR06_2                       0X092C

#define ID_LABEL_AIRCMP_CAR03                       0X092D
#define ID_LABEL_AIRCMP_CAR04                       0X092E

#define ID_LABEL_HVAC_CAR01_1                       0X092F
#define ID_LABEL_HVAC_CAR01_2                       0X0930
#define ID_LABEL_HVAC_CAR02_1                       0X0931
#define ID_LABEL_HVAC_CAR02_2                       0X0932
#define ID_LABEL_HVAC_CAR03_1                       0X0933
#define ID_LABEL_HVAC_CAR03_2                       0X0934
#define ID_LABEL_HVAC_CAR04_1                       0X0935
#define ID_LABEL_HVAC_CAR04_2                       0X0936
#define ID_LABEL_HVAC_CAR05_1                       0X0937
#define ID_LABEL_HVAC_CAR05_2                       0X0938
#define ID_LABEL_HVAC_CAR06_1                       0X0939
#define ID_LABEL_HVAC_CAR06_2                       0X093A
#define ID_LABEL_ACU_CAR01_2                        0x093B
#define ID_LABEL_ACU_CAR06_2                        0x093C
#define ID_LABEL_ACU_CAR04                           0X093D
#define ID_LABEL_CTBR_ConditionBrakeMod_B1           0X093E
#define ID_LABEL_BRiCT_WSP_B1                        0X093F
#define ID_LABEL_TORBWSP                             0X0940
#define ID_LABEL_PISMODE_B1                          0X0941

#define ID_LABEL_BCU_CAR01_G                       0X0951
#define ID_LABEL_BCU_CAR01_S                       0X0952
#define ID_LABEL_BCU_CAR02_S1                       0X0953
#define ID_LABEL_BCU_CAR02_S2                       0X0954
#define ID_LABEL_BCU_CAR03_S                       0X0955
#define ID_LABEL_BCU_CAR03_G                       0X0956
#define ID_LABEL_BCU_CAR04_G                       0X0957
#define ID_LABEL_BCU_CAR04_S                       0X0958
#define ID_LABEL_BCU_CAR05_S2                       0X0959
#define ID_LABEL_BCU_CAR05_S1                       0X095A
#define ID_LABEL_BCU_CAR06_S                       0X095B
#define ID_LABEL_BCU_CAR06_G                       0X095C
extern vector<CPage*>  g_PageVec;

class CRunStatePage : public CPage
{

    DECLEAR_MESSAGE_MAP(CRunStatePage)
public:
    CRunStatePage();
    CRealTimeFaultsWarnningDialog dlg;

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
    void OnLeavePage();
private:
    void OnComBtn1Clk();
    void OnComBtn2Clk();
    void OnComBtn3Clk();
    void OnComBtn4Clk();
    void OnComBtn5Clk();
    void OnComBtn6Clk();
#ifdef PAGE_BUTTON_BAR_NEW
    void OnComBtn7Clk();
    void OnComBtn8Clk();
    void OnComBtn9Clk();
    void OnComBtn10Clk();
    void OnComBtn11Clk();
    void OnComBtn12Clk();
#endif
    void OnBroadCastBtnClk();
    void OnRealtimefaultBtnClk();
    void OnRealtimefaultallBtnClk();


    void UpdateCompressorStatus();
    void UpdateBCUPressure();
    void UpdateWarning();
    void UpdateASPressure();
    void UpdatePlaceStatus();
    void UpdateBCUSeparater();
    void UpdateNETMode();
    void UpdateATOMode();

    void UpdateStation();
    void UpdateCarTem();
    void UpdateDoor();
    void UpdateContravariant();
    void UpdateWashCarMode();
    void UpdateTowMode();
    void UpdateTcu_Enable();

    void UpdateAValue();
    void UpdateVValue();
    void UpdateTractionBrak();
    void UpdateFAS_status_Hide();
    void UpdateByPass_Hide();
    void UpdateSpeed();
    void UpdateEmergencyBroadcast();

    void UpdateDisEBTest();

    void SetCompressorStatusLabelColor(int id, int colorVal);
    void SetTCUStatusLabelColor(int id, int colorVal);
    void SetBCUPressureLabelColor(int id, int colorVal);
    void SetWarningLabelColor(int id, int colorVal);
    void SetASPressureLabelColor(int id, int colorVal);
    void SetPlaceStatusLabelColor(int id, int colorVal);
    void SetBCUSeparaterLabelColor(int id, int colorVal);
    void SetNETModeLabelColor(int id, int colorVal);
    void SetATOModeLabelColor(int id, int colorVal);
    void SetTCUStatusLsbelColor(int id,int colorVal);

    void SetBrakeSelectLabelColor(int id, int colorVal);
    void SetVoltageTxtColor(int id,int colorVal);
    void SetCommInterruptLabelColor(int id, int colorVal);

    void SetStation(int id, QString station);
    void SetDoorLabelColor(int id,int colorVal);
    void SetCurrentTxt(int id,int value);

    void SetAcuLabelColor(int id, int colorVal);
    void SetKauxLabelColor(int id, int colorVal);

    void OnEmergencyResuce();
    void OnFASpageBtnClk();

    void updateArrFinalStation();
    void OnRealTimeFaultsWarnningIconClk();

    void UpdateRidingRate();

    ///add breaker update
    void UpdateBreakerState();
    void UpdateTCUStatus();
    void UpdateACU();
    void UpdateBCUState();
    void UpdateAircmpState();
    void UpdateHVACState();
    void UpdatePisAlarm();
    void UpdateLevel();
    void Updatepisbroadcast();
    void UpdateRealtimefaults();

    void setBCUBGStatus(CLabel* lbl,bool b1,bool b2,bool online);


//    QString GetCarriageString(char position);

    int m_romidx,m_faultcount;
    int timercount[5];
    int m_aircmptimer1,m_aircmptimer2;
    bool old_aircmpuseful1,old_aircmpuseful2;
};

#endif // CRunStatePage_H
