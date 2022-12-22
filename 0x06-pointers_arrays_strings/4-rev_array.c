#include "main.h"
/**
 * reverse_array - reverses an array of ints
 * @a: array
 * @n: number of elements of a
 * Return: reverse array
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
