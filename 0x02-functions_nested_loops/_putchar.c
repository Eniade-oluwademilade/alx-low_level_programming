#include "main.h"
#include <unistd.h>
/**
 * This is what the code does:
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
