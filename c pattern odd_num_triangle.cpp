// Program to print a triangle of odd numbers dynamically, taking the input of size from user.

// 1
// 1  3  
// 1  3  5
// 1  3  5  7
#include <stdio.h>                        
int main()                                
{                                         
   int n;                                 
   printf ("Enter the number: ");
   scanf ("%d", &n);
   
   for (int i=1; i<=n; i++)
   {
   	 int a=1;
   	  for (int j=1; j<=i; j++)
   	  {
   	  	 printf ("%d", a);
   	  	 a+=2;
	  }
	  printf ("\n");
   }
   
   return 0;
}
