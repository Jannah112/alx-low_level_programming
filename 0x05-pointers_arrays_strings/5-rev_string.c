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
	count = count - 1;
	char ss [count];
	for (j = count; j >= 0; j--)
	{
		while (i <= count)
		{
			*(ss + i) = *(s +j);
			i++;
		}
	}
	*s = ss;
	_putchar('\n');
}
