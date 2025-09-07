#include <stdio.h>
#include <string.h>

int main(){
    char s[100]; scanf("%s",s);
    int freq[256]={0},q[100],front=0,rear=-1;
    for(int i=0;s[i];i++){
        freq[s[i]]++; q[++rear]=s[i];
        while(front<=rear && freq[q[front]]>1) front++;
        if(front<=rear) printf("%c ",q[front]); else printf("-1 ");
    }
    return 0;
}