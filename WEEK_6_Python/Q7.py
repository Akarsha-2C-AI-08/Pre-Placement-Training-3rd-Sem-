from collections import deque
def interleave(q):
    half=len(q)//2; first=deque()
    for _ in range(half): first.append(q.popleft())
    while first:
        q.append(first.popleft()); q.append(q.popleft())
    return q

# Example
q=deque([1,2,3,4])
print(list(interleave(q))) 
