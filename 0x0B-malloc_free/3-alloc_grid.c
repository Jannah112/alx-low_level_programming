#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - f name
 * @width: g
 * @height: hh
 * Return: gg
 */
int **alloc_grid(int width, int height)
{
	int x, y, i, a;
	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = (int **) (malloc(sizeof(int *) * height));
	if (s == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		s[x] = (int *) (malloc(sizeof(int) * width));
		if (s[x] == NULL)
		{
			free(s);
			for (i = 0; i <= x; i++)
			{
				free(s[i]);
			}
			return (NULL);
		}
	}
	for (y = 0; y < height; y++)
	{
		for (a = 0; a < width; a++)
		{
			s[y][a] = 0;
		}
	}
	return (s);
}
