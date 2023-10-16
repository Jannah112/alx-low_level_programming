#include "main.h"
/**
 * print_rev - f name
 * @s: par
 */
void print_rev(char *s)
{
	int i = 0;
	int count = 0;
	int i;

	while (*(s + i) != 0)
		count += 1;
	for (i = count; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
