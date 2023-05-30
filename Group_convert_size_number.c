#include "main.h"

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
			return ((unsigned short)num);
		default:
			return ((unsigned int)num);
	}
}

