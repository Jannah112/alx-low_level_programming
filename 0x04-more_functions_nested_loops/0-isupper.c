#include "main.h"
#include <stdio.h>
/**
 * _isupper - f name
 * @c: para
 * Return: return 0or 1
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
