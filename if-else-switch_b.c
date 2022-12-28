#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function to print out the output numbers
 * Return: 0;
 */
int main(void)
{
  	int n, last_digit;

	srand(time(0))	
	n = rand() - RAND_MAX / 2;			

	/* your code goes there */		

	last_digit = n % 10; // last digit of a number
		
	printf("Last digit of %d is %d \n", n, last_digit);
	
	if ( last_digit > 5)	
	{		
		printf("and is greater than 5\n")
										
	}							
	if ( last_digit == 0)
       	{	
		printf("and is 0\n");		
	}	
	if (last_digit < 6 && !=0 )	
	{
		printf("and is less than 6 and not 0\n");
	}	


	return (0);
}
