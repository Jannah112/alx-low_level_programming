#include <stdio.h>
/**
 * main - entry point
 * @argc: num of arg
 * @argv: array of str
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
