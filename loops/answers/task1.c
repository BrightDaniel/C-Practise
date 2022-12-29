#include <stdio.h>

/**
 * main - print alphabet in lowercase
 * Return: 0
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		printf("%c\n", alpha);
	return (0);
}
