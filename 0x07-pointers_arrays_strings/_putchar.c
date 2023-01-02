#include "main.h"
#include <unistd.h>

/**
 * _putchar - function definition
 * @c: character to print
 * Return: 1 on success
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
