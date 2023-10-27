#include "main.h"
#include <stdio.h>
/**
 * _abs - return abs val
 * @a: parameter
 * Return: return abs val
 */
int _abs(int a)
{
	if (a < 0)
	{
		a = a * -1;
		return (a);
	}
	else
		return (a);
}
