#include <stdio.h>
#include <stdlib.h>

struct Node{ int data; struct Node* next; };

int main(){
    struct Node *head=NULL,*last=NULL,*t;
    for(int i=1;i<=3;i++){
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=i;
        if(!head){ head=t; head->next=head; last=head; }
        else{ t->next=head; last->next=t; last=t; }
    }
    // insert new node at beginning
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=0; t->next=head;
    last->next=t; head=t;
    struct Node *p=head;
    do{ printf("%d ",p->data); p=p->next; }while(p!=head);
    return 0;
}