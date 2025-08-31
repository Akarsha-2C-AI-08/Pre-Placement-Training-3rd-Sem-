n = int(input("Enter n: "))
mat = [list(map(int, input().split())) for _ in range(n)]
rot = list(zip(*mat[::-1]))
for row in rot: print(*row)
