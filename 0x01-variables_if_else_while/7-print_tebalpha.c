#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);

	putchar('\n');
	
	return (0);
}
