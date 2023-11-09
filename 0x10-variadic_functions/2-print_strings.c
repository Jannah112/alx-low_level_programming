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
	char *a;

	va_list s;

	va_start(s, n);
	for (i = 0; i < n; i++)
	{
		a = va_arg(s, char *);
		if (a == 0)
			a = "(nil)";
		if (separator != 0 && i < n - 1)
		{
			printf("%s%s", a, separator);
		}
		else
			printf("%s", a);
	}
	printf("\n");
}
