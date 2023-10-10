#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print 10 times
 */
void print_alphabet_x10(void)
{
	int w;
	char y;

	for (w = 0; w <= 10; w++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			putchar(y);
		}
		putchar('\n');
	}
}
