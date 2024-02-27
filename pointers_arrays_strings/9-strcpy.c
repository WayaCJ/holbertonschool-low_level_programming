#include "main.h"
/**
 *_strcpy- copy string
 *@dest: destination
 *@src: source value
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
