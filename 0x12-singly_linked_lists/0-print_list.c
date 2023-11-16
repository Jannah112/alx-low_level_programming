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
	list_t *t;
	
	t = h;
	if (t == NULL)
		return (0);
	while (t != NULL)
	{
		if (t->str == NULL)
		{
			t->str = "(nil)";
			t->len = 0;
		}
		count++;
		printf("[%d] %s\n", t->len, t->str);
		t = t->next;
	}
	return (count);
}
