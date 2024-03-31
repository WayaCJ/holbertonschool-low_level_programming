#include "main.h"
/**
 * get_bit - Returns the value.
 * @n: number.
 * @index: The index.
 * Return: The value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
