#include "main.h"
#include <stdlib.h>
/**
 * array_range - f name
 * @min: jj
 * @max: hh
 * Return: rr
 */
int *array_range(int min, int max)
{
	int *p;
	int size = 0, x;

	if (min > max)
		return (NULL);
	for (x = min; x <= max; x++)
	{
		size++;
	}
	p = (int *) (malloc(sizeof(int) * size));
	if (p == NULL)
		return (NULL);
	p[0] = min;
	p[size - 1] = max;
	for (x = 1; x <= size - 2; x++)
	{
		p[x] = p[x - 1] + 1;
	}
	return (p);
}
