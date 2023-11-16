#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - print elemenys of list
 * @h: pointer to head
 * Return: return number of element
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	const list_t *t = h;

	if (t == NULL)
		return (0);
	while (t != NULL)
	{
		if (t->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", t->len, t->str);
		count++;
		t = t->next;
	}
	return (count);
}
