#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    int a[n],st[n],top=-1,res[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=n-1;i>=0;i--){
        while(top!=-1 && st[top]<=a[i]) top--;
        res[i]=(top==-1)?-1:st[top];
        st[++top]=a[i];
    }
    for(int i=0;i<n;i++) printf("%d ",res[i]);
    return 0;
}