#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (Success)
 */
int main(void)
{
	char c;
	for (c = 'a' ; c <= 'z' ; c++)
		char d = (char) c;
		putchar("%c", c);
	return (0);
}
