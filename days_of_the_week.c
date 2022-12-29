#include <stdio.h>
/**
 * main - Entry point
 * Description- To print the days of the week
 * Return: 0;
 *
 */

int main (void)
{
	int day;
	printf("Enter no of the week\n");
	scanf("%d", &day );

	switch (day)
	{
	case 1:
		printf("First day of the week\n");
		break;
	case 2:
		printf("Second day of the week\n");
		break;
	case 3:
		printf("Third day of the week\n");
		break;
	case 4:
		printf("Fourth day of the week\n");
		break;
	case 5:
		printf("Fifth day of the week\n");
		break;
	case 6:
		printf("Sixth day of the week\n");
		break;
	case 7:
		printf("Seventh day of the week\n");
		break;
	default :
		printf("None of the days of the week\n");
	}
	return (0);
}
