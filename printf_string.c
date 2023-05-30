#include "main.h"
/**
 * printf_string - print a string.
 * by Priscilla and Afua
 * @val: argumen t.
 * Return: the length of the string.
 */

int printf_string(va_list val)
{
	char *s;
	int b, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (b = 0; b < len; b++)
			_putchar(s[b]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (b = 0; b < len; b++)
			_putchar(s[b]);
		return (len);
	}
}
