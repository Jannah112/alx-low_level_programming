#include "lists.h"
/**
 * pop_listint - hdjdkjejehe
 * @head: eiieie
 * Return: eieieieieueu
 */
int pop_listint(listint_t **head)
{
	int x;
	listint_t *t;

	if (head == NULL || *head == NULL)
		return (0);
	x = (*head)->n;
	t = (*head)->next;
	free((*head));
	*head = t;
	return (x);
}
