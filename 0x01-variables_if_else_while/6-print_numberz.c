#include <stdio.h>
/**
 * main - main block
 * Description: print numbers 0-9 without using 'char'
 * Return: 0
*/
int main(void)
{int n = 0;
while (n < 10)
{
putchar(n + '0');
n++;
}
putchar('\n');
return (0);
}
