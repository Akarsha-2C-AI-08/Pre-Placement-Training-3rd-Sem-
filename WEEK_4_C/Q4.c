#include <stdio.h>
#include <stdlib.h>

struct Node{ int data; struct Node *prev,*next; };

int main(){
    struct Node *head=NULL,*t,*last=NULL;
    for(int i=1;i<=3;i++){
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=i; t->next=NULL; t->prev=last;
        if(!head) head=t; else last->next=t;
        last=t;
    }
    int key=2; t=head;
    while(t && t->data!=key) t=t->next;
    if(t){
        if(t->prev) t->prev->next=t->next;
        else head=t->next;
        if(t->next) t->next->prev=t->prev;
        free(t);
    }
    for(t=head;t;t=t->next) printf("%d ",t->data);
    return 0;
}