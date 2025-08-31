#include <stdio.h>
#define MAX 10

int main(){
    int st[MAX]; int top1=-1, top2=MAX;
    st[++top1]=1; st[++top1]=2;
    st[--top2]=100; st[--top2]=200;
    printf("Stack1 top=%d\n",st[top1]);
    printf("Stack2 top=%d\n",st[top2]);
    return 0;
}