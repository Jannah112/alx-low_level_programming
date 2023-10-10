#include "main.h"
#include <stdio.h>
/**
 * print_sign - print number
 * @n: integer to start by
 * Return: return 0 or 1 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	putchar('\n');
}
