#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: a param
 * @src: a second param
 * @n: a third param
 * Return: return a value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
	dest[a] = src[a];
}
	return (dest);
