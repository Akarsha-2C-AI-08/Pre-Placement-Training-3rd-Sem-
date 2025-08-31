#include <stdio.h>
#include <stdlib.h>

struct Node{ int data; struct Node* next; };

int main(){
    struct Node *head=NULL,*last=NULL,*t;
    for(int i=1;i<=4;i++){
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=i; t->next=head;
        if(!head){ head=t; head->next=head; last=head; }
        else{ last->next=t; t->next=head; last=t; }
    }
    t=head;
    do{ printf("%d ",t->data); t=t->next; }while(t!=head);
    return 0;
}