#include "lists.h"
/**
 * listint_len - vdjkd
 * @h: gdkdo
 * Return: hshjs
 */
size_t listint_len(const listint_t *h)
{
	unsigned int c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
