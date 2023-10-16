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
	char f[460];
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
