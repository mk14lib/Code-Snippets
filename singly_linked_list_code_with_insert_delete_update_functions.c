#include <stdio.h>
#include <stdlib.h>

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

// delete existing node function
void delete_node(struct node** head, int data)
{
    // if empty list ignore the call
    if(*head == NULL) return;
    
    // if not empty list
    struct node* current = *head;
    while(current != NULL)
    {
        // if there is a match
        if(current->data == data)
        {
            // copy next node data to current node
            current->data = current->next->data;
            
            // copy next node address to current node address 
            current->next = current->next->next;
        }
        current = current->next;
    }
    return;
}

// update list item function
void update_node(struct node** head, int src, int dest)
{
    if(*head == NULL) return;
    struct node* current = *head;
    while(current!=NULL)
    {
        if(current->data == src)
        {
            current->data = dest;
            return;
        }
        current = current->next;
    }
    return;
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

// main function: execution starting point
int main()
{
    struct node* head = NULL;
    printf(" My Singly Linked List: \n");
    for(int i=2; i<10; i++)
    {
        insert_node(&head, i*i);
    }
    printList(head);
    
    printf("\n After Deletion of \'9\':\n");
    delete_node(&head, 9);
    printList(head);
    
    printf("\n After Updation of \'16\' with \'21\':\n");
    update_node(&head, 16, 21);
    printList(head);
    return 0;
}