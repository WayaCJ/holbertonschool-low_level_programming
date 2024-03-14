#include "function_pointers.h"

/**
 *int_index- searches
 *@array: array
 *@size: numbers of arrays
 *@cmp: pointer
 *Return: a or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (a < size)
			{
				if (cmp(array[a]))
				{
					return (a);
				}
				a++;
			}
		}
	}
	return (-1);
}
