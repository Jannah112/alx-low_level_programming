#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - ptint nums
 */
void print_to_98(int n)
{
	int e;

	if (n >= 98)
	{
		for (e = n; e >= 98; e--)
		{
			putchar(e + '0');
			while(e != 98)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	if (n < 98)
	{
		for (e = n; n <= 98 ; e++)
		{
			putchar(e + '0');
			while(e != 98)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
}

			


