#include <stdio.h>
int main() {
    int n,i, a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    int idx=0;
    for(i=0;i<n;i++) if(a[i]!=0) a[idx++]=a[i];
    while(idx<n) a[idx++]=0;
    for(i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
