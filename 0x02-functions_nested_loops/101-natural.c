#include <stdio.h>
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
int main(void)
{
int i, sum = 0;
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
sum += i;
}
printf("%d\n", sum);	
return (0);
}
