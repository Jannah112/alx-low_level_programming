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
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(arg, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(arg, int));
	va_end(arg);
}
