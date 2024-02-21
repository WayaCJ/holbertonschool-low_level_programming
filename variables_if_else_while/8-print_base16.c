#include <stdio.h>
/**
 *main- Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int beta;
	int h;

	for (beta = '0'; beta <= '9'; beta--)
	{
		putchar(beta);
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
	putchar('\n');

	return (0);
}
