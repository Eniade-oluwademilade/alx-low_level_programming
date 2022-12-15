#include "main.h"
/**
 * A function
 * Return: 0 success
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != 50 && n != 52)
			_putchar(n);
	}
	_putchar("\n");
}
