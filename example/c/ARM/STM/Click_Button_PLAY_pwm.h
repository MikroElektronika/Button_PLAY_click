#include "Click_Button_PLAY_types.h"


uint16_t buttonplay_pwmInit( uint16_t freq )
{
    uint16_t dutyRratio_;

    dutyRratio_ = PWM_TIM5_Init( freq );

    return dutyRratio_;
}

void buttonplay_pwmSetDuty( uint32_t dutyRratio_ )
{
    PWM_TIM5_Set_Duty( dutyRratio_ , _PWM_NON_INVERTED, _PWM_CHANNEL1 );
}

void buttonplay_pwmStart( )
{
    PWM_TIM5_Start( _PWM_CHANNEL1, &_GPIO_MODULE_TIM5_CH1_PA0 );
}

void buttonplay_pwmStop( )
{
    PWM_TIM5_Stop( _PWM_CHANNEL1 );
}