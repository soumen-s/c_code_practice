// Program to print the length of a string.
#include <stdio.h>
#include <string.h>

int main() 
{
   char arr[30];
   
   printf ("Enter the string: ");
   scanf ("%[^\n]", &arr);
   
   printf ("\nThe length is: %ld", strlen(arr));
   return 0;
}
