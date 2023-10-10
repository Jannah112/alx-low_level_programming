#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print num
 * @a: para
 * Return: return val
 */
int print_last_digit(int a)
{
	int x = a % 10;

	if (x < 0)
		x *= -1;
	_putchar(x + '0');
	return (x);
}
