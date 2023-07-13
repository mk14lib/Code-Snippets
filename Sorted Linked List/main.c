// Implented bubble sort on linked list

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// declaration of singly linked list
struct node {
    int data;
    struct node* next;
};

// create new node function
struct node* create_node(int data)
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}


// insert new node function 
void insert_node(struct node** head, int data)
{
    struct node* new_node = create_node(data);
    if(*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        struct node* current = *head;
        
        // reach the end of list 
        while(current->next != NULL)
        {
            current = current->next;
        }
        
        // insert new node in the end of list
        current->next = new_node;
    }
}


// print singly linked list items function
void printList(struct node* head)
{
    struct node* current = head;
    while(current != NULL)
    {
        printf(" %d", current->data);
        current =  current->next;
    }
    printf("\n");
}

// bubble sort function
void bubbleSort(struct node* head)
{
    struct node* current, *index;
    current = index = head;
    while(current != NULL)
    {
        index = current->next;
        while(index != NULL)
        {
            if(current->data > index->data)
                current->data ^= index->data ^= current->data ^= index->data;
            index = index->next;
        }
        current = current->next;
    }
}

// main function: execution starting point
int main()
{
    srand(time(NULL));
    struct node* head = NULL;
    for(int i = 0; i < 5; i++) insert_node(&head, rand()%100+1);
    printList(head);  
    bubbleSort(head);
    printList(head);
    return 0;
}
