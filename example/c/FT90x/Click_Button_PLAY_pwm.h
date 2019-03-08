#include "Click_Button_PLAY_types.h"


uint16_t buttonplay_pwmInit( uint16_t freq )
{
    uint16_t pwmPeriod;
        
    pwmPeriod = PWM_Init(freq);
        
    return pwmPeriod;
}

void buttonplay_pwmSetDuty( uint16_t duty )
{
    PWM_ConfigChannel(duty,  _PWM_INIT_STATE_1, _PWM_CHANNEL_0);
}

void buttonplay_pwmStart( )
{
    PWM_EnableOutput( );
}

void buttonplay_pwmStop( )
{
    PWM_DisableOutput( );
}