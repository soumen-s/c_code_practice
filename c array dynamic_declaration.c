#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef struct array
    {
        int n;
        int* A;
    }arr;
    
    arr* Arrstr; //structure variable
    Arrstr = (arr*)malloc(sizeof(arr)); // Size allocated for the structure
    
    printf("Enter size: ");
    scanf("%d", &Arrstr->n);
    
    Arrstr->A = (int*)malloc(sizeof(int)*Arrstr->n); // array size allocation
    
    for (int i=0; i<Arrstr->n; i++)
    {
        printf ("Enter arr[%d]: ",i+1);
        scanf("%d", &Arrstr->A[i]);
    }
    
    printf ("All the eleents of %d size array is: ",Arrstr->n);
    for (int i=0; i<Arrstr->n; i++)
    {
        printf ("%d ",Arrstr->A[i]);
    }
    
    return 0;
}
