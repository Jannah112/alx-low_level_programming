#include "main.h"
#include <stdlib.h>
/**
 * str_concat - f name
 * @s1: hh
 * @s2: cc
 * Return: jj
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0, a = 0, b = 0;
	char *s;

	if (s1 != NULL)
	{
		while (s1[a] != 0)
			a++;
	}
	if (s2 != NULL)
	{
		while (s2[b] != 0)
			b++;
	}
	s = (char *) (malloc(sizeof(char) * (a + b + 1)));
	if (s == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (x = 0; x < a; x++)
		{
			s[x] = s1[x];
		}
	}
	y = x;
	if (s2 != NULL)
	{
		for (y = x; y < a + b; y++)
		{
			s[y] = s2[y - a];
		}
	}
	s[y] = '\0';
	return (s);
}
