#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - gets required function for an operation
 * @s: function pointer
 * Return: operation result
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}
		{NULL, NULL}
	};
	int i;
	
