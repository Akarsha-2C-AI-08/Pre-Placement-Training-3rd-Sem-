#include <stdio.h>
#define MAX 5

int main(){
    int q[MAX],front=0,rear=-1;
    rear++; q[rear]=10;
    rear++; q[rear]=20;
    printf("Dequeue=%d\n",q[front++]);
    printf("Front=%d\n",q[front]);
    return 0;
}