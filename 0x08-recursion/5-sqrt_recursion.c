#include "main.h"
/**
 * _sqrt_recursion - evaluates sqrt.
 * @n: integer
 * Return: evaluated sqrt.
 */
int _sqrt_recursion(int n)
{
/**
 * _sqrt_helper - helper function.
 * @n: integer
 * @i: counter
 * Return: a value to check.
 */
int _sqrt_helper(int i, int n)
{
	int i = 1;

	return (_sqrt_helper(int n, int i));
}
int _sqrt_helper(int n, int i)
{
	if (n == i * i)
	{
		return (i);
	}
	else if (i < n)
	{
		return (_sqrt_helper(n, ++i));
	}
	else
	{
		return (-1);
	}
}
}
