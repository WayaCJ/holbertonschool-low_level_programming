#include "main.h"
/**
 * flip_bits - Returns the number of bits
 * @n: first number.
 * @m: second number.
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xr = n ^ m;
	unsigned int c = 0;

	while (xr > 0)
	{
		c += xr & 1;
		xr >>= 1;
	}

	return (c);
}
