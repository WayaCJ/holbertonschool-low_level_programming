#include <stdio.h>
/**
 *main- Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b;

	for (b = '0'; b <= '9'; b++)
	{
		putchar(b);
		if (b <= '8')
			putchar(',');
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
