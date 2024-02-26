#include "main.h"
/**
 *_strlen- string lenght
 *@s: string
 * Return: s
 */
int _strlen(char *s)
{	
	int l;

	while(*s++)
	{
		l++;
	}
	return (l);
}
