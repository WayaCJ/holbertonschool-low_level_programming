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

	for (; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
