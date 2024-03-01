#include "main.h"
/**
 *_memcpy- copy memory
 *@dest: input
 *@src: s
 *@n: n
 *Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
