#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print num
 * @a: para
 * Return: return val
 */
int print_last_digit(int a)
{
	int x;

	if ( a < 0)
	{
		a *= -1;
		x = a % 10;
		_putchar(x + '0');
		return (x);
	}
	else 
	{
		x = a % 10;
		_putchar(x + '0');
		return (x);
	}
}
