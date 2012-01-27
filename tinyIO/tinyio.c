/*
 * Copyleft INSA Toulouse .
 * Written by S. DI MERCURIO
 *
 */

#include "stdio.h"

int _read_dummy (char *c, int len);
int _write_dummy (char *c, int len);

#define R_BUFFER_SIZE	50
#define W_BUFFER_SIZE	50
char r_buffer_dummy[R_BUFFER_SIZE];
char w_buffer_dummy[W_BUFFER_SIZE];

_FILE_INIT (_dummy_file, _read_dummy, _write_dummy, r_buffer_dummy, w_buffer_dummy, R_BUFFER_SIZE, W_BUFFER_SIZE);

/* Definition of standard files */
FILE	*stdin=&_dummy_file;
FILE	*stdout=&_dummy_file;
FILE	*stderr=&_dummy_file;

/* Definition of customs files */
FILE *_usart1=&_dummy_file;
FILE *_usart2=&_dummy_file;
FILE *_usart3=&_dummy_file;
FILE *_usart4=&_dummy_file;
FILE *_usart5=&_dummy_file;

FILE *_can1=&_dummy_file;
FILE *_can2=&_dummy_file;
FILE *_can3=&_dummy_file;

FILE *_spi1=&_dummy_file;
FILE *_spi2=&_dummy_file;
FILE *_spi3=&_dummy_file;

FILE *_i2c1=&_dummy_file;
FILE *_i2c2=&_dummy_file;
FILE *_i2c3=&_dummy_file;

FILE *_lcd=&_dummy_file;

FILE *_usb=&_dummy_file;

FILE *_user1=&_dummy_file;
FILE *_user2=&_dummy_file;
FILE *_user3=&_dummy_file;

uint32_t toto;
uint8_t titi;

int _read_dummy (char *c, int len)
{
	return len;
}

int _write_dummy (char *c, int len)
{
	return len;
}