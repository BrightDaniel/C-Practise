#include <stdio.h>

int main(void)
{
	char firstname[15];
	char lastname[15];
	int  *scores, result;
	printf("Type your first name: ");
	scanf("%s",firstname);
	printf("Type your last name: ");
	scanf("%s",lastname);
	printf("Type your scores: ");
	scanf("%d", scores);
	if (result = ((scores / 2) <= 50))
	{
		printf ("sorry you are out");
	}
	return(0);
}
