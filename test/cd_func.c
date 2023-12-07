#include "shell.h"

int cd(char **argv)
{
	int i;
	if (argv[1] == NULL)
	{
		perror("enter directory...\n");
		return(-1);
	}
	else
	{
		i = chdir(argv[1]);
		if (i != 0)
		{
			exit(EXIT_FAILURE);
		}
	}
	return (1);
}
