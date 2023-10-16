#include "main.h"
/**
 * swap_int - f name
 * @a: par1
 * @b: par2
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
