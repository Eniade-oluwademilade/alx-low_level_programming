#include "main.h"
/**
 * _islower - checks for lowercase in characters
 *Return: 1 if c is lowercase else 0 if not
 *@c: used to print a -.z
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
