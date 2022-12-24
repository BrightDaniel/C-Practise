#include <stdio.h>

/*main - assign classes to different student based on their age
using switch statement*/

int main(){
    int studentAge;

    printf("Please input your age here : ");
    scanf("%d", &studentAge);

    switch(studentAge)
    {
    case 6 :
        printf("Class 1");
        break;
    case 8 :
        printf("Class 2");
        break;
    case 10 :
        printf("Class 3");
        break;
    case 12 :
        printf("Class 4");
        break;
    case 14 :
        printf("Class 5");
        break;
    case 16 :
        printf("Class 6");
        break;
    case 18 :
        printf("Class 8");
        break;
    default :
        printf("Sorry, you do not belong to any class");
    }

    return 0;
}

