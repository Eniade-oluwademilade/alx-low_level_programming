#include "main.h"
/**
 *_puts - function prints string and new line
 *@str: pointer tostring
 *@i: our counter
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
