#include "main.h"
/**
 *rev_string - this function reverses strings
 *@s: array string holder
 *@i: counter
 *@a: to loop over an array
 */
void rev_string(char *s)
{
	int len = 0, index = 0;
	char temp;

	while (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}
}
