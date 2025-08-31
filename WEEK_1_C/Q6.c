#include <stdio.h>
int main() {
    int n,i; scanf("%d",&n);
    int a[n]; for(i=0;i<n;i++) scanf("%d",&a[i]);
    int ok = 1;
    for(i=1;i<n;i++) if(a[i] < a[i-1]) { ok = 0; break; }
    if(ok) printf("Sorted\n"); else printf("Not sorted\n");
    return 0;
}
