#include "Click_Button_PLAY_types.h"


uint16_t buttonplay_pwmInit(uint16_t freq)
{
    uint16_t pwmPeriod;
        
    pwmPeriod = PWM0_Init(freq, _PWM_CFG_CLOCK_SRC_SMCLK | _PWM_CFG_OUTPUTMODE_SET | _PWM_CFG_CHANNEL_4, &_GPIO_MODULE_PWM_TA0_4_A15);
        
    return pwmPeriod;
}

void buttonplay_pwmSetDuty(uint16_t duty)
{
    PWM0_SetDuty( duty, _PWM_CFG_CHANNEL_4 );
}

void buttonplay_pwmStart( )
{
    PWM0_Start( );
}

void buttonplay_pwmStop( )
{
    PWM0_Stop( );
}