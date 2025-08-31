#include <stdio.h>
#include <stdlib.h>

struct Node{ int data; struct Node* next; };

void print(struct Node* h){ while(h){ printf("%d ",h->data); h=h->next; } printf("\n"); }

int main(){
    struct Node *head=NULL,*t,*prev=NULL,*next=NULL;
    for(int i=1;i<=3;i++){ t=(struct Node*)malloc(sizeof(struct Node)); t->data=i; t->next=head; head=t; }
    t=head;
    while(t){ next=t->next; t->next=prev; prev=t; t=next; }
    head=prev;
    print(head);
    return 0;
}