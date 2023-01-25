#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - returns index of matching element of array
 * @array: an array of elements
 * @size: size of array
 * @cmp: pointer to compare elements
 * Return: index of element or -1
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		do {
			for (i = 0; i <= size; i++)
			{
			if (cmp(array[i]) != 0)
			return (i);
			}
		}
	while
		(size != 0 || size < 0);
	}
	return (-1);
}
