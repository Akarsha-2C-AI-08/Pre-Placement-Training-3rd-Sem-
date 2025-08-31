#include <stdio.h>
#include <stdlib.h>

struct Node{ int data; struct Node *prev,*next; };

int main(){
    struct Node *head=NULL,*last=NULL,*t;
    for(int i=1;i<=3;i++){
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=i; t->next=NULL; t->prev=last;
        if(!head) head=t; else last->next=t;
        last=t;
    }
    for(t=head;t;t=t->next) printf("%d ",t->data);
    return 0;
}