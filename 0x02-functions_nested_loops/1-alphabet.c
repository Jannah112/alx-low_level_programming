#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (Success)
 */
void print_alphabet(void)
{
	char x;

	for ( x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return;
}
int main(void)
{
	print_alphabet();
	return (0);
}
