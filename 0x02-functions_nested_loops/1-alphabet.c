#include <stdio.h>
#include "main.h"

/**
 * print_alpahbets - main function
 * Description: print alphabtes in lowercase
 */

void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
}
