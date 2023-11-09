#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - f name
 * @separator: hjej
 * @n: jiei
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	int a;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		a = va_arg(arg, int);
		if (separator != 0 && i < n - 1)
			printf("%d%s", a, separator);
		else
			printf("%d", a);
	}
	printf("\n");
}
