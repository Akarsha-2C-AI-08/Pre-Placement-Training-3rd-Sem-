n = int(input("Degree of poly1: "))
p1 = list(map(int,input().split()))
m = int(input("Degree of poly2: "))
p2 = list(map(int,input().split()))
deg = max(n,m)
res = [0]*(deg+1)
for i in range(n+1): res[deg-n+i] += p1[i]
for i in range(m+1): res[deg-m+i] += p2[i]
print("Result:", *res)
