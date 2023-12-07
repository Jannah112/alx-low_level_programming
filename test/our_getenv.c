#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
char *our_getenv(const char *name)
{
	char *path_value;
	extern char **environ;
	char **s = environ;
	while (*s)
	{
		path_value = strtok(*s, "=");
		if (strcmp(*s, name) == 0)
		{
			path_value = strtok(NULL, "=");
			return (path_value);
		}
		s++;
	}
	return (NULL);
}
void print_env(void)
{
	extern char **environ;
	char **s = environ;
	while (*s)
	{
		dprintf(STDOUT_FILENO, "%s\n", *s);
		s++;
	}
}
void main(void)
{
	char *v= our_getenv("PATH");
	printf("%s\n", v);
	print_env();
}
