#include "lists.h"
/**
 * free_listint - jsjdhdheh
 * @head: durieiorie
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head != NULL)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
