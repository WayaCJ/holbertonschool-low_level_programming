#include "main.h"
/**
 *_isupper- checks for uppercase
 *@c: character given
 * Return: 1 if is uppercase or 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
