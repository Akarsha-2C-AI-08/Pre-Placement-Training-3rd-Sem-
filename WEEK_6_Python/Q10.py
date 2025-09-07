s1,s2=[],[]
q=int(input())
for _ in range(q):
    cmd=input().split()
    if cmd[0]=="1": s1.append(int(cmd[1]))
    elif cmd[0]=="2":
        if not s2:
            while s1: s2.append(s1.pop())
        s2.pop()
    else:
        if not s2:
            while s1: s2.append(s1.pop())
        print(s2[-1])
