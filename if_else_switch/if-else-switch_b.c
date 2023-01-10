#include <stdlib.h>
#include <time.h>
/**
 * main - print the last digit of a number
 *
 * Return: 0
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int n; last digit;
	last_digit = n % 10;
	printf("The last digit %d of n is %d", n, last_digit)
		if (last_digit > 5 )
		{
			printf("The last is greater than 5\n");
		}
	else if (last_digit == 0)
	{
		printf("The last digit is 0\n");
	}
	else if (last digit < 6 && last digit != 0)
	{
		printf("The last digit is less than 6 and not 0\n");
	}

	return (0); /* mufatech */
}
