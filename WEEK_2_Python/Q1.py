m, n = map(int, input("Enter rows cols: ").split())
mat = [list(map(int, input().split())) for _ in range(m)]

top, left, bottom, right = 0, 0, m-1, n-1
spiral = []
while top <= bottom and left <= right:
    for i in range(left, right+1): spiral.append(mat[top][i])
    top += 1
    for i in range(top, bottom+1): spiral.append(mat[i][right])
    right -= 1
    if top <= bottom:
        for i in range(right, left-1, -1): spiral.append(mat[bottom][i])
        bottom -= 1
    if left <= right:
        for i in range(bottom, top-1, -1): spiral.append(mat[i][left])
        left += 1
print(*spiral)
