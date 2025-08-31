#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    int price[n],span[n],st[n],top=-1;
    for(int i=0;i<n;i++) scanf("%d",&price[i]);
    for(int i=0;i<n;i++){
        while(top!=-1 && price[st[top]]<=price[i]) top--;
        span[i]=(top==-1)?i+1:i-st[top];
        st[++top]=i;
    }
    for(int i=0;i<n;i++) printf("%d ",span[i]);
    return 0;
}