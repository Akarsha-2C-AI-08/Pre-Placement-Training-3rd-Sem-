#include <stdio.h>
#include <string.h>

int main(){
    char exp[100]; scanf("%s",exp);
    char st[100]; int top=-1,ok=1;
    for(int i=0;exp[i];i++){
        if(exp[i]=='('||exp[i]=='['||exp[i]=='{') st[++top]=exp[i];
        else{
            if(top==-1) {ok=0; break;}
            char c=st[top--];
            if((exp[i]==')'&&c!='(')||(exp[i]==']'&&c!='[')||(exp[i]=='}'&&c!='{')){ ok=0; break; }
        }
    }
    if(ok && top==-1) printf("Balanced\n"); else printf("Not Balanced\n");
    return 0;
}