#include "main.h"
/**
 * _strlen - f name
 * @s: par
 */
int _strlen(char *s)
{
	int count = 1;
	int i = 0;

	while( *(s + i) != 0)
	{
		count += 1;
		i++;
	}
	return (count);
}
