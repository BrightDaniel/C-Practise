
#include <stdio.h>

int main()
{
    char name[50];
    int score;

    printf("what is your name? : ");
    fgets(name, 50, stdin);
    /**scanf("%s", name);
     * I dicovered that scanf will not allow space to input the second name so i used fgets*/
    printf("Welcome %sWhat is your score : ", name);
    scanf("%d", &score);
    int totalScore = score / 2;
    printf("Your score is : %d\n", totalScore);

    if (totalScore < 50)
    {
        printf("Sorry you are out\n");
    }
    else if (totalScore >= 50 && totalScore <= 80)
    {
        printf("You did well, Unfortunately you'll have to apply for the next cohort\n");
    }
    else if (totalScore >= 80 && totalScore <= 179)
    {
        printf("Congratulations, You're through to the next phase\n");
    }
    else
    {
        printf("invalid score");
    }

        return (0);
}
