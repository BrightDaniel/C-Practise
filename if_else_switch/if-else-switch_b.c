#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*
*main - entry point
*To print output of a program
*Return : 0;
*/

int main(void)
{
        int n,last-digit;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        last-digit = n % 10;
	if (last-digit > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, last-digit);
	}
	else-if (last-digit == 0)
	{

		printf("last digit of %d is %d is 0\n", n, last-digit);
	}

	else (last-digit < 6 && last-digit = 0)
	{
		printf("last digit of %d is %d is less than 0\n", n, last-digit);
	{
        return (0);

}

