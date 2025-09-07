class Queue:
    def __init__(self): self.q=[]
    def enqueue(self,x): self.q.append(x)
    def dequeue(self): return self.q.pop(0) if self.q else None
    def front(self): return self.q[0] if self.q else None

# Example
q=Queue()
q.enqueue(10); q.enqueue(20)
print(q.dequeue()) 
print(q.front())   
