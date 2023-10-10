#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - function print sec
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 48; a <= 50 ; a++)
	{
		for (b = 48; b <=51 ; b++)
		{
			for (c = 48; c <= 53 ; c++)
			{
				for (d = 48; d <= 57 ; d++)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
				}
			}
		}
	}
}

