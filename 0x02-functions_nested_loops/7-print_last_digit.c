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

	x = a % 10;
	putchar(x + '0');
	putchar('\n');
	return (x);
}
