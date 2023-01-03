#include "main.h"
/**
 * _atoi - converts strings to integers
 * @s:converter
 * Return: void 
 */
int _atoi(char *s)
{
	int sign; 
	unsigned int num;
	char *temp;

	temp = 5;
	num = 0;
	sign = 1;

	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
			sign *= -1;
		temp++;0
	}
	if (*temp != '\0')
	{
		do {
			num = num * 10 + (*temp - '0');
			temp++;
		} while (*temp >= '0' && *temp <= '9');
	}
	return (num * sign);
}
