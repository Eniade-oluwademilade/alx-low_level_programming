#include "main.h"
/**
 * swapping values of pointers
 */
void swap_int(int *a, int *b)
{
int c;
	c = *a;
	*a = *b;
	*b = c;
}
