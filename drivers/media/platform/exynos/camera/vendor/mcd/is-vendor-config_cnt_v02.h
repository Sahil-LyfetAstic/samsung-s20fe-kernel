#ifndef IS_VENDOR_CONFIG_HST_V03_H
#define IS_VENDOR_CONFIG_HST_V03_H

#include "is-eeprom-rear-hm1_v016.h"
#include "is-eeprom-front-3j1_v006.h"

#define VENDER_PATH

#define CAMERA_REAR_DUAL_CAL
#define CAMERA_REAR2
#define CAMERA_REAR2_AF /* related to OIS */
#define CAMERA_REAR2_TILT
#define CAMERA_REAR2_MODULEID
#define CAMERA_REAR3
#define CAMERA_REAR3_AFCAL
#define CAMERA_REAR3_TILT
//#define CAMERA_REAR_TOF
//#define CAMERA_REAR_TOF_CAL
//#define CAMERA_REAR4_TOF_MODULEID  	/* rear tof moduleid */
//#define CAMERA_REAR_TOF_TILT	/* wide - tof */
//#define CAMERA_REAR2_TOF_TILT	/* ultrawide - tof tilt */
#define CAMERA_REAR3_MODULEID
#define CAMERA_USE_TELE_VFLIP
#define CAMERA_USE_OIS_VDD_1_8V

#define CAMERA_OIS_DOM_UPDATE_VERSION 'O'
#define CAMERA_OIS_SEC_UPDATE_VERSION 'P'

#define CAMERA_IMX586_CAL_MODULE_VERSION 'B'

#define CAMERA_MODULE_DUAL_CAL_AVAILABLE_VERSION 'A'
#define IS_MAX_FW_BUFFER_SIZE (4100 * 1024)

#define CAMERA_OIS_GYRO_OFFSET_SPEC 10000

#define CAMERA_REAR2_SENSOR_SHIFT_CROP
#define FIXED_SENSOR_CROP_SHIFT_NUM	5

#define CAMERA_2ND_OIS

//#define USE_FLIP_WIDE_SENSOR

#define RTA_CODE_AREA_SIZE (0x00180000)

#define USE_CAMERA_EMBEDDED_HEADER

#define USE_CAMERA_MIPI_CLOCK_VARIATION
#if defined(USE_CAMERA_MIPI_CLOCK_VARIATION) && !defined(CONFIG_SEC_FACTORY)
#define USE_CAMERA_REAR_TOF_TX_FREQ_VARIATION
/*#define USE_CAMERA_MIPI_CLOCK_VARIATION_RUNTIME*/
#endif

#define USE_EX_MODE_OPTION
/* #define USE_CAMERA_CHECK_SENSOR_REV */

#define USE_CAMERA_HW_BIG_DATA

#ifdef USE_CAMERA_HW_BIG_DATA
/* #define CAMERA_HW_BIG_DATA_FILE_IO */
/* #define CSI_SCENARIO_COMP		(0) This value follows dtsi */
#define CSI_SCENARIO_SEN_FRONT	(1)
#define CSI_SCENARIO_TELE		(2)
#define CSI_SCENARIO_SECURE		(3)
#define CSI_SCENARIO_SEN_REAR	(0)
#endif

#define USE_AF_SLEEP_MODE

/* It should be align with DDK and RTA side */
#define USE_NEW_PER_FRAME_CONTROL

/* define supported aperture level */
//#define ROM_SUPPORT_APERTURE_F2	// Second step of aperture.

/* Tele sensor crop shift and OIS calibration will be applied instead of this feature in this project */
/* #define OIS_CENTERING_SHIFT_ENABLE */
#undef ENABLE_DYNAMIC_MEM

#if defined(CONFIG_USE_CAMERA_LDU) || defined(CONFIG_SEC_FACTORY)
#define USE_OIS_SHIFT_FOR_APERTURE
#endif

#ifdef USE_OIS_SHIFT_FOR_APERTURE
#if defined(CONFIG_SEC_FACTORY)
#define OIS_SHIFT_OFFSET_VALUE_NORMAL 0
#else
#define OIS_SHIFT_OFFSET_VALUE_NORMAL 1000
#endif
#endif

#ifdef CAMERA_REAR_TOF
#define USE_TOF_AF
#define TOF_MODULE_CHECK_ID 0xB903
#ifndef USE_CAMERA_REAR_TOF_TX_FREQ_VARIATION
#define USE_CAMERA_REAR_TOF_TX_FREQ_VARIATION_SYSFS_ENABLE
#endif
#define REAR_TOF_ROM_ID ROM_ID_REAR3
#define REAR_TOF_CHECK_MAP_VERSION '1'
#define REAR_TOF_DEFAULT_UID 0xCD35
#define REAR_TOF_CHECK_SENSOR_ID '3'  /* '3' => imx516*/
#ifdef REAR_TOF_CHECK_SENSOR_ID
#define REAR_TOF_IMX316_CRC_ADDR1_MAP002 0x11E3  /* imx316 eeprom cal map ver02 */
#define REAR_TOF_IMX316_CRC_ADDR1_MAP001 0x11E1  /* imx316 eeprom cal map ver01 */
#endif
#endif

#define USE_WIDE_MIPI_STRENGTH_490MV
#define USE_BUCK2_REGULATOR_CONTROL
//#define USE_TOF_IO_DENOISE_REAR_CAMERA_IO
//#define USE_SHARE_I2C_CLIENT_IMX516_IMX316

#define LEDS_S2MPB02_ADAPTIVE_MOVIE_CURRENT 120

#define USE_SENSOR_LONG_EXPOSURE_SHOT

#define USE_TELE_OIS_AF_COMMON_INTERFACE

#define USE_SHARED_REG_MCU_PERI_CON

#define USE_REAR2_OIS_DATA_FROM_EEPROM

#define USE_HIGH_RES_FLASH_FIRE_BEFORE_STREAM_ON

#define OIS_DUAL_CAL_DEFAULT_VALUE_WIDE 0

#define OIS_DUAL_CAL_DEFAULT_EEPROM_VALUE_TELE 0

#define TELE_OIS_TILT_ROM_ID 4

#define USE_OIS_HALL_DATA_FOR_VDIS

//#define USE_FAKE_RETENTION
#define USE_CAMFW_POLICY_ED38
#endif /* IS_VENDOR_CONFIG_HST_V03_H */
