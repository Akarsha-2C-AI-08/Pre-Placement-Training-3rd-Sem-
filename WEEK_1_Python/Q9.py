n = int(input())
a = list(map(int, input().split()))
used = set()
for x in a:
    if x not in used:
        print(x, "occurs", a.count(x), "times")
        used.add(x)
