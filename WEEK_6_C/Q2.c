#include <stdio.h>
#include <stdlib.h>

struct Node{ int data; struct Node* next; };

int main(){
    struct Node *front=NULL,*rear=NULL,*t;
    t=(struct Node*)malloc(sizeof(struct Node)); t->data=1; t->next=NULL;
    front=rear=t;
    t=(struct Node*)malloc(sizeof(struct Node)); t->data=2; t->next=NULL;
    rear->next=t; rear=t;
    printf("Dequeue=%d\n",front->data);
    front=front->next;
    printf("Front=%d\n",front->data);
    return 0;
}