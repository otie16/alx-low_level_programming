#include "main.h"

/**
 * print_numbers -  a function that prints the numbers, from 0 to 9
 * Return: always returns a value
 */
void print_numbers(void)
{
char i = 0;
while (i < 10)
{
_putchar(i + '0');
i++;
}
_putchar('\n');
}
