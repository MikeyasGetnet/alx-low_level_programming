#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - prints a random number
 * states whether its zero negative or positive
 * Return: Always 0.
 *
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
{
if (c != 'q' && c != 'e')
putchar(c);
}

putchar('\n');

return (0);
}
