#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index- f name
 * @array: hlhg
 * @size: gdodj
 * @cmp: jjff
 * Return: fiff
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size <= 0)
		return (-1);
	if (array != 0 && cmp != 0)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}
	return (-1);
}
