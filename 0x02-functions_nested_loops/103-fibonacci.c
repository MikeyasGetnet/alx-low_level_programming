#include <stdio.h>
/**
 *main - prints a random number
 *states whether its zero negative or positive
 *Return: Always 0.
 */
int main(void)
{
unsigned long fib1 = 0, fib2 = 1, sum = 0;
float total = 0;
while (1)
{
sum = fib1 + fib2;
if (sum > 4000000)
break;

if ((sum % 2) == 0)
total += sum;

fib1 = fib2;
fib2 = sum;
}

printf("%.0f\n", total);

return (0);
}
