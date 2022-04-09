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
int n1, n2;
for (n1 = 0; n1 < 9; n1++)
{
for (n2 = n1 + 1; n2 < 10; n2++)
{
putchar((n1 % 10) + '0');
putchar((n2 % 10) + '0');

if (n1 % 10 == 8 && n2 % 10 == 9)
continue;

putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
