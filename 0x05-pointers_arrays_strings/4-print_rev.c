#include "main.h"

/**
 *print_rev - prints chars in reverse
 *@s: is a pointer to array
 *Return: (s[a]) string in reverse
 */
void print_rev(char *s)
{
	int a, i;

	i = 0;

	while (s[i] != '\0')
		i++;
	for (a = i - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
}
