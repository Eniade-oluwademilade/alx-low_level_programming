#include "main.h"
/**
 * _atoi - converts strings to integers
 * @s:converter
 * Return: integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int ui = 0;
	int i = 0;
	int j = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			i *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			j = 1;
			ui = (ui * 10) + (s[c] - '0');
			c++;
		}
		if (j == 1)
		{
			break;
		}
		c++;
	}
	ui *= i;
	return (ui);
}
