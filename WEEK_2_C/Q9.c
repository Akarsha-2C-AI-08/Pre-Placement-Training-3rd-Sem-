#include <stdio.h>

int main(){
    char s[100];
    scanf("%s",s);
    int len=0;
    while(s[len]!='\0') len++;
    printf("Length=%d\n",len);
    return 0;
}