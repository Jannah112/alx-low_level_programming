#include "lists.h"
/**
 * get_nodeint_at_index - hjdfh
 * @head: kffh
 * @index: jfdf
 * Return: oghg
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	while (i != index - 1 && head->next != NULL)
	{
		head = head->next;
		i++;
	}
	if (head->next == NULL)
		return (NULL);
	else
		return (head->next);
}
