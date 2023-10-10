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
		return (1);
		putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		putchar(n + '0');
	}
	else
	{
		return (-1);
		putchar('-');
	}
}
