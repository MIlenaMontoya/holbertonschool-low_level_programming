#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the last
 *
 * Return: 0 always runs
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n);
}
else if (n == 0)
{
printf("Last digit of %i is %i and is 0\n", n);
}
else if (n < 6 && !0)
{
printf("Last digit of %i is %i and is and is less than 6 and not 0\n", n);
}

return (0);
}
