/**
* pop - hfhfj
* @stack: djdjd
* @line_number: djdjdjdj
*/
void pop(stack_t **stack, unsigned int line_number)
{
	if (stak == NULL || *stack == NULL)
	{
		fprintf(stderr, "L<%d>: can't pop an empty stack\n", line_number);
		exit (EXIT_FAILURE);
	}
	*stack = (*stack)->nex;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
/**
* my_atoi - djdjd
* @value: rjdjdj
* @line_number: djdjdj
* Return: djdjdjdj
*/
int my_atoi(char *value, unsigned int ln)
{
	int x = 1, val, i;
	if (value == NULL)
	{
	fprintf(stderr, "L<%d>: usage: push integer", ln);
	exit (EXIT_FAILURE);
	}
	if (value[0] == '-')
	{
		value++;
		x = -1;
	}
	for (i = 0; value[i] != 0; i++)
	{
	if(isdigit(value[i]))
	{
	fprintf(stderr, "L<%d>: usage: push integer", ln);
	exit (EXIT_FAILURE);
	}
	}
	val = atoi(value) * x;
	return (val);
}
/**
* push_top - djd
* @value: djdjdj
*/
void push_top(char *value, unsigned int ln)
{
	struct_t *new;
	int ac_val;
	
	ac_val = my_atoi(value, ln);
	new = malloc(sizeof(struct_t));
	if (new == NULL)
	{
	fprintf(stderr, "Error: malloc failed");
	exit (EXIT_FAILURE);
	}
	new->prev = NULL;
	new->n = ac_val;
	if (head == NULL)
	{
	new->next = NULL;
	head = new;
	}
	else
	{
	while (head->prev != NULL)
		head = head->prev;
	new->next = head;
	head->prev = new;
	head = new;
	}
}
