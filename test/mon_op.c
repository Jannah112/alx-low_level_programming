/**
 * add - dhfjdj
 * @stack: fjfjfj
 * @line_number: fjfjfj
 */
void add(stack_t **stack, unsigned int line_number)
{
	int sumb= 0;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
	fprintf(stderr, "L<%d>: can't add, stack too short\n", line_number);
	exit (EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	sum = (*stack)->n + (*stack)->prev->n;
	(*stack)->n = sum;
	free((*sqck)->prev);
	(*stack)->prev = NULL;
}
