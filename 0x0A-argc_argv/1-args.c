#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
