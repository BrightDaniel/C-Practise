#include <stdio.h>
/**
 * main - Write a program to assign classes to different student based on their age
 *
 * Return: 0
 */
int main(void)
{
	int age;

	printf("Enter your age\n");
	scanf("%d", &age);
	switch (age)
	{
		case 6:
			printf("Class 1\n");
			break;
		case 8:
			printf("Class 2\n");
			break;
		case 10:
			printf("Class 3\n");
			break;
		case 12:
			printf("Class 4\n");
			break;
		case 14:
			printf("Class 5\n");
			break;
		case 16:
			printf("Class 6\n");
			break;
		case 18:
			printf("Class 8\n");
			break;
		default:
			printf("Sorry, you do not belong to any class\n");
	}
	return (0);
}
