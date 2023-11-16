#include "lists.h"
/**
 * add_node_end - add node at end of list
 * @head: pointer to head
 * @str: string to qdd
 * Return: return address of added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *cur = *head;
	list_t *t = malloc(sizeof(list_t));

	if (t == NULL)
		return (NULL);
	t->str = strdup(str);
	t->len = strlen(str);
	t->next = NULL;
	if (*head == NULL)
	{
		*head = t;
		return (t);
	}
	while (cur->next != NULL)
	{
		cur = cur->next;
	}
	cur->next = t;
	return (t);
}


