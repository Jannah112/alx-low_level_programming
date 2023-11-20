#include "lists.h"
/**
 * free_listint2 - gjjff
 * @head: ghddjj
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	while (*head != NULL)
	{
		t = (*head)->next;
		free((*head));
		*head = t;
	}
}
