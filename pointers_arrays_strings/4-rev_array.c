#include "main.h"
/**
 *reverse_array- it reverse an array
 *@a: array
 *@n: numbers of elements
 *
 */
void reverse_array(int *a, int n)
{
	int b, in;

	for (in = n - 1; in >= n / 2; in--)
	{
		b = a[n - 1 - in];
		a[n - 1 - in] = a[in];
		a[in] = b;
	}
}
