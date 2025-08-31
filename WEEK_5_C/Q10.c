#include <stdio.h>
#define MAX 100

int main(){
    int st[MAX],minst[MAX],top=-1,mtop=-1;
    int a[]={3,5,2,1,4},n=5;
    for(int i=0;i<n;i++){
        st[++top]=a[i];
        if(mtop==-1||a[i]<=minst[mtop]) minst[++mtop]=a[i];
    }
    printf("Min=%d\n",minst[mtop]); // current minimum
    return 0;
}