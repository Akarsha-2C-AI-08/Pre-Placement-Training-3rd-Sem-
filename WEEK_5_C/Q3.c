#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){
    char s[MAX]; scanf("%s",s);
    char st[MAX]; int top=-1;
    for(int i=0;s[i];i++) st[++top]=s[i];
    while(top>=0) printf("%c",st[top--]);
    return 0;
}