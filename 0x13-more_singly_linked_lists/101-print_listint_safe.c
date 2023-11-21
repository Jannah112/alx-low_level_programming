#include "lists.h"
/**
 * f - bdjdjdjrhrhrjrj
 * @head: ejjeejei
 * Return: dieiei
 */
listint_t *f(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;

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
			return ((listint_t *)fast);
		}
	}
	return (NULL);
}
/**
 * print_listint_safe - ejdhsgsh
 * @head: ehehheheh
 * Return: eheueuueu
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *t = NULL;
	size_t a = 0, c = 0;

	if (head == NULL)
		exit(98);
	t = f(head);
	while (head != NULL)
	{
		if (head != t)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			c++;
		}
		else
		{
			if (a < 1)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				c++;
				a++;
			}
			else
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (c);
			}
		}
		head = head->next;
	}
	return (c);
}

