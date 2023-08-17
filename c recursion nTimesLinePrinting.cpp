// Program to print a line nth time through recursion

#include <stdio.h>
void statement(int x)
{
	if (x==0) return;   // Base case- for ending the recursion loop
	printf ("Good Morning\n");
	statement(x-1);  // recursive call
	return;
}

int main()
{
	int n;
	printf ("\nEnter the number: ");
	scanf ("%d", &n);
	
    statement(n);
	
   return 0;	
}
