#include <stdio.h>
#include <stdlib.h>

struct Node{ int data; struct Node* next; };

int main(){
    struct Node *top=NULL,*t;
    t=(struct Node*)malloc(sizeof(struct Node)); t->data=5; t->next=top; top=t;
    t=(struct Node*)malloc(sizeof(struct Node)); t->data=10; t->next=top; top=t;
    printf("Pop=%d\n",top->data); t=top; top=top->next; free(t);
    printf("Top=%d\n",top->data);
    return 0;
}