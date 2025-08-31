#include <stdio.h>
#include <stdlib.h>

struct Node{ int data; struct Node* next; };

int main(){
    struct Node *head=NULL,*t,*p;
    for(int i=3;i>=1;i--){ t=(struct Node*)malloc(sizeof(struct Node)); t->data=i; t->next=head; head=t; }
    head->next->next->next=head; // create loop
    struct Node *slow=head,*fast=head;
    int loop=0;
    while(fast && fast->next){
        slow=slow->next; fast=fast->next->next;
        if(slow==fast){ loop=1; break; }
    }
    if(loop) printf("Loop detected\n"); else printf("No loop\n");
    return 0;
}