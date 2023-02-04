#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts binary to unit
 * @b: pointer to 0 or 1
 *
 * Return: converted value or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, decval;

	if (!b)
		return (0);
	for (i = 0; b[i];  i++)
	{ 
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decval = 2 * decval + (b[i] - '0');
	}
	return (decval);
}
