#include "main.h"
/**
 * get_endianness - djdjjdhe
 * Return: hdhdh
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c;

	c = (char *) &x;
	if (*c)
		return (1);
	return (0);
}
