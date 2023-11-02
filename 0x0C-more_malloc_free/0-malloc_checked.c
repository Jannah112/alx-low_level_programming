#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - f name
 * @b: bl
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
