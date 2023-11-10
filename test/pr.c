#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"
/**
 * _printf - f bame
 * @format: hejje
 * Return: heie
 */
int _printf(const char *format, ...)
{
	int count = 0, i = 0;
	char *s;
	char c;
	va_list daloom;

	if (format == 0)
		return (-1);
	va_start(daloom, format);
	while (format[i] != 0)
	{
		if (format[i] != '%')
		{
			write(1,&format[i],1);
			count++;
		}
		else
		{
			format++;
			switch (format[i])
			{
				case 'c':
					c = va_arg(daloom, int);
					write(1, &c, 1);
					count++;
					break;
				case 's':
					s = va_arg(daloom, char *);
					write(1, s, strlen(s));
					count += strlen(s);
					break;
				case '%':
					write (1, "%%", 1);
					count++;
					break;
				default:
					write(1, &format[i], 1);
					break;
			}
		}
		i++;
	}
	va_end(daloom);
	return (count);
}
