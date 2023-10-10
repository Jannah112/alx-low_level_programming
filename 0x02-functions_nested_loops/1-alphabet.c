#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * print_alphabet - print alphabet in lower casr
 * Return: always 0 (Success)
 */
void print_alphabet(void)
{
	/**
	 * this function return alphabet
	 */
       	char y;

	for (y = 'a'; y <= 'z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
}
