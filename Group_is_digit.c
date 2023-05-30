#include "main.h"
/**
 * is_digit - Verifies if a char is a digit
 * @c: Char to be evaluated
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * convert_size_number - Casts a number to the specified size
 * @num: Number to be casted.
 * @size: Number indicating the type to be casted.
 *
 * Return: Casted value of num
 */
long int convert_size_number(long int num, int size)
{
	switch (size)
	{
		case S_LONG:
			return (num);
		case S_SHORT:
			return ((short)num);
		default:
			return ((int)num);
	}
}
