#include <stdio.h>
#define MAX 5

int main(){
    int stack[MAX],top=-1;
    top++; stack[top]=10;
    top++; stack[top]=20;
    printf("Popped=%d\n",stack[top--]);
    printf("Top=%d\n",stack[top]);
    return 0;
}
