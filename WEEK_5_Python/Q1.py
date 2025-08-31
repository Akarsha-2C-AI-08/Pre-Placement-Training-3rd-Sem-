class Stack:
    def __init__(self):
        self.arr = []
    def push(self, x): self.arr.append(x)
    def pop(self): return self.arr.pop() if self.arr else None
    def top(self): return self.arr[-1] if self.arr else None
    def is_empty(self): return len(self.arr)==0

# Example
s = Stack()
s.push(10); s.push(20)
print(s.pop())   
print(s.top())   
