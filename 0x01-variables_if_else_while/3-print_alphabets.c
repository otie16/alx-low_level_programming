#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always returns a value
 *
 */
int main(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
{
putchar(ch); /*putchar converts numbers to letters*/
}
for (ch = 65; ch <= 90; ch++)
{
putchar(ch);
}
putchar(10); /*Ascii code for new Line*/
return (0);
}
