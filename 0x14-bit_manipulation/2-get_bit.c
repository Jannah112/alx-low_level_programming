#include "main.h"
/**
 * get_bit - hfuifdtuu
 * @n: iuruutt
 * @index: dieieidiei
 * Return: diidieueuueeueu
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x;
	
	if (index > 64)
		return (-1);
	x = (n >> index) & 1;
	return (x);
}
