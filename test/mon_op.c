#include "monty.h"
/**
 * m_add - dhfjdj
 * @stack: fjfjfj
 * @line_number: fjfjfj
 */
void m_add(stack_t **stack, unsigned int line_number)
{
	int sum = 0;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
	fprintf(stderr, "L<%d>: can't add, stack too short\n", line_number);
	exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	sum = (*stack)->n + (*stack)->prev->n;
	(*stack)->n = sum;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
/**
 * m_sub - dhfjdj
 * @stack: fjfjfj
 * @line_number: fjfjfj
 */
void m_sub(stack_t **stack, unsigned int line_number)
{
	int num;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
	fprintf(stderr, "L<%d>: can't sub, stack too short\n", line_number);
	exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	num = (*stack)->n - (*stack)->prev->n;
	(*stack)->n = num;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
/**
 * m_mul - dhfjdj
 * @stack: fjfjfj
 * @line_number: fjfjfj
 */
void m_mul(stack_t **stack, unsigned int line_number)
{
	int num;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
	fprintf(stderr, "L<%d>: can't mul, stack too short\n", line_number);
	exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	num = (*stack)->n * (*stack)->prev->n;
	(*stack)->n = num;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
/**
 * m_div - dhfjdj
 * @stack: fjfjfj
 * @line_number: fjfjfj
 */
void m_div(stack_t **stack, unsigned int line_number)
{
	int num;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
	fprintf(stderr, "L<%d>: can't div, stack too short\n", line_number);
	exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L<%d>: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	num = (*stack)->n / (*stack)->prev->n;
	(*stack)->n = num;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
