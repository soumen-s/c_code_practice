// 

#include <stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = 8;
    int target = 12;
    int count = 0;
    
    printf ("All the combination are: \n");
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            for (int k=j+1; k<n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    count ++;
                    printf ("%d %d %d\n",arr[i],arr[j],arr[k]);
                }    
            }
        }
    }
    
    printf ("\nSo total no. of combinations are: %d", count);
    return 0;
}
