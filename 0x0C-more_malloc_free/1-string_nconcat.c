#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - f name
 * @s1: hh
 * @s2: cc
 * @n: hh
 * Return: jj
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, y = 0, a = 0, b = 0;
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
	if (n >= b)
		n = b;
	s = (char *) (malloc(sizeof(char) * (a + n + 1)));
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
		for (y = x; y < a + n; y++)
		{
			s[y] = s2[y - a];
		}
	}
	s[y] = '\0';
	return (s);
}
