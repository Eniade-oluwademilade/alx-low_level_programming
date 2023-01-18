#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints info of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
		printf("%s ", (*d).name);
	if((*d).age == NULL)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("%f ", (*d).age);
	}
	if ((*d).owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("%s ", (*d).owner);
	}
}
