#include "Click_Button_PLAY_types.h"


uint16_t buttonplay_pwmInit( uint16_t freq )
{
    uint16_t pwmPeriod;
        
    pwmPeriod = PWM_T0CCP0_Init( freq, &_GPIO_MODULE_T0CCP0_D0_AHB );
        
    return pwmPeriod;
}

void buttonplay_pwmSetDuty( uint16_t duty )
{
    PWM_T0CCP0_Set_Duty( duty, _PWM_INVERTED_DISABLE );
}

void buttonplay_pwmStart( )
{
    PWM_T0CCP0_Start( );
}

void buttonplay_pwmStop( )
{
    PWM_T0CCP0_Stop( );
}