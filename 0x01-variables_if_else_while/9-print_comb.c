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
int c;
int a;
for (a = 0; a <= 9; ++a)
{
for (c = 0;c <= 9; ++c)
putchar(48 + c);
if (c != 9){
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
