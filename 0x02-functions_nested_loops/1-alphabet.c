#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (Success)
 */
void print_alphabet(void)
{
	char y;

	for ( y = 'a'; y <= 'z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return;
}

int main(void)
{
	print_alphabet();
	return (0);
}
