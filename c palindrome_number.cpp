// Program to check whether a number is palindrome number or not
#include<stdio.h>  
int main()    
{    
  int n,r,sum=0;    
  printf("Enter the number = ");    
  scanf("%d",&n);    
  int temp=n;  
    
  while(n>0)     
  {    
   r=n%10;    
   sum=(sum*10)+r;    
   n=n/10;    
  }  
    
 if(temp==sum)    
  printf("\n%d is a palindrome number. ", temp);    
 else    
  printf("\n%d is not a palindrome number.", temp);   
  
  return 0;  
}   
