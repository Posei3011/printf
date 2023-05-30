#include "main.h"

/**
 * write_num - Write a number using a bufffer
 * @idx: Index at which the number starts on the buffer
 * @buffer: Buffer
 * @flags: Flags
 * @width: width
 * @prec: Precision specifier
 * @length: Number length
 * @padd: Pading char
 * @extra_c: Extra char
 *
 * Return: Number of printed chars.
 */
int write_num(int idx, char buffer[], int flags, int width, int prec,
		int length, char padd, char extra_c)
{
	int length = BUFF_SIZE - ind - 1;
	char padd = (flags & F_ZERO && !(flags & F_MINUS)) ? '0' : ' ';
	char extra_ch = (is_negative ? '-' : (flags & F_PLUS ? '+' :
				(flags & F_SPACE ? ' ' : 0)));

	UNUSED(size);

	return (write_num(ind, buffer, flags, width, precision, length,
			padd, extra_ch));
}
