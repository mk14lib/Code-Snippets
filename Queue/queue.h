#ifndef QUEUE_H
#define QUEUE_H

// user-defined boolean data type
typedef enum{
    false,
    true
}bool;

// user-defined Queue
struct node {
    int data;
    struct node* next;
};

struct node* create_node(int data);
void enqueue(struct node** head, int data);
void dequeue(struct node** head);
void front(struct node* head);
void back(struct node* head);
void printList(struct node* head);
bool isEmpty(struct node* head);

#endif /*QUEUE_H*/