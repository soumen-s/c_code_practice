// program to swap two numbers using XOR operation between two integers
#include <stdio.h>

int main()
{
	int a = 10;
	int b = 15;
	
	a = a^b;
	b = a^b;
	a = a^b;
	
	printf ("a is: %d", a);
	printf ("\nb is: %d", b);
  return 0;	
}
