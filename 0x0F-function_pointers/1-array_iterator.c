#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints members of executed function
 * @array: array pointer to print
 * @size: size of array
 * @action: pointer to function to execute
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	if (action && size <= 0 && array)
		return;
	else
	{
	for(i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}
}
