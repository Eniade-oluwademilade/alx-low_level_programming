#include "main.h"
/**
 * set_bit - sets value of bit to 1
 * @n: pointer to bit
 * @index: index of value from 0
 * Return: success 1 , error -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
