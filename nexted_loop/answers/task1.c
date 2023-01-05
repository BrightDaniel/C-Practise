#include <stdio.h>

int main()
{
	//program to print out the numbers a user 
	
	#include <stdio.h>

    int x, y, numRow;

    printf("Enter the number of row you want to print\n");
    scanf("%d", &numRow);

    for (x = 0; x < numRow; x++)
    {
        for (y = 0; y < x; y++)
        {
            printf("%d", y);
        }
        printf("\n");
    }

}
