#include <stdio.h>
#include <limits.h>
int main() {
    int n,i; scanf("%d",&n);
    int a[n]; for(i=0;i<n;i++) scanf("%d",&a[i]);
    /* simple O(n^2) approach to keep code short and clear */
    for(i=0;i<n;i++){
        if(a[i]==INT_MIN) continue; /* already counted */
        int cnt=1, j;
        for(j=i+1;j<n;j++){
            if(a[j]==a[i]){ cnt++; a[j]=INT_MIN; }
        }
        printf("%d occurs %d times\n", a[i], cnt);
    }
    return 0;
}
