#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: always returns a value
 */

/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("Last digit of %d is ", n);
if (n > 5)
{
	printf("greater than 5");
}
else if (n == 0)
{
	printf("0");
}
else
{
	printf("less than 6 and not 0");
}
return (0);
}
