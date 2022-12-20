#include "main.h"
/**
 * puts2 - prints every other element in string array
 * @str: array pointer
 * e.g [0, 2, 4, 6] and %2 = 0 array element arr[i]
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
