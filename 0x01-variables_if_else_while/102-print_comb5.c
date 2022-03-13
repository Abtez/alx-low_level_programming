#include <stdio.h>
/**
 * main - main block
 * Description: a program that prints all possible combination of two
 * digit number from 0-99. All output should be two digit (01), in
 * ascending order. Considering 01 00 & 00 01 are same combo.
 * Return: 0
 */
int main(void)
{int j, i;
for (j = 0; j <= 99; j++)
{
for (i = j; i <= 99; i++)
{
if (i != j)
{
putchar(j / 10 + 48);
putchar(j % 10 + 48);
putchar(' ');
putchar(i / 10 + 48);
putchar(i % 10 + 48);
if (j * 100 + i != 9899)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
