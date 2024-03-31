#include "main.h"
/**
 * set_bit - Sets the value.
 * @n: A pointer.
 * @index: The index.
 * Return:  it worked or  an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int msk;

	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	msk = 1UL << index;
	*n |= msk;
	return (1);
}
