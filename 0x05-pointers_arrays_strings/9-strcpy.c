#include "main.h"
/**
 * _strcpy - copies from src to dest
 * @dest: char 
 . @src: char to check
 * write function to copy strings from src and \0 to buffer by dest
 * Return: (dest) *checkout man strcpy*
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
		dest[c] = src[c];
	dest[c] = '\0';
	return (dest);
}
