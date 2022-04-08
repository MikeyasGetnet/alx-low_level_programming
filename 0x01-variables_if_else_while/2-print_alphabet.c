#include <stdio.h>
#include <stdlib.h>
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
int c;

for (c = 0; c < 26; ++c)	
putchar('a'+ c);

putchar('\n');

return(0);
}
