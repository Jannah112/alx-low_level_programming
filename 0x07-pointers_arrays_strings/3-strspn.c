#include "main.h"
#include <stdio.h>
/**
 * _strspn - f name
 * @s: par1
 * @accept: par2
 * Return: return
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int x = 0;
	int a = 0;
	int b = 0;

	while (s[a] != 0)
	{
		a++;
	}
	while (accept[b] != 0)
	{
		b++;
	}
	for (i = 0; i < a; i++)
	{
		if (s[i] == ',')
			break;
		for (j = 0; j < b; j++)
		{
			if (s[i] == accept[j])
				x++;
		}
	}
	return (x);
}
