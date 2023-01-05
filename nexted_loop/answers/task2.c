#include <stdio.h>

int main()
{
	//multiplication table


        int num;
        int x;

        printf("Enter a number: ");
        scanf("%d", &num);

        for (x = 1; x <= 12; x++)
        {
                printf("%d x %d = %d\n", num, x, num * x);
        }
        return (0);
}
