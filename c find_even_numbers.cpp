// Program to print the even numbers upto a particular number
#include <stdio.h>
int main() 
{
   int n;
   
   printf ("Enter a number to get all the even numbers upto that number: ");
   scanf ("%d",&n);
   
   for(int i=1; i<=n; i++)
   {
       if (i%2 == 0)
       {
            printf("%d ",i);
       }
       else
       {
       	    continue;
	   }
       
   }
  return 0;
}
