from collections import deque
def reverse_k(q,k):
    stack=[]
    for _ in range(k): stack.append(q.popleft())
    while stack: q.append(stack.pop())
    for _ in range(len(q)-k): q.append(q.popleft())
    return q

# Example
q=deque([1,2,3,4,5])
print(list(reverse_k(q,3)))  
