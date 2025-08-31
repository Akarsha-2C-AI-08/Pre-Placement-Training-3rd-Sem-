m,n = map(int,input().split())
mat = [list(map(int,input().split())) for _ in range(m)]
trans = [[mat[j][i] for j in range(m)] for i in range(n)]
for row in trans: print(*row)
