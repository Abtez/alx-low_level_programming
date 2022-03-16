#include <stdio.h>
#include "main.h"

/**
 * print_alpahbets - prints aphabte in lowercase
 */

void print_alphabet (void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
}
