#include " main.h"
/**
 * print_diagsums - f name
 * @size: par 
 * @a: par2
 */
void print_diagsums(int *a, int size)
{
	int i , j, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ( i == j)
			{
				s1 = s1 + a[i][j];
			}
		}
	}
	_putchar(s2 + '0');
	_putchar(',');
	_putchar(' ');
	for(i = size; i >= 0; i--)
	{
		for (j = size; j >= 0; j--)
		{
			if (i == j)
			{
				s2 = s2 + a[i][j];
			}
		}
	}
	_putchar(s2 + '0');
}
		
