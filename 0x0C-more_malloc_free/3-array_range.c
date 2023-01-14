#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: first int number
 * @max: last int number
 * Return: pointer to memory else NULL if it fails
 */
int *array_range(int min, int max)
{
	int i, l;
	int *a:

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * 1);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
