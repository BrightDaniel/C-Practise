#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - writing a code
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("the string and is greater than 5\n");
	}
	if (n == 0)
	{
		printf("the string and is 0\n");
	}
	if (n < 6 && n != 0)
	{
		printf("the string and is less than 6 and not 0\n");
	}
	return (0);
}
