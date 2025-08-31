n = int(input("Degree p1: "))
p1 = list(map(int,input().split()))
m = int(input("Degree p2: "))
p2 = list(map(int,input().split()))
res = [0]*(n+m+1)
for i in range(n+1):
    for j in range(m+1):
        res[i+j] += p1[i]*p2[j]
print("Result:", *res)
