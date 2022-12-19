#include "main.h"
/**
 * use pointer to reassign a value
 */
void reset_to_98(int *n)
{
	int n;
	int *p = &n;

	*p = 98;

	return (0);
}
