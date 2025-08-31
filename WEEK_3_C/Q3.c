#include <stdio.h>
#include <stdlib.h>

struct Node{ int data; struct Node* next; };

void print(struct Node* head){
    while(head){ printf("%d ",head->data); head=head->next; }
    printf("\n");
}

int main(){
    struct Node *head=NULL,*t,*prev;
    for(int i=1;i<=3;i++){ t=(struct Node*)malloc(sizeof(struct Node)); t->data=i; t->next=head; head=t; }
    int key=2; prev=NULL; t=head;
    while(t && t->data!=key){ prev=t; t=t->next; }
    if(t){ if(prev) prev->next=t->next; else head=t->next; free(t); }
    print(head);
    return 0;
}