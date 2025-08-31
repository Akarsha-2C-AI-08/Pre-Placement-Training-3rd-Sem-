n = int(input("Queries: "))
lastAns = 0
seq = [[] for _ in range(n)]
for _ in range(n):
    t, x, y = map(int,input().split())
    idx = (x ^ lastAns) % n
    if t == 1:
        seq[idx].append(y)
    else:
        lastAns = seq[idx][y % len(seq[idx])]
        print(lastAns)
