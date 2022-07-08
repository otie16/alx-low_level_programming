#include "main.h"

/**
 * print_numbers -  a function that prints the numbers, from 0 to 9
 * @i: a parameter
 * Return: always returns a value
 */
void print_numbers(void)
{
char i = '0';
while (i <= '9')
{
_putchar(i);
i++;
}
_putchar('\n');
}
