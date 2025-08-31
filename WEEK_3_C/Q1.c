#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node *next; };

void print(struct Node* head){
    while(head){ printf("%d ",head->data); head=head->next; }
    printf("\n");
}

int main(){
    struct Node *head=NULL,*t;
    for(int i=3;i>=1;i--){
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=i; t->next=head; head=t;
    }
    print(head);
    return 0;
}