#include "lists.h"
/**
 * list_len - print number of node in list
 * @h: pointer to head
 * Return: return number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;
	const list_t *t = h;

	if (t == NULL)
		return (0);
	while (t != NULL)
	{
		count++;
		t = t->next;
	}
	return (count);
}
