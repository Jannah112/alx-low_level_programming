#include "lists.h"
/**
 * add_node - add node at beg
 * @head: pointer to head
 * @str: string to add
 * Return: return address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *t;

	t = malloc(sizeof(list_t));
	if (t == NULL)
		return (NULL);
	t->str = strdup(str);
	t->len = strlen(str);
	t->next = *head;
	*head = t;
	return (t);
}
