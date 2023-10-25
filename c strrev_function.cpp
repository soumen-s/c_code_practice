// function to print the string in reverse order
#include<stdio.h>  
#include <string.h> 
   
int main()
{    
  char str[20];  
    
  printf("Enter a string: ");    
  gets(str);  //reads string from console 
     
  printf("\nThe string is: %s",str); 
     
  printf("\nThe reversed String is: %s",strrev(str));  
    
 return 0;  
}
