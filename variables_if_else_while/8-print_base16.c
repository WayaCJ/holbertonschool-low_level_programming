#include <stdio.h>
/**
 *main- Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b;
	char h;

	for (b = '0'; b <= '9'; b++)
	{
		putchar(b);
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
	putchar('\n');

	return (0);
}
