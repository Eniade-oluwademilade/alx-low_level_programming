#include "main.h"
/**
 * _strstr - finds the first occurence of chars
 *@haystack: the string
 *@needle: substring
 *Return: pointer to first occurence or NULL if none
 */
char *_strstr(char *haystack, char *needle)
{
	char *p_haystack, *p_needle;

	while (*haystack != '\0')
	{
		p_haystack = haystack;
		p_needle = needle;

		while (*haystack != '\0' && *p_needle != '\0' && *haystack == *p_needle)
		{
			haystack++;
			p_needle++;
		}
		if (!*p_needle)
			return (p_haystack);
		haystack = p_haystack + 1;
	}
	return (0);
}
