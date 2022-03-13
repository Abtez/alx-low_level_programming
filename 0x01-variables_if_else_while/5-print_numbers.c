#include <stdio.h>
/**
 * main - main block
 * Description: print all single digits base ten
 * starting from 0 with new line
 * Return: 0
 */

int main(void)
{int n = '0';
while (n <= '9')
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
