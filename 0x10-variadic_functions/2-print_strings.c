#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - hskjs
 * @separator: igg
 * @n: ieueu
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list s;

	va_start(s, n);
	for (i = 0; i < n; i++)
	{
		if (separator != 0 && i < n - 1)
		{
			printf("%s%s", va_arg(s, char *), separator);
		}
		else
			printf("%s", va_arg(s, char *));
	}
	printf("\n");
}
