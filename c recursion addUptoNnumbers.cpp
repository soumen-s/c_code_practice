#include <stdio.h>

 int s=0; // also can pass that value through the functions
 void sum(int x)
{
  if (x==0)
  {
  	printf ("%d", s);  // because we have to print the sum until the value of x is 0
  	return;            // while 0, then print s, and then terminate the loop
  }
  
  s=s+x;
  sum(x-1);
  return;
}

int main()
{
	int n;
	
	printf ("\nEnter the number: ");
	scanf ("%d", &n);
	
	printf ("\nThe sum is: ");
	
	sum(n);
    
   return 0;	
}
