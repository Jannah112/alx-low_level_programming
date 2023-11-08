#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - jkdkd
 * @argc: hdjjd
 * @argv: iejje
 * Return: kdjdi
 */
int main(int argc, char *argv[])
{
	int calc, num1, num2;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Erorr\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	ptr = get_op_func(argv[2]);
	if (ptr == 0)
	{
		printf("Erorr\n");
		exit(99);
	}
	calc = (*ptr)(num1, num2);
	printf("%d\n", calc);
	return (0);
}
