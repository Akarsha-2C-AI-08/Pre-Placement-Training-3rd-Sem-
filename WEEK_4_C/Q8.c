#include <stdio.h>
#include <stdlib.h>

struct Node{ int data; struct Node* next; };

int main(){
    struct Node *head=NULL,*last=NULL,*t;
    for(int i=1;i<=4;i++){
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=i;
        if(!head){ head=t; head->next=head; last=head; }
        else{ last->next=t; t->next=head; last=t; }
    }
    int key=2;
    struct Node *p=head,*prev=last;
    do{
        if(p->data==key){
            if(p==head) head=head->next;
            prev->next=p->next; free(p); break;
        }
        prev=p; p=p->next;
    }while(p!=head);
    t=head;
    do{ printf("%d ",t->data); t=t->next; }while(t!=head);
    return 0;
}