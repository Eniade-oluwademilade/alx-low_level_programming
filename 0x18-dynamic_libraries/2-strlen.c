#include "main.h"
/**
 * _strlen - returns length of string
 * @s: checks char
 * Return: (len);
 */
int _strlen(char *s)
{
	int i = 0;

	for (; *s++;)
		i++;
	return (i);
}
