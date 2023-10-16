#include "main.h"
/**
 * puts2 - f name
 * @str: par
 */
void puts2(char *str)
{
	int i = 0;
	int f = 0;

	while (*(str + i) != 0)
	{
		_putchar(*(str + f));
		f = f + 2;
		i++;
	}
	_putchar('\n');
}
