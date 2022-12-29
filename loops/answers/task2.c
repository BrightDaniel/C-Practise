/**#include<stdio.h>
int main()
{
	char string[10];

	printf("Enter the string: ");
	gets(string);

	printf("%s \n",string);

	return 0;
}*/

/*#include<stdio.h>
int main()
{
	char string[20];
	FILE *fp;
	fp=fopen("file.txt","r");
	fgets(string,20,fp);
	printf("The string is: %s",string);
	fclose(fp);
	return 0;
}*/
#include<stdio.h>
int main()
{
	char inno[50];
	int i, a;

	printf("Enter the String: ");
	fgets(inno, 80, stdin);

	printf("Here is the your string: \n%s",inno);

	printf("Enter the number of strings: ");
	scanf("%d", &i);

	for (a = 0; a <= i; a++)
	{
		printf("%s\n", inno);
	}
	return 0;
}
