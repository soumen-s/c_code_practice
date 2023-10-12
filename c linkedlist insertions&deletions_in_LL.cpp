// program to perform all operations of a singly linked list 
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
} node;

////////////////////////////////////////////
void create(node** head)
{
    int n;
    printf("\nEnter the size: ");
    scanf("%d", &n);

    node* temp = NULL;

    for (int i = 0; i < n; i++)
    {
        node* newnode = (node*)malloc(sizeof(node));
        
        printf("Enter the data[%d]: ",i+1);
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (*head == NULL)
        {
            *head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
}

void display(node* ptr)
{
    while(ptr != NULL)
    {
       printf ("%d ", ptr->data);
       ptr = ptr->next;
    }   
}

////////////////////////////////////////////
void insertBeg(node** head)
{
    node* newnode = (node*)malloc(sizeof(node));
    create(head);

    printf("Enter the data to be inserted at the beginning: ");
    scanf("%d", &newnode->data);

    newnode->next = *head;
    *head = newnode;
}

////////////////////////////////////////////
void insertEnd(node** head)
{
    create(head);
    node* endnode = (node*)malloc(sizeof(node));

    printf("\nEnter the data you want to insert at the end: ");
    scanf("%d", &endnode->data);

    endnode->next = NULL;  // Make sure the new node points to NULL, as it's the new end of the list.

    if (*head == NULL)
    {
        *head = endnode;  // If the list is empty, the new node becomes the head.
        return;
    }

    node* current = *head;
    while (current->next != NULL)
    {
        current = current->next; // Traverse to the current end of the list.
    }

    current->next = endnode; // Connect the current end to the new end.
}

////////////////////////////////////////////
void insertAny(node** head)
{
    create(head);
    int x;
    printf("Enter the position you want to insert an extra node: ");
    scanf("%d", &x);

    node* nthnode = (node*)malloc(sizeof(node));

    printf("Enter that data: ");
    scanf("%d", &nthnode->data);

    node* hd = *head;
    node* prev = NULL;

    for (int i = 1; i < x; i++)
    {
        prev = hd;
        hd = hd->next;
    }

    if (prev == NULL) // Insert at the beginning
    {
        nthnode->next = *head;
        *head = nthnode;
    }
    else // Insert in the middle or end
    {
        prev->next = nthnode;
        nthnode->next = hd;
    }
}

////////////////////////////////////////////
void insertBeforeNode(node** head)
{
    create(head);
    int target_data;
    printf("\nEnter the data of the target node: ");
    scanf("%d", &target_data);

    node* newnode = (node*)malloc(sizeof(node));
    if (newnode == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("\nEnter the data to insert before the target node: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    
    if ((*head)->data == target_data)
    {
        newnode->next = *head;
        *head = newnode;
        return;
    }

    node* current = *head;
    while (current->next != NULL)
    {
        if (current->next->data == target_data)
        {
            newnode->next = current->next;
            current->next = newnode;
            return;
        }
        current = current->next;
    }

    printf("Target node not found in the list.\n");
    free(newnode);
}

////////////////////////////////////////////
void deleteBeg(node** head)
{
    create(head);
    if (*head == NULL)
    {
        printf("List is empty, cannot delete from the beginning.\n");
        return;
    }

    node* hold = *head;
    *head = (*head)->next;
    free(hold);
}

////////////////////////////////////////////
void deleteEnd(node** head)
{
    create(head);
    if (*head == NULL)
    {
        printf("List is empty, cannot delete from the end.\n");
        return;
    }

    if ((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
        return;
    }

    node* ptr1 = *head;
    node* ptr2 = (*head)->next;

    while (ptr2->next != NULL)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    ptr1->next = NULL;
    free(ptr2);
}

////////////////////////////////////////////

void deleteAny(node** head)
{
	create(head);
    int x;
    printf("\n\nEnter the node no. you want to delete: ");
    scanf("%d", &x);
    
    node* ptr1 = *head;
    node* ptr2 = (*head)->next;
    
    for (int i=0; i<x-2; i++) 
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    
      ptr1->next = ptr2->next;  // interconnecting ptr1, ptr2, and (ptr2 next), for removing the mid part
                                // ptr1 is now pointing ptr2->next(the node after ptr2)
      free(ptr2);
}

//------------------------------------------------------------------------------------------------

int main()
{
	
	printf ("\nSequence Of Operations ~");
	printf ("\n=========================\n");
	printf ("\n1. Insertion at the begining of a node.");
	printf ("\n2. Insertion at the end of a node.");
	printf ("\n3. Insertion at any position of a node.");
    printf ("\n4. Insert element before a user defined node.");
	printf ("\n5. Delete from the begining of a linked list''");
	printf ("\n6. Delete from the end of a linked list.");
	printf ("\n7. Delete from any position of a linked list.");
	
	
    node* head = NULL;
    int num;
    printf("\n\n\nEnter the number of the operation you want to apply: ");
    scanf("%d", &num);

   switch (num)
   {
    case 1:
        insertBeg(&head);
        break;
    case 2:
        insertEnd(&head);
        break;    
    case 3:
        insertAny(&head);
        break;
    case 4:
        insertBeforeNode(&head);
        break;
    case 5:
        deleteBeg(&head);
        break;
    case 6:
        deleteEnd(&head);
        break;
    case 7:
        deleteAny(&head);
        break;
    default:
        printf("Invalid operation number.\n");
        break;
    }

    printf("After the operation, the data of the linked list is: ");
    display(head);
    printf("\n");

    return 0;
}
