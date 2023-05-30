#include "main.h"

/**
 * Groupprintf_pointer - prints an hexadecimal number.
 * by Priscilla and Afua
 *Description: the function takes a void* argument and returns an int 
 *representing the number of characters printed.
 * @val: a pointer argument passed as a va_list
 * Return: counter.
 */
int Groupprintf_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	unsigned long int a;
	int b;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		puts(s);
		return (5);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = Groupprintf_hex_aux(a);
	return (b + 2);
}

