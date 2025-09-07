from collections import deque
def first_nonrepeat(stream):
    freq={}; q=deque()
    for ch in stream:
        freq[ch]=freq.get(ch,0)+1
        q.append(ch)
        while q and freq[q[0]]>1: q.popleft()
        print(q[0] if q else -1, end=" ")
    print()

# Example
first_nonrepeat("aabc")  
