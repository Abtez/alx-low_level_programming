#include <stdio.h>
/**
 * main - main block
 * Description: print all single digits of baase 16
 * in lower
 * Return: 0
 */
int main(void)
{char c = '0', n = 'a';
while (c <= '9')
{
putchar(c);
c++;
}
while (n <= 'f')
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
