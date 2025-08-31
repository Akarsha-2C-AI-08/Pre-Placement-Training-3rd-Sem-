n = int(input())
a = list(map(int, input().split()))
if n > 0:
    a = [a[-1]] + a[:-1]
print(*a)

