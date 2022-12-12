#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
printf("size of char: %lu byte(s)\n",(unsigned long)sizeof(char));
printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(int));
printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(float));
return(0);
}

