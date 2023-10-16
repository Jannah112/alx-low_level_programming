#include "main.h"
#include <stdlib.h>
/**
 * rev_string - f name
 * @s: par
 */
void rev_string(char *s)
{
	int i = 0;
	int count = 0;
	int j;
	char *f;
	
	while (*(s + i) != 0)
	{
		count += 1;
		i++;
	}
	count = count - 1;
	f = (char *) malloc (count * sizeof(char));
	for (j = count; j >= 0; j--)
		*(f - count - j - 1) = *(s + j);
}

