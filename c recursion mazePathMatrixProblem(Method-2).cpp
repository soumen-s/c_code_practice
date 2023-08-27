// Program to print a mattrix problem named maze path   method- 2

// For this program, we are also considering a matrix named 'maze'. According to this program we had to reach our 
// destination (1,1) starting from (suppose m,n). The condition is ,two types of shifts are allowed over there.
// Only the right shift and the down shift. And we have to calculate the number of total possible ways in that matrix.

#include <stdio.h>           // rightways shift means = (m,n-1)
int maze ( int m, int n)     // downways shift means = (m-1,n)
{
	int rightWays = 0;
	int downWays = 0;
	
	if (m==1 && n==1)
	      return 1;
	      
	if (m==1)
	{
		rightWays += maze(m,n-1);
    }
	
	if (n==1)
	{
		downWays += maze(m-1,n);
    }   
	
	if (m>1 && n>1)
	{
		rightWays += maze(m,n-1);
		downWays += maze(m-1,n);
	}   
	
   int totalWays = rightWays + downWays;	
   return totalWays;
}
 
int main()
{
	int r,c;
	
	printf ("Enter the row: ");
	scanf ("%d", &r);
	
	printf ("Enter the column: ");
	scanf ("%d", &c);
	
	printf ("\nThe total number of ways are: %d", maze(r,c));
   return 0;	
}
