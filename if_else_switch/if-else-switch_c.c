
#include <stdio.h>

/**
 * main - printing conditional statements
 * @r: represents result from score
 * Return: 0
 */

int main(void)
{
	    char fullname[30];
	    int score;
	    int r;

	printf(" Enter Your Name: \n");//prompts user to enter full name
	fgets(fullname, 30,stdin); // scanf can't accommodate full names bcos of existence of space

	printf(" Enter Your Score: \n");
	scanf(%d, &score);

	for ( r = score / 2)
	{
		if (r < 50)
		{
			printf(" \" Sorry you're out \" \n");
		}

		else if (r > 50 && r < 80)
		{
			printf(" \" You did well, unfortunately, you'll have 
			to apply for the next cohort \" \n");
		}

		else if (r > 80 && r < 179)
		{
			printf(" \" Congratulations, You're through to the next phase \" \n");
		}
		else
			printf("invalid score"\n);
	}
	return (0);
}

		
	
	
