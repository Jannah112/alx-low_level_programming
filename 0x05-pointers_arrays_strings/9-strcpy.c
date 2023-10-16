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
	int j;
	for (j = 0; (src[j] = '\0'); j++)
	{
		dest [j] = src [j];
	}
	return (dest);
}
	
