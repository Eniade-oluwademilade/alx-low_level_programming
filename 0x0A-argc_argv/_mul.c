#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 success, else 1.
 */
int main(int argc, char *argv[])
{
	int n, m;

	n = atoi(argv[1]);
	m = atoi(argv[2]);

	if (argc == 2)
	{
		printf("%d\n", n * m);
		return (0);
	}
	else
	{
		printf("Error");
		return (1);
	}
}
