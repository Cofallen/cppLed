#include "main.h"
#include "tim.h"
#include "can.h"

#include "TIM_DEV.h"
#include "CAN_DEV.h"
#include "MOTOR.h"
#include "DEFINE.h"

// 一些全局变量
TYPEDEF_MOTOR MOTOR_V_CHASSIS[4] = {0}; // 底盘数据
TYPEDEF_MOTOR MOTOR_V_GIMBAL[2] = {0};  // 云台数据
TYPEDEF_MOTOR MOTOR_V_ATTACK[3] = {0};  // 拨弹数据

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
    if (htim->Instance == TIM2) // 底盘 1ms
    {     
		// CAN_F_Send(&hcan1, 0x200, 500, 500, 500, 500);
    }
    if (htim->Instance == TIM4) // 云台 1ms
    {      
        // CAN_F_Send(&hcan2, 0x1FF, 0,
        //           MOTOR_V_GIMBAL[MOTOR_D_GIMBAL_YAW].DATA.CAN_SEND,
        //           0,
        //           0);
        CAN_F_Send(&hcan2, 0x200, 6000, 0, 0, 0);
    }
}