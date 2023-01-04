#include "main.h"
/**
 *prime - recursion function
 *@n: iterate integer n
 *@i: possible factor
 *Return: 0 or 1.
 */
int prime(int n, int i)
{
	if (i == n - 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	if (n % i != 0)
	{
		return (prime(n, i + 1));
	}
	return (0);
}

/**
 * is_prime_number - evaluates prime numbers.
 * @n: number
 * Return: 1 if prime , else.
 */
int is_prime_number(int n)
{
	int i;

	i = 2;

	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (prime(n, i));
}
