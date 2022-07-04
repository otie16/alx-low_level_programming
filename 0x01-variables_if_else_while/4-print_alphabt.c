#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - ENTRY POINT
 *  Return: always returns a value
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch); /*putchar converts numbers to letters*/
}
}
putchar(10); /*Ascii code for new Line*/
return (0);
}
