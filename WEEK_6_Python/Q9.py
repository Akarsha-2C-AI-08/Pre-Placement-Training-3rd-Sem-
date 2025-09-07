from collections import deque
def oranges(grid):
    m,n=len(grid),len(grid[0])
    q=deque(); fresh=0
    for i in range(m):
        for j in range(n):
            if grid[i][j]==2: q.append((i,j,0))
            elif grid[i][j]==1: fresh+=1
    t=0
    while q:
        i,j,t=q.popleft()
        for x,y in [(1,0),(-1,0),(0,1),(0,-1)]:
            ni,nj=i+x,j+y
            if 0<=ni<m and 0<=nj<n and grid[ni][nj]==1:
                grid[ni][nj]=2; fresh-=1
                q.append((ni,nj,t+1))
    return -1 if fresh else t

# Example
g=[[2,1,1],[1,1,0],[0,1,1]]
print(oranges(g))  
