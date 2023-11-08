#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - name
 * @a: jk
 * @b: hdkjd
 * Return: hgf
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - hjk
 * @a: gjg
 * @b: jggg
 * Return: khgg
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - jggjj
 * @a: jgg
 * @b: kggu
 * Return: khhh
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - jdhdjje
 * @a: kgh
 * @b: kggg
 * Return: kghh
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - gfhj
 * @a: oeheii
 * @b: hdideh
 * Return: odhdj
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

