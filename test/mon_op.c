/**
 * add - dhfjdj
 * @stack: fjfjfj
 * @line_number: fjfjfj
 */
void add(stack_t **stack, unsigned int line_number)
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
 * sub - dhfjdj
 * @stack: fjfjfj
 * @line_number: fjfjfj
 */
void sub(stack_t **stack, unsigned int line_number)
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
 * mul - dhfjdj
 * @stack: fjfjfj
 * @line_number: fjfjfj
 */
void mul(stack_t **stack, unsigned int line_number)
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
 * div - dhfjdj
 * @stack: fjfjfj
 * @line_number: fjfjfj
 */
void div(stack_t **stack, unsigned int line_number)
{
	int num;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
	fprintf(stderr, "L<%d>: can't div, stack too short\n", line_number);
	exit(EXIT_FAILURE);
	}
	if (*stack->n == 0)
	{
		fprintf(stderr, "L<%d>: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	num = (*stack)->n / (*stack)->prev->n;
	(*stack)->n = num;
	free((*sqck)->prev);
	(*stack)->prev = NULL;
}
