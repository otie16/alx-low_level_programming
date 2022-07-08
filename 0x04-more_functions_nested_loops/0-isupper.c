#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 *
 * @c: an integer param
 * Return: always returns a value
 */
int _isupper(int c)
{
int i;
for (i = 'A'; i <= 'Z'; i++)
{
if (c == i)
return (1);
}
return (0);
}
