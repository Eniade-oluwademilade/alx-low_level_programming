#include "dog.h"
#include <stdlib>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds length of string
 * @str: pointer to a string
 * Return: length of string
 */
int _strlen(char *str)
{
	int l = 0;

	while (*str++)
		l++;
	return (l);
}

/**
 * _strcpy - copies string from a source to destination
 * @dest: destination of string
 * @src: string source
 * Return: pointer to string 
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: a new dog's struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_n;

	if (name == NULL || age == NULL || owner == NULL)
		return (NULL);
	dog_n = malloc(sizeof(dog_t));
	if (dog_n == NULL)
		return (NULL);
	(*dog_n).name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog_n).name == NULL)
	{
		free(dog_n);
		return (NULL);
	}
	(*dog_n).owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog_n).owner == NULL)
	{
		free((*dog_n).name);
		free(dog_n);
		return (NULL);
	}

	(*dog_n).name = *_strcpy((*dog_n).name, name);
	(*dog_n).age = age;
	(*dog_n).owner =  *_strcpy((*dog_n).owner, owner);

	return (dog_n);
}


