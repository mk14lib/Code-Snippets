#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

// main function: execution starting point
int main()
{
    struct node* head = NULL;
    
    if(isEmpty(head))
    {
        printf(" Queue is Empty\n");
    }
    
    printf("\n Enqueue Operation:");
    for(int i=2; i<10; i++)
    {
        enqueue(&head, i*i);
    }
    printList(head);
    
    printf("\n Dequeue Operation:");
    dequeue(&head);
    printList(head);
    front(head);
    
    printf("\n Enqueue Operation:");
    enqueue(&head, 23);
    enqueue(&head, 45);
    printList(head);
    back(head);
    
    printf("\n Dequeue Operation:");
    dequeue(&head);
    printList(head);
    
    front(head);
    back(head);
    
    return 0;
}

