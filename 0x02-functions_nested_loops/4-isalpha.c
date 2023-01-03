#include "main.h"
/**
 *_isalpha - declare the main function
 *@c: char to check
 * we check if c is in an array, then output a return value
 * Return: 1 if c is present and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
