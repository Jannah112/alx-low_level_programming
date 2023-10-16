#include "main.h"
/**
 * _puts - f name
 * @str: par
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}
}
