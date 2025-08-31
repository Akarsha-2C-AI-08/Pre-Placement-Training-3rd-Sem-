n = int(input())
a = list(map(int, input().split()))
a = list(set(a))       # remove duplicates
a.sort()
if len(a) < 2:
    print("No second largest")
else:
    print("Second largest =", a[-2])
    