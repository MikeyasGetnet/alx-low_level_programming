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
int i;
unsigned long fib1 = 0, fib2 = 1, sum = 0;
for (i = 0; i < 50; i++)
{
sum = fib1 + fib2;
printf("%lu", sum);
fib1 = fib2;
fib2 = sum;
if (i == 49)
printf("\n");
else
printf(", ");

}
return (0);
}
