#include "main.h"
/**
 * get_bit - hfuifdtuu
 * @n: iuruutt
 * @index: dieieidiei
 * Return: diidieueuueeueu
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;
	unsigned int i = 0;
	char *a;
	int s = 0;

	if (n == 0)
	{
		if (index == 0)
			return (0);
		else
			return (-1);
	}
	for (x = n; x > 0; x >>= 1)
	{
		s++;
	}
	a = (char *) malloc(sizeof(char) * s);
	if (a == NULL)
		return (-1);
	a[s] = '\0';
	s--;
	while (s >= 0)
	{
		if ((n >> s) & 1)
			a[s] = '1';
		else
			a[s] = '0';
		s--;
	}
	if (index > strlen(a) - 1)
		return (-1);
	for (i = 0; i < strlen(a) ; i++)
	{
		if (i == index)
			break;
	}
	return (a[i] - '0');
}
