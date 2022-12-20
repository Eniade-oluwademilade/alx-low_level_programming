#include "main.h"
/**
 * print_array - prints array of ints
 *@a:array of ints
 *@n: number of elements of array to print
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]l;
				if (j != (n - 1))
				{
				printf(", ");
				}
				}
				printf("\n");
				}
