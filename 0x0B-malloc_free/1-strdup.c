#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - f name
 * @str: gg
 * Return: gg
 */
char *_strdup(char *str)
{
	char *x;
	int len = 0;
	int i = 0;

	while (str[len] != 0)
	{
		len++;
	}
	if (str == NULL)
		return (NULL);
	x = (char *) (malloc((sizeof(char) * len) + 1));
	if (x == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
	{
		x[i] = str[i];
	}
	return (x);
}
