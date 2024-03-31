#include "main.h"
/**
 * binary_to_uint - Converts a binary number.
 * @b: A pointer.
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b == '1')
			num = num * 2 + 1;
		else if (*b == '0')
			num *= 2;
		else
			return (0);
		b++;
	}

	return (num);
}
