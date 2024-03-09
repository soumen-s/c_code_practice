// QUES:- Suppose an array is given of 9 elements. the elements could be user defined. 
// And the output array will be an array in which all the odd numbers will have 
// to present after the even numbers.

#include <stdio.h>
#define max 9

int arr[max];


void arrayEvenOdd(int arr[])
{
        
    int arr2[max]; // Another array to store the result
    int j=0;  // Index to proceed the resultant array insertion
    
    for(int i=0; i<max; i++)  // Insert even numbers
    {
        if(arr[i]%2 == 0)
        {
            arr2[j] = arr[i];
            j++;
        }
    }
    
    for(int i=0; i<max; i++)  // Insert odd numbers
    {
        if(arr[i]%2 != 0)
        {
            arr2[j] = arr[i];
            j++;
        }
    }
    
    printf("The desired array is: ");
    for(int j=0; j<max; j++)
    {
        printf("%d ", arr2[j]);
    }
    
}

int main()
{
    printf("Enter all the 9 elements, that you wanna differentiate into even & odd: \n");
    for(int i=0; i<max; i++)
    {
        printf("Enter arr[%d]: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    arrayEvenOdd(arr);

  return 0;
}