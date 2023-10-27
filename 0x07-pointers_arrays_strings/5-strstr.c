#include "main.h"
#include <stdio.h>
/**
 * _strstr - f name
 * @haystack: par1
 * @needle: par2
 * Return: return
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, a, b, x = 0, y;

	while (haystack[i] != 0)
	{
		i++;
	}
	while (needle[j] != 0)
	{
		j++;
	}
	y = j - 1;
	for (a = 0; a <= i - j; a++)
	{
		for (b = 0; b < j; b++)
		{
			if (haystack[a + b] == needle[b])
			{
				x++;
			}
		}
		if (x == y)
		{
			return (haystack + a);
		}
	}
	return (NULL);
}
