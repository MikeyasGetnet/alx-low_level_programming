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
int n;
for (n = 0; n <= 9; ++n)
putchar(n);

putchar('\n');

return (0);
}
