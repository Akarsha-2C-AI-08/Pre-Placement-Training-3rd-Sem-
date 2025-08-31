n = int(input())
a = list(map(int, input().split()))
ok = all(a[i] <= a[i+1] for i in range(n-1))
print("Sorted" if ok else "Not sorted")
