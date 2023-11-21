#include "lists.h"
/**
 * reverse_listint - jdjdhdhd
 * @head: djejejej
 * Return: djdjdj
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *c = NULL, *p = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return ((*head));
	while (*head != NULL)
	{
		c = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = c;
	}
	*head = p;
	return ((*head));
}
