#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - print alphabet in lower case
 */
void print_alphabet(void)
{
	char y;

	for (y = 'a'; y <= 'z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
}
