#include <stdio.h>

int main(){
    int n,key,i,found=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){ found=1; break; }
    }
    if(found) printf("Found at index %d\n",i);
    else printf("Not found\n");
    return 0;
}
