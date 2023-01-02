#include "main.h"

/**
 * char *_memcpy - function that copies memory
 *@dest: where memory is stored
 * @src: memory where is copied
 * @n: number of bytes
 * Return: copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
