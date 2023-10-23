#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - f name
 * @a: par1
 * @size:par2
 */
void print_diagsums(int *a, int size)
{
	int i, j, c, b, s1 = 0, s2 = 0, x;

	x = size * size;
	c = size + 1;
	b = size - 1;
	for (i = 0; i < x; i += c)
	{
		s1 += a[i];
	}
	for (j = 0; j <= x - size ; j += b)
	{
		s2 += a[j];
	}
	printf("%d, %d\n", s1, s2);
}
