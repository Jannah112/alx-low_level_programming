#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "g.h"
void print_env()
{
	char **s = environ;
	while (*s)
	{
		write(STDOUT_FILENO, *s, strlen(*s));
		write(STDOUT_FILENO, "\n", 1);
		s++;
	}
}
void main(void)
{
	print_env();
}
