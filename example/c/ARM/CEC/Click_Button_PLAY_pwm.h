#include "Click_Button_PLAY_types.h"


uint16_t buttonplay_pwmInit( uint16_t freq )
{
    uint16_t pwmPeriod;
        
    pwmPeriod = PWM0_Init( freq );
        
    return pwmPeriod;
}

void buttonplay_pwmSetDuty( uint16_t duty )
{
    PWM0_Set_Duty( duty, _PWM_NON_INVERTED );
}

void buttonplay_pwmStart( )
{
    PWM0_Start( );
}

void buttonplay_pwmStop( )
{
    PWM0_Stop( );
}