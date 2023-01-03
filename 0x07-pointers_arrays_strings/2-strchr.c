#include "main.h"
/**
 * _strchr - locates a char in string
 * @s: a string
 * @c: a char
 * Return: pointer to initial occurence of char
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
