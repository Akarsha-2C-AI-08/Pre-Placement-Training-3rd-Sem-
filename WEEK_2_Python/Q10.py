m,n = map(int,input().split())
mat = [list(map(int,input().split())) for _ in range(m)]
cnt = sum(row.count(0) for row in mat)
print("Zeros:", cnt)
2