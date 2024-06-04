// Program to check whether a 2D array matrix is a SPARSE MATRIX OR NOT

#include<stdio.h>

int main()
{
    int row, col, matrix[10][10];
    int count = 0;
    
    printf("\nEnter the number of rows and columns: ");
    scanf("%d%d",&row,&col);

    printf("\nEnter the matrix elements \n");
    for(int x=0; x<row; x++)   
    {
        for(int y=0; y<col; y++)   
        {
            scanf("%d", &matrix[x][y]);
            if(matrix[x][y] == 0)
            count++;  
        }
    }

    
    printf("\nThe entered matrix is: \n");
    for(int x=0; x<row; x++)   
    {
        for(int y=0; y<col; y++)  
        {
            printf("%3d", matrix[x][y]);
        }
      printf("\n");
    }

    // checking
    if( count > (row*col)/2 )
        printf("\nThe entered matrix is a Sparse Matrix.\n");
    else
        printf("\nThe entered matrix is not a Sparse Matrix.\n");
        
    return 0;
}