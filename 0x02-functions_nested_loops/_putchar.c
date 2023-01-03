#include "main.h"
#include <unistd.h>
/**
 *_putchar - This is what the code does:
 *@c: char var for function use
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
