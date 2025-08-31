#include <stdio.h>
#include <string.h>
int main() {
    char s[201];
    scanf("%200s", s);       /* reads up to whitespace */
    int i, j = strlen(s)-1;
    for(i=0;i<j;i++,j--){
        char t = s[i]; s[i]=s[j]; s[j]=t;
    }
    printf("%s\n", s);
    return 0;
}
