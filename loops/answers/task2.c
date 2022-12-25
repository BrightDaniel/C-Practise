#include <stdio.h>


int main()
{
	//This program allows the user input/print out a string a specific number of  times
	
	int y;
	int numOfTimes;
	char string[150];

	printf("What string do you want to print out : ");
	scanf("%s", string);

	printf("How many times do you want it to be printed :");
	scanf("%d", &numOfTimes);

	for (y = 0; y < numOfTimes; y++)
    {
        printf("%s\n", string);
    }

    return (0);

}
