#include "main.h"
#include <stdio.h>
/**
 * _strchr - f name
 * @s: par1
 * @c: par2
 * Return: return
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
			return (s - 1);
		if (a == 0)
			return (NULL);
	}
}
