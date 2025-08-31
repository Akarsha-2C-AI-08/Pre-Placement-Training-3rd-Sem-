#include <stdio.h>
#include <ctype.h>

int main(){
    char exp[100]; scanf("%s",exp);
    int st[100],top=-1;
    for(int i=0;exp[i];i++){
        if(isdigit(exp[i])) st[++top]=exp[i]-'0';
        else{
            int b=st[top--],a=st[top--];
            switch(exp[i]){
                case '+': st[++top]=a+b; break;
                case '-': st[++top]=a-b; break;
                case '*': st[++top]=a*b; break;
                case '/': st[++top]=a/b; break;
            }
        }
    }
    printf("Result=%d\n",st[top]);
    return 0;
}