#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 11)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		i++;
		_putchar('\n');
	}
	return (0);
}

