#include "main.h"
#include <stdio.h>
/**
 * _strcat - name
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
	for (j = i; j < (i + n); j++)
	{
		dest[j] = src[j - i];
	}
	dest[i + n] = '\0';
	return (dest);
}
