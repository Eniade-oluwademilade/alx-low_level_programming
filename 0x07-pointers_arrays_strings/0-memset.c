#include "main.h"

/**
 *char *_memset - function fills bytes of memory area
 *@b: the desired value
 *@s: starting address of memory to be filled
 *@n: number of bytes to be changed
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n);
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
