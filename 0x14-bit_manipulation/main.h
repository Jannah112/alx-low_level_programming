#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
void _putchar(char);
int get_bit(unsigned long int n, unsigned int index);
int len(unsigned long int n);
#endif