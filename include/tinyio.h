/*
 * Copyleft INSA Toulouse .
 * Written by S. DI MERCURIO
 *
 */

#ifndef __TINYIO_H__
#define __TINYIO_H__

#include "stdio.h"

/* 
 * Files definition for various peripherals
 */

/* Definition for USART */
extern FILE *_usart1;
extern FILE *_usart2;
extern FILE *_usart3;
extern FILE *_usart4;
extern FILE *_usart5;

/* Definition for CAN */
extern FILE *_can1;
extern FILE *_can2;
extern FILE *_can3;

/* Definition for SPI */
extern FILE *_spi1;
extern FILE *_spi2;
extern FILE *_spi3;

/* Definition for I2C */
extern FILE *_i2c1;
extern FILE *_i2c2;
extern FILE *_i2c3;

/* Definition for LCD */
extern FILE *_lcd;

/* Definition for USB */
extern FILE *_usb;

/* Definition for USER */
extern FILE *_user1;
extern FILE *_user2;
extern FILE *_user3;

#endif /* __TINYIO_H__ */
