#include "main.h"
/**
 *_puts- prints string
 *@str: string
 */
void _puts(char *str)
{
	do
	{
		_putchar(*str);
	} while (*str++);
	_putchar('\n');
}
