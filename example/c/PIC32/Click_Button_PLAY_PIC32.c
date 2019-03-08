/*
Example for Button_PLAY Click

    Date          : Dec 2018.
    Author        : Aleksandar Paunovic

Test configuration PIC32 :
    
    MCU                : P32MX795F512L
    Dev. Board         : EasyPIC Fusion v7
    PIC32 Compiler ver : v4.0.0.0

---

Description :

The application is composed of three sections :

- System Initialization - Initializes LOG, PWM pin as OUTPUT and INT pin as input
- Application Initialization - Initializes GPIO driver, initializes pwm, calculates max duty cycle value and starts PWM output
- Application Task - Drives PWM pin output values from ZERO to MAX and back to ZERO continuously
*/

#include "Click_Button_PLAY_types.h"
#include "Click_Button_PLAY_config.h"
#include "Click_Button_PLAY_pwm.h"

uint16_t i;
uint16_t frequency_ = 32000;
uint16_t dutyRatio;

void systemInit( )
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_PWM_PIN, _GPIO_OUTPUT );

    mikrobus_logInit( _LOG_USBUART_A, 9600 );
    Delay_ms(100);

    mikrobus_logWrite( "> > > sys init done < < <", _LOG_LINE );
}

void applicationInit( )
{
    buttonplay_gpioDriverInit( (T_BUTTONPLAY_P)&_MIKROBUS1_GPIO );

    dutyRatio = buttonplay_pwmInit( frequency_ );
    dutyRatio /= 2;
    Delay_ms(500);

    buttonplay_pwmStart( );

    mikrobus_logWrite( "> > > app init done < < <", _LOG_LINE );
}

void applicationTask( )
{
    for (i = 0; i < dutyRatio; i += 1)
    {
        buttonplay_pwmSetDuty( i );
        Delay_ms(3);
    }

    for (i = dutyRatio; i > 0; i -= 1)
    {
        buttonplay_pwmSetDuty( i );
        Delay_ms(3);
    }
}

void main( )
{
    systemInit( );
    applicationInit( );

    while (1)
    {
        applicationTask( );
    }
}