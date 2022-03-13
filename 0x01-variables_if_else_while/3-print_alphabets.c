#include <stdio.h>
/**
 * main - main block
 * Description: print alphabets in lower then print
 * alphabets capitalised in one line
 * Return: 0
 */
int main(void)
{char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
c = 'A';
while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
