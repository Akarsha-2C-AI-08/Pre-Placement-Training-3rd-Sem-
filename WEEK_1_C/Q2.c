#include <stdio.h>
int main() {
    int n, i;
    printf("n: "); if(scanf("%d",&n)!=1) return 0;
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    int mx = a[0];
    for(i=1;i<n;i++) if(a[i] > mx) mx = a[i];
    printf("Largest = %d\n", mx);
    return 0;
}
