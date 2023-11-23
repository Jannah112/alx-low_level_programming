#include "main.h"
/**
 * binary_to_uint - dkdhdhdj
 * @b: ejrjriru
 * Return: didhdu
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int i = 0, s = 0, p = 1;

	if (b == NULL)
		return (0);
	s = strlen(b);
	for (i = s - 1; i >= 0; i--)
	{
		if (isdigit(b[i]))
		{
			x += (b[i] - '0') * p;
			p *= 2;
		}
		else
			return (0);
	}
	return (x);
}
