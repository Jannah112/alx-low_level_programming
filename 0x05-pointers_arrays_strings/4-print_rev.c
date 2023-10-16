#include "main.h"
/**
 * print_rev - f name
 * @s: par
 */
void print_rev(char *s)
{
	int i = 0;
	int count = 0;
	int j;

	while (*(s + i) != 0)
	{
		count += 1;
		i++;
	}
	for (j = count; j >= 0; j--)
		_putchar(*(s + j));
}
