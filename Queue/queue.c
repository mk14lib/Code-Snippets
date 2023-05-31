#include <stdio.h>
#include <stdlib.h>
#include "queue.h"


// create new node function
struct node* create_node(int data)
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}


// insert new node function 
void enqueue(struct node** head, int data)
{
    struct node* new_node = create_node(data);
    if(*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        struct node* current = *head;
        
        // reach the end of queue
        while(current->next != NULL)
        {
            current = current->next;
        }
        
        // insert new node in the end of queue
        current->next = new_node;
    }
}

// dequeue existing node function
void dequeue(struct node** head)
{
    // if empty list ignore the call
    if(*head == NULL) return;
    
    // if not empty list
    struct node* current = *head;
    while(current->next != NULL)
    {   
        current->data = current->next->data;
        
        if(current->next->next == NULL) {
            current->next = current->next->next;
            return;
        }
        current = current->next;
    }
    return;
}

// function to print the head value of Queue
void front(struct node* head)
{
    struct node* current = head;
    printf("\n Queue Head: %d\n", current->data);
}

// function to print the Tail value of Queue
void back(struct node* head)
{
    struct node* current = head;
    while(current->next != NULL)
    {
        current = current->next;
    }
    printf("\n Queue Tail: %d\n", current->data); 
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

// function to check for the emptiness of Queue
bool isEmpty(struct node* head)
{
    if(head == NULL)
    {
        return true;
    }
    return false;
}
