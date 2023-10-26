// program to convert all the words of a string into lower case
#include<stdio.h>  
#include <string.h>  
  
int main()
{    
  char str[20];    
  printf("Enter the string: "); // we can add lower case and upper case as our wish
     
  gets(str);
  
  printf("String is: %s",str);  // normal  
  printf("\nLower String is: %s",strlwr(str));   // converting all into lower case
   
 return 0;    
}    
