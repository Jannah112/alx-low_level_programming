#include "main.h"
#include <stdio.h>
/**
 * times_table - print tables
 */
void times_table(void)
{
	int i, j, k;
	for (i = 0; i <=9; i++)
	{
		for (j = 0;j <=9; j++)
		{
			k = i * j;
			putchar(k + '0');
			if (j<9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}	
