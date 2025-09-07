class Node:
    def __init__(self,data): self.data,self.next=data,None

class Queue:
    def __init__(self): self.front_node=self.rear=None
    def enqueue(self,x):
        node=Node(x)
        if not self.rear: self.front_node=self.rear=node
        else: self.rear.next=node; self.rear=node
    def dequeue(self):
        if not self.front_node: return None
        val=self.front_node.data
        self.front_node=self.front_node.next
        if not self.front_node: self.rear=None
        return val

# Example
q=Queue(); q.enqueue(1); q.enqueue(2)
print(q.dequeue())  
print(q.dequeue())  
