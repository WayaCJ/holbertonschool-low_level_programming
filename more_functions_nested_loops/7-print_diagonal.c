#include "main.h"
/**
 *print_diagonal- it prints a line
 *@n: number of times
 *
 */
void print_diagonal(int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		if (n > 0)
		{
			_putchar('/');
			_putchar('\n');
		}
	}

}
