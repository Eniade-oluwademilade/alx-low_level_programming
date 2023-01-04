#include "main.h"
/**
 * _sqrt_recursion - evaluates sqrt.
 * @i: integer
 * @n: integer
 * Return: evaluated sqrt.
 */
int _sqrt_recursion(int i, int n)
{
	if (n == 0 || n == 1)
	return (n);

	else if (i * i < n)
		return (_sqrt_recursion(i + 1, n));
	else if (i * i == n)
		return (i);
	return (-1);
}
