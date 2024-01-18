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
/**
* push_top - djd
* @value: djdjdj
*/
void push_top(char *value){
struct_t *new;
if (value == NULL){}
if (value[0] == '-')
{
value++;
x = -1;}
for (i = 0; value[i] != 0; i++)
{ if(isdigit(value[i])) err}
ac_val = atoi(value) * x;
new = malloc(sizeof(struct_t));
if (new == NULL){Err}
new->prev = NULL;
new->n = ac_val;
if (head == NULL)
{ new->next = NULL;
   head = new;
}
else:
{
   while (head->prev != NULL)
         head = head->prev;
    new->next = head;
    head->prev = new;
    head = new;
}
