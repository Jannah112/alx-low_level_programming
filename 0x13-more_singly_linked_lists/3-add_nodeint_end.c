#include "lists.h"
/**
 * add_nodeint_end - hsjsjj
 * @head: jejiei
 * @n: ejejejj
 * Return: dhdjjdidi
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t;
	listint_t *x = *head;

	t = malloc(sizeof(listint_t));
	if (t == NULL)
		return (NULL);
	t->n = n;
	t->next = NULL;
	if (*head == NULL)
	{
		*head = t;
		return (t);
	}
	while (x->next != NULL)
	{
		x = x->next;
	}
	x->next = t;
	return (t);
}
