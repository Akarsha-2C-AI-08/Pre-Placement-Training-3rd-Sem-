#include <stdio.h>

int main(){
    int n,key;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&key);
    int l=0,h=n-1,mid,found=0;
    while(l<=h){
        mid=(l+h)/2;
        if(a[mid]==key){ found=1; break; }
        else if(a[mid]<key) l=mid+1;
        else h=mid-1;
    }
    if(found) printf("Found\n"); else printf("Not Found\n");
    return 0;
}