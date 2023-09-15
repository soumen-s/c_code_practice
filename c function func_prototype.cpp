// Program to print a function through prototype declarations 

// Function Prototype is basically a type of function declaration    
// before calling that function, so that we can access the function from anywhere of the code..

#include <stdio.h>

void America()
{
	printf ("\nWe are in America.");  
}

//void Switzerland()
//{
//	printf ("\nWe are in Switzerland. ");
//	America();
//}

//void India()
//{
//	printf ("\nWe are in India.");
//	void Switzerland();
//	Switzerland();
//}

int main()          
{                 
	void India(); // function prototype
    India();      // function calling
	 
	return 0;
}

void Switzerland()
{
	printf ("\nWe are in Switzerland. ");
	America();
}
void India()
{
	printf ("\nWe are in India.");
	void Switzerland();   // function prototype
	Switzerland();        // function calling
}
