#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int c;
int a;
for (a=0;a<=9;++a)
{
for (c=0;c<=9;++c)
putchar(a,c);
putchar(',');
putchar(' ');
}
putchar('\n');

return(0);
}
