// Program to print a rectangle of stars dynamically, taking the input of row and column from user.

//  * * * *
//  * * * *     for i=3, j=4
//  * * * * 

#include <stdio.h>
int main()
{                                      
   int i;                               
   printf ("Enter the row: ");          
   scanf ("%d", &i);                  
   
   int j;
   printf ("Enter the column: ");
   scanf ("%d", &j); 
   
   for (int a=1; a<=i; a++)
   {
   	  for (int b=1; b<=j; b++)
   	  {
   	  	 printf ("* ");
	  }
	  printf ("\n");
   }
   
   return 0;
}
