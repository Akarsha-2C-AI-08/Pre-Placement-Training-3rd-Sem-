#include <stdio.h>
#include <stdlib.h>

struct Node{ int data; struct Node* next; };

int main(){
    struct Node *common=(struct Node*)malloc(sizeof(struct Node));
    common->data=30; common->next=(struct Node*)malloc(sizeof(struct Node));
    common->next->data=40; common->next->next=NULL;

    struct Node *a=(struct Node*)malloc(sizeof(struct Node));
    a->data=10; a->next=(struct Node*)malloc(sizeof(struct Node));
    a->next->data=20; a->next->next=common;

    struct Node *b=(struct Node*)malloc(sizeof(struct Node));
    b->data=15; b->next=common;

    struct Node *p=a,*q=b;
    int la=0,lb=0;
    while(p){ la++; p=p->next; }
    while(q){ lb++; q=q->next; }
    p=a; q=b;
    if(la>lb) for(int i=0;i<la-lb;i++) p=p->next;
    else for(int i=0;i<lb-la;i++) q=q->next;
    while(p && q && p!=q){ p=p->next; q=q->next; }
    if(p) printf("Intersect at %d\n",p->data);
    else printf("No intersection\n");
    return 0;
}
