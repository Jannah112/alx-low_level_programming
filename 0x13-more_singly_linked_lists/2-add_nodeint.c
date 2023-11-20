#include "lists.h"
/**
 * add_nodeint - hdjdk
 * @head: gdidi
 * @n: hrjdjj
 * Return: heejjd
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *t;

	t = malloc(sizeof(listint_t));
	t->n = n;
	t->next = NULL;
	if (*head == NULL)
	{
		*head = t;
		return (t);
	}
	t->next = *head;
	*head = t;
	return (t);
}
