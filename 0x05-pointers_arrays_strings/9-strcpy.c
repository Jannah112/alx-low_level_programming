#include "main.h"
#include <stdlib.h>
/**
 * _strcpy - f name
 * @dest: par 
 * @src: par
 * Return: return
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;
	int i;
	char *f;

	while (*(src + i) != 0)
	{
		c = c + 1;
		i++;
	}
	f = (char *) malloc(c * sizeof(char));
	for (int j = 0; j <= c; j++)
	{
		*(dest + j) = *(src + j);
	}
	return *dest;
}
	
