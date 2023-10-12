#include "main.h"
#include <stdio.h>
/**
 * _isdigit - f name
 * @c: para
 * Return: return 0 or 1
 */
int _isdigit(int c)
{
	if ((c >= '48') && (c <= '57'))
		return (1);
	else
		return (0);
}
