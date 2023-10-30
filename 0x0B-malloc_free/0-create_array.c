#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - f name
 * @size: bb
 * @c: vv
 * Return: return
 */
char *create_array(unsigned int size, char c)
{
	char *x;

	if (size == 0)
	{
		return (NULL);
	}
	x = (char *) (malloc(size * sizeof(char)));
	if (x == NULL)
		return (NULL);
	x[0] = c;
		return (x);
}
