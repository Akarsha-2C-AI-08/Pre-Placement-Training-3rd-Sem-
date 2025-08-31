#include <stdio.h>

int main(){
    char s[100];
    scanf("%s",s);
    int i=0,j;
    for(j=0;s[j]!='\0';j++);
    j--;
    int pal=1;
    while(i<j){
        if(s[i]!=s[j]){ pal=0; break; }
        i++; j--;
    }
    if(pal) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}