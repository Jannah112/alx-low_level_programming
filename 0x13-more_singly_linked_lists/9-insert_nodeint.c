#include "lists.h"
/**
 * insert_nodeint_at_index - ejdidhhd
 * @idx: rkdjdj
 * @n: hdjdjdi
 * @head: djdjjd
 * Return: dkdjdhdhj
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c = 0, i = 0;
	listint_t *x;
	listint_t *t = *head;

	while (t != NULL)
	{
		c++;
		t = t->next;
	}
	t = *head;
	if (idx > c + 1)
		return (NULL);
	x = malloc(sizeof(listint_t));
	if (x == NULL)
		return (NULL);
	x->n = n;
	x->next = NULL;
	if (idx == 0)
	{
		x->next = *head;
		*head = x;
		return (x);
	}
	while (i != idx - 1)
	{
		t = t->next;
		i++;
	}
	x->next = t->next;
	t->next = x;
	return (x);
}
