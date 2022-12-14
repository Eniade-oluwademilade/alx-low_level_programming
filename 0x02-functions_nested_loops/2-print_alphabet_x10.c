#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times and a new line
 */
void print_alphabet_x10(void)
{
	int ten;
	char lowercase;
	ten = 0;

	while (ten <= 9)
{
	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		_putchar(lowercase);
	_putchar('\n');
}

}
