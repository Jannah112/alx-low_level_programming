#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * cdigit - f name
 * @s: gg
 * Return: ttt
 */
int cdigit(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (!(isdigit(s[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
 * main - f name
 * @argc: pp
 * @argv: ff
 * Return: rr
 */
int main(int argc, char *argv[])
{
	int i, h;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!(cdigit(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			h = atoi(argv[i]);
			sum += h;
		}
	}
	printf("%d\n", sum);
	return (0);
}
