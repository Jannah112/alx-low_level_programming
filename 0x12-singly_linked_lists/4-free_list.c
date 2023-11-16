#include "lists.h"
/**
 * free_list - free list
 * @head: pointer to head
 */
void free_list(list_t *head)
{
	list_t *t = head;

	while (head != NULL)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
}
