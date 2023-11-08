#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - f name
 * @array: array
 * @size: size of array
 * @action: actio
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array != 0 && action != 0)
	{
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}
