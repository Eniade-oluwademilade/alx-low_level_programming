#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 Always
 */
int main(void)
{
	int n;
	char c;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
