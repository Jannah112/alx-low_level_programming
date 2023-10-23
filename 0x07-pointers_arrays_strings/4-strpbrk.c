#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - f name
 * @s: par1
 * @accept: par2
 * Return: return
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
