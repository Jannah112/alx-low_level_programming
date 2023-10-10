#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * int _islower - print if lower
 */
int _islower(int c)
{
	return (islower(c));
}
void test_islower(int n)
{
	int r;

	r = _islower(n);
	putchar(r + '0');
	putchar('\n');
}
