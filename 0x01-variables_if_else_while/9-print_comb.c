#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (Success)
 */
int main(void)
{
	int c;
	for (c = 0 ; c <= 9 ; c++)
	{
		putchar(c + '0');
		if (c < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
