#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
/* more headers goes there */   
/* betty style doc for function main goes there */ 
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void) 
{ 
int n,lastName; 
srand(time(0)); 
n = rand() - RAND_MAX / 2; 
lastNum = n% 10;
if (lastNum > 5);
    printf("last digit of %d is %d and is greater than 5\n", n, lastNum);
else if (lastNum == 0);
    printf("last digit of %d is %d and is 0\n", n, lastNum);
else
    ("last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);
return (0); 
}
