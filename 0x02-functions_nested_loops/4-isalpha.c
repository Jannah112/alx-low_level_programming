#include "main.h"
#include <stdio.h>
/**
 * _isalpha - function
 * @c: integer to start by
 * return: return 0 or 1
 */
int _isalpha(int c)
{
	if((c >= 97 && c <= 122) || (c >= 64 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
