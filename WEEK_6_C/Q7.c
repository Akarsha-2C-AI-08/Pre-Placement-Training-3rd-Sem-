#include <stdio.h>
#define MAX 5

int main(){
    int dq[MAX],front=2,rear=2;
    dq[rear++]=10;
    dq[--front]=20;
    printf("%d %d\n",dq[front],dq[rear-1]);
    return 0;
}