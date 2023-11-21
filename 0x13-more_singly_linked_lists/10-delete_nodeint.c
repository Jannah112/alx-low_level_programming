#include "lists.h"
/**
 * delete_nodeint_at_index - jriirurur
 * @head: ehehueu
 * @index: diiddii
 * Return: dhdjdj
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur = *head, *pre = *head, *t = *head;
	unsigned int c = 0, i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}
	while (t != NULL)
	{
		t = t->next;
		c++;
	}
	if (index > c)
		return (-1);
	while (i != index)
	{
		pre = cur;
		cur = cur->next;
		i++;
	}
	pre->next = cur->next;
	free(cur);
	return (1);
}
