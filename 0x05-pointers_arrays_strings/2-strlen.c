#include "main.h"
#include <string.h>
/**
 * _strlen - a function to check length of the string
 * @s: a param pointer
 * Return: return the string length
 */
int _strlen(char *s)
{
	int len;
	for (; *s != '\0'; s++)
	{
		len += 1;
	}
return (len);

}
