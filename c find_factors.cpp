// Program to find the factors of a number

#include <stdio.h>
int main()
{
   int num;
   
   printf ("Enter a number to get the factors: ");
   scanf ("%d",&num);
   
   printf ("\nAll factors of %d are: ",num);
   
   for (int i=1; i<=num; i++)
   {
   	    if (num % i == 0)
   	    {
   	    	printf ("%d, ",i);
		}
   	   
   }
   return 0;
}
