#include "Click_Button_PLAY_types.h"


uint16_t buttonplay_pwmInit( uint16_t freq )
{
    uint16_t pwmPeriod;
        
    pwmPeriod = PWM_Init( freq, 1, 1, 3 );
        
    return pwmPeriod;
}

void buttonplay_pwmSetDuty( uint16_t duty )
{
    PWM_Set_Duty( duty, 1 );
}

void buttonplay_pwmStart( )
{
    PWM_Start(1);
}

void buttonplay_pwmStop( )
{
    PWM_Stop(1);
}