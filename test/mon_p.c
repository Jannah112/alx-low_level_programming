#include "monty.h"

/**
* m_pop - hfhfj
* @stack: djdjd
* @line_number: djdjdjdj
*/
void m_pop(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L<%d>: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
/**
* my_atoi - djdjd
* @value: rjdjdj
* @ln: djdjdj
* Return: djdjdjdj
*/
int my_atoi(char *value, unsigned int ln)
{
	int x = 1, val, i;

	if (value == NULL)
	{
	fprintf(stderr, "L<%d>: usage: push integer", ln);
	exit(EXIT_FAILURE);
	}
	if (value[0] == '-')
	{
		value++;
		x = -1;
	}
	for (i = 0; value[i] != 0; i++)
	{
	if (!(isdigit(value[i])))
	{
	fprintf(stderr, "L<%d>: usage: push integer", ln);
	exit(EXIT_FAILURE);
	}
	}
	val = atoi(value) * x;
	return (val);
}
/**
 * new_node - djdj
 * @value: vdhdh
 * @ln: rgrrtg
 */
void new_node(char *value, unsigned int ln)
{
	stack_t *new;
	int val;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	val = my_atoi(value, ln);
	new->n = val;
	new->prev = NULL;
	new->next = NULL;
	push_t(&new,ln);
}
void push_t(stack_t **new_node, __attribute__((unused))unsigned int ln)
{
	stack_t *tmp;

	if (new_node == NULL || *new_node == NULL)
		exit(EXIT_FAILURE);
	if (top == NULL)
	{
		top = *new_node;
		return;
	}
	tmp = top;
	top = *new_node;
	top->next = tmp;
	tmp->prev = top;
}
