#include <stdio.h>
int main() {
    int n,i; scanf("%d",&n);
    int a[100]; for(i=0;i<n;i++) scanf("%d",&a[i]);
    if(n>0){
        int last = a[n-1];
        for(i=n-1;i>0;i--) a[i]=a[i-1];
        a[0]=last;
    }
    for(i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
