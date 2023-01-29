#include "lists.h"
#include <stdio.h>

void __attribute__((constructor)) hare(void);
/**
 * hare - prints string before executing function
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,
			\nI bore my house upon my back!\n");
}
