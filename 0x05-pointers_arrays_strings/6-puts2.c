#include "main.h"
/**
 * puts2 - f name
 * @str: par
 */
void puts2(char *str)
{
	int i;

	while (*(str + i) != 0)
	{
		_putchar(*(str + 1) != 0);
		i += 2;
	}
	_putchar('\n');
}
