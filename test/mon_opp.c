#include "monty.h"
/**
 * m_mod - dhfjdj
 * @stack: fjfjfj
 * @line_number: fjfjfj
 */
void m_mod(stack_t **stack, unsigned int line_number)
{
	int num;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
	fprintf(stderr, "L<%d>: can't add, stack too short\n", line_number);
	exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L<%d>: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	num = (*stack)->n % (*stack)->prev->n;
	(*stack)->n = num;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
/**
 * m_swap - fjfjfi
 * @stack: jdjdj
 * @line_number: rirur
 */
void m_swap(stack_t **stack, unsigned int line_number)
{
	int temp;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
	fprintf(stderr, "L<%d>: can't swap, stack too short\n", line_number);
	exit(EXIT_FAILURE);
	}
	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
/**
 * m_pint - djfjfj
 * @stack: fjfjfj
 * @line_number: djrjfj
 */
void m_pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
	fprintf(stderr, "L<%d>: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
/**
 * m_pall - rjrjrj
 * @stack: fjrjf
 * @line_number: fjfdj
 */
void m_pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	if (stack == NULL && (*stack) == NULL)
	{
		return;
	}
	while ((*stack) != NULL)
	{
		printf("%d\n", (*stack)->n);
		*stack = (*stack)->next;
	}
}
