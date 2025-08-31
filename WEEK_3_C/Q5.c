#include <stdio.h>
#include <stdlib.h>

struct Node{ int data; struct Node* next; };

int main(){
    struct Node *head=NULL,*t;
    for(int i=1;i<=4;i++){ t=(struct Node*)malloc(sizeof(struct Node)); t->data=i*10; t->next=head; head=t; }
    int key=20,found=0;
    for(t=head;t;t=t->next) if(t->data==key){ found=1; break; }
    if(found) printf("Found\n"); else printf("Not Found\n");
    return 0;
}