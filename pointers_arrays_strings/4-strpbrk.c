#include"main.h"
/**
 *_strpbrk- searches a string for bytes
 *@s: string
 *@accept: bytes
 *Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (s* == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
