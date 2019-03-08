/*
    __buttonplay_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __buttonplay_driver.h
@brief    Button_PLAY Driver
@mainpage Button_PLAY Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   BUTTONPLAY
@brief      Button_PLAY Click Driver
@{

| Global Library Prefix | **BUTTONPLAY** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **Dec 2018.**      |
| Developer             | **Aleksandar Paunovic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _BUTTONPLAY_H_
#define _BUTTONPLAY_H_

/** 
 * @macro T_BUTTONPLAY_P
 * @brief Driver Abstract type 
 */
#define T_BUTTONPLAY_P    const uint8_t*

/** @defgroup BUTTONPLAY_COMPILE Compilation Config */              /** @{ */

//  #define   __BUTTONPLAY_DRV_SPI__                            /**<     @macro __BUTTONPLAY_DRV_SPI__  @brief SPI driver selector */
//  #define   __BUTTONPLAY_DRV_I2C__                            /**<     @macro __BUTTONPLAY_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __BUTTONPLAY_DRV_UART__                           /**<     @macro __BUTTONPLAY_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup BUTTONPLAY_VAR Variables */                           /** @{ */



                                                                       /** @} */
/** @defgroup BUTTONPLAY_TYPES Types */                             /** @{ */



                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup BUTTONPLAY_INIT Driver Initialization */              /** @{ */

#ifdef   __BUTTONPLAY_DRV_SPI__
void buttonplay_spiDriverInit(T_BUTTONPLAY_P gpioObj, T_BUTTONPLAY_P spiObj);
#endif
#ifdef   __BUTTONPLAY_DRV_I2C__
void buttonplay_i2cDriverInit(T_BUTTONPLAY_P gpioObj, T_BUTTONPLAY_P i2cObj, uint8_t slave);
#endif
#ifdef   __BUTTONPLAY_DRV_UART__
void buttonplay_uartDriverInit(T_BUTTONPLAY_P gpioObj, T_BUTTONPLAY_P uartObj);
#endif

void buttonplay_gpioDriverInit(T_BUTTONPLAY_P gpioObj);
                                                                       /** @} */
/** @defgroup BUTTONPLAY_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Checks INT pin state
 *
 * @param[out] uint8_t (0 or 1) - state of INT pin
 *
 * This function returns 0 if INT pin is LOW
 * This function returns 1 if INT pin is HIGH
 */
uint8_t buttonplay_intGet( void );

                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_Button_PLAY_STM.c
    @example Click_Button_PLAY_TIVA.c
    @example Click_Button_PLAY_CEC.c
    @example Click_Button_PLAY_KINETIS.c
    @example Click_Button_PLAY_MSP.c
    @example Click_Button_PLAY_PIC.c
    @example Click_Button_PLAY_PIC32.c
    @example Click_Button_PLAY_DSPIC.c
    @example Click_Button_PLAY_AVR.c
    @example Click_Button_PLAY_FT90x.c
    @example Click_Button_PLAY_STM.mbas
    @example Click_Button_PLAY_TIVA.mbas
    @example Click_Button_PLAY_CEC.mbas
    @example Click_Button_PLAY_KINETIS.mbas
    @example Click_Button_PLAY_MSP.mbas
    @example Click_Button_PLAY_PIC.mbas
    @example Click_Button_PLAY_PIC32.mbas
    @example Click_Button_PLAY_DSPIC.mbas
    @example Click_Button_PLAY_AVR.mbas
    @example Click_Button_PLAY_FT90x.mbas
    @example Click_Button_PLAY_STM.mpas
    @example Click_Button_PLAY_TIVA.mpas
    @example Click_Button_PLAY_CEC.mpas
    @example Click_Button_PLAY_KINETIS.mpas
    @example Click_Button_PLAY_MSP.mpas
    @example Click_Button_PLAY_PIC.mpas
    @example Click_Button_PLAY_PIC32.mpas
    @example Click_Button_PLAY_DSPIC.mpas
    @example Click_Button_PLAY_AVR.mpas
    @example Click_Button_PLAY_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __buttonplay_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */

