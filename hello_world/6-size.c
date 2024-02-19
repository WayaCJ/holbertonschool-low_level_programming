#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	double d;
	char c;
	float f;
	long int; ld
	long long int; lld


	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(ld));
	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(lld));
	printf("Size of of a float: %lu.\n", (unsigned long)sizeof(f));

	return (0);

}
