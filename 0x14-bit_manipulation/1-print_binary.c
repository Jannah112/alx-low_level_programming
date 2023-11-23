#include "main.h"
/**
 * print_binary - hfuifdtuu
 * @n: iuruutt
 */
void print_binary(unsigned long int n)
{
	unsigned int x;
	int s = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (x = n; x > 0; x >>= 1)
	{
		s++;
	}
	s--;
	while (s >= 0)
	{
		if ((n >> s) & 1)
			_putchar('1');
		else
			_putchar('0');
		s--;
	}
}
