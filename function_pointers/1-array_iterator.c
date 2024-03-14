#include "function_pointers.h"

/**
 *array_iterator- funct
 *@array: array
 *@size: the size
 *@action: pointer
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (a < size)
		{
			action(array[a]);
			a++;
		}
	}
}
