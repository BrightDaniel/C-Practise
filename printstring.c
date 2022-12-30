#include <stdio.h>

int main(void)
{
	char str[25];
	int num;
	printf("what do you want to print\n");
	//scanf("%s", str);
	fgets(str, 25, stdin);
	//printf("the string you enter is: %s\n", str);
	printf("How many times you want to print\n");
	scanf("%d", &num);
	for (int time = 1; time <= num; time++)
	{
		printf("%s", str);
	}
}
