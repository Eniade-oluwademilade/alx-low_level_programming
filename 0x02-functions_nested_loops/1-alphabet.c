#include "main.h"
/**
 * print alphabet - code prints alphabets as output in lowercase
 */
void print_alphabet(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		_putchar(lowercase);
	_putchar('\n');
}
