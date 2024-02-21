#include "main.h"
/**
 *jack_bauer- print every minute of Jack Bauer's day
 *
 */
void jack_bauer(void)
{
	int t, i, m, e;

	for (t = 0; m <= 2; t++)
	{
		for (i = 0; i <= 9; i++)
		{
			if ((t <= 1 && i <= 9) || (i <= 2 && i <= 3))
			{
				for (m = 0; m <= 5; m++)
				{
					for (e = 0; e <= 9; e++)
						_putchar(t);
						_putchar(i);
						_putchar(58);
						_putchar(m);
						_putchar(e);
						_putchar('\n');
				}
			}
		}
	}
}
