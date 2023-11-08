#include "function_pointers.h"
/**
 * print_name - f name
 * @name: name toprint
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
