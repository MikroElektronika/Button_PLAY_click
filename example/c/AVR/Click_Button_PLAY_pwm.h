#include "Click_Button_PLAY_types.h"


uint16_t buttonplay_pwmInit( uint16_t duty )
{
    
    PWM16bit_Init( _PWM16_PHASE_CORRECT_MODE_8BIT, _PWM16_PRESCALER_16bit_8, _PWM16_NON_INVERTED, duty, 1 );
    
    return 0;
}

void buttonplay_pwmSetDuty( uint16_t duty )
{
    PWM16bit_Init( _PWM16_PHASE_CORRECT_MODE_8BIT, _PWM16_PRESCALER_16bit_8, _PWM16_NON_INVERTED, duty, 1 );
}

void buttonplay_pwmStart( )
{
    PWM16bit_Start(1);
}

void buttonplay_pwmStop( )
{
    PWM16bit_Stop(1);
}