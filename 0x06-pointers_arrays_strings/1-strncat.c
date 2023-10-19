#include "main.h"
#include <stdio.h>
/**
 * _strncat - function name
 * @dest: pa
 * @src: par
 * @n: pa
 * Return: return
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j, x;

	while (dest[i] != 0)
	{
		i++;
	}
	x = i + n;
	for (j = i; j < x; j++)
	{
		dest[j] = src[j - i];
	}
	return (dest);
}

