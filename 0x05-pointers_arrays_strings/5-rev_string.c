#include "main.h"
/**
 * rev_string - f name
 * @s: par
 */
void rev_string(char *s)
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
	for (j = count; j >= 0; j--)
		_putchar(*(s + j));
	_putchar('\n');
}
