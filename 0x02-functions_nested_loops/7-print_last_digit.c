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
	if (a < 0)
		a *= -1;
	_putchar(a + '0');
	return (a);
}
