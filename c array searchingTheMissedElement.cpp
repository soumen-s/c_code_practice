// Program to search an missed element from the array 

#include <stdio.h>

int main() 
{
    
    int arr[10] = {1,2,3,4,5,7,8,9,10};
    int n=10;
    
    int sum=0;
    for (int i=0; i<n-1; i++)  // sum of all the bounded elements except that unknown element
    {
        sum = sum + arr[i];
    }
    
    int actSum = 0;
    for (int i=1; i<=n; i++) // sum of all elements in the bound
    {
        actSum += i;
    }
    
    int missedEle = actSum - sum; // so the difference will be that missed element
    printf ("%d", missedEle);
    
    return 0;
}
