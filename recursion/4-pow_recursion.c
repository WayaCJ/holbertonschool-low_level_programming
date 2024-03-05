#include "main.h"
/**
 *_pow_recursion- power
 *@x: first int
 *@y: second int
 *Return: -1 if y is lower
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
