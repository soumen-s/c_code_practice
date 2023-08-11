// Program to know about the usage of strcpy

#include <stdio.h>
#include <string.h>

int main() 
{
   char arr1[30], arr2[30];
   
   printf ("Enter the string arr1: ");
   scanf ("%[^\n]", &arr1);              // Here ^ is caret operator. It helps us to ignore a particular character.
   
   strcpy(arr2,arr1);                    // if we use "%[^m]" and give input-> soumen,, the output will be->sou,, 
                                         // as after m all will terminate
   
   printf ("\nThe string copied to arr2 is: %s", arr2);
   return 0;
}
