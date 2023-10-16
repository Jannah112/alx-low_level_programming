#include "main.h"
/**
 * puts_half - f name
 * @str: string
 */
void puts_half (char *str)
{
	int i = 0;
	int n, c;

	while (*(str + i) != 0)
	{
		c += 1;
		i++;
	}
	c = c - 1;
	if (c % 2 == 0)
	{
		n = c / 2;
		for (i = n; i != '\0'; i++)
			_putchar(*(str + i));
	}
	else
	{
		n = ((c - 1) / 2);
		for (i = n; i != '\0'; i++)
			_putchar(*(str + i));
	}
	_putchar('\n');
}
