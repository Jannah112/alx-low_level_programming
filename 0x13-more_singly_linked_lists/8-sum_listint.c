#include "lists.h"
/**
 * sum_listint - eodhdhhdjd
 * @head: dkdhdhdhj
 * Return: dkdjdj
 */
int sum_listint(listint_t *head)
{
	int x = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		x += head->n;
		head = head->next;
	}
	return (x);
}
