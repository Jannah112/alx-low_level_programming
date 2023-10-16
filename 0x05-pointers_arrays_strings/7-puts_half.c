#include "main.h"
/**
 * puts_half - f name
 * @str: string
 */
void puts_half(char *str)
{
	int i = 0;
	int n, g;
	int c = 0;

	while (*(str + i) != 0)
	{
		c = c + 1;
		i++;
	}
	if (c % 2 == 0)
	{
		n = c / 2;
		for (g = n; g < c; g++)
			_putchar (*(str + g));
	}
	else
	{
		n = ((c + 1) / 2);
		for (g = n; g < c; g++)
			_putchar (*(str + g));
	}
	_putchar('\n');
}
