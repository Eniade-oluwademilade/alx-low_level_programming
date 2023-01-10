#include <unistd.h>
/**
 * _putchar - a clone of putchar function.
 * @c: character to print.
 * Return: 1 on s and -1 on error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
