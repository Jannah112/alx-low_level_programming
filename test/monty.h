#ifndef MONTY_H_
#define MONTY_H_

#define _GNU_SOURCE

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <stddef.h>
#include <ctype.h>
#include <limits.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
extern stack_t *top;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void (*get_func(char *token))(stack_t **, unsigned int);
void exe_token(char *token, char *value, unsigned int ln);
void m_mod(stack_t **stack, unsigned int line_number);
void m_swap(stack_t **stack, unsigned int line_number);
void m_pint(stack_t **stack, unsigned int line_number);
void m_pall(stack_t **stack, unsigned int line_number);
void m_div(stack_t **stack, unsigned int line_number);
void m_mul(stack_t **stack, unsigned int line_number);
void m_sub(stack_t **stack, unsigned int line_number);
void m_add(stack_t **stack, unsigned int line_number);
void m_pop(stack_t **stack, unsigned int line_number);
int my_atoi(char *value, unsigned int ln);
void new_node(char *, unsigned int);
void push_t(stack_t **, unsigned int);
void free_mem(void);

#endif
