#include <stdio.h>

int main() {
    int n, a[100], x, i;
    printf("Enter n: "); scanf("%d",&n);
    printf("Enter %d elements:\n", n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter element to insert at end: "); scanf("%d",&x);
    if(n < 100) a[n++] = x;
    printf("Array now: ");
    for(i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
