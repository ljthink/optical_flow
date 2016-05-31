#ifndef __DEF_H
#define __DEF_H

#include <stdint.h>
/*******************************************************************************
 * COMMON DEFINITIONS
 ******************************************************************************/

#define USE_MT9V034
//#define TEST_MPU6050
//#define USE_MT9D111

#define MPU_ADDR 0XD0
//#define MPU_ADDR 0X68
#define MPU_DATA 0X3B

#ifdef USE_MT9V034
	#define FULL_IMAGE_ROW_SIZE (188)
	#define FULL_IMAGE_COLUMN_SIZE (120)
	#define BYTES_PER_PIXEL (1)
#else//MT9D111
	#define FULL_IMAGE_ROW_SIZE (160)
	#define FULL_IMAGE_COLUMN_SIZE (120)
	#define BYTES_PER_PIXEL (2)
#endif
#define IMAGE_WIDTH FULL_IMAGE_ROW_SIZE
#define IMAGE_HEIGHT FULL_IMAGE_COLUMN_SIZE
#define FULL_IMAGE_SIZE (BYTES_PER_PIXEL*IMAGE_WIDTH*IMAGE_HEIGHT)
#define DCMI_DR_ADDRESS       0x50050028

#define NULL    0
typedef struct
{
	uint32_t PARAM_USART3_BAUD;
	uint32_t PARAM_FOCAL_LENGTH_MM;
	uint32_t PARAM_IMAGE_WIDTH;
	uint32_t PARAM_IMAGE_HEIGHT;
	uint32_t PARAM_MAX_FLOW_PIXEL;
	uint32_t PARAM_IMAGE_LOW_LIGHT;
	uint32_t PARAM_IMAGE_ROW_NOISE_CORR;
	uint32_t PARAM_IMAGE_TEST_PATTERN;
	uint32_t PARAM_GYRO_SENSITIVITY_DPS;
	uint32_t PARAM_GYRO_COMPENSATION_THRESHOLD;
	uint32_t PARAM_SONAR_FILTERED;
	float PARAM_SONAR_KALMAN_L1;
	float PARAM_SONAR_KALMAN_L2;

	uint32_t PARAM_VIDEO_ONLY;
	uint32_t PARAM_VIDEO_RATE;

	uint32_t PARAM_BOTTOM_FLOW_FEATURE_THRESHOLD;
	uint32_t PARAM_BOTTOM_FLOW_VALUE_THRESHOLD;
	uint32_t PARAM_BOTTOM_FLOW_HIST_FILTER;
	uint32_t PARAM_BOTTOM_FLOW_GYRO_COMPENSATION;
	uint32_t PARAM_BOTTOM_FLOW_LP_FILTERED;
	uint32_t PARAM_BOTTOM_FLOW_WEIGHT_NEW;
	uint32_t PARAM_BOTTOM_FLOW_SERIAL_THROTTLE_FACTOR;

	uint32_t PARAM_SENSOR_POSITION;
	uint32_t DEBUG_VARIABLE;
}STRU_PARAM;

typedef void (*VOID_PFUNC_VOID)(void); 

#endif /* __DEF_H */
