#include <stdio.h>
#include <ctype.h>
#define MAX 100

int prec(char c){ if(c=='+'||c=='-') return 1; if(c=='*'||c=='/') return 2; return 0; }

int main(){
    char exp[MAX]; scanf("%s",exp);
    char st[MAX]; int top=-1;
    for(int i=0;exp[i];i++){
        if(isalnum(exp[i])) printf("%c",exp[i]);
        else if(exp[i]=='(') st[++top]=exp[i];
        else if(exp[i]==')'){ while(st[top]!='(') printf("%c",st[top--]); top--; }
        else{
            while(top!=-1 && prec(st[top])>=prec(exp[i])) printf("%c",st[top--]);
            st[++top]=exp[i];
        }
    }
    while(top!=-1) printf("%c",st[top--]);
    return 0;
}