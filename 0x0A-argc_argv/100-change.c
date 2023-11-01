#include <stdio.h>
#include <stdlib.h>
/**
 * main - gg
 * @argc: gg
 * @argv: hhh
 * Return: hh
 */
int main(int argc, char *argv[])
{
	int c, nc = 0, i;
	int a[] = {25, 10, 5, 2, 1};

	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	if (c <= 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		if (c >= a[i] && c > 0)
		{
			nc += 1;
			c -= a[i];
		}
	}
	printf("%d\n", nc);
	return (0);
}
