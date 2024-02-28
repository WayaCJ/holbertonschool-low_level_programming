#include "main.h"
/**
 *_strncpy- copy two strings
 *@dest: destination
 *@src: src
 *@n:  bytes
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a, b = 0;

	for (a = 0; src[a] && a < n; a++)
	{
		dest[b] = src[a];
		b++;
	}
	return (dest);
}
