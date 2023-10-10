#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10- print alphabet in lower case
 */
void print_alphabet(void)
{
	char y;
	int w;
	for (w = 0; w <= 10; w++)
	{	
		for (y = 'a'; y <= 'z'; y++)
			{	
				putchar(y);
			}
	}
	putchar('\n');
}
