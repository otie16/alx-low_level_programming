#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: a parameter
 *
 */
int _strlen_recursion(char *s)
{
	if(*s == '\0')
	{
		return;
	}
	s++;
	_putchar(s);
	 _strlen_recursion(*s)

}

