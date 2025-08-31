n = int(input())
a = list(map(int, input().split()))
res = [x for x in a if x != 0] + [0]*(a.count(0))
print(*res)