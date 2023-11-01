#include <stdio.h>
#include <stdlib.h>
/**
 * main - f name
 * @argc: hh
 * @argv: hh
 * Return: hh
 */
int main(int argc, char *argv[])
{
	int x, i,j, a = 1, b = 2, w;
	int fc[] = {1,2,5,10,25};
	int **q;

	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x <= 0)
	{
		printf("0\n");
		return (0);
	}
	q = (int **) (malloc(sizeof (int *) * 5));
	for (i = 0; i < 5; i++)
	{
		q[i] = (int *) (malloc(sizeof(int) * (x + 1)));
	}
	for (i = 0; i < 5; i++)
	{
		q[i][0] = fc[i];
	}
	for (i = 0; i < 5; i++)
	{
		q[i][1] = 0;
	}
	for (i = 2; i <= x + 1; i++)
	{
		q[0][i] = i - 1;
	}
	for (a = 1; a < 5; a++)
	{
		for (b = 2; b <= x + 1; b++)
		{
			if (x > *q[a])
			{
				if (q[0][b] < *q[i])
					q[a][b] = q[a - 1][b];
				w = 0;
				else
				{
					q[a][b] = w + 1;
					w++;
				}
				w = 0;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= x + 1; j++)
		{
			printf("%d", q[i][j]);

		}
		printf("\n");
	}
	return (0);
}
