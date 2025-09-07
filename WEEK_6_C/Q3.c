#include <stdio.h>
#define MAX 5

int main(){
    int q[MAX],front=0,rear=0;
    q[rear]=1; rear=(rear+1)%MAX;
    q[rear]=2; rear=(rear+1)%MAX;
    printf("Dequeue=%d\n",q[front]); front=(front+1)%MAX;
    printf("Front=%d\n",q[front]);
    return 0;
}