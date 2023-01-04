#include "main.h"
#include <unistd.h>
/**
 * _putchar - a clone of 'putchar'.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
