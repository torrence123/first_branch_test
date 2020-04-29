#ifndef SYSTPCFG_H
#define SYSTPCFG_H
/******************************************************************************
 *
 * Filename:          systpcfg.h
 *
 * Description:       Powertrain control system configuration constant file.
 *
 *                    This file contains definitions for configuration
 *                    of the engine management/powertrain control system.
 *
 *                    ########################################################
 *                    NOTE: The configuration options selected in this file
 *                    must be the same as those in i6lgen.cmd
 *                    ########################################################
 *
 *                    The system files are:
 *
 *                      systpcfg.h   - system configuration definitions
 *                      systmcfg.c   - system configuration functions
 *                      systpdat.h   - system constant declarations
 *                      systmdat.c   - system constant definitions
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
 * Copyright 2009-2013 Delphi Technologies, Inc.
 * All rights reserved.
 *
 *****************************************************************************
 *
 * Current Module Info:
 * %full_name:     ctc_pt3#15/incl/systpcfg.h/11.7 %
 * %date_created:  Fri Oct 31 10:10:50 2014 %
 * %version:       11.7 %
 * %derived_by:    hzrs4h %
 *
 *****************************************************************************/

/******************************************************************************
 *  Global Function Prototypes
 *****************************************************************************/
void InitSYST_CompileTimeSwitchCodeRstToKeyOn(void);

/*****************************************************************************/
/*****************************************************************************/
/****  SYSTEM CONFIGURATION PREPROCESSOR ENUMERATION DEFINITIONS ---      ****/
/****  The following #define commands are used to assign values to the    ****/
/****  enumeration constants similar to the "typedef enum" function, but  ****/
/****  the values are available to the preprocessor for conditional       ****/
/****  compilation.  DO NOT CHANGE THESE VALUES TO ALTER SYSTEM           ****/
/****  CONFIGURATION, but rather assign one of the selections to the      ****/
/****  appropriate System Configuration Constant below.                   ****/
/*****************************************************************************/
/*****************************************************************************/

/******************************************************************************
 *  Cooling Fan Type Options
 *  (Assign one of the following values to XeSYST_ELCL_FAN_CONFIG)
 *****************************************************************************/
#define CeSYST_ELCL_DISCRETE_FAN              0
#define CeSYST_ELCL_PWM_FAN                   1
#define CeSYST_ELCL_CAL_SELECT                2

/******************************************************************************
 *  Misfire Diagnostic Type Options
 *  (Assign one of the following values to XeSYST_MISF_DIAG_TYPE)
 *****************************************************************************/
#define CeSYST_MISF_DIAG_OFF                  0
#define CeSYST_MISF_DIAG_CRANK_SPEED_METHOD   1
#define CeSYST_MISF_DIAG_ION_SENSE_METHOD     2

/******************************************************************************
 *  Misfire Diagnostic Load Options
 *  (Assign one of the following to XeSYST_MISF_ENGINE_LOAD_SELECT_OPTION)
 *****************************************************************************/
#define CeSYST_MISF_ENGINE_LOAD_PERCENT       0
#define CeSYST_MISF_ENGINE_LOAD_KPA           1

/******************************************************************************
 *  Ion Sense Hardware Availability Options
 *  (Assign one of the following values to XeSYST_ION_SENSE_HARDWARE)
 *****************************************************************************/
#define CeSYST_ION_SENSE_HW_UNAVAILABLE       0
#define CeSYST_ION_SENSE_HW_AVAILABLE         1

/******************************************************************************
 *  Ion Sense Hardware Availability Options
 *  SINGLE - Used for 1 ISIM Module (4 and 6 cylinders)
 *  DUAL - Used for 2 ISIM Modules (8 cylinders)
 *  UIIS - Used for up-integrated Ion-Sense Hardware
 *  (Assign one of the following values to XeSYST_ION_SENSE_HW_CONFIG)
 *****************************************************************************/
#define CeSYST_ION_SENSE_SINGLE_MODULE        0
#define CeSYST_ION_SENSE_DUAL_MODULES         1
#define CeSYST_ION_SENSE_UP_INTEGRATED        2

/******************************************************************************
 *  Exhaust Configuration Options for Engine Banks and Exhaust Catalysts
 *  (Assign one of the following values to XeSYST_EXHAUST_CONFIGURATION
 *****************************************************************************/
#define CeSYST_DUAL_BANK_DUAL_CATALYST        0
#define CeSYST_DUAL_BANK_SINGLE_CATALYST      1
#define CeSYST_SINGLE_BANK_SINGLE_CATALYST    2
/******************************************************************************
 *  ELOAD System Configuration Enums
 *
 *****************************************************************************/
#define CeSYST_ELOAD_SOURCE_NONE      0
#define CeSYST_ELOAD_SOURCE_COMM      1
#define CeSYST_ELOAD_SOURCE_VIOS1     2
#define CeSYST_ELOAD_SOURCE_VIOS2     3
#define CeSYST_ELOAD_SOURCE_INT       4

/******************************************************************************
 *  Exhaust Oxygen Sensor Presence (EOSD)
 *  (Assign one of the following values to XeSYST_EOSD_XX_SENSOR)
 *****************************************************************************/
#define CeSYST_EOSD_SENSOR_NOT_PRESENT        0
#define CeSYST_EOSD_SENSOR_PRESENT            1

/*****************************************************************************
 * Selection options for XeSYST_FLSD_SENDER_TYPE
 *****************************************************************************/
#define CeSYST_DUAL_FUEL_SENDER      0
#define CeSYST_SINGLE_FUEL_SENDER    1
/******************************************************************************
 *  Initialization RAM Clear Availability Options
 *  (Assign one of the following values to XeSYST_RAM_CLEAR)
 *****************************************************************************/
#define CeSYST_RAM_CLEAR_UNAVAILABLE          0
#define CeSYST_RAM_CLEAR_AVAILABLE            1

/******************************************************************************
 *  EHC Hardware Availability and Type Options
 *  (Assign one of the following values to XeSYST_EHC_HARDWARE)
 *****************************************************************************/
#define CeSYST_EHC_HW_UNAVAILABLE             0
#define CeSYST_EHC_TEMPERATURE_INPUT          1
#define CeSYST_EHC_VOLTAGE_AND_CURRENT_INPUT  2

/******************************************************************************
 *  Mass Airflow
 *  (Assign one of the following values to XeSYST_AIRFLOW_TYPE)
 *****************************************************************************/
#define CeSYST_AIRFLOW_MAF                    0
#define CeSYST_AIRFLOW_PSE_TSE                1

/******************************************************************************
 *  Mass Airflow Meter
 *  (Assign one of the following values to XeSYST_AIRMETER_TYPE)
 *****************************************************************************/
#define CeSYST_NO_AIRMETER                    0
#define CeSYST_FREQUENCY                      1
#define CeSYST_ANALOG                         2

/******************************************************************************
 *  Catalyst Monitor Diagnostic Options
 *  (Assign one of the following values to XeSYST_CATD_OPTION)
 *****************************************************************************/
#define CeSYST_CATD_DIAG_UNAVAILABLE          0
#define CeSYST_CATD_DIAG_AVAILABLE            1

/******************************************************************************
 *  ABS Diagnostic Options
 *  (Assign one of the following values to XeSYST_ABSD_OPTION)
 *****************************************************************************/
#define CeSYST_ABSD_UNAVAILABLE          0
#define CeSYST_ABSD_AVAILABLE            1

/******************************************************************************
 *  Idle Catalyst Monitor Diagnostic Options
 *  (Assign one of the following values to XeSYST_ICMD_OPTION)
 *****************************************************************************/
#define CeSYST_ICMD_DIAG_UNAVAILABLE          0
#define CeSYST_ICMD_DIAG_AVAILABLE            1

/******************************************************************************
 *  Returnless Fuel
 *  (Assign one of the following values to XeSYST_RETURNLESS_FUEL_TYPE )
 *****************************************************************************/
#define CeSYST_RETURNLESS_FUEL_UNAVAILABLE    0
#define CeSYST_RETURNLESS_FUEL_AVAILABLE      1

/******************************************************************************
 *  Transient Fuel Calibration utility (Used for Development only!)
 *  (Assign one of the following values to XeSYST_TRANS_FUEL_UTIL_TYPE)
 *****************************************************************************/
#define CeSYST_TRANS_FUEL_UTIL_UNAVAIL        0
#define CeSYST_TRANS_FUEL_UTIL_AVAIL          1

/******************************************************************************
 *  Transient Fuel Multiplication Type
 *  (Assign one of the following values to XeSYST_FUEL_TransientFuelMultType)
 *****************************************************************************/
#define CeSYST_FUEL_TimeMethodOnly                 0
#define CeSYST_FUEL_EngineCycleMethodOnly          1
#define CeSYST_FUEL_EngineCycleOrTimeMethod        2

/******************************************************************************
 *  Purge Mass Flow
 *  (Assign one of the following values to XeSYST_PURGE_FLOW_TYPE)
 *****************************************************************************/
#define CeSYST_PURGE_FLOW_PSE_TSE             0
#define CeSYST_PURGE_FLOW_NON_PSE_TSE         1
#define CeSYST_PURGE_FLOW_TWO_FLOW_EST        2

/******************************************************************************
 *  Barometric Pressure Calculation Input Options
 *  (Assign one of the following values to XeSYST_BARO_OPTION)
 *****************************************************************************/
#define CeSYST_BARO_SENSOR                    0
#define CeSYST_MAP_SENSOR                     1
#define CeSYST_PSE_TSE                        2
#define CeSYST_PSE_TSE_AND_MAP_SENSOR         3

/******************************************************************************
 *  dSPACE Hardware Availability
 *  (Assign one of the following values to XeSYST_DSPACE_HARDWARE)
 *****************************************************************************/
#define CeSYST_DSPACE_HW_UNAVAILABLE          0
#define CeSYST_DSPACE_HW_BASIC                1
#define CeSYST_DSPACE_HW_ENHANCED             2

/******************************************************************************
 *  Shift_Lamp Hardware Availability
 *  (Assign one of the following values to XeSYST_SHIFT_LAMP_HARDWARE)
 *****************************************************************************/
#define CeSYST_SHIFTLAMP_HW_UNAVAILABLE       0
#define CeSYST_SHIFTLAMP_HW_AVAILABLE         1

/******************************************************************************
 *  MDS Instrumentation Hardware Availability
 *  (Assign one of the following values to XeSYST_MDS_INST_HARDWARE)
 *****************************************************************************/
#define CeSYST_MDS_HW_UNAVAILABLE             0
#define CeSYST_MDS_HW_AVAILABLE               1

/******************************************************************************
 *  ETAS Instrumentation Hardware Availability
 *  (Assign one of the following values to XeSYST_ETAS_INST_HARDWARE)
 *****************************************************************************/
#define CeSYST_ETAS_HW_UNAVAILABLE           0
#define CeSYST_ETAS_HW_AVAILABLE             1

/******************************************************************************
 *  DI Gas Hardware Availability
 *  (Assign one of the following values to XeSYST_DIG_INJ_HARDWARE)
 *****************************************************************************/
#define CeSYST_DIG_INJ_HW_UNAVAILABLE           0
#define CeSYST_DIG_INJ_HW_AVAILABLE             1

/******************************************************************************
 *  Load Control Type Options
 *  (Assign one of the following values to XeSYST_LOAD_CNTRL_TYPE)
 *****************************************************************************/
#define CeSYST_ELECTRONIC_THROT               0
#define CeSYST_MECHANICAL_THROT               1
#define CeSYST_TORQUE                         2

/******************************************************************************
 *  Electronic Throttle Control Perf Switch Options
 *  (Assign one of the following values to XeSYST_ETC_PERF_SWITCH_VIOS)
 *****************************************************************************/
#define CeSYST_ETC_PERF_AUTO_TRANS            0
#define CeSYST_ETC_PERF_SWITCH_ETC            1

/******************************************************************************
 *  Watchdog checking processor hardware Availability for ETC application
 *  (Assign one of the following values to XeSYST_ETC_WatchdogCPU_HW)
 *****************************************************************************/
#define CeSYST_ETC_WatchdogCPU_Not_Present    0
#define CeSYST_ETC_WatchdogCPU_Present        1

/******************************************************************************
 *  Electronic Throttle Control APS2 Slope Mode Options
 *  (Assign one of the following values to XeSYST_ETC_APS2_SLOPE)
 *****************************************************************************/
#define CeSYST_NEGATIVE                       0
#define CeSYST_POSITIVE                       1

/******************************************************************************
 *  Electronic Throttle Control Number Of APS
 *****************************************************************************/
#define XeSYST_ETCD_NUM_OF_SENSORS CeSYST_TWO_SENSORS

/******************************************************************************
 *  Closed Loop Fuel Correction Options
 *  (Assign one of the following values to XeSYST_CL_FUEL_CRTN)
 *****************************************************************************/
#define CeSYST_WRAF                           0
#define CeSYST_BASE_FUEL                      1
#define CeSYST_WRAF_AND_BASE_FUEL             2

/******************************************************************************
 *  Fuel low pressure Diagnostic Availability
 *  (Assign one of the following values to XeSYST_AUTONOMOUS_LP_MODULE)
 *****************************************************************************/
#define CeSYST_AUTONOMOUS_LP_MOD_NOT_PRESENT    0
#define CeSYST_AUTONOMOUS_LP_MOD_PRESENT        1

/******************************************************************************
 *  Fuel Pump Relay Diagnostic Availability
 *  (Assign one of the following values to XeSYST_FUEL_PUMP)
 *****************************************************************************/
#define CeSYST_FUEL_PUMP_NOT_PRESENT          0
#define CeSYST_FUEL_PUMP_PRESENT              1

/******************************************************************************
 *  Determines whether this application will utilize the conventional
 *  spark tables (ONE) or whether it will choose between a conventional and
 *  low table (TWO) for the necessary spark inputs, based on a PCM switch
 *  set at the end of the vehicle assembly line.
 *****************************************************************************/
#define CeSYST_SPRK_OCTANE_RATIO           0
#define CeSYST_SPRK_TWO_OCTAN_TABLES          1
#define CeSYST_SPRK_FOUR_OCTAN_TABLES         2

/******************************************************************************
 *  Determines whether epse throttle air learning is available
 *****************************************************************************/
#define CeSYST_AIR_LEARN_OPTION_UNAVAIL       0
#define CeSYST_AIR_LEARN_OPTION_AVAIL         1

/******************************************************************************
 *  Fuel Output Type.
 *  Determines whether to use the Direct Injection Gasoline or Port Fuel
 *  Injection fuel output logic.
 *  (Assign one of the following values to XeSYST_FUEL_DELIVERY_SYSTEM
 *****************************************************************************/
#define CeSYST_DIG_FUEL_DELIVERY_SYSTEM       0
#define CeSYST_PFI_FUEL_DELIVERY_SYSTEM       1

/******************************************************************************
 *  Fuel System type
 *  Determines in DIG fuel delivery mode whether the Direct Injection is
 *  Homogeneous or stratified
 *  (Assign one of the following values to XeSYST_FUEL_DIG_FUELING_MODE
 *****************************************************************************/
#define CeSYST_FUEL_DIG_HOMOGENEOUS_MODE     0
#define CeSYST_FUEL_DIG_STRATIFIED_MODE      1

/******************************************************************************
 *  Fuel Pump Type.
 *  Determines whether to use a continous high pressure control or a demand
 *  type piston fuel pump.
 *  (Assign one of the following values to XeSYST_DIG_PUMP
 *****************************************************************************/
#define CeSYST_CONTINUOUS       0
#define CeSYST_HP_PISTON        1

/******************************************************************************
 *  PFI DESFI Type.
 *  Determines whether to use the 16 bit or 24 bit DESFI
 *  (Assign one of the following values to XeSYST_DESFI_DELIVERY_SYSTEM
 *****************************************************************************/
#define CeSYST_DESFI_16BIT_PRIMITIVE       0
#define CeSYST_DESFI_24BIT_PRIMITIVE       1

/******************************************************************************
 *  Serial Data Section
 *  (Assign one or more of the following values to XeSYST_SERIAL_DATA_XXXXX)
 *****************************************************************************/
#define CeSYST_SERIAL_DATA_NOT_PRESENT        0x0000
#define CeSYST_SERIAL_DATA_CAN_PRESENT        0x0001
#define CeSYST_SERIAL_DATA_CAN_DAEWOO         0x0003
#define CeSYST_SERIAL_DATA_CAN_ISUZU          0x0005
#define CeSYST_SERIAL_DATA_CAN_ECM_HYUNDAI    0x0009
#define CeSYST_SERIAL_DATA_CAN_PCM_HYUNDAI    0x0011
#define CeSYST_SERIAL_DATA_CAN_CEC            0x0021
#define CeSYST_SERIAL_DATA_CLASS2_PRESENT     0x0001
#define CeSYST_SERIAL_DATA_KW2K_PRESENT       0x0001
#define CeSYST_SERIAL_DATA_KW2K_DAEWOO        0x0003
#define CeSYST_SERIAL_DATA_KW2K_HYUNDAI       0x0005

/******************************************************************************
 *  OBD Communication Configuration Types
 *  (Assign one of the following values to XeSYST_OBD_CommunicationType)
 *  (Assign one of the following values to XeSYST_OBD_LegislatedSrvs)
 *  (List new assignments as they are used.
 *****************************************************************************/
#define CeSYST_OBD_OVER_CAN                   0
#define CeSYST_OBD_OVER_KW2K                  1
#define CeSYST_INVALID                        2

/******************************************************************************
 *  OBD Communication Configuration Types
 *  (Assign one of the following values to XeSYST_OBD_OVER_GMLAN)
 *  (List new assignments as they are used.
 *****************************************************************************/
#define CeSYST_J300                           0

/*****************************************************************************
* Specifies the program name.
*****************************************************************************/
#define CeSYST_MT80                           0
#define CeSYST_NOT_MT80                       1

/******************************************************************************
 *  General HardWare Configuration Types
 *  (Assign one of the following values to XeSYST_PS_PressSwitchPresent)
 *  (List new assignments as they are used.
 *****************************************************************************/
#define CeSYST_HW_NOT_PRESENT                 10
#define CeSYST_HW_PRESENT                     11

/******************************************************************************
 *  Generic defines which can be used for any option.
 *  (Assign one of the following values to XeSYST_define_of_your_choice)
 *****************************************************************************/
#define CeSYST_NOT_AVAILABLE                  0
#define CeSYST_UNAVAILABLE                    0
#define CeSYST_AVAILABLE                      1

/******************************************************************************
 *  Generic defines which can be used for any I/O option.
 *  (Assign one of the following values to XeSYST_define_of_your_choice)
 *****************************************************************************/
#define CeSYST_DISCRETE_INPUT                  0
#define CeSYST_AD_INPUT                        1

/******************************************************************************
 *  Generic defines which can be used for any I/O option.
 *  (Assign one of the following values to XeSYST_define_of_your_choice)
 *****************************************************************************/
#define CeSYST_BRAKE_SERIAL                          0
#define CeSYST_BRAKE_DISCRETE                        1

/******************************************************************************
 *  Cruise Configuration Types
 *  (Assign one of the following values to XeSYST_CRUISE_CONTROL)
 *****************************************************************************/
#define CeSYST_EXTERNAL_CRUISE_CONTROL 0
#define CeSYST_INTEGRATED_CRUISE_CONTROL 1

/******************************************************************************
 *  Cruise Control Switch Type Configuration
 *  (Assign one of the following values to XeSYST_CRUZ_ANALOG_SWITCH_INPUT_TYPE)
 *****************************************************************************/
#define CeSYST_CRUZ_VOLTAGE_RATIO    0
#define CeSYST_CRUZ_VOLTAGE_ABS_1  1
#define CeSYST_CRUZ_VOLTAGE_ABS_2  2

/******************************************************************************
 *  Cruise Control Lamp Behavior Types
 *****************************************************************************/
#define CeSYST_CRUZ_LAMP_OFF_DURING_COAST      0
#define CeSYST_CRUZ_LAMP_ON_DURING_COAST       1

/******************************************************************************
 *  Task Execution Priority
 * (Assign one of these to a task to specify whether it is executed as a
 *  background task or an interrupt level task.)
 *****************************************************************************/
#define CeSYST_BACKGROUND    0
#define CeSYST_INTERRUPT     1

/******************************************************************************
 *  CVN Calculation Selection
 *****************************************************************************/
#define CeSYST_CRC16    0
#define CeSYST_CRC32    1

/******************************************************************************
 *  Powertrain Torque estimate Type Configuration
 *  (Assign one of the following values to XeSYST_POWERTRAIN_TORQ_EST)
 *****************************************************************************/

#define CeSYST_POWERTRAIN_TORQ_EST_DISABLE   0
#define CeSYST_POWERTRAIN_TORQ_EST_ENABLE   1

/******************************************************************************
 *  Base Loop Time Execution Rates
 *****************************************************************************/
#define CeSYST_BASE_LOOP_1    0
#define CeSYST_BASE_LOOP_2    1

#define CcSYST_BASE_LOOP_1_TIME 3.90625
#define CcSYST_BASE_LOOP_1_TIME_x2 7.8125
#define CcSYST_BASE_LOOP_1_TIME_x4 15.625
#define CcSYST_BASE_LOOP_1_TIME_x8 31.25
#define CcSYST_BASE_LOOP_1_TIME_x16 62.5
#define CcSYST_BASE_LOOP_1_TIME_x32 125

#define CcSYST_BASE_LOOP_1_TIME_x2_ 8
#define CcSYST_BASE_LOOP_1_TIME_x4_ 16
#define CcSYST_BASE_LOOP_1_TIME_x6_ 24

#define CcSYST_BASE_LOOP_2_TIME 4.08
#define CcSYST_BASE_LOOP_2_TIME_x2 8.16
#define CcSYST_BASE_LOOP_2_TIME_x4 16.32
#define CcSYST_BASE_LOOP_2_TIME_x8 32.64
#define CcSYST_BASE_LOOP_2_TIME_x16 65.28
#define CcSYST_BASE_LOOP_2_TIME_x32 130.56


/******************************************************************************
 *  TQI Torque Types
 *****************************************************************************/
#define CeCANH_TQI_TORQUE_ESTIMATE   0
#define CeCANH_TQI_TORQUE_DESIRED    1

/******************************************************************************
 *  Definition For Max Number Of Cylinders
 *****************************************************************************/
#define CcSYST_NUM_OF_CYLINDERS               4

/******************************************************************************
 *  Definition For Number Of Injectors
 *****************************************************************************/
#define CcSYST_NUM_OF_INJECTORS               CcSYST_NUM_OF_CYLINDERS

/******************************************************************************
 *  Defininition For Number of EST Outputs
 *****************************************************************************/
#define CcSYST_NUM_OF_EST_OUTPUTS             CcSYST_NUM_OF_CYLINDERS

/******************************************************************************
 *  Definition For Number Of Gears
 *****************************************************************************/
#define CcSYST_NUM_OF_MANUAL_GEARS                   6

/******************************************************************************
 *  Number of APS sensors in use                                              *
 ******************************************************************************/
#define CeSYST_TWO_SENSORS   0
#define CeSYST_THREE_SENSORS 1

/******************************************************************************
 *  Rough Road Hardware Configuration Types
 *  (Assign one of the following values to XeSYST_CSMI_CONFIG)
 *****************************************************************************/
#define CeSYST_CSMI_RR_SOURCE 0
#define CeSYST_CSMI_G_SENSOR  1
#define CeSYST_CSMI_ABS_HW    2
#define CeSYST_CSMI_WSS_HW    3

/******************************************************************************
 *  CVN Configuration Types
 *  (Assign one of the following values to XeSYST_CVN_RANGE)
 *****************************************************************************/
#define CeSYST_CVN_CAL_ONLY       0
#define CeSYST_CVN_CAL_AND_SW     1

/******************************************************************************
 *  Vref Selections Option list.
 *  ( Assign one of the following values to XeSYST_COND_MAX_NUM_OF_VREF )
 *****************************************************************************/
#define CeSYST_COND_MAX_NUM_OF_VREF_TWO   2
#define CeSYST_COND_MAX_NUM_OF_VREF_THREE 3

/******************************************************************************
 *  Added to compile out functionality not supported for the Hyundai program
 *****************************************************************************/
#define CeSYST_FALSE           0
#define CeSYST_TRUE            1

/*****************************************************************************
 * Selection options for XeSYST_OUTD_DTC_REPORTING_TYPE
 *****************************************************************************/
#define CeSYST_SINGLE_DTC              0
#define CeSYST_SPECIFIC_HIGH_LOW_DTC   1

/*****************************************************************************
 * Selection options for XeSYST_IMEP_MAP_TYPE
 *****************************************************************************/
#define CeSYST_MAP_TYPE             0
#define CeSYST_IMEP_TYPE            1

/*****************************************************************************
 * Selection options for XeSYST_AIR_INDUCTION
 *****************************************************************************/
#define CeSYST_NATURAL_ASPIRATED  0
#define CeSYST_TURBO              1
#define CeSYST_SUPER_CHARGER      2

/*****************************************************************************
 * Selection options for IPSD sensor XeSYST_IPSD_XXXX_Sensor
*****************************************************************************/
#define CeSYST_IPSD_SENSOR_NOT_PRESENT   0
#define CeSYST_IPSD_SENSOR_PRESENT       1

/******************************************************************************
 *  Selection option for Number of IPSD sensors in use
 ******************************************************************************/
#define CcSYST_IPSD_NUMBER_OF_SENSORS  3

/*****************************************************************************
 * Selection options for FSYD Injector Heater Devices
*****************************************************************************/
#define CeSYST_FSYD_DEVICE_NOT_PRESENT   0
#define CeSYST_FSYD_DEVICE_PRESENT       1

/*****************************************************************************
 * Selection options for FSYD Injector Heater Devices
 *****************************************************************************/
#define XeSYST_FSYD_HTR_CURRENT_DEVICE     CeSYST_FSYD_DEVICE_NOT_PRESENT
#define XeSYST_FSYD_HTR_VOLTAGE_DEVICE     CeSYST_FSYD_DEVICE_NOT_PRESENT
#define XeSYST_FSYD_HTR_GROUND_DEVICE      CeSYST_FSYD_DEVICE_NOT_PRESENT

/******************************************************************************
 *  Selection options for XeSYST_EPSD_REDUNDANT_CAM_READ
 *  This configuration switch is used to indicate that an additional CAM read
 *  is supported by HWIO and is available through the HAL interface. The
 *  redundant CAM read has been developed to address vehicle platform specific
 *  problems with CAM diagnostic functionality. For vehicle platforms which
 *  CAM wheel profiles that change state near the first Lo_Res, it may be
 *  necessary to perform the CAM read for diagnostics near the second Lo-Res.
 *  This is far removed from the CAM wheel profile change (Hi-to-Lo or Lo-to_Hi),
 *  and is more tolerant of CAM wheel machining or alignment error. This
 *  configuration switch should be used to connect the appropriate CAM read to
 *  the desired application functionality.
 *****************************************************************************/
#define CeSYST_EPSD_REDUNDANT_CAM_READ_NOT_AVAILABLE 0
#define CeSYST_EPSD_REDUNDANT_CAM_READ_AVAILABLE     1

/*****************************************************************************
 * Selection options for XeSYST_RESUE_TORQ
 *****************************************************************************/
#define USE_TORQ_TCL              0
#define USE_TORQ_TCB              1

/*****************************************************************************
 * Selection options for XeSYST_RADIATOR_TEMPERATURE_SENSOR
 *****************************************************************************/
#define CeSYST_RAD_SENSOR_NOT_PRESENT              0
#define CeSYST_RAD_SENSOR_PRESENT                  1

/*****************************************************************************
 * Selection options for XeSYST_SMRC_CRANK_REQUEST_SOURCE
 *****************************************************************************/
#define CeSMRC_DISCRETE           0
#define CeSMRC_GM_PPEI            1
#define CeSMRC_ACCESSORY          2

/*****************************************************************************
 * Selection options for XeSYST_TRVC_ClutchSensorType
 *****************************************************************************/
#define CeTRVC_CLUTCH_NONE                0
#define CeTRVC_CLUTCH_DISCRETE_SWITCH     1
#define CeTRVC_CLUTCH_ANALOG_SENSOR       2

/*****************************************************************************
 * Number of crankshaft degrees in 1 reference event
 *****************************************************************************/
#define CcSYST_phi_NumDegreesPerEvent (V_CRANK_ANGLE(720) / CcSYST_NUM_OF_CYLINDERS)

/*****************************************************************************
 * Selection options for XeSYST_O2_SensorBxSx
 *****************************************************************************/
#define CeSYST_O2_SensorNotPresent        0
#define CeSYST_O2_SensorSwitching         1
#define CeSYST_O2_SensorLinear            2

/*****************************************************************************
 * Selection options for XeSYST_AC_PRESS_SWITCH_TYPE
 *****************************************************************************/
#define CeSYST_HVAC_ANALOG_AC_PRESS_SWITCH    0
#define CeSYST_HVAC_DISCRETE_AC_PRESS_SWITCH  1

/*****************************************************************************
 * Selection options for ITSD sensor XeSYST_ITSD_XXXX_Sensor
 *****************************************************************************/
#define CeSYST_ITSD_SENSOR_NOT_PRESENT   0
#define CeSYST_ITSD_SENSOR_PRESENT       1

/*****************************************************************************
 * Selection options for XeSYST_DGDM_AlgorithmInUse
 *****************************************************************************/
#define CeSYST_DGDM_NONE                     0
#define CeSYST_DGDM_NA_GasolineEMS           1
#define CeSYST_DGDM_FM_EuropeanStyleDSM      2

/*****************************************************************************/
/****  SYSTEM CONFIGURATION CONSTANTS ---                                 ****/
/****  The following #define commands may be altered to select various    ****/
/****  system configuration options.  Each System Configuration Constant  ****/
/****  below should be assigned one of the values from the appropriate    ****/
/****  set of Preprocessor Enumeration Definitions above to select the    ****/
/****  desired system configuration options.                              ****/
/*****************************************************************************/

/******************************************************************************
 * Diagnostic Data Management Algorithm
 *****************************************************************************/
#define XeSYST_DGDM_AlgorithmInUse             CeSYST_DGDM_NA_GasolineEMS

/* CRUZ */
//#define XbCRUZ_OSC_SUBS_SELECT_FLAG   CbSUBS_ON


/******************************************************************************
 * TRVC Clutch Sensor type selection (user configurable)
 *****************************************************************************/
#define XeSYST_TRVC_ClutchSensorType CeTRVC_CLUTCH_DISCRETE_SWITCH

/******************************************************************************
 * SMRC Ignition switch source selection (user configurable)
 *****************************************************************************/
#define XeSYST_SMRC_CRANK_REQUEST_SOURCE CeSMRC_DISCRETE

/******************************************************************************
 *  EVAP Diagnostic Selection (user configurable)
 *****************************************************************************/
#define XeSYST_EVPD_OPTION CeSYST_UNAVAILABLE

/******************************************************************************
 *  Misfire Diagnostic Type Selection (user configurable)
 *****************************************************************************/
#define XeSYST_MISF_DIAG_TYPE CeSYST_MISF_DIAG_CRANK_SPEED_METHOD

/******************************************************************************
 *  Misfire Diagnostic Load Selection (user configurable)
 *****************************************************************************/
#define XeSYST_MISF_ENGINE_LOAD_SELECT_OPTION CeSYST_MISF_ENGINE_LOAD_PERCENT

/******************************************************************************
 *  Ion Sense Hardware Availability Selection (user configurable)
 *****************************************************************************/
#define XeSYST_ION_SENSE_HARDWARE CeSYST_ION_SENSE_HW_UNAVAILABLE
#define XeSYST_ION_SENSE_HW_CONFIG CeSYST_ION_SENSE_UP_INTEGRATED

/******************************************************************************
 *  Exhaust Configuration Availability Selection (user configurable)
 *
 *  NOTE: THE SYSTEM DOES NOT CURRENTLY SUPPORT DUAL_BANK_SINGLE_CATALYST.
 *        DO NOT SELECT THIS OPTION!!!!
 *****************************************************************************/
#define XeSYST_EXHAUST_CONFIGURATION CeSYST_SINGLE_BANK_SINGLE_CATALYST


/******************************************************************************
 *  Exhaust Oxygen Sensor Presence (EOSD) Selection (user configurable)
 *****************************************************************************/
#define XeSYST_EOSD_12_SENSOR CeSYST_EOSD_SENSOR_PRESENT
#define XeSYST_EOSD_21_SENSOR CeSYST_EOSD_SENSOR_NOT_PRESENT
#define XeSYST_EOSD_22_SENSOR CeSYST_EOSD_SENSOR_NOT_PRESENT
#define XeSYST_WRAF_EOSD_11_SENSOR CeSYST_EOSD_SENSOR_NOT_PRESENT
#define XeSYST_WRAF_EOSD_21_SENSOR CeSYST_EOSD_SENSOR_NOT_PRESENT
#define XeSYST_O2_ANALOGLOW CeSYST_EOSD_SENSOR_NOT_PRESENT
#define CcSYST_MAX_NUM_OF_O2               4

#define XeSYST_O2_SensorB1S1  CeSYST_O2_SensorSwitching
#define XeSYST_O2_SensorB1S2  CeSYST_O2_SensorSwitching
#define XeSYST_O2_SensorB2S1  CeSYST_O2_SensorNotPresent
#define XeSYST_O2_SensorB2S2  CeSYST_O2_SensorNotPresent

/******************************************************************************
 *  Power Steering Pressure Switch Type Selection (user configurable)
 *****************************************************************************/
#define XeSYST_PS_PressSwitchPresent CeSYST_HW_PRESENT

/******************************************************************************
 *  Initialisation RAM Clear Availability Selection (user configurable)
 *****************************************************************************/
#define XeSYST_RAM_CLEAR     CeSYST_RAM_CLEAR_AVAILABLE

/******************************************************************************
 *  EHC Hardware Availability and Type Selection (user configurable)
 *****************************************************************************/
#define XeSYST_EHC_HARDWARE  CeSYST_EHC_HW_UNAVAILABLE

/******************************************************************************
 *  Mass Airflow Sensor Presence (MAF) Selection (user configurable)
 *****************************************************************************/
#define XeSYST_AIRFLOW_TYPE  CeSYST_AIRFLOW_PSE_TSE

/******************************************************************************
 *  LUX COT Selection (user configurable)
 *****************************************************************************/
#define XeSYST_LUX_COT  CeSYST_UNAVAILABLE

/******************************************************************************
 *  Mass Airflow Sensor Type Selection (user configurable)
 *  Note: The configuration item is connected with XeSYST_AIRFLOW_TYPE.
 *        If XeSYST_AIRFLOW_TYPE is not set for CeSYST_AIRFLOW_MAF this
 *        configuration item must currently be set to CeSYST_NO_AIRMETER.
 *****************************************************************************/
#define XeSYST_AIRMETER_TYPE CeSYST_NO_AIRMETER

/******************************************************************************
 *  Catalyst Monitor Diagnostic Selection (user configurable)
 *****************************************************************************/
#define XeSYST_CATD_OPTION   CeSYST_CATD_DIAG_UNAVAILABLE

/******************************************************************************
 *  ABS Diagnostic Selection (user configurable)
 *****************************************************************************/
#define XeSYST_ABSD_OPTION   CeSYST_ABSD_UNAVAILABLE

/******************************************************************************
 *  CO Adjust HW Diagnostic Selection (user configurable)
 *****************************************************************************/
#define XeSYST_COAD_OPTION   CeSYST_NOT_AVAILABLE

/******************************************************************************
 *  Idle Catalyst Monitor Diagnostic Selection (user configurable)
 *****************************************************************************/
#define XeSYST_ICMD_OPTION   CeSYST_ICMD_DIAG_AVAILABLE

/******************************************************************************
 *  Transient Fuel Calibration utility (Used for Development only!)
 *****************************************************************************/
#define XeSYST_TRANS_FUEL_UTIL_TYPE  CeSYST_TRANS_FUEL_UTIL_UNAVAIL

/******************************************************************************
 *  Transient Fuel Multiplication Type
 *****************************************************************************/
#define XeSYST_FUEL_TransientFuelMultType  CeSYST_FUEL_EngineCycleOrTimeMethod

/******************************************************************************
 *  Purge Mass Flow Selection (user configurable)
 *****************************************************************************/
#define XeSYST_PURGE_FLOW_TYPE CeSYST_PURGE_FLOW_PSE_TSE

/******************************************************************************
 *  Barometric Pressure Calculation Input Selection (user configurable)
 *****************************************************************************/
#define XeSYST_BARO_OPTION CeSYST_BARO_SENSOR

/******************************************************************************
 *  Pneumatic State Estimator
 *****************************************************************************/
#define XeSYST_EPSE_VENT_VALVE_AND_RESTRICT_TANK_LINE_ORIFICE \
        CeSYST_NOT_AVAILABLE

/******************************************************************************
 *  dSPACE Hardware Availability Selection (user configurable)
 *****************************************************************************/
#define XeSYST_DSPACE_HARDWARE CeSYST_DSPACE_HW_UNAVAILABLE

/******************************************************************************
 *  Shift-Lamp Hardware Availability Selection (user configurable)
 *****************************************************************************/
#define XeSYST_SHIFT_LAMP_HARDWARE CeSYST_SHIFTLAMP_HW_UNAVAILABLE

/******************************************************************************
 *  MDS Hardware Availability Selection (user configurable)
 *****************************************************************************/
#define XeSYST_MDS_INST_HARDWARE CeSYST_MDS_HW_UNAVAILABLE

/******************************************************************************
 *  ETAS ETK8 Hardware Availability Selection (user configurable)
 *****************************************************************************/
#define XeSYST_ETAS_INST_HARDWARE CeSYST_ETAS_HW_AVAILABLE

/******************************************************************************
 *  DI Gas Hardware Availability Selection (user configurable)
 *****************************************************************************/
#define XeSYST_DIG_INJ_HARDWARE CeSYST_DIG_INJ_HW_AVAILABLE

/******************************************************************************
 *  Load Control Type Selection (user configurable)
 *****************************************************************************/
#define XeSYST_LOAD_CNTRL_TYPE CeSYST_TORQUE

/******************************************************************************
 *  Electronic Throttle Control Perf Switch Option Selection
 *****************************************************************************/
#define XeSYST_ETC_PERF_SWITCH_VIOS CeSYST_ETC_PERF_AUTO_TRANS

/******************************************************************************
 *  Watchdog checking CPU for ETC application (user configurable)
 *****************************************************************************/
#define XeSYST_ETC_WatchdogCPU_HW CeSYST_ETC_WatchdogCPU_Not_Present

/******************************************************************************
 *  Electronic Throttle Control TPS1 Slope Mode
 *****************************************************************************/
#define XeSYST_ETC_TPS1_SLOPE CeSYST_POSITIVE

/******************************************************************************
 *  Electronic Throttle Control TPS2 Slope Mode
 *****************************************************************************/
#define XeSYST_ETC_TPS2_SLOPE CeSYST_NEGATIVE

/******************************************************************************
 *  Electronic Throttle Control APS2 Slope Mode
 *****************************************************************************/
#define XeSYST_ETC_APS2_SLOPE CeSYST_POSITIVE

/******************************************************************************
 *  Electronic Throttle Control of Noise
 *****************************************************************************/
#define XeSYST_ETCS_NOISE_CONTROL CeSYST_UNAVAILABLE




/******************************************************************************
 *  Closed Loop Fuel Correction Selection (user configurable)
 *****************************************************************************/
#define XeSYST_CL_FUEL_CRTN CeSYST_BASE_FUEL

/******************************************************************************
 *  WRAF Catalyst Sweep Availability Selection (user configurable)
 *****************************************************************************/
#define XeSYST_CATALYST_SWEEP_OPTION CeSYST_NOT_AVAILABLE

/******************************************************************************
 *  Fuel low pressure Diagnostic Availability
 *****************************************************************************/
#define XeSYST_AUTONOMOUS_LP_MODULE CeSYST_AUTONOMOUS_LP_MOD_NOT_PRESENT

/******************************************************************************
 *  Fuel Pump Relay Diagnostic Availability
 *****************************************************************************/
#define XeSYST_FUEL_PUMP CeSYST_FUEL_PUMP_NOT_PRESENT

/******************************************************************************
 *  Determines whether this application will utilize the conventional
 *  spark tables (ONE) or whether it will choose between a conventional and
 *  low table (TWO) for the necessary spark inputs, based on a PCM switch
 *  set at the end of the vehicle assembly line.
 *****************************************************************************/
#define XeSYST_NumOfSparkOctaneTables CeSYST_SPRK_OCTANE_RATIO

/******************************************************************************
 *  Enable throttle airflow learning in PSE (user configurable)
 *****************************************************************************/
#define XeSYST_AIR_LEARN_OPTION CeSYST_AIR_LEARN_OPTION_AVAIL

/******************************************************************************
 *  Fuel Output Type (user configurable)
 *****************************************************************************/
#define XeSYST_FUEL_DELIVERY_SYSTEM CeSYST_DIG_FUEL_DELIVERY_SYSTEM

/******************************************************************************
 *  Fuel Delivery Mode (user configurable)
 *****************************************************************************/
#define XeSYST_FUEL_DIG_FUELING_MODE CeSYST_FUEL_DIG_HOMOGENEOUS_MODE

/******************************************************************************
 *  Fuel Pump Type (user configurable)
 *****************************************************************************/
#define XeSYST_DIG_PUMP CeSYST_HP_PISTON

/******************************************************************************
 *  DESFI Type (user configurable)
 *****************************************************************************/
#define XeSYST_DESFI_DELIVERY_SYSTEM CeSYST_DESFI_24BIT_PRIMITIVE

/******************************************************************************
 *  Low Power Counter Hardware Availability Selection (user configurable)
 *****************************************************************************/
#define XeSYST_LOW_POWER_COUNTER CeSYST_AVAILABLE

/******************************************************************************
 *  Initial Low Power Counter SOAKTIME Available Over CAN Communication
 *  Immediately  During Reset To Key On Initialization (user configurable)
 *****************************************************************************/
#define XeSYST_INIT_LPC_SOAKTIME_AVAIL_OVER_CAN_IMMED CeSYST_UNAVAILABLE

/******************************************************************************
 *  Model base coolant in used Selection (user configurable)
 *****************************************************************************/
#define XeSYST_MODEL_BASE_COOLANT CeSYST_NOT_AVAILABLE

/******************************************************************************
 *  HVAC Initial operation A/C pressure check Selection (user configurable)
 *****************************************************************************/
#define XeSYST_HVAC_INIT_PRES_CHECK CeSYST_NOT_AVAILABLE

/*****************************************************************************
 * Selection option for warmer water pump configuration
 *****************************************************************************/
#define XeSYST_HVAC_AC_HEATER_PUMP_HARDWARE CeSYST_AVAILABLE

/******************************************************************************
 *  Serial Data Availability Selection (user configurable)
 *****************************************************************************/
#define XeSYST_SERIAL_DATA_CAN    CeSYST_SERIAL_DATA_CAN_CEC
#define XeSYST_SERIAL_DATA_CLASS2 CeSYST_SERIAL_DATA_NOT_PRESENT
#define XeSYST_SERIAL_DATA_KW2K   CeSYST_SERIAL_DATA_KW2K_HYUNDAI

/******************************************************************************
 *  OBD Protocol Type
 *****************************************************************************/
#define XeSYST_OBD_CommunicationType CeSYST_OBD_OVER_KW2K

#define XeSYST_OBD_LegislatedSrvs CeSYST_OBD_OVER_CAN

#define XeSYST_OBD_OVER_GMLAN CeSYST_J300

#define XeSYST_Program_Name CeSYST_NOT_MT80

/******************************************************************************
 *  Cruise Control Configuration Types
 *****************************************************************************/
#define XeSYST_CRUISE_CONTROL CeSYST_INTEGRATED_CRUISE_CONTROL

/******************************************************************************
 *  Cruise Control Switch Type Configuration
 *****************************************************************************/
#define XeSYST_CRUZ_ANALOG_SWITCH_INPUT_TYPE CeSYST_CRUZ_VOLTAGE_ABS_2

/******************************************************************************
 *  Cruise Control Downshift Request Control Configuration
 *****************************************************************************/
#define XeSYST_CRUZ_DWNSHIFT_CONTROL CeSYST_AVAILABLE

/******************************************************************************
 *  Cruise Control Lamp Behavior (user configurable)
 *****************************************************************************/
#define XeSYST_CRUZ_LAMP_BEHAVIOR CeSYST_CRUZ_LAMP_ON_DURING_COAST

/******************************************************************************
 *  Configuration Type for Brake Switch Input
 *****************************************************************************/
#define XeSYST_BRAKE_SWITCH_1_INPUT CeSYST_DISCRETE_INPUT
#define XeSYST_BRAKE_2_SOURCE       CeSYST_BRAKE_DISCRETE

/******************************************************************************
 *  Rough Road Hardware (user configurable)
 *****************************************************************************/
#define XeSYST_CSMI_CONFIG CeSYST_CSMI_RR_SOURCE

/******************************************************************************
 *  Oil Temperature Sensor (user configurable)
 *****************************************************************************/
#define XeSYST_OIL_TEMP_SENSOR CeSYST_NOT_AVAILABLE

/******************************************************************************
 *  Oil Pressure Sensor (user configurable)
 *****************************************************************************/
#define XeSYST_OIL_PRES_SENSOR CeSYST_NOT_AVAILABLE

/******************************************************************************
 *  Cooling Fan Type (user configurable)
 *****************************************************************************/
#define XeSYST_ELCL_FAN_CONFIG CeSYST_ELCL_CAL_SELECT

/******************************************************************************
 *  Configuration Switch for High DI Fuel Algorithm
 *****************************************************************************/
#define XeSYST_HIGH_DI_COMPENSATION CeSYST_AVAILABLE

/*****************************************************************************
 * Selection options for XeSYST_HIGH_DI_DETECTION_ENHANCED
 *****************************************************************************/
#define XeSYST_HIGH_DI_DETECTION_ENHANCED   CeSYST_AVAILABLE

/******************************************************************************
 *  Configuration Switch for VGIS Motor Timer Controlled
 *****************************************************************************/
#define XeSYST_VGIS_MOTOR_TIMER_CNTRLD CeSYST_NOT_AVAILABLE

/******************************************************************************
 *  Configuration Switch for 7.8125ms Task Execution Priority
 *****************************************************************************/
#define XeSYST_7p8125_TASK_EXEC_PRIORITY CeSYST_INTERRUPT

/*****************************************************************************
*  Configuration Switch for PowerTrain Torque Estimate
*****************************************************************************/
#define XeSYST_POWERTRAIN_TORQ_EST CeSYST_POWERTRAIN_TORQ_EST_DISABLE

/****************************************************************************
* Confiiguration Switch for Low Range Availability
****************************************************************************/
#define XeSYST_LOW_RANGE    CeSYST_NOT_AVAILABLE

/****************************************************************************
* Configuration Switch for TQI Torque Type
****************************************************************************/
#define XeCANH_TQI_TORQUE_TYPE    CeCANH_TQI_TORQUE_DESIRED

/****************************************************************************
* Configuration Switch for IDLE RPM Up Request Type
****************************************************************************/
#define XeCANH_TCU_IDLE_RPM_UP    CeSYST_AVAILABLE

/****************************************************************************
* Confiiguration Switch Seperate Calibration ID
****************************************************************************/
#define XeSYST_SEPERATE_CAL CeSYST_NOT_AVAILABLE

/****************************************************************************
* Configuration Switch CVN CRC Type
****************************************************************************/
#define XeSYST_CVN_SELECT  CeSYST_CRC32

/****************************************************************************
* Configuration Switch CVN Range
* Notes: This option doesn't apply to XeSYST_SEPERATE_CAL=CeSYST_AVAILABLE
****************************************************************************/
#define XeSYST_CVN_RANGE   CeSYST_CVN_CAL_AND_SW

/******************************************************************************
*  CO Adjust Option Selection
******************************************************************************/
#define XeSYST_CO_ADJUST_OPTION CeSYST_NOT_AVAILABLE
/* Allows dcanmall.c to build when COA is off. */
#define CyCOAjustFactorID                 0x41

/******************************************************************************
*  Flight Data Recorder Option Selection
******************************************************************************/
#define XeSYST_FLIGHT_RECORDER_OPTION CeSYST_UNAVAILABLE

/******************************************************************************
*  TFT Rationality Diagnostics Option Selection
******************************************************************************/
#define XeSYST_TFT_RATIONALITY_DIAG CeSYST_NOT_AVAILABLE

/******************************************************************************
*  Vref Diagnostics Option Selection
******************************************************************************/
#define XeSYST_COND_MAX_NUM_OF_VREF CeSYST_COND_MAX_NUM_OF_VREF_TWO

/******************************************************************************
 *  Added to compile out KW functionality not supported for the Hyundai program
 *****************************************************************************/
#define XeSYST_KW_NOT_SUPPORTED   CeSYST_TRUE

/******************************************************************************
 * OUTD DTC Reporting Type for single/double report of P-codes.
 *****************************************************************************/
#define XeSYST_OUTD_DTC_REPORTING_TYPE  CeSYST_SPECIFIC_HIGH_LOW_DTC

/******************************************************************************
 * COND Controller Diag compile time switch.
 *****************************************************************************/
#define XeSYST_CONTROLLER_DIAG  CeSYST_AVAILABLE

/*****************************************************************************
 * Selection options for XeSYST_IMPEP_MAP_TYPE
 *****************************************************************************/
#define XeSYST_IMEP_MAP_TYPE              CeSYST_IMEP_TYPE

/*****************************************************************************
 * Selection options for XeSYST_AIR_INDUCTION
 *****************************************************************************/
#define XeSYST_AIR_INDUCTION              CeSYST_TURBO
/*****************************************************************************
 * Selection options for IPSD Sensors
*****************************************************************************/
#define XeSYST_IPSD_COMBARO_SENSOR  CeSYST_IPSD_SENSOR_NOT_PRESENT
#define XeSYST_IPSD_BARO_SENSOR     CeSYST_IPSD_SENSOR_PRESENT
#define XeSYST_IPSD_AFOP_SENSOR     CeSYST_IPSD_SENSOR_NOT_PRESENT
#define XeSYST_IPSD_PRT_COP_SENSOR  CeSYST_IPSD_SENSOR_NOT_PRESENT
#define XeSYST_IPSD_TIP_SENSOR      CeSYST_IPSD_SENSOR_PRESENT
#define XeSYST_IPSD_TOP_SENSOR      CeSYST_IPSD_SENSOR_NOT_PRESENT
#define XeSYST_IPSD_POT_COP_SENSOR  CeSYST_IPSD_SENSOR_NOT_PRESENT
#define XeSYST_IPSD_MAP_SENSOR      CeSYST_IPSD_SENSOR_PRESENT

/*****************************************************************************
 * Selection options for the number of sensors present
 * PLEASE NOTE: The below constant 'CcSYST_IPSD_NUMBER_OF_SENSORS' should be
 * defined based on the IPSD sensor presence above
*****************************************************************************/
#define XeSYST_IPSD_NUMBER_OF_SENSORS CcSYST_IPSD_NUMBER_OF_SENSORS

/*****************************************************************************
 * Selection options for XeSYST_RESUE_TORQ
 *****************************************************************************/
#define XeSYST_RESUE_TORQ  USE_TORQ_TCL

/*****************************************************************************
 * Selection options for XeSYST_EPSD_REDUNDANT_CAM_READ
 *****************************************************************************/
#define XeSYST_EPSD_REDUNDANT_CAM_READ    CeSYST_EPSD_REDUNDANT_CAM_READ_NOT_AVAILABLE

/*****************************************************************************
 * Selection option for XeSYST_EVPD_EOL_AUTO_RUN
 *****************************************************************************/
#define XeSYST_EVPD_EOL_AUTO_RUN  CeSYST_UNAVAILABLE

/*****************************************************************************
 * Selection options for XeSYST_ETC_IMPEDANCE_SELECT
 *****************************************************************************/
#define XeSYST_ETC_IMPEDANCE_SELECT    CeSYST_UNAVAILABLE

/*****************************************************************************
 * Selection options for XeSYST_RADIATOR_TEMPERATURE_SENSOR
 *****************************************************************************/
#define XeSYST_RADIATOR_TEMPERATURE_SENSOR   CeSYST_RAD_SENSOR_NOT_PRESENT

/*****************************************************************************
 * Selection options for XeSYST_ACCESSORY_INPUT
 *****************************************************************************/
#define XeSYST_ACCESSORY_INPUT   CeSYST_UNAVAILABLE
#define XeSYST_ACCY_INPUT_DEFAULT_SCALING CeSYST_UNAVAILABLE

/*****************************************************************************
 * Selection option for XeSYST_DELPHI_GENERIC_IMM_HARDWARE
 *****************************************************************************/
#define XeSYST_DELPHI_GENERIC_IMM_HARDWARE  CeSYST_UNAVAILABLE

/*****************************************************************************
 * Selection option for XeSYST_HVAC_TEMPERATURE_HARDWARE
 *****************************************************************************/
#define XeSYST_HVAC_TEMPERATURE_HARDWARE   CeSYST_UNAVAILABLE

/*****************************************************************************
 * Selection option for XeSYST_ETC_MODE_TRANSITION_PEDL_LIM
 *
 * Added to compile out ETC limp-home pedal transition functionality
 *****************************************************************************/
#define XeSYST_ETC_MODE_TRANSITION_PEDL_LIM   CeSYST_UNAVAILABLE

/*****************************************************************************
 * Selection options for XeSYST_PZEV_OPEN_VALVE_INJECTION
 *****************************************************************************/
#define XeSYST_PZEV_OPEN_VALVE_INJECTION  CeSYST_UNAVAILABLE
/*****************************************************************************
* Selection option for XeSYST_NIC
****************************************************************************/
#define XeSYST_NIC_OPTION   CeSYST_AVAILABLE

/*****************************************************************************
 * Selection option for Customized Immobilizer specific TP layer
 *****************************************************************************/
#define XeSYST_GMLAN_COMMON_TP CeSYST_UNAVAILABLE

/*****************************************************************************
* Selection option for XeSYST_AC_PRESS_SWITCH_TYPE
****************************************************************************/
#define XeSYST_AC_PRESS_SWITCH_TYPE   CeSYST_HVAC_DISCRETE_AC_PRESS_SWITCH

/*****************************************************************************
 * Selection options for XeSYST_CAM/CRANK_BACKUP_ANCILLARIES
 *****************************************************************************/
#define XeSYST_CAM_BACKUP_VIOS     CeSYST_NOT_AVAILABLE
#define XeSYST_CRANK_BACKUP_VIOS   CeSYST_NOT_AVAILABLE

#define SPRAM_AVAILABLE 1
#define SPRAM_UNAVAILABLE 2
#define XeSYST_SOFT_SPRAM SPRAM_UNAVAILABLE

/*****************************************************************************
 * Scavenge option
 *****************************************************************************/
#define XeSYST_SCAVENGE_OPTION     CeSYST_UNAVAILABLE
/*****************************************************************************
 * Selection options for FLSD
 *****************************************************************************/
#define XeSYST_FLSD_OPTION     CeSYST_AVAILABLE
#define XeSYST_FLSD_SENDER_TYPE     CeSYST_SINGLE_FUEL_SENDER

/******************************************************************************
 *  DTC Failure Type Byte
 *****************************************************************************/
#define XeSYST_DTC_FAIL_TYPE CeSYST_FAIL_BYTE_AVAILABLE

/******************************************************************************
 *  Selection Option for DTC FAILURE BYTE
 *****************************************************************************/
#define CeSYST_FAIL_BYTE_NOT_AVAILABLE 0
#define CeSYST_FAIL_BYTE_AVAILABLE 1

/*****************************************************************************
 * Selection options for ITSD Sensors
 *****************************************************************************/
#define XeSYST_ITSD_AAT_SENSOR      CeSYST_ITSD_SENSOR_NOT_PRESENT
#define XeSYST_ITSD_IAAT_SENSOR     CeSYST_ITSD_SENSOR_PRESENT
#define XeSYST_ITSD_AFOT_SENSOR     CeSYST_ITSD_SENSOR_NOT_PRESENT
#define XeSYST_ITSD_PRT_COT_SENSOR  CeSYST_ITSD_SENSOR_NOT_PRESENT
#define XeSYST_ITSD_TIT_SENSOR      CeSYST_ITSD_SENSOR_PRESENT
#define XeSYST_ITSD_TOT_SENSOR      CeSYST_ITSD_SENSOR_NOT_PRESENT
#define XeSYST_ITSD_POT_COT_SENSOR  CeSYST_ITSD_SENSOR_NOT_PRESENT
#define XeSYST_ITSD_IPGT_SENSOR     CeSYST_ITSD_SENSOR_PRESENT
#define XeSYST_ITSD_COMAAT_SENSOR   CeSYST_ITSD_SENSOR_NOT_PRESENT

/******************************************************************************
* Selection options for FSYD_OUTD devices
******************************************************************************/
#define CeSYST_FSYD_DEVICE_NOT_PRESENT   0
#define CeSYST_FSYD_DEVICE_PRESENT       1

#define XeSYST_FSYD_HTD_INJ_PREHEATING_LAMP   CeSYST_FSYD_DEVICE_NOT_PRESENT
#define XeSYST_FSYD_HTD_INJ_PWR_MOD_CNTRL     CeSYST_FSYD_DEVICE_NOT_PRESENT
#define XeSYST_FSYD_HTD_INJ_PROT_RELAY        CeSYST_FSYD_DEVICE_NOT_PRESENT

/******************************************************************************
 * Ignition Voltage Reference (user configurable)
 *****************************************************************************/
#define XeSYST_IGNITION_VOLTAGE_REF           CeSYST_NOT_AVAILABLE

/******************************************************************************
* Selection options for TSCS devices
******************************************************************************/
#define XeSYST_TSCS_OPTION CeSYST_NOT_AVAILABLE

/******************************************************************************
 * Sanity Check: will cause compiler error if incompatible options are selected
 *
 * Current Rules for Sanity Check:
 *  1. Cannot have a single bank single catalyst system and have the second
 *      catalyst's oxygen sensors present.
 *  2. Cannot have a dual bank dual catalyst system and not have the
 *     pre-catalyst oxygen sensor present for the second catalyst.
 *  3. Cannot have a dual bank single catalyst system.
 *  4. Cannot have ion sense-based knock control if ion sense hardware is
 *     unavailable.
 *  5. Cannot have ion sense-based misfire diagnostic if ion sense hardware
 *     is unavailable.
 *  6. Cannot have Watchdog CPU present while mechanical throttle control is
 *     selected, since Watchdog CPU is ONLY used for ETC application.
 *  7. Cannot have Watchdog CPU present while controller type is DC1-a, since
 *     Dc1-a controller doesn't have Watchdog CPU hardware available.
 *  8. CORE package does NOT support Proto2 hardware !!!
 *     Proto2 related codes should be replaced by other hardware(e.g. DC-2)
 *     related codes in the future. Put temporary Sanity check as following.
 *  9. Cannot have wide range fuel control without a wide range O2 sensor.
 * 10. Can not have enhanced dSPACE method and conventional method.
 * 11. Cannot specify XeSYST_AIRMETER_TYPE without setting XeSYST_AIRFLOW_TYPE
 *     to CeSYST_AIRFLOW_MAF.
 * 12. Cannot have XeSYST_AIRFLOW_TYPE set to CeSYST_AIRFLOW_MAF and
 *     have XeSYST_AIRMETER_TYPE set to CeSYST_NO_AIRMETER.
 * 13  Cannot have the XeSYST_HIGH_DI_DETECTION_ENHANCED set to
 *     CeSYST_AVAILABLE unless the XeSYST_HIGH_DI_COMPENSATION is also set to
 *     CeSYST_AVAILABLE.
 *****************************************************************************/
#if (  (  (XeSYST_EXHAUST_CONFIGURATION == CeSYST_SINGLE_BANK_SINGLE_CATALYST) \
       && (  (XeSYST_EOSD_21_SENSOR == CeSYST_EOSD_SENSOR_PRESENT) \
          || (XeSYST_EOSD_22_SENSOR == CeSYST_EOSD_SENSOR_PRESENT) \
          || (XeSYST_WRAF_EOSD_21_SENSOR == CeSYST_EOSD_SENSOR_PRESENT) ) ) \
    || (  (XeSYST_EXHAUST_CONFIGURATION == CeSYST_DUAL_BANK_DUAL_CATALYST) \
       && (  (XeSYST_EOSD_21_SENSOR == CeSYST_EOSD_SENSOR_NOT_PRESENT) \
          && (XeSYST_WRAF_EOSD_21_SENSOR == CeSYST_EOSD_SENSOR_NOT_PRESENT) ) ) \
    || (  (XeSYST_WRAF_EOSD_21_SENSOR == CeSYST_EOSD_SENSOR_PRESENT) \
       && (XeSYST_EOSD_21_SENSOR == CeSYST_EOSD_SENSOR_NOT_PRESENT) ) \
    || (XeSYST_EXHAUST_CONFIGURATION == CeSYST_DUAL_BANK_SINGLE_CATALYST) \
    || (  (XeSYST_CL_FUEL_CRTN == CeSYST_WRAF) \
       && (XeSYST_WRAF_EOSD_11_SENSOR == CeSYST_EOSD_SENSOR_NOT_PRESENT) ) \
    || (  (XeSYST_MISF_DIAG_TYPE == CeSYST_MISF_DIAG_ION_SENSE_METHOD) \
       && (XeSYST_ION_SENSE_HARDWARE == CeSYST_ION_SENSE_HW_UNAVAILABLE) ) \
    || (  (XeSYST_LOAD_CNTRL_TYPE == CeSYST_MECHANICAL_THROT) \
       && (XeSYST_ETC_WatchdogCPU_HW == CeSYST_ETC_WatchdogCPU_Present) ) \
    || (  (XeSYST_AIRFLOW_TYPE == CeSYST_AIRFLOW_MAF) \
       && (XeSYST_AIRMETER_TYPE == CeSYST_NO_AIRMETER) ) \
    || (  (XeSYST_HIGH_DI_DETECTION_ENHANCED == CeSYST_AVAILABLE) \
       && (XeSYST_HIGH_DI_COMPENSATION != CeSYST_AVAILABLE) ) \
    || (  (XeSYST_ITSD_AFOT_SENSOR == CeSYST_ITSD_SENSOR_NOT_PRESENT) \
       && (XeSYST_ITSD_IAAT_SENSOR == CeSYST_ITSD_SENSOR_NOT_PRESENT) ) )
#error
#endif

#endif

/******************************************************************************
*
* Revision History for ChangAn_MT92
*
* Rev.  YYMMDD Who RSM# Changes
* ----- ------ --- ---- -------------------------------------------------------
*  1    091013 as  8224 Created file.
*  2    091013 as  8224 Set XeSYST_HIGH_DI_DETECTION_ENHANCED=CeSYST_NOT_AVAILABLE
*  3    100423 cjk 8583 Added following configurations:
*                        XeSYST_O2_SensorB1S1 = CeSYST_O2_SensorSwitching
*                        XeSYST_O2_SensorB1S2 = CeSYST_O2_SensorSwitching
*                        XeSYST_O2_SensorB2S1 = CeSYST_O2_SensorNotPresent
*                        XeSYST_O2_SensorB2S2 = CeSYST_O2_SensorNotPresent
*  4    100704  MU 8930  Set XeSYST_HIGH_DI_COMPENSATION = CeSYST_AVAILABLE
*                            XeSYST_HIGH_DI_DETECTION_ENHANCED =  CeSYST_AVAILABLE
*  5    100907  lz -BM- Add SPRAM enable config
* kok_pt2#2.1.1
*       110222 rbg 9281 Added XeSYST_SCAVENGE_OPTION CeSYST_AVAILABLE
* kok_pt2#3
*       110222  MU 9280 Added XeSYST_SCAVENGE_OPTION CeSYST_AVAILABLE
* kok_pt2#4
*       110321 me  -BM- Merges
* 6     110413 zjj -BM- Updated SCAVENGE compile switch
*
* kok_pt2#2
*       110419 grb 8861 Added XeSYST_AC_PRESS_SWITCH_TYPE = CeSYST_HVAC_DISCRETE_AC_PRESS_SWITCH
* 7
*       110506 zjj -BM- Merged 'systpcfg.h~6' with 'systpcfg.h~kok_pt2#2'.
* 8
*       110516 zjj -BM- Set XeSYST_SERIAL_DATA_CAN=CeSYST_SERIAL_DATA_CAN_CEC
*                           XeSYST_OBD_CommunicationType=CeSYST_OBD_OVER_KW2K
* kok_pt2#8
*       110525 gps 9013 VCPS: Introduction of Electric Cam Phasing.
* kok_pt2#9
*       110525 gps 9013 Merged 'systpcfg.h~kok_pt2#8' with 'systpcfg.h~8'.
* 9     110627 zjj 9530 Set XeSYST_WRAF_EOSD_11_SENSOR=CeSYST_EOSD_SENSOR_PRESENT
*                           XeSYST_O2_SensorB1S1=CeSYST_O2_SensorLinear
*                           XeSYST_CATD_OPTION=CeSYST_CATD_DIAG_AVAILABLE
*                           XeSYST_ETCS_NOISE_CONTROL=CeSYST_UNAVAILABLE
*                           XeSYST_ETC_MODE_TRANSITION_PEDL_LIM=CeSYST_UNAVAILABLE
*                           XeSYST_CRANK_BACKUP_VIOS=CeSYST_NOT_AVAILABLE
*                       Add XeSYST_OBD_OVER_GMLAN/XeSYST_ELCL_FAN_CONFIG
*                           XeSYST_DELPHI_GENERIC_IMM_HARDWARE/XeSYST_PZEV_OPEN_VALVE_INJECTION
*                           XeSYST_GMLAN_COMMON_TP
* kok_pt2#10
*       110630 gps -BM- Merged 'systpcfg.h~kok_pt2#9' with 'systpcfg.h~9'.
*
* tci_pt3#2
*       110517 nag 8805 Added ITSD related switches
* tci_pt3#10
*       110701 nag -BM- Merged 'systpcfg.h~9' with 'systpcfg.h~tci_pt3#2'.
* tci_pt3#11
*       110705 nag -BM- Fix task: fixed merge error
* kok_pt2#12
*       110714 me  -BM- merges
* kok_pt2#13
*       110728 mt  9594 Added XeSYST_ACCY_INPUT_DEFAULT_SCALING
* tci_pt3#9
*       110630 arm 8824 Added XeSYST_ELOADx_SOURCE compiler switches
* tci_pt3#9.1.1
*       110803 arm -BM- Merged systpcfg.h~tci_pt3#9 & systpcfg.h~kok_pt2#13
* ctc_pt3#12
*       110805 lzh 9530 Config Eload for MT92.
* ctc_pt3#13
*       110808 zjj -BM- Merged 'systpcfg.h~12' with 'systpcfg.h~tci_pt3#9.1.1'.
* tci_pt3#10.1.1
*       110809 arm 8877 Added FUEL Sender Compile Switches
* tci_pt3#10.1.2
*       110816 arm -BM- Merged systpcfg.h~tci_pt3#10.1.1 &
*                       systpcfg.h~13
* tci_pt3#7
*       110808 arm 9263 Added ipsd compile switches
* tci_pt3#7.1.1
*       110817 SMK -BM- Merged systpcfg.h~tci_pt3#10.1.2
*                              systpcfg.h~tci_pt3#7
* tci_pt3#7.1.2
*       110905 arm 9602 Added XeSYST_DTC_FAIL_TYPE Compile option
*
* ctc_pt3#13.1.1
*       110829 zjj 9530 Set   XeSYST_OBD_LegislatedSrvs = CeSYST_OBD_OVER_CAN
*                       Added CcSYST_BASE_LOOP_1_TIME_x6 = 23.4375
* ctc_pt3#13.1.3
*       110923 zjj 9530 Deleted CcSYST_BASE_LOOP_1_TIME_x6  = 23.4375
*                       Added   CcSYST_BASE_LOOP_1_TIME_x2_ = 8
*                               CcSYST_BASE_LOOP_1_TIME_x4_ = 16
*                               CcSYST_BASE_LOOP_1_TIME_x6_ = 24
* tci_pt3#13.1.4
*       111115 SMM 9619 Added 'XeSYST_IPSD_NUMBER_OF_SENSORS'.
* tci_pt3#13.1.4.1.2
*       120402 DSM 9945 Added XeSYST_FSYD_HTD_INJ_XXX for FSYD_OUTD.
*
* tci_pt3#13.1.4.1.1
*       120326 arm 9946 Added IHSD compile switches
*
* kok_pt2#13.1.4.1.1.1.1
*      120427 mdr 10049 modified  CeSYST_FAIL_BYTE_NOT_AVAILABLE to 
*								  CeSYST_FAIL_BYTE_AVAILABLE
*
* 13.1.4.1.3
*       120426 azh 9530 changed XeSYST_CATD_OPTION to CeSYST_CATD_DIAG_UNAVAILABLE
*                               XeSYST_ACCY_INPUT_DEFAULT_SCALING to CeSYST_UNAVAILABLE
*                               XeSYST_CAM_BACKUP_VIOS to CeSYST_NOT_AVAILABLE
*                               XeSYST_ITSD_IPGT_SENSOR to CeSYST_ITSD_SENSOR_PRESENT
*       120501 ses -BM- Merged 'systpcfg.h~13.1.4.1.3' with 'systpcfg.h~kok_pt2#13.1.4.1.1.1.1'.
*       120509 ses -BM- Merged 'systpcfg.h~kok_pt2#13.1.4.1.4' with 
*                       'systpcfg.h~tci_pt3#13.1.4.1.1'.
* kok_pt2#13.1.4.1.5.1.1
*       120524 cjk 0081 Update includes.
*       120515 ses -BM- Merged 'systpcfg.h~kok_pt2#13.1.4.1.5' with 
*                       'systpcfg.h~tci_pt3#13.1.4.1.2'.
* kok_pt2#13.1.4.1.7
*       120608 cjk -BM- Merged 'systpcfg.h~kok_pt2#13.1.4.1.6'
*                         with 'systpcfg.h~kok_pt2#13.1.4.1.5.1.1'
* kok_pt2#13.1.4.1.8
*       121026 zrx 10379 Added XeSYST_FLSD_OPTION
* 13.1.4.1.8.1.1
*		121112 hzrs RSM 9530 XeSYST_FLSD_OPTION = CeSYST_AVAILABLE
* 13.1.4.1.8.1.2
*		121207 hzrs RSM 10442 change
*					#define XeSYST_SMRC_CRANK_REQUEST_SOURCE CeSMRC_GM_PPEI
*	    		to  #define XeSYST_SMRC_CRANK_REQUEST_SOURCE CeSMRC_DISCRETE 
*							  Removed XeSYST_ELOAD1_SOURCE and XeSYST_ELOAD2_SOURCE
* 13.1.4.2
*		130726 hzrs SCR 1193 Added XeSYST_IGNITION_VOLTAGE_REF
* ctc_pt3#13.3
*       130927 qz1 11072 Added XeSYST_HVAC_AC_HEATER_PUMP_HARDWARE
* ctc_pt3#13.1.4.3 130916 zrx CTC_8256 Added XeSYST_TSCS_OPTION
* ctc_pt3#13.4
*       131015 xh -BM- Merged 'ctc_pt3#13.3'
*                         with 'ctc_pt3#13.1.4.3'
* ctc_pt3#13.5     140807 lgj 11650 define XeSYST_DGDM_AlgorithmInUse
******************************************************************************/
