#include <stdio.h>
/**
 * main - Write a program to get the user First and last name, score
 *
 * Return: 0
 */
int main(void)
{
	printf("Enter your first name:\n");
	char first;

	scanf("%s", &first);
	printf("Enter your last name\n");

	char last;

	scanf("%s", &last);
	printf("Enter your score:\n");
	int score;

	scanf("%d", &score);
	int result;
	result = score / 2;

	if (result < 50)
	{
		printf("Sorry you're out\n");
	}
	if (result > 50 && result < 80)
	{
		printf("You did well, Unfortunately you'll have to apply for the next cohort\n");
	}
	if (result > 80 && result < 179)
	{
		printf("Congratulations, You're through to the next phase\n");
	}
	return (0);
}
