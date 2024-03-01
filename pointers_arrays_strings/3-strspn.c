#include "main.h"
/**
 *_strspn- gets the lenght
 *@s: string
 *@accept: bytes
 *Return: 0
 */
unsigned int _strspn(char *s, char *accept);
{
	unsigned int a = 0;
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				a++;
					break;
			}
			else if (accept[b + 1] == '\0\)
			{
					return (n);
			}
			s++;
		}
		return (a);
	}
}
