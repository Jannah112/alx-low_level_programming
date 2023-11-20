#include "lists.h"
/**
 * print_listint - ggk
 * @h: pointer to head
 * Return: return
 */
size_t print_listint(const listint_t *h)
{
	unsigned int c = 0;
	const listint_t *t = h;

	while (h != NULL)
	{
		printf("%d\n", t->n);
		t = t->next;
		c++;
	}
	return (c);
}
