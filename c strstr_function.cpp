#include<stdio.h>  
#include <string.h>  
  
int main()
{    
  char str[100]="this is all about strstr function in string";    
  char *sub;    
  sub=strstr(str,"about");    // from that string it will print
  printf("\nSubstring is: %s",sub);  
    
 return 0;    
}    
