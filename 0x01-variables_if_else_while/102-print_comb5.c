#include <stdio.h>
/**
 * main - main block
 * Description: a program that prints all possible combination of two
 * digit number from 0-99. All output should be two digit (01), in
 * ascending order. Considering 01 00 & 00 01 are same combo.
 * Return: 0
 */
int main(void)
{int c, d, e, f = 0;
while (f < 10)
{
e = 0;
while (e < 10)
{
d = 0;
while (d < 10)
{
c = 0;
while (c < 10)
{
if(!(f == c && e == d))
{
putchar(f + '0');
putchar(e + '0');
putchar(' ');
putchar(d + '0');
putchar(c + '0');
if (!(f + e == 18 && c + d == 17 && d == 9))
{
putchar(',');
putchar(' ');
}
}
c++;
}
d++;
}
e++;
}
f++;
}
putchar('\n');
return(0);
}
