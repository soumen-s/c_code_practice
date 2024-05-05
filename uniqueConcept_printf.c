// Program to see what the printf function actually returns.

/*
    printf actually returns the number of characters 
    of whatever it's gonna printing.
*/

#include <stdio.h>

int main()
{
    int x = printf("Hello World"); // here it will print the statement also
    
    printf("%d ", x);

    return 0;
}

/*  
    When we only want to show the returns from the printf function, the 
    sprintf() function formats the string "Hello World" into the buffer
    without printing it to the console. Then, x will contain the number
    of characters written into the buffer, which you can print or use as needed.
    
    char buffer[100]; 
    int x = sprintf(buffer, "Hello World");
    printf("%d", x);
*/
