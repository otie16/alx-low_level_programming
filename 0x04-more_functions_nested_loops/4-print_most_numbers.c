#include "main.h"

/**
 * print_most_numbers - check the code for Holberton School students.
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int x;
for (x = 0; x < 10; x++)
{
if (x != 2 && x != 4)
{
_putchar(x + '0');
}
_putchar('\n');
}
}
