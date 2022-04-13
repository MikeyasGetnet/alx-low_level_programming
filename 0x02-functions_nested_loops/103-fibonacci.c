#include <stdio.h>
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
int main(void)
{
int i;
unsigned long fib1 = 0, fib2 = 0, sum = 0;
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
