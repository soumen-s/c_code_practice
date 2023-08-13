// amstrong number - in case of three digit numbers

#include <stdio.h>
int main()                                
{                             
   int n;	
   int rem=0;
   int result=0;
   
   printf("Enter the number : ");
   scanf ("%d",&n);
   
   int orgNumber = n;

   while (orgNumber!=0)
   {
   	    rem = orgNumber%10;
   	    result += rem*rem*rem;
   	    orgNumber /= 10;
   }
   
   if (result == n)
    {
   	    printf ("\n%d is an armstrong number.",n);
    }
   else 
        printf ("\n%d is not an armstrong number.",n);
	
   return 0;
}
