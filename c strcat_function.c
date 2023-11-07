// program to use a function to concatinate two strings
#include<stdio.h>  
#include <string.h>    

int main()
{    
  char ch[10]={'h', 'e', 'l', 'l', 'o', '\0'};    
  char ch2[10]={'c', '\0'};  
    
  strcat(ch,ch2);    
   
  printf("The first string is: %s", ch);    
  
 return 0;    
}    
