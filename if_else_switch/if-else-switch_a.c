#include <stdio.h>

/**
 * main- prints alphabelts in lower case 
 * followed by a new line.
 *
 * Return: 0
 */


int main(void)

{
	
	char lowc;
	 
	for (lowc = 'a'; lowc <= 'z'; lowc++);
	{
		putchar(lowc);
	}
	putchar('\n');
	return (0);

}
