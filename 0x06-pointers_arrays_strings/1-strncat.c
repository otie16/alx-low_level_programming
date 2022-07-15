#include "main.h"
#include <string.h>
/**
 * _strncat - a function that concats two strings
 * @dest: param
 * @src: a param
 * @n: a param
 * Return: returns a value
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return  (dest);
}
