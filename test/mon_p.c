/**
* pop - hfhfj
* @stack: djdjd
* @line_number: djdjdjdj
*/
void pop(stack_t **stack, unsigned int line_number)
{
	if (stak == NULL || *stack = NULL)
	{
		fprintf(stderr, "L<%d>: can't pop an empty stack\n", line_number);
		exit (EXIT_FAILURE);
	}
	*stack = (*stack)->nex;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
