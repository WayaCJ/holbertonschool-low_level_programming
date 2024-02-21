#include <stdio.h>
/**
 *main- Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;
	int d;

	for (b = '0'; b <= '9'; b++)
	{
		for (d = '0'; d <= '9', d++)
		{
		if (b < d)
		{
		putchar(b);
		putchar(d);
		if (b != '8' || (b == '8' && j != '9'))
		putchar(',');
		putchar(' ');
		}
		}
	}
	putchar('\n');

	return (0);
}
