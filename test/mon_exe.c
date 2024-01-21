#include "monty.h"

/**
* exe_token - dhdjjd
* @token: fjjfkf
* @value: djddk
* @ln: fjdjrjj
*/
void exe_token(char *token, char *value, unsigned int ln)
{
	void (*t_func)(stack_t **, unsigned int);

	if (token[0] == '#' || strcmp(token, "nop") == 0)
		return;
	if (strcmp(token, "push") == 0)
	{
		new_node(value, ln);
		return;
	}
	else
	t_func = get_func(token);
	if (t_func == NULL)
	{
		fprintf(stderr, "L<%d>: unknown instruction <%s>\n", ln, token);
		exit(EXIT_FAILURE);
	}
	t_func(&top, ln);
}
/**
* get_func - dhhdjdj
* @token: fjrjrj
* Return: fhfjfj
*/
void (*get_func(char *token))(stack_t **, unsigned int)
{
	int i = 0;

	instruction_t op_lst[] = {{"add", m_add}, {"sub", m_sub}, {"mul", m_mul},
	{"div", m_div}, {"mod", m_mod}, {"pint", m_pint}, {"pall", m_pall},
	{"pop", m_pop}, {"swap", m_swap}, {NULL, NULL}};
	while (op_lst[i].opcode != 0)
	{
		if (strcmp(token, op_lst[i].opcode) == 0)
		{
			return (op_lst[i].f);
		}
		i++;
	}
	return (NULL);
}
