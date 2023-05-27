#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - struct for format
 * @type: type of format
 * @func: function to print
 */

typedef struct format
{
	char type;
	int (*func)(va_list);
} format_t;

int _putchar(char c);
int _printf(const char *format, ...);
int printf_hex_aux(unsigned long int num);
int printf_HEX_aux(unsigned int num);
int printf_dec(va_list args);
int printf_int(va_list args);


#endif
