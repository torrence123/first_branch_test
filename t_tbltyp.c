/******************************************************************************
 *
 * Filename:          t_tbltyp.c
 *
 * Description:       This module contains table type definitions.
 *
 * Global Functions Defined:
 *                    None
 * Static Functions Defined:
 *                    None
 * inline Functions Defined:
 *                    None
 *
 * Forward Engine Management Systems
 *
 * Copyright 1996-2012, Delphi Technologies, Inc.
 * All rights reserved.
 *
 *****************************************************************************
 *
 * Current Module Info:
 * %full_name:     tcb_pt1#4/csrc/t_tbltyp.c/ctc_pt3#47.1.8.1.11 %
 * %date_created:  Tue Dec 15 09:03:27 2015 %
 * %version:       ctc_pt3#47.1.8.1.11 %
 * %derived_by:    wzs080 %
 *
 *****************************************************************************/

/******************************************************************************
 *  System Include Files
 *****************************************************************************/
#include "systpcfg.h"   /* For XeSYST_AIRFLOW_TYPE */

/******************************************************************************
 *  Global Data Type Include Files
 *****************************************************************************/
#include "t_gentypes.h"
/*#include "trvcpapi.h" */  /* V_RPM_KPH_MPH */

/*****************************************************************************
 *  Variable/Constant Definitions
 *****************************************************************************/

/* Start of PSE TSE */
const LINEAR_UW CsRSCL_MAP7_n_RPM = {7, V_RPMa(500), V_RPMa(6500) } ;

const LINEAR_UW CsRSCL_MAP17_dm_AirFlow =
                {17, V_GRAMS_PER_SEC(0.0), V_GRAMS_PER_SEC(128.0)} ;
const LINEAR_UW CsRSCL_MAP22_dm_AirFlow =
                {22, V_GRAMS_PER_SEC(0), V_GRAMS_PER_SEC(105)} ;



const MAP19_UW  CsINDP_MAP19_DensityTempCorr = {19,
                  {V_DEG_Kb(243), V_DEG_Kb(253), V_DEG_Kb(263),
                   V_DEG_Kb(273), V_DEG_Kb(283), V_DEG_Kb(293),
                   V_DEG_Kb(303), V_DEG_Kb(323), V_DEG_Kb(343),
                   V_DEG_Kb(363), V_DEG_Kb(383), V_DEG_Kb(403),
                   V_DEG_Kb(423), V_DEG_Kb(548), V_DEG_Kb(673),
                   V_DEG_Kb(798), V_DEG_Kb(923), V_DEG_Kb(1048),
                   V_DEG_Kb(1173)}};

const MAP15_UW  CsINDP_MAP15_PressureRatio = {15,
                  {V_RATIO_0_2(0.3), V_RATIO_0_2(0.44), V_RATIO_0_2(0.52),
                   V_RATIO_0_2(0.578), V_RATIO_0_2(0.66), V_RATIO_0_2(0.742),
                   V_RATIO_0_2(0.815), V_RATIO_0_2(0.868), V_RATIO_0_2(0.908),
                   V_RATIO_0_2(0.938), V_RATIO_0_2(0.962), V_RATIO_0_2(0.979),
                   V_RATIO_0_2(0.99), V_RATIO_0_2(0.998), V_RATIO_0_2(1.0)}};

const MAP15_UW CsEPSE_r_Std_PresRatio =
{
15, /*--- 15 pressure ratio breakpoints ---*/
{
V_RATIO_0_2(1.0),    /*--- 0.52  Pratio ---*/
V_RATIO_0_2(0.9953), /*--- 0.575 Pratio ---*/
V_RATIO_0_2(0.977),  /*--- 0.63  Pratio ---*/
V_RATIO_0_2(0.9477), /*--- 0.68  Pratio ---*/
V_RATIO_0_2(0.9051), /*--- 0.73  Pratio ---*/
V_RATIO_0_2(0.8471), /*--- 0.78  Pratio ---*/
V_RATIO_0_2(0.779),  /*--- 0.825 Pratio ---*/
V_RATIO_0_2(0.6954), /*--- 0.868 Pratio ---*/
V_RATIO_0_2(0.6006), /*--- 0.906 Pratio ---*/
V_RATIO_0_2(0.497),  /*--- 0.938 Pratio ---*/
V_RATIO_0_2(0.3944), /*--- 0.962 Pratio ---*/
V_RATIO_0_2(0.296),  /*--- 0.979 Pratio ---*/
V_RATIO_0_2(0.2055), /*--- 0.99  Pratio ---*/
V_RATIO_0_2(0.0923), /*--- 0.998 Pratio ---*/
V_RATIO_0_2(0)       /*--- 1.0   Pratio ---*/
}
};

const MAP15_UW  CsINDP_MAP15_PressureRatiob = {15,
                  {V_RATIO_0_2(0.52), V_RATIO_0_2(0.575), V_RATIO_0_2(0.63),
                   V_RATIO_0_2(0.68), V_RATIO_0_2(0.73), V_RATIO_0_2(0.78),
                   V_RATIO_0_2(0.825), V_RATIO_0_2(0.868), V_RATIO_0_2(0.906),
                   V_RATIO_0_2(0.938), V_RATIO_0_2(0.962), V_RATIO_0_2(0.979),
                   V_RATIO_0_2(0.99), V_RATIO_0_2(0.998), V_RATIO_0_2(1.0)}};

const LINEAR_UW CsRSCL_MAP21_PctMulta = {21, V_PERCENT_MULTa(0.0), V_PERCENT_MULTa(1.0) };
const LINEAR_UW CsRSCL_MAP20_Pct =  {20, V_PERCENTa(5), V_PERCENTa(100) };
#if XeTRNS_SYST_LINE_PRESSURE_SELECTION == CeTRNS_SYST_LINE_PRESSURE_AVAILABLE
const LINEAR_UW CsRSCL_MAP21_Pct = {21, V_PERCENTa(0), V_PERCENTa(100) };
#endif
const LINEAR_UW CsRSCL_MAP11_Pct = {11, V_PERCENTa(0), V_PERCENTa(100) };

const MAP12_UW  CsINDP_MAP12_BPE = {12,
              {V_RATIO_0_2(0.050), V_RATIO_0_2(0.075), V_RATIO_0_2(0.100),
               V_RATIO_0_2(0.150), V_RATIO_0_2(0.200), V_RATIO_0_2(0.250),
               V_RATIO_0_2(0.300), V_RATIO_0_2(0.350), V_RATIO_0_2(0.400),
               V_RATIO_0_2(0.600), V_RATIO_0_2(0.800),
               V_RATIO_0_2(1.0)}};

const MAP10_SW CsINDP_MAP10_TEMP = {10,
              {V_DEG_Ca(-40), V_DEG_Ca(-28), V_DEG_Ca(-16),
               V_DEG_Ca(-4), V_DEG_Ca(8), V_DEG_Ca(20),
               V_DEG_Ca(44), V_DEG_Ca(68), V_DEG_Ca(92),
               V_DEG_Ca(116)}};

const MAP14_UW  CsINDP_MAP14_BPE = {14,
              {V_RATIO_0_2(0.0625), V_RATIO_0_2(0.1250), V_RATIO_0_2(0.1875),
               V_RATIO_0_2(0.2500), V_RATIO_0_2(0.3125), V_RATIO_0_2(0.3750),
               V_RATIO_0_2(0.4375), V_RATIO_0_2(0.5000), V_RATIO_0_2(0.5625),
               V_RATIO_0_2(0.6250), V_RATIO_0_2(0.6875), V_RATIO_0_2(0.7500),
               V_RATIO_0_2(0.8125),
               V_RATIO_0_2(1.0)}};

const LINEAR_UW CsRSCL_MAP7_TEMP_DEGK = { 7, V_DEG_Kb(223), V_DEG_Kb(403) };
const LINEAR_UW CsRSCL_MAP12_TempDEGK = {12, V_DEG_Kb(230), V_DEG_Kb(340) };
#if XeSYST_LOAD_CNTRL_TYPE == CeSYST_MECHANICAL_THROT
const LINEAR_UW CsRSCL_MAP11_IAC = {11, V_COUNT_WORD(0), V_COUNT_WORD(200) };
#endif

const MAP12_UW CsINDP_MAP12_PPS = {12,
      V_PERCENTa( 0), V_PERCENTa( 5), V_PERCENTa(10), V_PERCENTa(20),
      V_PERCENTa(30), V_PERCENTa(40), V_PERCENTa(50), V_PERCENTa(60),
      V_PERCENTa(70), V_PERCENTa(80), V_PERCENTa(90), V_PERCENTa(100)};

const MAP17_UW  CsINDP_MAP17_T_ExhaustMnfdTemp = {17,
  { V_DEG_Kb(233), V_DEG_Kb(263),  V_DEG_Kb(293),  V_DEG_Kb(323),
    V_DEG_Kb(353), V_DEG_Kb(383),  V_DEG_Kb(450),  V_DEG_Kb(517),
    V_DEG_Kb(584), V_DEG_Kb(651),  V_DEG_Kb(718),  V_DEG_Kb(785),
    V_DEG_Kb(903), V_DEG_Kb(1021), V_DEG_Kb(1139), V_DEG_Kb(1257),
    V_DEG_Kb(1375)
  } };

/* end of PSE_TSE */

 const LINEAR_SW CsRSCL_MAP21_n_RPM_DIFFa =
                                  {21, V_RPM_DIFFa(-500), V_RPM_DIFFa(500) } ;

 const LINEAR_SW CsRSCL_MAP33_n_RPM_DIFFa =
                                  {33, V_RPM_DIFFa(-400), V_RPM_DIFFa(400) } ;

 const LINEAR_SW CsRSCL_MAP33_n_RPM_PER_50_MSECa =
               {33, V_RPM_PER_50_MSECa(-128), V_RPM_PER_50_MSECa(128)} ;

  const LINEAR_SW CsRSCL_MAP11_P_KPAd = {11, V_KPAd(0), V_KPAd(3000) } ;

#if XeSYST_LOAD_CNTRL_TYPE == CeSYST_ELECTRONIC_THROT
 const LINEAR_SW CsRSCL_MAP17_PRES = {17, V_KPAd(-128), V_KPAd(3141) } ;
#endif

 const LINEAR_SW CsRSCL_MAP9_SprkRtdTotal = {9, V_ANGLEa(0), V_ANGLEa(24) } ;

/* Added for Torque */
 const LINEAR_SW CsRSCL_MAP17_PRES_0to4000 = {17, V_KPAd(0), V_KPAd(4000)};

#if XeSYST_POWERTRAIN_TORQ_EST == CeSYST_POWERTRAIN_TORQ_EST_ENABLE
 const LINEAR_UW CsRSCL_MAP21_Ratio_0_2 = {21, V_RATIO_0_2(0), V_RATIO_0_2(1)};
#endif

#if XeSYST_LOAD_CNTRL_TYPE == CeSYST_ELECTRONIC_THROT
 const LINEAR_SW CsRSCL_MAP15_Torque = {15, V_NEWTON_METER(0),
                                            V_NEWTON_METER(700)};
#endif
 const LINEAR_UW CsRSCL_MAP21_Percenth_0_100 = {21, V_PERCENTh(0),
                                                    V_PERCENTh(100)};
 const LINEAR_UW CsRSCL_MAP9_EngSpd_0to6400 = {9, V_RPMa(0), V_RPMa(6400)};
 const LINEAR_UW CsRSCL_MAP5_EngSpd_400to2000 = {5, V_RPMa(400), V_RPMa(2000)};
 const LINEAR_UW CsRSCL_MAP13_EngSpd_0to6000 = {13, V_RPMa(0), V_RPMa(6000)};
 const LINEAR_UW CsRSCL_MAP11_AirFuelRatio = {11, V_AFR(6.0),V_AFR(16.0)} ;
 const LINEAR_UW CsRSCL_MAP11_Pct_AF_LoadPerCyl = {11, V_PERCENTb(0),
                                                       V_PERCENTb(99.99)};

#if XeSYST_POWERTRAIN_TORQ_EST == CeSYST_POWERTRAIN_TORQ_EST_ENABLE
 const LINEAR_UW CsRSCL_MAP17_v_KPH_0to_256 = {17, V_KPH(0), V_KPH(256)};
#endif

const LINEAR_UW CsRSCL_MAP17_Imep = {17, V_KPAb (0), V_KPAb (1600)};

/* end Added for Torque */

#if XeSYST_HIGH_DI_COMPENSATION == CeSYST_AVAILABLE
 const LINEAR_UW CsRSCL_MAP10_TK_TEMP = {10, V_DEG_K_0_512(233.0),
                                             V_DEG_K_0_512(350.0) };
#endif

 const LINEAR_UW CsRSCL_MAP09_TK_TEMP = {9, V_DEG_K_0_512(243.0),
                                            V_DEG_K_0_512(403.0) };

 const LINEAR_UW CsRSCL_MAP17_TK_TEMP = {17, V_DEG_K_0_512(233.0),
                                             V_DEG_K_0_512(425.0) };


 const LINEAR_SW CsRSCL_MAP4_T_TEMP  = {4, V_DEG_Ca(-16), V_DEG_Ca(+92) };

 const LINEAR_SW CsRSCL_MAP6_T_TEMP  = {6, V_DEG_Ca(-40), V_DEG_Ca(+110) };

 const LINEAR_SW CsRSCL_MAP6_T_TEMPe  = {6, V_DEG_Ca(0), V_DEG_Ca(+25) };

 const LINEAR_SW CsRSCL_MAP7_T_TEMP   = {7, V_DEG_Ca(-40), V_DEG_Ca(+80) };

 const LINEAR_SW CsRSCL_MAP8_T_TEMP = {8, V_DEG_Ca(-40), V_DEG_Ca(+128) } ;

 const LINEAR_SW CsRSCL_MAP8_T_TEMPb = {8, V_DEG_Ca(-10), V_DEG_Ca(+60) } ;

 const LINEAR_SW CsRSCL_MAP9_T_TEMP = {9, V_DEG_Ca(+20), V_DEG_Ca(+116) } ;

 const LINEAR_SW CsRSCL_MAP9_T_TEMPa = {9, V_DEG_Ca(-40), V_DEG_Ca(+152) } ;

 const LINEAR_SW CsRSCL_MAP9_T_TEMPe = {9, V_DEG_Ca(-40), V_DEG_Ca(+120) } ;

 const LINEAR_SW CsRSCL_MAP9_T_TEMPg = {9, V_DEG_Ca(-40), V_DEG_Ca(+56) };

 const LINEAR_SW CsRSCL_MAP10_T_TEMP = {10, V_DEG_Ca(-40), V_DEG_Ca(+140) } ;

 const LINEAR_SW CsRSCL_MAP11_T_TEMP = {11, V_DEG_Ca(-20), V_DEG_Ca(+80) } ;

 const LINEAR_SW CsRSCL_MAP11_T_TEMPa = {11, V_DEG_Ca(-16), V_DEG_Ca(+104) } ;

 const LINEAR_SW CsRSCL_MAP11_T_TEMPb = {11, V_DEG_Ca(-28), V_DEG_Ca(+92) } ;

 const LINEAR_SW CsRSCL_MAP12_T_TEMP_10to120 = {12, V_DEG_Ca(10), V_DEG_Ca(120) };

 const LINEAR_SW CsRSCL_MAP13_T_TEMP  = {13, V_DEG_Ca(-28), V_DEG_Ca(+116) } ;

 const LINEAR_SW CsRSCL_MAP14_T_TEMP = {14, V_DEG_Ca(-40), V_DEG_Ca(+116) } ;

 const LINEAR_SW CsRSCL_MAP15_T_TEMP = {15, V_DEG_Ca(-40), V_DEG_Ca(+128) } ;

 const LINEAR_SW CsRSCL_MAP18_T_TEMPa = {18, V_DEG_Ca(-40), V_DEG_Ca(+215) } ;

 const LINEAR_SW CsRSCL_MAP17_T_TEMP = {17, V_DEG_Ca(-40), V_DEG_Ca(+152) } ;

 const LINEAR_SW CsRSCL_MAP17_T_TEMPb = {17, V_DEG_Ca(-40), V_DEG_Ca(+120) } ;

 const LINEAR_SW CsRSCL_MAP21_T_TEMPf = {21, V_DEG_Cb(300), V_DEG_Cb(800) };

#if XeTRVS_SYST_TYPE == XeTRVS_SYST_PCM
 const LINEAR_SW CsRSCL_MAP25_T_TEMPa = {25, V_DEG_Ca(-40), V_DEG_Ca(+152)};
#endif

 const LINEAR_UW CsRSCL_MAP17_TPS = {17, V_PERCENTa(0), V_PERCENTa(100) };

 const LINEAR_UW CsRSCL_MAP33_TPS = {33, V_PERCENTa(0), V_PERCENTa(100) };

 const LINEAR_SW CsRSCL_MAP33_Error = {33, V_RPM_DIFFa(-400), V_RPM_DIFFa(400) };

 /* unsigned table rescaling types */

 const LINEAR_UW CsRSCL_MAP2_MODE_0_1 = { 2, V_COUNT_WORD(0) , V_COUNT_WORD(1)};


 const LINEAR_UW CsRSCL_MAP3_p_BARO = { 3, V_KPAa(65) , V_KPAa(105) } ;

 const LINEAR_UW CsRSCL_MAP4_p_BARO = {4, V_KPAa(75) , V_KPAa(105) } ;

 const LINEAR_UW CsRSCL_MAP5_p_BARO = {5, V_KPAa(65),V_KPAa(105)} ;

 const LINEAR_UW CsRSCL_MAP5_p_PRES = {5, V_KPAa(60),V_KPAa(100)} ;

 const LINEAR_UW CsRSCL_MAP7_p_BARO = {7, V_KPAa(75) , V_KPAa(105) } ;

 const LINEAR_UW CsRSCL_MAP7_p_BAROa = {7, V_KPAa(45) , V_KPAa(105) } ;

 const LINEAR_UW CsRSCL_MAP7_p_BAROb = {7, V_KPAa(50) , V_KPAa(110) } ;

 const LINEAR_UW CsRSCL_MAP12_p_BARO = {12, V_KPAa(50) , V_KPAa(105) } ;

#if XeTRVS_SYST_TYPE == XeTRVS_SYST_PCM
 const LINEAR_UW CsRSCL_MAP15_p_BARO = {15, V_KPAa(50) , V_KPAa(120) } ;
#endif

 const LINEAR_UW CsRSCL_MAP5_p_MAP = {5, V_KPAa(20) , V_KPAa(100) } ;

 const LINEAR_UW CsRSCL_MAP7_p_MAP = {7, V_KPAa(50) , V_KPAa(110) } ;

#if XeSYST_EVPD_OPTION == CeSYST_AVAILABLE
 const LINEAR_UW CsRSCL_MAP11_WORD = {11, V_COUNT_WORD(0), V_COUNT_WORD(400) };
#endif

#if (XeSYST_CSMI_CONFIG == CeSYST_CSMI_G_SENSOR) \
 || (XeSYST_CSMI_CONFIG == CeSYST_CSMI_RR_SOURCE)
 const LINEAR_UW CsRSCL_MAP08_n_RPM = {8, V_RPMa(0), V_RPMa(3500) } ;
#endif

 const LINEAR_UW CsRSCL_MAP13_n_RPMg = {13, V_RPMa(500), V_RPMa(6500) } ;

 const LINEAR_UW CsRSCL_MAP09_n_RPMh = {9, V_RPMa(0), V_RPMa(8000) } ;

 const LINEAR_UW CsRSCL_MAP05_n_RPM = {5, V_RPMa(1200) , V_RPMa(6000) } ; /* RSM 5041 */

 const LINEAR_UW CsRSCL_MAP04_n_RPM = {4, V_RPMa(1200) , V_RPMa(4800) } ;

#if XeTRVS_SYST_TYPE == XeTRVS_SYST_PCM
 const LINEAR_UW CsRSCL_MAP08_n_RPMa_1250_3000 = {8, V_RPMa(1250), V_RPMa(3000) } ;
#endif

 const LINEAR_UW CsRSCL_MAP05_n_RPM_0_800 = {5, V_RPMa(0), V_RPMa(800) } ;

 const LINEAR_UW CsRSCL_MAP08_n_RPMa_0_6400 = {8, V_RPMa(00), V_RPMa(6400) } ;

 const LINEAR_UW CsRSCL_MAP11_n_RPM = {11, V_RPMa(0), V_RPMa(4000) } ;

 const LINEAR_UW CsRSCL_MAP09_n_RPM = {9, V_RPM(800), V_RPM(4000) } ;

 const LINEAR_UW CsRSCL_MAP09_n_RPMb = {9, V_RPM(00), V_RPM(800) } ;

 const LINEAR_UW CsRSCL_MAP12_n_RPM  = {12, V_RPMa(800), V_RPMa(5200) };

 const LINEAR_UW CsRSCL_MAP13_n_RPM  = {13, V_RPMa(400), V_RPMa(1600) };

 const LINEAR_UW CsRSCL_MAP11_n_RPMa  = {11, V_RPMa(300), V_RPMa(1300) };

 const LINEAR_UW CsRSCL_MAP11_n_RPMb  = {11, V_RPMa(600), V_RPMa(2600) };

 const LINEAR_UW CsRSCL_MAP11_n_RPMc  = {11, V_RPMa(1200), V_RPMa(3200) };

 const LINEAR_UW CsRSCL_MAP11_n_RPMd  = {11, V_RPMa(1400), V_RPMa(3400) };

 const LINEAR_UW CsRSCL_MAP15_n_RPMa = {15, V_RPM(800), V_RPM(6400) } ;

 const LINEAR_UW CsRSCL_MAP16_n_RPMa = {16, V_RPMa(400), V_RPMa(6400) } ;

#if XeTRVS_SYST_TYPE == XeTRVS_SYST_PCM
 const LINEAR_UW CsRSCL_MAP16_n_RPMa_0_3600 = {16, V_RPMa(0), V_RPMa(3600) } ;
#endif

 const LINEAR_UW CsRSCL_MAP17_n_RPMa = {17, V_RPMa(00), V_RPMa(1600) } ;

 const LINEAR_UW CsRSCL_MAP17_n_RPMd = {17, V_RPM(00), V_RPM(6400) } ;

 const LINEAR_UW CsRSCL_MAP17_n_RPMf = {17, V_RPMa(400), V_RPMa(6400) } ;

 const LINEAR_UW CsRSCL_MAP17_n_RPMh = {17, V_RPMa(0), V_RPMa(6400) } ;

 const LINEAR_UW CsRSCL_MAP17_n_RPMi = {17, V_RPMa(0), V_RPMa(200) } ;

 const LINEAR_UW CsRSCL_MAP10_n_RPM = {10, V_RPM(3600), V_RPM(7200) } ;

 const LINEAR_UW CsRSCL_MAP19_n_RPM = {19, V_RPM(00), V_RPM(7200) } ;

 const LINEAR_UW CsRSCL_MAP09_n_RPMc = {9, V_RPM(00), V_RPM(6400) } ;

 const LINEAR_UW CsRSCL_MAP09a_n_RPM = {9, V_RPM(00), V_RPM(3200) } ;

 const LINEAR_UW CsRSCL_MAP20_n_RPM= {20, V_RPM(400), V_RPM(8000) } ;

 const LINEAR_UW CsRSCL_MAP33_n_RPM= {33, V_RPM(0), V_RPM(8000) } ;

#if XeTRVS_SYST_TYPE == XeTRVS_SYST_PCM
 const LINEAR_UW CsRSCL_MAP64_n_RPMa = {64, V_RPMa(400), V_RPMa(6700) };
#endif

 const LINEAR_UW CsRSCL_MAP6_U_IGN_VOLT = {6, V_VOLTb(6.0), V_VOLTb(16.0) } ;

#if XeTRNS_SYST_LINE_PRESSURE_SELECTION == CeTRNS_SYST_LINE_PRESSURE_AVAILABLE
 const LINEAR_UW CsRSCL_MAP7_U_IGN_VOLT = {7, V_VOLTb(6), V_VOLTb(18)};
#endif

 const LINEAR_UW CsRSCL_MAP11_U_IGN_VOLT = {11, V_VOLTb(8), V_VOLTb(16)};

 const LINEAR_UW CsRSCL_MAP_11_U_IGN_VOLT = {11, V_VOLTb(8), V_VOLTb(18)};

 const LINEAR_UW CsRSCL_MAP13_U_IGN_VOLT = {13, V_VOLTb(0.0), V_VOLTb(24.0) } ;

 const LINEAR_UW CsRSCL_MAP17_U_IGN_VOLT = {17, V_VOLTb(0.0), V_VOLTb(25.6) } ;

 const LINEAR_UW CsRSCL_MAP17_U_IGN_VOLTb = {17, V_VOLTb(6.0), V_VOLTb(22.0) };

 const LINEAR_UW CsRSCL_MAP6_U_O2 = {6, V_VOLTb(0.0), V_VOLTb(0.345) } ;

 const LINEAR_UW CsRSCL_MAP17_RATE =
                               {17, V_RATIO_0_2(0.75), V_RATIO_0_2(1.25) } ;

 const LINEAR_UW CsRSCL_MAP8_p_MAP = {8, V_KPAa(20), V_KPAa(55) } ;

 const LINEAR_UW CsRSCL_MAP8_p_MAPa = {8, V_KPAa (30), V_KPAa (100) } ;

 const LINEAR_UW CsRSCL_MAP9_p_MAP = {9, V_KPAa (30), V_KPAa (100) } ;

 const LINEAR_UW CsRSCL_MAP9_p_MAPb = {9, V_KPAa(20), V_KPAa(100) } ;

 const LINEAR_UW CsRSCL_MAP9_p_MAPc = {9, V_KPAa(65), V_KPAa(105) } ;

 const LINEAR_UW CsRSCL_MAP18_p_MAP = {18, V_KPAa(15), V_KPAa(100) } ;
#if XeSYST_AIR_INDUCTION  !=  CeSYST_NATURAL_ASPIRATED
 const LINEAR_UW CsRSCL_MAP19_p_MAP = {19, V_KPAa (20), V_KPAa (200) } ;
#endif

 const LINEAR_UW CsRSCL_MAP09_p_MAP = {9, V_KPAa(10), V_KPAa(105) } ;

 const LINEAR_UW CsRSCL_MAP9_Pcta = {9, V_PERCENTa(0), V_PERCENTa(100) };

 const LINEAR_UW CsRSCL_MAP9_Pctb = {9, V_PERCENTa(0), V_PERCENTa(50) };

 const LINEAR_UW CsRSCL_MAP9_Pct = {9, V_PERCENTa(0), V_PERCENTa(40) } ;

 const LINEAR_UW CsRSCL_MAP9_Pctba = {9, V_PERCENTb(00), V_PERCENTb(99.99) } ;

#if XeSYST_EVPD_OPTION == CeSYST_AVAILABLE
 const LINEAR_UW CsRSCL_MAP9_PERCENT_MULTb = {9,
                                             V_PERCENT_MULTb(0.0),
                                             V_PERCENT_MULTb(0.999999)};
#endif

 const LINEAR_UW CsRSCL_MAP17_Pctbb = {17, V_PERCENTb(00), V_PERCENTb(99.99) };

 const LINEAR_UW CsRSCL_MAP17_Pctbc = {17, V_PERCENTb(0.0), V_PERCENTb(80.0) };

 const LINEAR_UW CsRSCL_MAP9_Pctbb = {9, V_PERCENTb(00), V_PERCENTb(50.00) };

 const LINEAR_UW CsRSCL_MAP21_Pctbb =
                            {21, V_PERCENTb(80.0), V_PERCENTb(99.99) };

const LINEAR_UW CsRSCL_MAP5_PERCENTa = {5, V_PERCENTa(0), V_PERCENTa(100) };

 const LINEAR_UW CsRSCL_MAP05_PERCENTb =
                            {5, V_PERCENTb(00), V_PERCENTb(99.99) } ;

#if XeSYST_LOAD_CNTRL_TYPE == CeSYST_ELECTRONIC_THROT
 const LINEAR_UW CsRSCL_MAP33_PERCENTb =
                            {33, V_PERCENTh(0), V_PERCENTh(12.5) };

 const LINEAR_UW CsRSCL_MAP33_PERCENTc =
                            {33, V_PERCENTh(0), V_PERCENTh(100.0) };
#endif

 const LINEAR_SW CsRSCL_MAP33_PERCENTg =
                            {33, V_PERCENTg(-12.5), V_PERCENTg(12.5) };

 const LINEAR_SW CsRSCL_MAP33_PERCENTe =
                            {33, V_PERCENTg(0), V_PERCENTg(100.0) };

 const LINEAR_UW CsRSCL_MAP5_PERCENTh=
                            {5, V_PERCENTh(0), V_PERCENTh(100) };

 const LINEAR_SW CsRSCL_MAP33_PERCENTf =
                            {33, V_PERCENTg(0), V_PERCENTg(12.5) };

#if XeSYST_LOAD_CNTRL_TYPE == CeSYST_ELECTRONIC_THROT
 const LINEAR_UW CsRSCL_MAP29_PERCENTa =
                            {29, V_PERCENTh(12.5), V_PERCENTh(100) };
#endif

 const LINEAR_SW CsRSCL_MAP29_PERCENTb =
                            {29, V_PERCENTg(12.5), V_PERCENTg(100) };

 const LINEAR_UW CsRSCL_MAP17_PERCENTa = {17, V_PERCENTa(0), V_PERCENTa(100) };

 const LINEAR_SW CsRSCL_MAP17_PERCENTe =
                            {17, V_PERCENTg(-25), V_PERCENTg(25) };

 const LINEAR_SW CsRSCL_MAP17_PERCENTf =
                            {17, V_PERCENTg(0), V_PERCENTg(100) };

 const LINEAR_UW CsRSCL_MAP17_PERCENTh =
                            {17, V_PERCENTh(0), V_PERCENTh(100) };

 const LINEAR_UW CsRSCL_MAP11_PERCENTh =
                            {11, V_PERCENTh(0), V_PERCENTh(100) };

 const LINEAR_UW CsRSCL_MAP17_PERCENT_MULTb =
                        {17, V_PERCENT_MULTb(0), V_PERCENT_MULTb(0.999999) };

 const LINEAR_SW CsRSCL_MAP17_PERCENT_MULTc =
                        {17, V_PERCENT_MULTc(0), V_PERCENT_MULTc(0.999999) };

 const LINEAR_UW CsRSCL_MAP33_PERCENT_MULTb =
                        {33, V_PERCENT_MULTb(0), V_PERCENT_MULTb(0.999999) };

 const LINEAR_SW CsRSCL_MAP09_p_VAC  = {9, V_KPA_N128_128(0), V_KPA_N128_128(80) };

#if XeSYST_AIR_INDUCTION !=  CeSYST_NATURAL_ASPIRATED
 const LINEAR_SW CsRSCL_MAP11_p_VAC  = {11, V_KPA_N128_128(-100), V_KPA_N128_128(100)};
#else
 const LINEAR_SW CsRSCL_MAP17_p_VAC  = {17, V_KPA_N128_128(0), V_KPA_N128_128(80)};
#endif

#if XeSYST_EVPD_OPTION == CeSYST_AVAILABLE
 const LINEAR_SW CsRSCL_MAP09_p_VACb  = {9, V_VAC(0), V_VAC(5) };
#endif

#if XeSYST_AIRFLOW_TYPE == CeSYST_AIRFLOW_MAF
 const LINEAR_SW CsRSCL_MAP21_NRATIO_0_4p0 =
                                       {21, V_RATIO_N4_4(0), V_RATIO_N4_4(3.9998779296875)};
#endif

 const LINEAR_UW CsRSCL_MAP17_dm_AIRFc = {17, V_GRAMS_PER_SEC(0), V_GRAMS_PER_SEC(255.9) };

 const LINEAR_UW CsRSCL_MAP21_dm_AIRFe = {21, V_GRAMS_PER_SEC(0.0), V_GRAMS_PER_SEC(10.0) };

 const LINEAR_UW CsRSCL_MAP9_v_KPH = {9, V_KPH(0), V_KPH(256)};

 const LINEAR_UW CsRSCL_MAP15_v_KPH = {15, V_KPH(32), V_KPH(200)};
/* 15 steps, 32 to 200 kph */

 const LINEAR_UW CsRSCL_MAP12_v_KPH = {12, V_KPH(39), V_KPH(182)};
/* 12 steps, 39 to 182 kph */

 const LINEAR_SW CsRSCL_MAP13_v_KPH_DIFF =
                                      {13, V_KPH_DIFF(-72), V_KPH_DIFF(0)};
/* 13 steps, -72 to 0 kph */

#if XeTRVS_SYST_TYPE == XeTRVS_SYST_PCM
 const LINEAR_UW CsRSCL_MAP30_v_KPH = {30, V_KPH(0), V_KPH(145)};
#endif

#if XeTRVS_SYST_TYPE == XeTRVS_SYST_PCM
 const LINEAR_SW CsRSCL_MAP33_v_KPH_DIFF = {33, V_KPH_DIFF(-15), V_KPH_DIFF(145)};
#endif

#if XeTRVS_SYST_TYPE == XeTRVS_SYST_PCM
 const LINEAR_SW CsRSCL_MAP11_a_KPH_PER_SECa = {11, V_KPH_PER_SECa(0), V_KPH_PER_SECa(20)};
#endif

 const LINEAR_UW CsRSCL_MAP17_v_KPH = {17, V_KPH(0), V_KPH(128)};

#if XeSYST_CL_FUEL_CRTN != CeSYST_BASE_FUEL
 const LINEAR_UW CsRSCL_MAP33_VOLTf = {33, V_VOLTf(0), V_VOLTf(5) };
#endif

#if XeSYST_AIRMETER_TYPE == CeSYST_ANALOG
 const LINEAR_UW CsRSCL_MAP129_VOLTf = {129, V_VOLTf(0), V_VOLTf(5) };
#endif

 const LINEAR_UW CsRSCL_MAP89_HERTZ = {89, V_HERTZ_MAF(768), V_HERTZ_MAF(12032) };


#if XeTRVS_SYST_TYPE == XeTRVS_SYST_PCM
 const LINEAR_UW CsRSCL_MAP11_RATE_0_10 = {11, V_RATIO_0_128(0), V_RATIO_0_128(10) };

 const LINEAR_UW CsRSCL_MAP11_RATE_0_100 = {11, V_RATIO_0_128(0), V_RATIO_0_128(100) };

 const LINEAR_SW CsRSCL_MAP15_RATE_m20_120 = {15, V_RATIO_N128_128(-20), V_RATIO_N128_128(120) };

#endif

#if XeTRVS_SYST_TYPE == XeTRVS_SYST_PCM
 const LINEAR_SW CsRSCL_MAP29_RATE_m20_120 = {29, V_RATIO_N128_128(-20), V_RATIO_N128_128(120) };

 const LINEAR_UW CsRSCL_MAP11_COUNT_0_10 = {11, V_COUNT_WORD(0), V_COUNT_WORD(10) };
#endif
 const LINEAR_UW CsRSCL_MAP17_v_KPH_0_80 = { 17, V_KPH(0), V_KPH(80) };
 /* const LINEAR_UW CsRSCL_MAP17_v_RPM_KPH_MPH = {17, V_RPM_KPH_MPH(0), V_RPM_KPH_MPH(160)};*/
/* 17 steps, 0 to 160 kph */

/******************************************************************************
 * Rescales for EXAC: Catalyst Temp Mgmt.
 *****************************************************************************/
 const LINEAR_SW CsRSCL_MAP17_T_TEMPa = {17, V_DEG_Ca(-16), V_DEG_Ca(48)};

 const LINEAR_SW CsRSCL_MAP33_T_CatTemp = {33, V_DEG_Cb(0), V_DEG_Cb(512)};

 const LINEAR_UW CsRSCL_MAP09_n_RPMa = {9, V_RPMa(0),V_RPMa(6400)} ;

 const LINEAR_UW CsRSCL_MAP17_AirFuelRatio = {17, V_AFR(9.5),V_AFR(15.9)} ;

 const LINEAR_UW CsRSCL_MAP17_v_KPHa = {17, V_KPH(0),V_KPH(255)} ;

/******************************************************************************
 * Temperature Rescales
 *****************************************************************************/
 const LINEAR_SW CsRSCL_MAP33_Temp_Deg_C_N40_216 = {33, V_DEG_Ca(-40), V_DEG_Ca(216)};

/******************************************************************************
 * Rescales for Engine Run time
 *****************************************************************************/
 const LINEAR_UW CsRSCL_MAP5_t_EngRunTime
      = {5, V_COUNT_WORD(0), V_COUNT_WORD(512) };

 const LINEAR_UW CsRSCL_MAP09_t_SEC =
         {9, V_SECONDSa(0), V_SECONDSa(1)};

/******************************************************************************
 * Rescales for Intake Air Temperature
 *****************************************************************************/
 const LINEAR_SW CsRSCL_MAP6_T_IAT = {6, V_DEG_Ca(-16), V_DEG_Ca(44) };

#if XeKNCS_SYST_CTRL_TYPE == CeKNCS_SYST_ION_SENSE_BASED
/******************************************************************************
 * Rescales for Knock Intensity
 *****************************************************************************/
 const LINEAR_UW CsRSCL_MAP33_Pct_KI =
            {33, V_PERCENTa(0), V_PERCENTa(100)};
#endif

/******************************************************************************
 *  Enhanced Evap Diagnostic rescale constants
 *****************************************************************************/
#if XeSYST_EVPD_OPTION == CeSYST_AVAILABLE
const LINEAR_SW CsEVPD_DEG_17SW  = {17, V_DEG_Ca(0), V_DEG_Ca(48) };
const LINEAR_SW CsEVPD_DEG_11SW  = {11, V_DEG_Ca(0), V_DEG_Ca(40) };
const LINEAR_SW CsEVPD_KPA_17SW  = {17, V_KPA_N128_128(0), V_KPA_N128_128(80) };
const LINEAR_SW CsEVPD_IAT_17SW  = {17, V_DEG_Ca(0), V_DEG_Ca(48) };
#endif

/******************************************************************************
 *  Independent Tables
 *****************************************************************************/
   /* Interpolation table for Engine Speed.  */

   /* 1200 - 6400, Step 400 */
 const MAP7_UW CsINDP_MAP7_n_RPM = {7,
      { V_RPMa (1200), V_RPMa (1600),  V_RPMa (2000),
        V_RPMa (2400), V_RPMa (2800),  V_RPMa (3200), V_RPMa (6400) }};

  /* 0 - 3200 Step 400; 3200 - 6400, Step 800 */
 const MAP13_UW CsINDP_MAP13_n_RPM = {13,
       V_RPMa (0),    V_RPMa (400),  V_RPMa (800),  V_RPMa (1200),
       V_RPMa (1600),  V_RPMa (2000), V_RPMa (2400), V_RPMa (2800),
       V_RPMa (3200), V_RPMa (4000), V_RPMa (4800), V_RPMa (5600),
       V_RPMa (6400) };

   /* 400 - 3000, Step 200; 3000 - 7000, Step 500 */
 const MAP22_UW CsINDP_MAP22_n_RPMa = {22,
       V_RPMa (400),  V_RPMa (600),  V_RPMa (800),  V_RPMa (1000),
       V_RPMa (1200), V_RPMa (1400), V_RPMa (1600), V_RPMa (1800),
       V_RPMa (2000), V_RPMa (2200), V_RPMa (2400), V_RPMa (2600),
       V_RPMa (2800), V_RPMa (3000), V_RPMa (3500), V_RPMa (4000),
       V_RPMa (4500), V_RPMa (5000), V_RPMa (5500), V_RPMa (6000),
       V_RPMa (6500), V_RPMa (7000) };

   /* 600 - 3000, Step 200; 3000 - 4500, Step 500 */
 const MAP16_UW CsINDP_MAP16_n_RPMa = {16,
       V_RPMa (600),  V_RPMa (800),  V_RPMa (1000), V_RPMa (1200),
       V_RPMa (1400), V_RPMa (1600), V_RPMa (1800), V_RPMa (2000),
       V_RPMa (2200), V_RPMa (2400), V_RPMa (2600), V_RPMa (2800),
       V_RPMa (3000), V_RPMa (3500), V_RPMa (4000), V_RPMa (4500)};

 /* 0 - 8000rpm, every 400, and 8191  */
 const MAP22_UW CsINDP_MAP22_n_RPM = {22,
       V_RPMa (0),    V_RPMa (400),  V_RPMa (800),  V_RPMa (1200),
       V_RPMa (1600), V_RPMa (2000), V_RPMa (2400), V_RPMa (2800),
       V_RPMa (3200), V_RPMa (3600), V_RPMa (4000), V_RPMa (4400),
       V_RPMa (4800), V_RPMa (5200), V_RPMa (5600), V_RPMa (6000),
       V_RPMa (6400), V_RPMa (6800), V_RPMa (7200), V_RPMa (7600),
       V_RPMa (8000), V_RPMa (8191)};

 const MAP14_UW  CsINDP_MAP14_p_MAP = {14,
       V_KPAa(20), V_KPAa(30), V_KPAa(40), V_KPAa(50),
       V_KPAa(55), V_KPAa(60), V_KPAa(65), V_KPAa(70),
       V_KPAa(75), V_KPAa(80), V_KPAa(85), V_KPAa(90),
       V_KPAa(95), V_KPAa(100) };

#if XeSYST_AIR_INDUCTION  !=  CeSYST_NATURAL_ASPIRATED
 const MAP24_UW  CsINDP_MAP24_p_MAP = {24,
        V_KPAa(20), V_KPAa(30), V_KPAa(40), V_KPAa(50), V_KPAa(55), V_KPAa(60),
        V_KPAa(65), V_KPAa(70), V_KPAa(75), V_KPAa(80), V_KPAa(85), V_KPAa(90),
        V_KPAa(95), V_KPAa(100), V_KPAa(110), V_KPAa(120), V_KPAa(130), V_KPAa(140),
        V_KPAa(150), V_KPAa(160), V_KPAa(170), V_KPAa(180), V_KPAa(190), V_KPAa(200)};
#endif

 const MAP11_UW CsINDP_MAP11_Pct_TPS = {11,
       V_PERCENTh (0),      V_PERCENTh (6.25),   V_PERCENTh(12.5),
       V_PERCENTh (18.75),  V_PERCENTh (25),     V_PERCENTh(31.25),
       V_PERCENTh (37.5),   V_PERCENTh (50),     V_PERCENTh(62.5),
       V_PERCENTh (75),     V_PERCENTh (100) };

#if XeSYST_AIRFLOW_TYPE == CeSYST_AIRFLOW_MAF
   const MAP13_UW CsINDP_MAP13_Pct_TPS = {13,
       V_PERCENTa (0),      V_PERCENTa (6.25),   V_PERCENTa (12.5),
       V_PERCENTa (18.75),  V_PERCENTa (25),     V_PERCENTa (31.25),
       V_PERCENTa (37.5),   V_PERCENTa (43.75),  V_PERCENTa (50),
       V_PERCENTa (62.5),   V_PERCENTa (75),     V_PERCENTa (87.5),
       V_PERCENTa (100) } ;
#endif

 const MAP22_UW CsINDP_MAP22_CLFLOW = {22,
       V_PERCENTa(0),  V_PERCENTa(4),  V_PERCENTa(8),  V_PERCENTa(12),
       V_PERCENTa(16), V_PERCENTa(20), V_PERCENTa(24), V_PERCENTa(28),
       V_PERCENTa(32), V_PERCENTa(36), V_PERCENTa(40), V_PERCENTa(44),
       V_PERCENTa(48), V_PERCENTa(52), V_PERCENTa(56), V_PERCENTa(60),
       V_PERCENTa(68), V_PERCENTa(76), V_PERCENTa(84), V_PERCENTa(92),
       V_PERCENTa(100), V_PERCENTa(150) } ;

#if XeTRVS_SYST_TYPE == XeTRVS_SYST_PCM
  /* Interpolation table for Transmission Oil Temperature  */
 const MAP8_SW CsINDP_MAP8_T_TEMPb = {8,
       V_DEG_Ca(-40), V_DEG_Ca(-20),
       V_DEG_Ca(0),   V_DEG_Ca(+40),
       V_DEG_Ca(+80), V_DEG_Ca(+130),
       V_DEG_Ca(+190), V_DEG_Ca(+250) } ;
#endif

   /* Interpolation table for Percent (-100 to 100).  */
   /* -100% to -20%, Step 20%; -20% to 20%, Step 2%; 20% to 100%, Step 20% */
 const MAP29_SW CsINDP_MAP29_Pct_ThrotError = {29,
       V_PERCENTg (-100.0), V_PERCENTg (-80.0),  V_PERCENTg (-60.0),
       V_PERCENTg (-40.0),  V_PERCENTg (-20.0),  V_PERCENTg (-18.0),
       V_PERCENTg (-16.0),  V_PERCENTg (-14.0),  V_PERCENTg (-12.0),
       V_PERCENTg (-10.0),  V_PERCENTg (-8.0),   V_PERCENTg (-6.0),
       V_PERCENTg (-4.0),   V_PERCENTg (-2.0),   V_PERCENTg (0.0),
       V_PERCENTg (2.0),    V_PERCENTg (4.0),    V_PERCENTg (6.0),
       V_PERCENTg (8.0),    V_PERCENTg (10.0),   V_PERCENTg (12.0),
       V_PERCENTg (14.0),   V_PERCENTg (16.0),   V_PERCENTg (18.0),
       V_PERCENTg (20.0),   V_PERCENTg (40.0),   V_PERCENTg (60.0),
       V_PERCENTg (80.0),   V_PERCENTg (100.0)};
   /* Interpolation table for Percent (-14500 to 14500).  */
   /* -14500 to -2500, step 2000%; -2500 to 2500, step 250%;
      2500 to 14500, step 2000% */
 /*const MAP33_SW CsINDP_MAP33_Pct_ThrotDeriv = {33,
       V_RATIO_N32768_32767 (-14500), V_RATIO_N32768_32767 (-12500),
       V_RATIO_N32768_32767 (-10500), V_RATIO_N32768_32767 (-8500),
       V_RATIO_N32768_32767 (-6500),  V_RATIO_N32768_32767 (-4500),
       V_RATIO_N32768_32767 (-2500),  V_RATIO_N32768_32767 (-2250),
       V_RATIO_N32768_32767 (-2000),  V_RATIO_N32768_32767 (-1750),
       V_RATIO_N32768_32767 (-1500),  V_RATIO_N32768_32767 (-1250),
       V_RATIO_N32768_32767 (-1000),  V_RATIO_N32768_32767 (-750),
       V_RATIO_N32768_32767 (-500),   V_RATIO_N32768_32767 (-250),
       V_RATIO_N32768_32767 (0),      V_RATIO_N32768_32767 (250),
       V_RATIO_N32768_32767 (500),    V_RATIO_N32768_32767 (750),
       V_RATIO_N32768_32767 (1000),   V_RATIO_N32768_32767 (1250),
       V_RATIO_N32768_32767 (1500),   V_RATIO_N32768_32767 (1750),
       V_RATIO_N32768_32767 (2000),   V_RATIO_N32768_32767 (2250),
       V_RATIO_N32768_32767 (2500),   V_RATIO_N32768_32767 (4500),
       V_RATIO_N32768_32767 (6500),   V_RATIO_N32768_32767 (8500),
       V_RATIO_N32768_32767 (10500),  V_RATIO_N32768_32767 (12500),
       V_RATIO_N32768_32767 (14500) };*/

const MAP17_UW CtVIOS_DeclutchDeltaRefRPM_Axis = {17,
              V_RPM(0),
              V_RPM(200),
              V_RPM(400),
              V_RPM(600),
              V_RPM(800),
              V_RPM(1000),
              V_RPM(1200),
              V_RPM(1400),
              V_RPM(1600),
              V_RPM(1800),
              V_RPM(2000),
              V_RPM(2200),
              V_RPM(2400),
              V_RPM(2600),
              V_RPM(2800),
              V_RPM(3000),
              V_RPM(3200)  };

#if XeSYST_EVPD_OPTION == CeSYST_AVAILABLE
 const MAP17_SW  CsINDP_MAP17_FLOW = {17,
       V_PURG_FLOW_DIFF(-0.4), V_PURG_FLOW_DIFF(-0.3), V_PURG_FLOW_DIFF(-0.2),
       V_PURG_FLOW_DIFF(-0.1), V_PURG_FLOW_DIFF(-0.08),V_PURG_FLOW_DIFF(-0.06),
       V_PURG_FLOW_DIFF(-0.04),V_PURG_FLOW_DIFF(-0.02),V_PURG_FLOW_DIFF(0),
       V_PURG_FLOW_DIFF(0.02), V_PURG_FLOW_DIFF(0.04), V_PURG_FLOW_DIFF(0.06),
       V_PURG_FLOW_DIFF(0.08), V_PURG_FLOW_DIFF(0.1),  V_PURG_FLOW_DIFF(0.2),
       V_PURG_FLOW_DIFF(0.3),  V_PURG_FLOW_DIFF(0.4) };
#endif

/*  EVAP */
 const MAP8_UW  CsINDP_MAP08_AIRF = { 8,
       V_GRAMS_PER_SEC(0.0),  V_GRAMS_PER_SEC(2.0), V_GRAMS_PER_SEC(3.0),
       V_GRAMS_PER_SEC(4.0),  V_GRAMS_PER_SEC(6.0), V_GRAMS_PER_SEC(8.0),
       V_GRAMS_PER_SEC(12.0), V_GRAMS_PER_SEC(15.99) };


/* BEGIN  ----  Torque Control and Estimate */
const MAP11_SW CsRSCL_MAP11_SprkAdv_0to50 =
{
   11,
   V_ANGLEa(00), V_ANGLEa(05), V_ANGLEa(10), V_ANGLEa(15),
   V_ANGLEa(20), V_ANGLEa(25), V_ANGLEa(30), V_ANGLEa(35),
   V_ANGLEa(40), V_ANGLEa(45), V_ANGLEa(50) };

/* END  ----  Torque Control and Estimate */

/* BEGIN  ----  Flex Fuel Interpolation */
const LINEAR_UW CsRSCL_MAP11_MULF = {11, V_RATIO_0_2(1), V_RATIO_0_2(1.999969482) };
/* END  ----  Flex Fuel Interpolation   */

/* GDI FUEL Interpolation */
const MAP6_SW CsINDP_MAP6_TEMP_m10to40 =
{
   6,
       V_DEG_Ca(-10), V_DEG_Ca(0),
       V_DEG_Ca(10),  V_DEG_Ca(20),
       V_DEG_Ca(30),  V_DEG_Ca(40) };

const MAP17_SW CsINDP_MAP17_MPA_FuelPressDelta = {17,
    { V_MPA_DIFF(-16), V_MPA_DIFF(-14),V_MPA_DIFF(-12), V_MPA_DIFF(-10),
      V_MPA_DIFF(-8), V_MPA_DIFF(-6), V_MPA_DIFF(-4), V_MPA_DIFF(-2),
      V_MPA_DIFF(0),  V_MPA_DIFF(2), V_MPA_DIFF(4),  V_MPA_DIFF(6),
      V_MPA_DIFF(8),  V_MPA_DIFF(10), V_MPA_DIFF(12),  V_MPA_DIFF(14),
      (CfMAX_T_MPA_DIFF) } };

const LINEAR_UW CsRSCL_MAP6_p_IMEP  = {6, V_KPAb(500), V_KPAb(3000) };

/******************************************************************************
*
* Revision History:
*
* Rev.  YYMMDD Who RSM# Changes
* ----- ------ --- ---- -------------------------------------------------------
* 1.1   960509 mrw      Created module.
* 1.2   960909 sai      Made all tables of type 'const'
* 1.3   960916 blt      Added:
*                         CsRSCL_MAP17_v_KPHb
*                         CsRSCL_MAP17_n_RPMf
*                         CsRSCL_MAP11_U_IGN_VOLT
*                         CsRSCL_MAP11_n_RPM
*                         CsRSCL_MAP9_Pctb
*                         CsRSCL_MAP4_p_BARO
* 1.38  960930 lcq      Changed
*                         VOLT  as VOLTb in
*                         CsRSCL_U_IGN_VOLT and CsRSCL_MAP6_U_O2
* 1.40  961014 blt      Added:
*                         CsRSCL_MAP21_n_RPM_DIFFa
*                         CsRSCL_MAP33_n_RPM_DIFFa
*                         CsRSCL_MAP33_n_RPM_PER_46P86_MSECa
*                         CsRSCL_MAP17_v_KPH
*                         Changed CsRSCL_MAP9_Pctb to CsRSCL_MAP9_Pcta
* 1.42  961204 lcq      Added:
*                         CsRSCL_MAP17_dm_AIRFb
* 1.43  960110 sai      Added:  CsRSCL_MAP5_p_BARO
* 1.45  970128 blt      Added:  CsRSCL_MAP9_Pctb
* 1.46  970224 sai      Added:  CsRSCL_MAP17_T_TEMPa
*                               CsRSCL_MAP33_T_CatTemp
*                               CsRSCL_MAP09_n_RPMa
*                               CsRSCL_MAP17_AirFuelRatio
*                               CsRSCL_MAP17_v_KPHa
*                               CsRSCL_MAP17_U_IGN_VOLTa
* 1.53  970315 as       Added   CsRSCL_MAP9_p_MAP
* 1.54  970414 mye      Added   CsRSCL_MAP9_Pctba
*                               CsRSCL_MAP17_Pctbb
*                               CsRSCL_MAP9_v_KPH
* 1.55  970418 lq       Changed CsINDP_MAP22_n_RPM
* 1.56  970505 blt      Added   CsRSCL_MAP17_PERCENTc
*                               CsRSCL_MAP17_PERCENTd
*                               CsRSCL_MAP33_PERCENTa
* 1.57  970515 lq       Changed CsRSCL_MAP33_Mult
* 1.58  970523 blt      Added   CsRSCL_MAP12_p_BARO
*                               CsRSCL_MAP33_n_RPM
*                               CsRSCL_MAP33_PERCENTb
*                               CsRSCL_MAP29_PERCENTa
*                               CsRSCL_MAP17_PERCENTe
*                               CsRSCL_MAP17_PERCENTf
* 1.59  970610 blt      Added   CsRSCL_MAP17_PRES
*                               CsRSCL_MAP33_PERCENTc
*                               CsRSCL_MAP17_PERCENTg
* 1.60  970621 blt      Added   CsRSCL_MAP17_PERCENTh
* 1.61  970623 sai      Added   CsRSCL_MAP33_U_IGN_VOLT, CsRSCL_MAP17_PERCENTa
* 1.62  971001 lcq      Added   CsRSCL_MAP33_RATE
* 1.63  971203 raw      Fixed   CsRSCL_MAP17_PERCENT_MULTb and MAP33 endpoints
* 1.65  971218 sai      Added   CsRSCL_MAP33_PERCENTd
*                               CsINDP_MAP29_Pct_ThrotError
*                               CsINDP_MAP33_Pct_ThrotDeriv
* 1.66  980116 sai      Added   CsRSCL_MAP15_v_KPH, CsRSCL_MAP12_v_KPH
*                               CsRSCL_MAP12_v_KPH_DIFF,
*                               CsRSCL_MAP13_v_KPH_DIFF
* 1.67  980112 pdb 0345 Implement Crankshaft Misfire Diagnostic
*                         Added CsRSCL_MAP08_n_RPM
*                               CsRSCL_MAP17_n_RPMg
*                               CsRSCL_MAP09_n_RPMh
*                               CsRSCL_MAP17_p_KPAa
*                               CsRSCL_MAP05_PERCENTb
*                               CsRSCL_MAP09_p_KPA
*                               CsINDP_MAP24_n_RPMa
* 1.68  971231 saf 0324 Merge Vios cleanup with LECC_NODE 268
* 1.71  980316 pdb 0423 HWIO/VIOS Cleanup, Phase II
*                       -Changed CsRSCL_MAP17_PERCENT_MULTb to
*                        CsRSCL_MAP17_PERCENT_MULTa
* 1.72  980513 cl       Added   CsRSCL_MAP9_T_TEMPd
* 1.72  980513 woz 0267 Added   CsRSCL_MAP33_Pct_KI
* 1.72  980513 mhb 0469 Enhanced evaporative diagnostic - Phase 1.
* 1.72  980513 l.q 0468 Added the interface with OBD2 evap.
* 1.72  980513 l.q 0493hvac Changed rescaled ranged of CsRSCL_MAP7_P_KPAd
* 1.72  980513 blt 0486 Merge offline partition node 024 into Lecc node 278
* 1.73  980515 blt 0486 Merge offline partition node 024 into Lecc node 278
* 1.74  980521 blt 0486 Merge offline partition node 024 into Lecc node 278
* 1.75  980707 woz 0388 Added CsRSCL_MAP17_U_IGN_VOLTb.
* 1.76  980707 kan 0393 Added CsRSCL_MAP3_p_BARO, changed V_RPM
*                       to V_RPMa for CsRSCL_MAP17_n_RPMa
* 1.77  980708 blt 0389 Added CsINDP_MAP27_n_RPM
* 1.77  980708 blt 0390 Added CsINDP_MAP32_n_RPM
* 1.78  980605 sac 0525 Added CsINDP_MAP11_Pct_TPS,
*                             CsINDP_MAP13_n_RPM
*
* -- Core Revision History: --
*
* 1.3   980715 raw xxxx Add model based transient fuel
* 1.4   980721 saf      Merge LECC Node 304 to the CORE Software
*       980720 sai 0603 Added CsRSCL_MAP17_PRES_0to4000,
*                        CsRSCL_MAP11_SprkAdv_0to50, CsRSCL_MAP21_Ratio_0_2,
*                        CsRSCL_MAP15_Torque, CsRSCL_MAP21_Percenth_0_100,
*                        CsRSCL_MAP9_EngSpd_0to6400, CsRSCL_MAP11_AirFuelRatio,
*                        CsRSCL_MAP17_v_KPH_0to_256
* 1.5   981105 arr 0096  Added CsRSCL_MAP9_T_TEMPe
* 1.6   990204 arr 0149 Merged in LECC node 375 containing the following
*                       change(s):
*       981011 raw 0128 Added CsINDP_MAP5_Deg_K
*       980911 mhb 0471 Enhanced evap.  Phase 2
*       981002 blt 0679 Added CsRSCL_MAP17_PERCENT_MULTc
*       981020 kan 0534 Added LINEAR_UW CsRSCL_MAP17_n_RPMh.
*       990202 blt 0781 Added CsRSCL_MAP33_PERCENTe
* 1.7   990304 gps 0142  Added CsRSCL_MAP17_dm_AirFlow
* 1.8   990315 gps 0158  Added CsINDP_MAP17_PressureRatio, CsINDP_MAP19_n_RPM
*                        Deleted CsRSCL_MAP31_Ratio, CsRSCL_MAP33_RPM
* 1.9   990315 gps 0159  Added CsRSCL_MAP09_n_RPMb
*                        Deleted CsINDP_MAP27_n_RPM, CsINDP_MAP32_n_RPM
* 1.10  990617 gps 0213  Added 18th breakpoint for CsINDP_MAP17_PressureRatio
*                          (CsINDP_MAP17_PressureRatio->
*                           CsINDP_MAP18_PressureRatio)
* 1.11  990528 wei 0243  Changed CsINDP_MAP24_n_RPMa to CsINDP_MAP20_n_RPMa
*                        for reduced MISF table size.
* 1.12  990805 ajk 0302 Merged in Proto2 node 050 (cp2050f0) containing the
*                        following change(s):
*       990514 sac 0955 Correct table lookup type for CsINDP_MAP11_Pct_TPS.
*       990513 gps 0963 Added CsRSCL_MAP17_p_VAC for KtAIRF_MAF_ExpectEGR_Comp
*                             CsRSCL_MAP8_p_MAPa for KtEGRC_BaroMAP_Gain
*       990519 gps 0980 Changed rescale definition for CsEVPD_DEG_17SW
*                             (min=18, max=36 -> min=0, max=48)
*       990609 rjc 0949 Changed CsRSCL_MAP33_dm_AIRFd for
*                       KtICMD_B1_LR_CompensationFactor,
*                       KtICMD_B2_LR_CompensationFactor,
*                       KtICMD_B1_RL_CompensationFactor,
*                       KtICMD_B2_RL_CompensationFactor.
*       990609 rjc 0936 Defined CsEVPD_IAT_17SW.
*       990426 as  0203 Added CsINDP_MAP18_PressureRatio
*       990713 as  0273 Added CsINDP_MAP29_p_MAP
*       990726 as  0237 Added CsRSCL_MAP10_T_TEMP, CsRSCL_MAP12_n_RPM,
*                       CsINDP_MAP11_PressureRatio.
*       990812 as  0273 Removed CsINDP_MAP29_p_MAP, Added CsRSCL_MAP5_p_MAPb.
*       991027 raw 0416 Added CsINDP_MAP12_BPE and CsINDP_MAP14_BPE
* 1.10  991102 gps 0457 Modularization in CORE - EGR subsystem.
*                       Moved CsRSCL_MAP9_p_MAPa to EGR area.
*                       Updated header description.
*
* core_dc2 Revision History:
*
* 1.1   000525 woz 0822 Initial EMSDC2 Excalibur Release based on Core Node 32.
* 1.2   000714 woz 0883 Merged modifications implemented between Core (EMSDC1a)
*                        nodes 32 and 53:
*       000131 gps 0580 Updated EVPD subsystem (based on MR140 node 101) into
*                        CORE node 31 containing the following change(s):
*                        Added a new rescale CsEVPD_DEG_11SW for
*                         KtEVPD_SmLeakSlpThrshTempComp,
*                         KtEVPD_VrySmLkSlpThrshTempComp.
*                       Deleted CsEVPD_DEG_10SW.
*       000328 kan 0682 Integrated Daewoo RSM's:
*                       0308 Added CsINDP_MAP17_n_RPM rescale for
*                            updated KtSPRK_phi_IdleBaseRPM.
*       000328 gps 0711 Corrected rescale CsRSCL_MAP17_dm_CCPF initialization
*                        of KtEVAP_PurgeFactorStartUp lookup table.
*       000229 wei 0699 ETC clean up.
*                       Changed data type of CsINDP_MAP11_Pct_TPS to
*                        V_PERCENTh.
*                       Changed name of CsRSCL_MAP33_PERCENTd to
*                        CsRSCL_MAP33_PERCENTg since it is using
*                        T_PERCENTg type for element.
*       991130 raw 0571 Add CsRSCL_MAP17_Imep, CsRSCL_MAP04_n_RPM,
*                       CsINDP_MAP8_M_TORQ, CsRSCL_MAP09_t_SEC,
*                       CsRSCL_MAP33_AF_Ratio for torque/AECS
* 1.3   000925 caw 0397 Added CsRSCL_MAP33_VOLTf
*                             CsINDP_MAP8_n_LS_CTRL_I_SCALE
*                             CsINDP_MAP5_n_LS_CTRL_I_GAIN
*                             CsINDP_MAP9_dm_AIRF_0_100
* 1.4   000605 as  1007 Added CsRSCL_MAP11_p_MAP_0_100,
*                             CsRSCL_MAP17_t_msec_0_100,
*                             CsRSCL_MAP17_t_msec_0_50
* 1.5   010614 caw 1267 Added CsRSCL_MAP21_NRATIO_0_4p0
*                             CsRSCL_MAP129_VOLTf
*                             CsRSCL_MAP13_n_RPMa
*       010625 jyz 1384 Added CsRSCL_MAP9_T_TEMPf
* 1.6   010712 caw 1162 Added CsRSCL_MAP11_P_KPAd
*                             CsRSCL_MAP11_T_TEMP
*                             CsRSCL_MAP17_n_RPMi
* 1.7   010717 cj  0511 Merged changes from Daewoo Node 96f0.  The collection
*                        of changes included the following RSMs:
*                        0511, 0512, 0626, 0693, 0773, 0782, 0884, 0888,
*                        0949, 0984, 1002, 1008, 1077, 1176, 1178, 1298,
*                        and 1314.
* 1.8   010807 caw 1425 Added CsRSCL_MAP6_U_IGN_VOLT
*                             CsRSCL_MAP21_PctMulta
* 1.9   010831 caw 1248 Modified CsINDP_MAP22_CLFLOW from flow to percent of
*                       range.
* 1.10  010913 caw 1468 Added CsRSCL_MAP73_HERTZ
* 1.11  010725 jbn 1440 Added CsRSCL_MAP9_T_TEMPg,
*                        CsRSCL_MAP5_EngSpd_400to2000.
* 1.12  010717 as  1429 Added CsRSCL_MAP7_U_IGN_VOLT & CsINDP_MAP8_T_TEMPb
*                         for KtTRVC_ChargeSlndDC
*              hdb 1429 Added CsRSCL_MAP15_p_BARO rescale for
*                         KtVIOT_AltdFactor
*                       Added CsRSCL_MAP11_Pct_AF_LoadPerCyl for Torque
*
* 1.13  010928 rag 1028 Added CsRSCL_MAP21_T_TEMPf
*              TCI       CsRSCL_MAP17_dm_AIRFe
* 1.14  010925 jbn 1467 Added CsRSCL_MAP2_MODE_0_1.  integration into
*                       node 85 by c23mhb.
* 1.15  020220 kan 1642 Task 2019. Added for transmission merge:
*                        CsRSCL_MAP64_n_RPMa, CsRSCL_MAP25_T_TEMPa,
*                        CsRSCL_MAP33_TPS
* 1.16  020222 caw 1318 Added: CsRSCL_MAP15_T_TEMPa
* 1.17  020219 gan 1472 Added CsRSCL_MAP09_n_RPMc
*                             CsRSCL_MAP09_p_MAP
*                             CsINDP_MAP10_TEMP
* 1.18  020423 ban 1309 Added CsINDP_MAP17_MPA_FuelPres
* 1.19  020529 rmn 1816 Added CsRSCL_MAP17_Pctbc
*                             CsRSCL_MAP20_Pctbb
* 1.20  020710 ban 1894 Added CsRSCL_MAP9_SprkRtdTotal
* 1.21  020805 ban 1927 Added CsRSCL_MAP17_T_TEMPb
*                             CsRSCL_MAP6_T_TEMP
* 1.22  020807 caw 1816 Corrected start point for scaler, CsRSCL_MAP20_Pctbb.
* 1.23  020619 gps 1906 FUEL - Improve C/L Fuel And Stoichiometer AFR
*                        Enable Criteria by Use of Integrated Airflow.
*                       Added CsRSCL_MAP17_T_TEMPb.
* 1.24  020812 caw 1816 Changed CsRSCL_MAP20_Pctbb -> CsRSCL_MAP21_Pctbb
* 1.25  020920 caw 2069 Added CsINDP_MAP17_T_ExhaustMnfdTemp.
* 1.26  020829 ksr 1083 Added CsRSCL_MAP5_PERCENTa for CO Adjust.
* 1.27  021011  ng 2156 Changed the CsRSCL_MAP17_dm_AIRF,
*                                   CsRSCL_MAP17_dm_AIRFc
*                                   CsRSCL_MAP17_dm_AIRFe,
*                                   CsRSCL_MAP17_dm_AIRFb
*                      data type from V_GRAM_SEC -> V_GRAMS_PER_SEC.
*                                 CsINDP_MAP9_dm_AIRF_0_100
*                          WAS: V_GRAMS_PER_SECb
*                           IS: V_GRAMS_PER_SEC.
* 1.28  021019 gps 2110 AIRF: Increase frequency range of airmeter table.
*                       Substituted CsRSCL_MAP73_HERTZ by CsRSCL_MAP89_HERTZ.
* 1.29  021031 caw 1400 Added: CsRSCL_MAP10_TK_TEMP
*                              CsRSCL_MAP17_TK_TEMP
* 1.30  021029 kan 2027 Transmission software merge.
* 9.2.2.1.4.1.3
*       030226 gps 2393 AIRF, AECS, EGRS, EPSE : Remove Old Speed Density
*                        Logic.
* 10    030603 gps 2602 PSE/TSE: Change TSE Table Breakpoints to Handle
*                        High Air Flow Applications.
*                       Deleted the following definitions:
*                        CsRSCL_MAP11_dm_AirFlow,
*                        CsRSCL_MAP16_dm_EGR_Flow.
* 11    030605 gps 1934 AECS, EPSE/ETSE : VE Multiplier to Fuel Shift
*                        Due High IAT.
*                       Added CsRSCL_MAP7_TEMP_DEGK definition.
* tci_pt3#9.2.2.1.4.1.3.1.1
*       030509 kvm 2106 New EVAP Algorithm changes into EMS_Core,
*                         Deleted CsRSCL_MAP9_RATE
* 12    030605 gps 1934 AECS, EPSE/ETSE : VE Multiplier to Fuel Shift
*                        Due High IAT.
*                       Merged 11 with tci_pt3#9.2.2.1.4.1.3.1.1 .
* 13    030611 ksr 2757 Added KtSPRK_AXIS_IdleBaseSprkAdv and
*                       KtSPRK_AXIS_BaseSprkAdv
* 14.0  030619 arr 2859 ARFA 0117 - Changed breakpoints for skip shift cals
*                        to better match the range of TISS that skip shifts
*                        occur in.
* 13.1.1
*       030618 ksr 2757 Moved KtSPRK_AXIS_IdleBaseSprkAdv and
*                             KtSPRK_AXIS_BaseSprkAdv to sprkcald.c
* 15.0  030619 arr 2859 Merged 't_tbltyp.c-14' with 't_tbltyp.c-13.1.1'.
* 16.0  030626 arr 2898 Removed unused CsRSCL_MAP08_n_RPMa_2000_3400.
* 17.0  030709 ksr 2106 Added CsINDP_MAP08_AIRF for EVAP.
* 18.0  030729 ksr 2979 Removed Unused Table CsINDP_MAP8_M_TORQ.
*                       Added: CsRSCL_MAP18_n_RPM
* 19.0  030815 jyz 3071 Added: CsRSCL_MAP07_TK_TEMP
* tci_pt3#20
*       030903  pd 1915 Added: CsRSCL_MAP17_v_KPH_0_80
* 21.0  030911 TLN 3104 Modified CsRSCL_MAP07_TK_TEMP to CsRSCL_MAP09_TK_TEMP
* 19.1  030916 ksr 2984 Modified: CsRSCL_MAP11_SprkAdv_0to50
*                       Type LINEAR_SW to  MAP11_SW for inverse lookup.
* 22.0  030924 ksr xxxx Merged 't_tbltyp.c-21' with 't_tbltyp.c-19.1'.
*                       Changed CsRSCL_MAP17_v_KPH_0_80 to 9 from 17.
* 23.0  030930 jyz 3188 Modified CsRSCL_MAP9_T_TEMPf
* 24.0  031110 rmn 3392 Added CsRSCL_MAP11_n_RPMa, CsRSCL_MAP11_n_RPMb,
*                       CsRSCL_MAP11_n_RPMc, CsRSCL_MAP11_n_RPMd
* 25.0  031216 rmn 3522 Added CsRSCL_MAP17_v_RPM_KPH_MPH
* 26    040301 arr 3731 Replaced battery voltage with AT Relay voltage for
*                        solenoid voltage comparison in CalcSQMG_BatVoltDC_Comp().
*                       Removed CsRSCL_MAP15_U_IGN_VOLT.
* tci_pt3#26
*       040223 PVD 3686 Added CsRSCL_MAP_11_U_IGN_VOLT
* 27 040309  as  -BM- Merged 't_tbltyp.c-26' with 't_tbltyp.c-tci_pt3#26'.
* 28.0  040308 rmn 3500 ARFA 2003-243:TCCC release method for X1, X2, etc
*                       Added CsRSCL_MAP33_n_RPMa
* 29.0  040407 rag Removed Unused Consts:
*                   CsINDP_MAP17_Pct_ChrgFlow,
*                   CsINDP_MAP17_PressureRatio,
*                   CsINDP_MAP17_VAC,
*                   CsINDP_MAP17_n_RPM,
*                   CsINDP_MAP20_Pct_TPS,
*                   CsINDP_MAP20_n_RPMa,
*                   CsINDP_MAP27_n_RPM,
*                   CsINDP_MAP29_n_RPM,
*                   CsINDP_MAP2_p_Baro,
*                   CsINDP_MAP2_p_MAP,
*                   CsINDP_MAP2_p_VAC,
*                   CsINDP_MAP32_n_RPM,
*                   CsINDP_MAP5_Deg_K,
*                   CsRSCL_MAP09_p_KPA,
*                   CsRSCL_MAP09_p_MAPd,
*                   CsRSCL_MAP10_p_MAP,
*                   CsRSCL_MAP11_RATIO_0_0p1,
*                   CsRSCL_MAP11_p_MAP,
*                   CsRSCL_MAP11_p_MAP_0_100,
*                   CsRSCL_MAP11_p_VAC,
*                   CsRSCL_MAP12_v_KPH_DIFF,
*                   CsRSCL_MAP13_n_RPMa,
*                   CsRSCL_MAP15_T_TEMPa,
*                   CsRSCL_MAP16_BPE,
*                   CsRSCL_MAP17_IAC1,
*                   CsRSCL_MAP17_Mult1,
*                   CsRSCL_MAP17_PERCENT_MULTa,
*                   CsRSCL_MAP17_PERCENTc,
*                   CsRSCL_MAP17_PERCENTd,
*                   CsRSCL_MAP17_PERCENTg,
*                   CsRSCL_MAP17_U_IGN_VOLTa,
*                   CsRSCL_MAP17_dm_CCPF,
*                   CsRSCL_MAP17_n_RPMb,
*                   CsRSCL_MAP17_n_RPMc
*                   CsRSCL_MAP17_n_RPMe,
*                   CsRSCL_MAP17_n_RPMg,
*                   CsRSCL_MAP17_p_PRES,
*                   CsRSCL_MAP17_t_BPW,
*                   CsRSCL_MAP17_t_RunTim,
*                   CsRSCL_MAP17_t_msec_0_100,
*                   CsRSCL_MAP17_t_msec_0_50,
*                   CsRSCL_MAP17_v_KPHb,
*                   CsRSCL_MAP18_n_RPM,
*                   CsRSCL_MAP20_IAC2,
*                   CsRSCL_MAP20_p_MAP,
*                   CsRSCL_MAP20_p_VAC,
*                   CsRSCL_MAP21_IAC,
*                   CsRSCL_MAP21_RATE_0_100,
*                   CsRSCL_MAP21_Ratio_p95to1p05,
*                   CsRSCL_MAP21_Ratio_p9to1p1,
*                   CsRSCL_MAP33_Mult2,
*                   CsRSCL_MAP33_Mult3,
*                   CsRSCL_MAP33_Mult4,
*                   CsRSCL_MAP33_Mult5,
*                   CsRSCL_MAP33_Mult6,
*                   CsRSCL_MAP33_Mult7,
*                   CsRSCL_MAP33_Mult8,
*                   CsRSCL_MAP33_PERCENTa,
*                   CsRSCL_MAP33_RATE,
*                   CsRSCL_MAP33_U_IGN_VOLT,
*                   CsRSCL_MAP33_dm_AIRFd,
*                   CsRSCL_MAP33_phi_SA,
*                   CsRSCL_MAP5_RATIO_0_1,
*                   CsRSCL_MAP5_T_TEMP,
*                   CsRSCL_MAP5_T_TEMPa,
*                   CsRSCL_MAP5_p_MAPb,
*                   CsRSCL_MAP7_P_KPAd,
*                   CsRSCL_MAP9_PERCENTd,
*                   CsRSCL_MAP9_T_TEMPc,
*                   CsRSCL_MAP9_T_TEMPd
* 29    040402 rmn 3836 Added CsRSCL_MAP20_Pct
*                       Removed unused CsRSCL_MAP18_n_RPM
* 31    040416 as  -BM- Merged 't_tbltyp.c-30' with 't_tbltyp.c-29'
* 32    040308 rmn 3823 TCC delayed ramped release delay time table break points
*                       Changed: CsRSCL_MAP33_n_RPMa -> CsRSCL_MAP08_n_RPMa_0_6400
* 33    040606 rag GMDT Added CsRSCL_MAP08_n_RPM to Support GMDAT Configuration.
* tci_pt3#34
*       040901 akk 3799 Added compiler switch for constants.
*                       Moved CsRSCL_MAP17_p_KPAa to misfstyp.h..
*                       Deleted CsRSCL_MAP17_dm_AIRF.
* 35    083004 at  4088 Changed MAP21_UW CsINDP_MAP21_n_RPMa to MAP22_UW CsINDP_MAP22_n_RPMa
* 35.1  040912 ksr -BM- Merged 't_tbltyp.c-35' with 't_tbltyp.c-tci_pt3#34'.
* 36.0  040922 rag -XX- Removed "XeSYST_AIRMETER_TYPE" COmpiler option
*                       to Support GMDAT Build
* 36.0  040916 rag -XX- Deleted compiler option to define
*                        CsRSCL_MAP89_HERTZ Defintion
* 35.3  041001 rmn 4466 Added CsRSCL_MAP12_T_TEMP_10to120
* 35.4  041029 ksr -BM- Merged 't_tbltyp.c-35.3' with
*                        't_tbltyp.c-35.1.2.1'.
* tci_pt3#35.5
*       040816 PVD 4827 TURBO Added the following data types
*                         CsRSCL_MAP19_p_MAP,CsINDP_MAP24_p_MAP
* tci_pt3#35.6
*       040816 PVD 4827 TURBO Added CsRSCL_MAP11_p_VAC
*                         Changed CsEVPD_KPA_17UW  to CsEVPD_KPA_17SW
* 35.7  050407 gps ---- Super Charged Changes II.
* 35.4.1.1.1.1
*       051026 gps -BM- Turbo Integration Activity.
*                       Merged 't_tbltyp.c-35.4.1.1'
*                        with 't_tbltyp.c-tci_pt3#35.6'.
* 35.8  051026 gps -BM- Turbo Integration Activity.
*                       Merged 't_tbltyp.c-35.7'
*                        with 't_tbltyp.c-35.4.1.1.1.1'.
* 35.9  051209 gps -BM- Turbo Integration Fixes for Ver 11 of Martin's Issue.
* 35.10 060315 mt  5323 Added CsRSCL_MAP7_p_BAROa
* 35.9.1.1
*       060512 gps 5593 EPSE : Modify VE Load Dependency for Turbo.
*                       Enhancement to exh/intake pressure ratio calculation.
* 35.11 060602 gps -BM- Merged 't_tbltyp.c-35.10' with 't_tbltyp.c-35.9.1.1'.
* tci_pt3#35.12
*       060828 AKR 5750 Added CsRSCL_MAP6_T_TEMPe
* 35.12 060824 PVD 5642 Added :CsEPSE_r_Std_PresRatio
* tci_pt3#35.14
*       060928 sdj 5367 Added CsRSCL_MAP7_p_BAROb
* tci_pt3#36
*       061212 rmn 5716 Changed: CsRSCL_MAP17_dm_AIRFe --> CsRSCL_MAP21_dm_AIRFe
* tci_pt3#xxxx
*       070312 abh  6107 Added CsRSCL_MAP14_T_TEMP
* tcp_pwt2#xxxx
*       070517 epm  5912 Added CsRSCL_MAP17_REFCNT_0to1024
* tcp_pwt2#xxxx
*       070627 epm  6037 Added CsRSCL_MAP11_MULF
* 38    070813 cjk  6446 Update WRAF Closed Loop (CL) fuel control
*                       - move WRAF constant tables to WRAF subsystem
* tci_pt3#38
*       070725 kvm 6214 Added CsRSCL_MAP05_n_RPM_0_800
* 39    071112 gps 6498 EPSE, VIOS: Allow Baro Pressure Sensor Read Logic
*                        and Baro Pressure Estimation Logic to be Active at Same Time.
*                       Removed "BARO_OPTION = MAP" related code.
* 40    071004 me  xxxx Merged from 't_tbltyp.c~tcp_pwt2#39'
*                       and 't_tbltyp.c~tci_pt3#38'
* tci_pt3#41
*       071127 MBA 6360 Added CsRSCL_MAP11_PERCENTh
* tci_pt3#40.1.1
*       080102 MP  6648 Added CsRSCL_MAP18_T_TEMPa.
* tci_pt3#42
*       080222 MP  xxxx Merged t_tbltyp.c~tci_pt3#40.1.1 and t_tbltyp.c~tci_pt3#41
* 43    080318 gps -BM- Merged 't_tbltyp.c~tci_pt3#42' with 't_tbltyp.c~39'.
* tci_pt3#41.1.1
*       080227 sat 6822 Added CsRSCL_MAP5_PERCENTh
* tci_pt3#15518
*       080311 sat xxxx Merged 't_tbltyp.c~tci_pt3#41.1.1' with
*                              't_tbltyp.c~tci_pt3#42'.
* 44    080411 gps -BM- Merged 't_tbltyp.c~43' with 't_tbltyp.c~tci_pt3#41.1.2'.
* 45    080425 cjk -BM- Merged 't_tbltyp.c~44' with 't_tbltyp.c~38'
* 46    080820 ejb 7246 Added CsRSCL_MAP7_p_MAP
* 45.1.1
*       080909 cjk 7315 Correct ANSI-C compile errors
*                       - correct CsRSCL_MAP21_NRATIO_0_4p0
* 47    080915 cjk -BM- Merged 't_tbltyp.c~46' with 't_tbltyp.c~45.1.1'
* 47.1.1
*       081107 gps 7168 EPSE, CDAS, MULF, VCMS, VCPS, VVLS: Introduction
*                        of Common RPM Axis for All VE Tables.
*                       Converted CsINDP_MAP19_n_RPM -> KtEPSE_n_AXIS_VE_RPM.
* tci_pt3#47.2
*       091005 rmn 8347 Added CsRSCL_MAP33_Temp_Deg_C_N40_216
* kok_pt2#47.1.2
*       090921 JP  8066 Added: CsRSCL_MAP8_T_TEMPb
* kok_pt2#47.1.1.1.1
*       091012 gps 6730 Changes associated with 3.9 to 2.5 ms base loop transition.
*                       Renamed RPM_PER_46P86_MSECa to RPM_PER_50_MSECa.
* kok_pt2#47.1.1.2.1
*       091020 vs  8343 Added CsINDP_MAP6_TEMP_m10to40
* kok_pt2#47.1.1.2.2
*       091118 gps -BM- Merged 't_tbltyp.c~kok_pt2#47.1.1.2.1'
*                        with 't_tbltyp.c~kok_pt2#47.1.1.1.1'.
* kok_pt2#47.1.3
*       091118 gps -BM- Merged 't_tbltyp.c~kok_pt2#47.1.2'
*                        with 't_tbltyp.c~kok_pt2#47.1.1.2.2'.
* 47.1.4
*       091208 vs  -BM- Merged 't_tbltyp.c~kok_pt2#47.1.3' with
*                        't_tbltyp.c~tci_pt3#47.2'.
* kok_pt2#47.1.3.1.1
*       100128 JP 8099  Removed CsRSCL_MAP17_dm_AIRFb as per new design
* kok_pt2#47.1.5
*       100225 JP -BM-  Merged kok_pt2#47.1.3.1.1 with 47.1.4
*
* tci_pt3#47.1.6
*       100713 nag 8909 Added CsINDP_MAP17_MPA_FuelPressDelta
* kok_pt2#47.1.7
*       100901  JP 9062 Added: CsRSCL_MAP9_Pctbb
* kok_pt2#47.1.9
*       110428 mcb 9355 Removed conditional compile around CsRSCL_MAP2_MODE_0_1
* kok_pt2#47.1.8.1.1
*       110611 me  -BM- merges
* kok_pt2#47.1.8.1.2
*       110726 rbg 9507 Added CsINDP_MAP7_n_RPM
* kok_pt2#47.1.8.1.2.2.1
*       120423 rbg 9909 Removed CsRSCL_MAP17_REFCNT_0to1024
* kok_pt2#47.1.8.1.3
*       120105 grb 9715 Deleted CsRSCL_MAP33_AF_Ratio
* kok_pt2#47.1.8.1.4
*       120524 cjk 0081 Update includes.
*       120529 ses -BM- Merged 't_tbltyp.c~kok_pt2#47.1.8.1.3' with 
*                       't_tbltyp.c~kok_pt2#47.1.8.1.2.2.1'.
* kok_pt2#47.1.8.1.5
*       12608 cjk -BM- Merged 't_tbltyp.c~kok_pt2#47.1.8.1.4'
*                        with 't_tbltyp.x~kok_pt2#47.1.8.1.3.1.1'
* ctc_pt3#47.1.8.1.6
*		121129 hzrs RSM 10452 Added CsRSCL_MAP09a_n_RPM
* ctc_pt3#47.1.8.1.7
*		131203 qz1 RSM 11197 Added CsRSCL_MAP7_T_TEMP
* ctc_pt3#47.1.8.1.8
*       140127 cgf SCR1399 Added CsRSCL_MAP4_T_TEMP
* ctc_pt3#47.1.8.1.9 
*       150410 lgj 11168 Removed table CsINDP_MAP17_MPA_FuelPres
*                       Updated table values for MAP17_SW CsINDP_MAP17_MPA_FuelPressDelta
* ctc_pt3#47.1.8.1.10
*       150701 xll 12248 Added CsRSCL_MAP13_EngSpd_0to6000
******************************************************************************/
