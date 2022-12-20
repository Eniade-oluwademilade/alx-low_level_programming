#include "main.h"
/**
 * function prints string in reverse
 */
void print_rev(char *s)
{
	int a, i;
	i = 0;

	while(s[i] != '\0')
		i++;
	for(a = i -1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
}
