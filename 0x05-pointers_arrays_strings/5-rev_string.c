#include "mqin.h"
/**
 * rev_string - f name
 * @s: name
 */
void rev_string(char *s)
{
	int len = 0;
	int i, x;

	while (s[i] != 0)
	{
		len q+= 1;
	}
	x = len - 1;
	for (i = 0; i < (len / 2); i++)
	{
		char temp = s[i];
		s[i] = s[x - i];
		s[x - i] = s[i];
	}
}
