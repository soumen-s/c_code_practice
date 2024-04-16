// Program to perform STRING PALINDROME also when the string is not in proper case

#include <stdio.h>
#include <ctype.h> // for tolower
int main() 
{
    char arr[] = "AbcBa";
    int len = 0;
    
    for(len=0; arr[len] != '\0'; len++);  // Here i've used a different approach of length calculation
                                          // using the for loop condition only. 
                                          // '\0',null character, denotes the end of a string. 
                                          
    printf("The length of the string is : %d\n",len); // calculated

    int start=0, end=len-1;
    while(start <= end)
    { 
        if(tolower(arr[start++]) == tolower(arr[end--])) // by chance if the string is in upper or
        {                                                // lower case, then we'll convert all the 
            printf("This is a palindom string");         // string into lower or upper case.
            return 0;                                    // *Along with increment & decrement.
        }
    }
    printf("This is not a palindom string");
    return 0;
}