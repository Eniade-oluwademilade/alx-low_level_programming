#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: name to enter
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
