#include <stdio.h>
/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
long long number;
number = 612852475143;
int oddPrimeNum = 3;
int maxPrimeNum = 0;

while (number % 2 == 0)
{
maxPrimeNum = 2;
number /= 2;
}
while (number != 1)
{
while (number % oddPrimeNum == 0)
{
maxPrimeNum = oddPrimeNum;
number /= oddPrimeNum;
}
oddPrimeNum += 2;
}
printf ("%d\n",maxPrimeNum);
}
