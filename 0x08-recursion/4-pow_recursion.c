#include "main.h"
/**
 * _pow_recursion - gives value of num raised to a number.
 * @x: number
 * @y: power
 * Return: power of a number.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
