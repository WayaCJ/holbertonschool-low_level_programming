#include "main.h"
/**
 * clear_bit - Sets value.
 * @n: A pointer.
 * @index: The index.
 *
 * Return: if it worked or an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int msk;

	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	msk = 1UL << index;
	msk = ~msk;
	*n &= msk;
	return (1);
}

