#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", Groupprintf_37},
		{"%i", Groupprintf_int}, {"%d", printf_dec}, {"%r", Groupprintf_srev},
		{"%R", Groupprintf_rot13}, {"%b", Groupprintf_bin},
		{"%u", Groupprintf_unsigned}, {"%o", Groupprintf_oct},
		{"%x", Groupprintf_hex}, {"%X", Groupprintf_HEX},
		{"%S", Groupprintf_exclusive_string}, {"%p", Groupprintf_pointer}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}

	va_end(args);
	return (len);
}
