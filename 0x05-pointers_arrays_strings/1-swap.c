#include "main.h"
/**
 * swapping values of pointers
 */
void swap_int(int *a, int *b)
{
int c;
int *b;
int *a;
	c = *a;
	*a = *b;
	*b = c;
}
