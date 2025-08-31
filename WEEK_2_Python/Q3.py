n = int(input())
mat = [list(map(int, input().split())) for _ in range(n)]
main = sum(mat[i][i] for i in range(n))
sec  = sum(mat[i][n-1-i] for i in range(n))
print("Main =", main, "Secondary =", sec)
