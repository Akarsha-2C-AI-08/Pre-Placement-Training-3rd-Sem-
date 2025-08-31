#include <stdio.h>
#include <stdlib.h>

struct Node{ int data; struct Node* next; };

int main(){
    int n=7,k=3;
    struct Node *head=NULL,*last=NULL,*t;
    for(int i=1;i<=n;i++){
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=i;
        if(!head){ head=t; head->next=head; last=head; }
        else{ last->next=t; t->next=head; last=t; }
    }
    struct Node *p=head,*q=NULL;
    while(p->next!=p){
        for(int i=1;i<k;i++){ q=p; p=p->next; }
        q->next=p->next; free(p); p=q->next;
    }
    printf("Survivor=%d\n",p->data);
    return 0;
}