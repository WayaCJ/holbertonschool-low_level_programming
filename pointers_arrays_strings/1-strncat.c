#include "main.h"
/**
 *_strncat- cat two strings
 *@dest: destination
 *@src: src
 *@n:  bytes
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b = 0;

	while (dest[b])
	{
		b++;
	}
	for (a = 0; src[a] && a < n; a++)
	{
		dest[b] = src[a];
		b++;
	}
	dest[b] = '\0';
	return (dest);
}
