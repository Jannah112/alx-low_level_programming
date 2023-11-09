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

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		if (separator != 0 && n < n - 1)
			printf("%d%s", va_arg(arg, int), separator);
		else
			printf("%d", va_arg(arg, int));
	}
	printf("\n");
}
