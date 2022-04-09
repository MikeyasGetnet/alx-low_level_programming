#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - prints a random number
 *states whether its zero negative or positive
 *Return: Always 0.
 */
int main(void)
{
int n1, n3;
for (n1 = 0; n1 <= 98; n1++)
{
for (n3 = n1 + 1; n3 <= 99; n3++)
{
putchar((n1 / 10) + '0');
putchar((n1 % 10) + '0');
putchar(' ');
putchar((n3 / 10) + '0');
putchar((n3 % 10) + '0');

if (n1 == 98 && n3 == 99)
continue;

putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
