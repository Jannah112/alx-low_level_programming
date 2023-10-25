#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - f name
 * @s: par
 * Return: return
 */
int x = 0;

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		x++;
		_strlen_recursion(s + 1);
	}
	return (x);
}
