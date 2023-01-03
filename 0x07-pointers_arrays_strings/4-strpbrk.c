#include "main.h"
/**
 * _strpbrk - search for string of set of bytes.
 * @s: first string
 * @accept: second string
 * Return: pointer to bytes that matches a byte accepted, else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *s(i + 1) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
