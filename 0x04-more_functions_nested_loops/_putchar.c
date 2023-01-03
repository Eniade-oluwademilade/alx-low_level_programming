#include "main.h"
#include <unistd.h>
/**
 * putchar - writes char to stdout
 * Return: 1 on success else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
