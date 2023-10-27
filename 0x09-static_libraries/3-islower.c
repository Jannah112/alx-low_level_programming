#include "main.h"
#include <stdio.h>
/**
 * _islower - print if lower
 * @c: parameter
 *Return: return 0 or 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
