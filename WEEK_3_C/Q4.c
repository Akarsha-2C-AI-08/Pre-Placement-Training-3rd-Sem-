#include <stdio.h>
#include <stdlib.h>

struct Node{ int data; struct Node* next; };

int main(){
    struct Node *head=NULL,*t;
    int cnt=0;
    for(int i=1;i<=5;i++){ t=(struct Node*)malloc(sizeof(struct Node)); t->data=i; t->next=head; head=t; }
    t=head;
    while(t){ cnt++; t=t->next; }
    printf("Count=%d\n",cnt);
    return 0;
}