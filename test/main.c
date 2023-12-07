#include "shell.h"

int main(int argc, char*argv[])
{
	char *input;
	while(1)
	{
		write(STDOUT_FILENO, "$ ",2);
		input = read_input();
		if (input != NULL)
			tok(input, argv[0]);
	}
	return (0);
}
