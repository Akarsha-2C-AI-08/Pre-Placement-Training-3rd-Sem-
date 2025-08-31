#include <stdio.h>
#include <stdlib.h>

struct Node{ int data; struct Node *prev,*next; };

int main(){
    struct Node *head=NULL,*last=NULL,*t;
    for(int i=1;i<=3;i++){
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=i; t->prev=last; t->next=NULL;
        if(!head) head=t; else last->next=t;
        last=t;
    }
    t=head; last=NULL;
    while(t){
        last=t; t=t->next;
    }
    for(t=last;t;t=t->prev) printf("%d ",t->data);
    return 0;
}