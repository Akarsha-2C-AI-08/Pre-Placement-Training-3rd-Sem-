#include <stdio.h>
#define MAX 10

int main(){
    int q[MAX],front=0,rear=-1;
    for(int i=1;i<=4;i++) q[++rear]=i;
    int st[MAX],top=-1;
    while(front<=rear) st[++top]=q[front++];
    while(top!=-1) printf("%d ",st[top--]);
    return 0;
}