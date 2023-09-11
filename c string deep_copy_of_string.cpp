// program to shift the array elements from one pointer to another

#include <stdio.h>
#include <string.h>
int main()  
{
	char s1[] = "Mr. Introvert";
	char *ptr1 = s1;
	
	int size=0;
	int i=0;
	
	while (s1[i] != '\0')
	{
		size ++;
		i++;
	}
	
	char s2[size];
	char *ptr2 = s2;
	
	for (int i=0; i<=size; i++)
	{
		while (s1[i] != '\0')
		{
			ptr2 = ptr1;   // shifting the array from 1 pointer to another pointer
			i++;
		}
	}
	
	printf ("%s\n", ptr1);
    printf ("%s", ptr2);
	
  return 0;	
}
