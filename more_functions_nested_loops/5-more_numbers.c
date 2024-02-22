#include "main.h"
/**
 *more_numbers- print more numbers
 *
 */
void more_numbers(void)
{
	int m, o;

	for (m = 0; m <= 9; m++)
	{
		for (o = 0; o <= 14; o++)
		{
			if (o >= 10)
				{
					_putchar((o / 10) + '0');
				}
					_putchar((o % 10) + '0');
		}
					_putchar('\n');
	}
}
