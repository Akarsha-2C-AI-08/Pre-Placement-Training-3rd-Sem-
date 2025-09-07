#include <stdio.h>
#define MAX 100

int main(){
    int n=7,k=3,q[MAX],front=0,rear=-1;
    for(int i=1;i<=n;i++) q[++rear]=i;
    while(front!=rear){
        for(int i=1;i<k;i++){ q[++rear]=q[front++]; }
        front++;
    }
    printf("Survivor=%d\n",q[front]);
    return 0;
}
