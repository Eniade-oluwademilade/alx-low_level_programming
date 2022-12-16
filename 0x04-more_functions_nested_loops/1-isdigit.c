#include "main.h"
/**
 * function checks digits from 0-9
 * Returns: 1 if c is digit else 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
