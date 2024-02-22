#include "main.h"
/**
 *print_most_numbers- print
 *
 */
void print_most_numbers(void)
{
	char n;

	for (n = 48; n <= 57; n++)
	{
		if (n == 50 || n == 52)
		{
			continue;
		}
			_putchar(n);
	}
		_putchar('\n');
}
