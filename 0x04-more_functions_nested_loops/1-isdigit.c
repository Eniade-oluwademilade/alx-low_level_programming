#include "main.h"
/**
 * _isdigit - function checks digits from 0-9
 * Return: 1 if c is digit else 0
 *@c: function argument
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
