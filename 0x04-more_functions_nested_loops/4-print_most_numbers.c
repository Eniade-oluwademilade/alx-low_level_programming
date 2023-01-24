#include "main.h"
/**
 * print_most_numbers - prints 0-9 and new line it ptints all but 2 &4
 * Return: 0 success
 */
void print_most_numbers(void)
{
	char n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
			_putchar(n + '0');
	}
	_putchar('\n');
}
