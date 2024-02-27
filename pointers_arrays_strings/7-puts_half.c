#include "main.h"
/**
 *puts_half- print half
 *@str: string
 */
void puts_half(char *str)
{
	int h = 0;
	int a;

	while (str[h] != '\0')
	{
		h++;
	}
	if (h % 2 == 1)
	{
		a = (h - 1) / 2;
		a += 1;
	}
	else
	{a = h / 2;
	}
	for (; a < h; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
