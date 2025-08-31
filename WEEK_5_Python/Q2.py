class Node:
    def __init__(self, data): self.data, self.next = data, None

class Stack:
    def __init__(self): self.head = None
    def push(self, x):
        node = Node(x); node.next = self.head; self.head = node
    def pop(self):
        if not self.head: return None
        val = self.head.data; self.head = self.head.next; return val
    def top(self): return self.head.data if self.head else None

# Example
s = Stack()
s.push(5); s.push(7)
print(s.pop())  
print(s.top())  
