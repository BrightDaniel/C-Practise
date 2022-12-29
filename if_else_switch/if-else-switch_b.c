#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Description: to print last digit of number
 *
 * Return: Always 0.
 */

int main(void)
{
	int n, lastDigit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;
	printf("last digit of,: %d is %d\n", n, lastDigit);
	if (lastDigit > 5)
	{
		printf(" and is greater than 5\n");
	}
	if (lastDigit == 0)
	{
		printf("and is 0");
	}
	if (lastDigit < 6 && lastDigit != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
