#include "main.h"
/**
 * clear_bit - djdjdjrj
 * @n: hdjdjdj
 * @index: rjri
 * Return: ejrii
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	m = 0;
	if (index > 64 || n == NULL)
		return (-1);
	m = 1 << index;
	*n = (((*n) & ~m) | (0 << index));
	return (1);
}
