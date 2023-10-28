#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: nn
 * @argv: arr
 * Return: return
 */
int main(int argc, char *argv[])
{
	if ((argc - 1) == 0)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (*argv[1] - '0') * (*argv[2] - '0'));
	return (0);
}
