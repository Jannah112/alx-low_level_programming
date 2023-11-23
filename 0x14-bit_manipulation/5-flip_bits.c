#include "main.h"
/**
 * flip_bits - diririru
 * @n: dididi
 * @m: tuttu
 * Return: fjgty
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int f = 0;

	x = (n ^ m);
	while (x)
	{
		if (x & 1)
			f++;
		x = x >> 1;
	}
	return (f);
}
