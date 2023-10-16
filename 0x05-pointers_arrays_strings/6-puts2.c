#include "main.h"
/**
 * puts2 - f name
 * @str: par
 */
void puts2(char *str)
{
	int i = 0;
	int c = 0;
	int g = 0;

	while (*(str + i) != 0)
	{
		c = c + 1;
		i++;
	}

	while (g < c)
	{
		_putchar(*(str + g));
		g = g + 2;
	}
	_putchar('\n');
}
