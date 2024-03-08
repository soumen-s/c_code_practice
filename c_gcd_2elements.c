// Program to find GCD of two numbers 

#include <stdio.h> 
  
int gcd(int a, int b) 
{ 
    int result = ((a < b) ? a : b); 
    
    while (result > 0) 
    { 
        if (a%result == 0 && b%result == 0) // Check if both a and b are divisible by result 
        { 
            break; 
        } 
        result--; 
    } 
  return result; 
} 
  
int main() 
{ 
    int a, b; 
    
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    
    printf("\nGCD of %d and %d is %d ", a, b, gcd(a, b)); 
    return 0; 
} 