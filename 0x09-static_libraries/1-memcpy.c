#include "main.h"
/**
 * _memcpy - f name
 * @dest: par1
 * @src: par2
 * @n: par3
 * Return: return
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
