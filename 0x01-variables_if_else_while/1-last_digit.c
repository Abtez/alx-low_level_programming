#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number print
 * the last digit of the number if its less than 5
 * or greater than 5 or zero
 * Return: 0
 */
int main(void)
{int n, num;
srand(time(0));
n = rand() - RAND_MAX / 2;
num = n % 10;
if (num > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, num);
else if (num == 0)
printf("Last digit of %i is %i and is 0\n", n, num);
else if (num < 6)
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, num);
return (0);
}
