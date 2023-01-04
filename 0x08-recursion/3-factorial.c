#include "main.h"
/**
 * factorial - factorial of an integer.
 * @n: integer
 * Return: factorial of integer greater than 1 else return 1.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}


