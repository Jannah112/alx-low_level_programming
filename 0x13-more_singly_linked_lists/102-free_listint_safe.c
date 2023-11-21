#include "lists.h"
/**
 * find_listint_loop - bdjdjdjrhrhrjrj
 * @head: ejjeejei
 * Return: dieiei
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);
	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);
}
/**
 * free_listint_safe - ejdhsgsh
 * @h: ehehheheh
 * Return: eheueuueu
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *t = NULL, *temp = *h;
	size_t a = 0, c = 0;

	if (*h == NULL)
		return (c);
	t = f(*h);
	while (*h != NULL)
	{
		if (*h != t)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			c++;
		}
		else
		{
			if (a < 1)
			{
				temp = (*h)->next;
				free(*h);
				*h = temp;
				c++;
				a++;
			}
			else
			{
				*h = NULL;
				return (c);
			}
		}
	}
	*h = NULL;
	return (c);
}

