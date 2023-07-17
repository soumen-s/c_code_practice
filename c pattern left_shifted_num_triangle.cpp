// Program to print a number triangle dynamically, taking the input of size from user.

// 1
// 1 2     for n=4
// 1 2 3
// 1 2 3 4

#include <stdio.h>
int main()
{
   int n;
   printf ("Enter the size of the triangle: ");
   scanf ("%d", &n);
   
   for (int i=1; i<=n; i++)
   {
   	 for (int j=1; j<=i; j++)
   	 {
   	    printf ("%d ", j);
	 }
	  printf ("\n");
   }
   
   return 0;
}
