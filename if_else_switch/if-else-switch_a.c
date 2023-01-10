#include <stdio.h>
/**
 * main - print lowercase character with putchar
 * 
 * written by mufatech
 *
 * Return: 0
*/
int main()
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
}
