m,n = map(int,input().split())
mat = [list(map(int,input().split())) for _ in range(m)]
zeros = sum(row.count(0) for row in mat)
total = m*n
print("Sparse" if zeros > total/2 else "Not Sparse")
