#include "main.h"
/**
 * print_numbers - prints 0-9
 * use putchar only twice
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
	_putchar (c + '0');
	}
	_putchar('\n');
}
