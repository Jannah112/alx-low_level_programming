#include "main.h"
#include <stdio.h>
/**
 * print_array - f name
 * @a: par 1
 * @n: par2
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", *(a + i));
	}
}
