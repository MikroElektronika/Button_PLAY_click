#include "Click_Button_PLAY_types.h"

uint16_t buttonplay_pwmInit( uint16_t freq )
{
    uint16_t pwmPeriod;

    PWM2_Init( 5000 );

    return 0;
}

void buttonplay_pwmSetDuty( uint16_t duty )
{
    PWM2_Set_Duty( duty );
}

void buttonplay_pwmStart()
{
    PWM2_Start();
}

void buttonplay_pwmStop()
{
    PWM2_Stop();
}
