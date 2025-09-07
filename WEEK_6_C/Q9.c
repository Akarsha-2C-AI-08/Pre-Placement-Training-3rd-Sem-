#include <stdio.h>
#include <stdlib.h>

struct Item{ int i,j,t; };

int main(){
    int g[3][3]={{2,1,1},{1,1,0},{0,1,1}};
    struct Item q[20]; int front=0,rear=-1,fresh=0,m=3,n=3;
    for(int i=0;i<m;i++) for(int j=0;j<n;j++){
        if(g[i][j]==2) q[++rear]=(struct Item){i,j,0};
        if(g[i][j]==1) fresh++;
    }
    int time=0;
    while(front<=rear){
        struct Item x=q[front++];
        int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};
        for(int k=0;k<4;k++){
            int ni=x.i+di[k],nj=x.j+dj[k];
            if(ni>=0&&nj>=0&&ni<m&&nj<n&&g[ni][nj]==1){
                g[ni][nj]=2; fresh--; q[++rear]=(struct Item){ni,nj,x.t+1};
                time=x.t+1;
            }
        }
    }
    if(fresh) printf("-1\n"); else printf("%d\n",time);
    return 0;
}