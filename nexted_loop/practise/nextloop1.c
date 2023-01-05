#include <stdio.h>  
//program to print right angle star
//*
//**
//***  
int main()  
{ 	
	int i, j, rows;
	printf("Enter No of rows");
	scanf("%d", &rows);

	for (i = 0; i < rows; i++) // outer loop  
	{  
		for (j = 0; j <= i; j++) // inner loop  
		{  
			printf ("*"); // print the Star  
		}  
		printf ("\n");   
	} 
}  
