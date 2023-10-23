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
	while (*s != 0)
	{
		if (*s == c)
			return (s);
		if (*s == 0)
			return (NULL);
		s++;
	}
}
