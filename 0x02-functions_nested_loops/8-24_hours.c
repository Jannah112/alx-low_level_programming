#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - function print sec
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2 ;a++)
	{
		for (b = 0; a <=3 ;b++)
		{
			for (c = 0; a <= 5 ;c++)
			{
				for (d = 0; a <= 9 ;d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
				}
			}
		}
	}
}

