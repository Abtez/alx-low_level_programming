#include <stdio.h>
/**
 * main - main block
 * Description: print three different combination of words
 * followed by ' ,'. The digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered
 * the same combination
 * Return: 0
 */
int main(void)
{int c, d, e = 0;
while (e < 10)
{
d = 0;
while (d < 10)
{
c = 0;
while (c < 10)
{
if (c != d && d != e && e < d && d < c)
{
putchar(e + '0');
putchar(d + '0');
putchar(c + '0');
if (c + d + e != 9 + 8 + 7)
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
putchar('\n');
return (0);
}
