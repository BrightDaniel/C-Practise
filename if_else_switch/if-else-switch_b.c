#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns random numbers to the variable n
 * and prints last digit of variable stored in n
 * @a: last digit of n
 * Return: 0;
 */
int main(void)
{
	        int n;
		int a;

		srand(time(0));
	       	n = rand() - RAND_MAX / 2;

	       	/* your code goes there */

		a = n % 10; //this is the last digit of n
			printf("Last digit of %d is  %d\n", n, a); // prints out last digit of n
		if (a > 5) // if the last digit of n is > 5
		{
			printf(" and is greater than 5\n");
		}
		else if (a == 0)
		{
			printf("and is 0\n");
		}
		else
		{
			printf(" and is less than 6 and not 0\n");
		}
		printf('\n');

		return (0);
}
