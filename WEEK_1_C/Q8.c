#include <stdio.h>
#include <string.h>
int main() {
    char s[201];
    scanf("%200s", s);
    int i, n = strlen(s), ok = 1;
    for(i=0;i<n/2;i++) if(s[i] != s[n-1-i]) { ok = 0; break; }
    if(ok) printf("Palindrome\n"); else printf("Not Palindrome\n");
    return 0;
}
