#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - ptint nums
 */
void print_to_98(int n)
{
	int e;

	for (e = n; e <= 98; e++)
	{
		putchar(e + '0');
		if (e < 98)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}


