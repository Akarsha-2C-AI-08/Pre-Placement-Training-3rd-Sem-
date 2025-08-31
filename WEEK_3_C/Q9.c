#include <stdio.h>
#include <stdlib.h>

struct Node{ int data; struct Node* next; };

int main(){
    struct Node *head=NULL,*t;
    for(int i=5;i>=1;i--){ t=(struct Node*)malloc(sizeof(struct Node)); t->data=i; t->next=head; head=t; }
    struct Node *slow=head,*fast=head;
    while(fast && fast->next){ slow=slow->next; fast=fast->next->next; }
    printf("Middle=%d\n",slow->data);
    return 0;
}