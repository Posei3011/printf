#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

#define S_LONG 2
#define S_SHORT 1


/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int Groupprintf_pointer(va_list val);
int Groupprintf_hex_aux(unsigned long int num);
int Groupprintf_HEX_aux(unsigned int num);
int Groupprintf_exclusive_string(va_list val);
int Groupprintf_HEX(va_list val);
int Groupprintf_hex(va_list val);
int Groupprintf_oct(va_list val);
int Groupprintf_unsigned(va_list args);
int Groupprintf_bin(va_list val);
int Groupprintf_srev(va_list args);
int Groupprintf_rot13(va_list args);
int Groupprintf_int(va_list args);
int printf_dec(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int Groupprintf_37(void);
int printf_char(va_list val);
int printf_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int get_flags(const char *fmt, int *i);

#endif

