#include <stdio.h>

int main(){

	/*Write a program that allows the user print out a string a specific number of  times.
	 *
	 *
	 * Honestly i dont know how this worked, below are the lines of code i coppied from google, and then i manipulate it
	 * please i'll need further explanation.
	 *
	 * this code prints 'Hello world' several times as output'
	 *
	 * #include <stdio.h>
	 * void main ()
	 * {
	 * int num, i;
	 *
	 * printf(Enter the number of times the string should be printed: )
	 * scanf(%d, &num);
	 * 
	 *
	 * for( i = 1; i <= num; i++)
	 * 
	 *{
	 * printf (Hello world\n);
	 *}
	 }
	 */

	char name[20]; 

         printf("Enter your name:");
         scanf("%s", name);

         int num, i;

         printf("Enter the number of times your name should be printed: ");
         scanf("%d", &num);

         for (i = 1; i <= num; i++)
        {
        printf("%s\n", name );
        }

	 return 0;
}
