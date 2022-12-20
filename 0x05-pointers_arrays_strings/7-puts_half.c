#include "main.h"
/**
 *puts_half - function prints half of sting then a new line
 * if length of string is odd n = (length of string - 1) /2
 *@str: our pointer
 */
void puts_half(char *str)
{
	int j = 0;
	int k;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 1)
	{
		k = (j - 1) / 2;
		k += 1;
	}
	else
	{
		k = j / 2;
	}

	for (; k < j; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
