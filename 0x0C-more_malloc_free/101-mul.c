#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
/**
 * _isdigit - f name
 * @s: para
 * Return: return 0 or 1
 */
int _isdigit(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		if ((s[i] >= 48) && (s[i] <= 57))
			continue;
		else
			return (1);
	}
	return (0);
}
/**
 * printe - hhh
 */
void printe(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('r');
	_putchar('\n');
	exit(98);
}
/**
 * print_number - f name
 * @n: hh
 */
void print_number(int n)
{
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
/**
 * main - hhh
 * @argc: jjj
 * @argv: hhh
 * Return: jj
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
		printe();
	if (_isdigit(argv[1]) == 1 || _isdigit(argv[2]) == 1)
		printe();
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	mul = num1 * num2;
	print_number(mul);
	_putchar('\n');
	return (0);
}
