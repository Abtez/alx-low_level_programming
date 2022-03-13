#include <stdio.h>
/**
 * main - main functio
 * Description: print all possible combination of
 * two numbers separated by ' ,' 01 and 10 are
 * considered same combination
 * Return: 0
 */
int main(void)
{int c;
int d = 0;
while (d < 10)
{
c = 0;
while (c < 10)
{
if (d != c && d < c)
{
putchar(d + '0');
putchar(c + '0');
if (c + d != 17)
{
putchar(',');
putchar(' ');
}
}
c++;
}
d++;
}
putchar('\n');
return (0);
}
