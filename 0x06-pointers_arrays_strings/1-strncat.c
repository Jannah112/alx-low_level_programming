#include "main.h"
#include <stdio.h>
/**
 * _strncat - name
 * @dest: pa
 * @src: par
 * @n: pa
 * Return: return
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != 0)
	{
		i++;
	}
	int x = i + n;

	for (j = i; j < x; j++)
	{
		dest[j] = src[j - i];
	}
	return (dest);
}}	

