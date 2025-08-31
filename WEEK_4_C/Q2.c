#include <stdio.h>
#include <stdlib.h>

struct Node{ int data; struct Node *prev,*next; };

int main(){
    struct Node *head=NULL,*t;
    for(int i=3;i>=1;i--){
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=i; t->prev=NULL; t->next=head;
        if(head) head->prev=t;
        head=t;
    }
    for(t=head;t;t=t->next) printf("%d ",t->data);
    return 0;
}