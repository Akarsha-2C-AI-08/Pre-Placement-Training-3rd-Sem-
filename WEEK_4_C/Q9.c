#include <stdio.h>
#include <stdlib.h>

struct Node{ int data; struct Node* next; };

int main(){
    struct Node *head=NULL,*last=NULL,*t;
    for(int i=1;i<=6;i++){
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=i;
        if(!head){ head=t; head->next=head; last=head; }
        else{ last->next=t; t->next=head; last=t; }
    }
    struct Node *slow=head,*fast=head;
    while(fast->next!=head && fast->next->next!=head){
        slow=slow->next; fast=fast->next->next;
    }
    struct Node *head2=slow->next; slow->next=head;
    if(fast->next->next==head) fast=fast->next;
    fast->next=head2;
    t=head; do{ printf("%d ",t->data); t=t->next; }while(t!=head);
    printf("\n");
    t=head2; do{ printf("%d ",t->data); t=t->next; }while(t!=head2);
    return 0;
}