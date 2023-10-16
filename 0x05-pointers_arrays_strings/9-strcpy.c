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
	int j;

	while (*(src + i) !=0)
	{
		c = c + 1;
		i++;
	}
	for (j = 0; j < c; j++)
	{
		*(dest + j) = *(src + j);
	}
	return (dest);
}
	
