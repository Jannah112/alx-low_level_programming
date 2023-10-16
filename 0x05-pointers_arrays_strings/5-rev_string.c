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
	char f[ ];
	int y = 0;

	while (*(s + i) != 0)
	{
		count += 1;
		i++;
	}
	count = count - 1;
	while (y <= count)
	{
		for (j = count; j >= 0; j--)
		{
			*(f + i) = *(s + j);
		}
		y++;
	}
	s = f;
	_putchar('\n');
}
