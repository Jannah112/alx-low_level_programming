#include <stdio.h>
/**
 * main - entry point
 * @argc: num of arg
 * @argv: array of str
 * Return: return 0 or 1
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
