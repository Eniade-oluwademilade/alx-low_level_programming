#include "main.h"
/**
 *swap_int - swapping values of pointers
 *@a: a pointer
 *@b: another pointer
 *c: is an integer
 *Return: 0
 */
void swap_int(int *a, int *b)
{
int c;
	c = *a;
	*a = *b;
	*b = c;
}
