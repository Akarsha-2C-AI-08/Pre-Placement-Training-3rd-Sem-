#include <stdio.h>
#include <stdlib.h>

struct Node{ int data; struct Node* next; };

struct Node* merge(struct Node* a, struct Node* b){
    if(!a) return b; if(!b) return a;
    if(a->data<b->data){ a->next=merge(a->next,b); return a; }
    else{ b->next=merge(a,b->next); return b; }
}

void print(struct Node* h){ while(h){ printf("%d ",h->data); h=h->next; } printf("\n"); }

int main(){
    struct Node *a=NULL,*b=NULL,*t;
    for(int i=3;i>=1;i--){ t=(struct Node*)malloc(sizeof(struct Node)); t->data=i*2; t->next=a; a=t; }
    for(int i=3;i>=1;i--){ t=(struct Node*)malloc(sizeof(struct Node)); t->data=i*2-1; t->next=b; b=t; }
    struct Node* head=merge(a,b);
    print(head);
    return 0;
}