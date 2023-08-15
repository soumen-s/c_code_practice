#include <stdio.h>
#include <string.h>

typedef struct student
{
    char fname[10];
    char lname[10];
    int age;
    char section;
    float grade;
} student;

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    student arr[n];

    // Consume the newline character left in the input buffer
    getchar();

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the data about student %d:\n", i + 1);

        printf("\nEnter first name: ");
        scanf("%s", arr[i].fname);

        printf("Enter last name: ");
        scanf("%s", arr[i].lname);

        printf("Enter age: ");
        scanf("%d", &arr[i].age);

        printf("Enter section: ");
        scanf(" %c", &arr[i].section); 

        printf("Enter grade: ");
        scanf("%f", &arr[i].grade);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n\nName: %s %s", arr[i].fname, arr[i].lname);
        printf("\nAge: %d", arr[i].age);
        printf("\nSection: %c", arr[i].section);
        printf("\nGrade: %f", arr[i].grade);
    }

    return 0;
}

