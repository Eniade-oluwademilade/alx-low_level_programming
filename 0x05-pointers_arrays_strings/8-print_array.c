#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array of ints
 *@a:array of ints
 *@n:number of elements of array
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
		if (j != n - 1)
			printf("%d, ", a[j]);
		else
			printf("%d", a[j]);
	printf("\n");
}
