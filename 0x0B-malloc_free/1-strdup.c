#include "main.h"
/**
 * _strlen - count array
 * @s: array of elements.
 * Return: 1.
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);

}
/**
 * _strcpy - copy arrays
 * @src: array of elements.
 * @dest: destination of elements
 * Return: dest
 */

char *_strcpy(char *str)
{
	char *dest;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}
	size = _strlen(str) * 1;

	dest = (char *) malloc(size *sizeof(char));

	if (dest == 0)
	{
		return (NULL);
	}
	_strcpy(dest, src);
	return (dest);
}
