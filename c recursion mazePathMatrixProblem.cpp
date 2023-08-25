// Program to print a matrix problem named maze path

// In this program, we are considering a matrix named 'maze'. According to this program we had to reach our 
// destination (suppose m,n) starting from (1,1). The condition is ,two types of shifts are allowed over there.
// Only the right shift and the down shift. And we have to calculate the number of total possible ways.

#include <stdio.h>
int maze (int cr, int cc, int er, int ec)
{
	int rightWays = 0;
	int downWays = 0;
	
	if (cr==er && cc==ec)
	{
		return 1;
	}
	
	if (cr < er && cc < ec)
	{
		rightWays += maze(cr, cc+1, er, ec);
		downWays += maze(cr+1, cc, er, ec);
	}
	
	if (cr == er)
	{
		rightWays += maze(cr, cc+1, er, ec);
	}
	
	if (cc == ec)
	{
		downWays += maze(cr+1, cc, er, ec);
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
	
	printf ("\nThe total number of ways are: %d", maze(1,1,r,c));
   return 0;	
}
