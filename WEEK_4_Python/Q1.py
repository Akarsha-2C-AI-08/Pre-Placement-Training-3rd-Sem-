class DNode:
    def __init__(self, data):
        self.data, self.prev, self.next = data, None, None

def print_dll(head):
    cur = head
    while cur:
        print(cur.data, end=" ")
        cur = cur.next
    print()

def insert_begin(head, val):
    node = DNode(val)
    if head:
        node.next = head
        head.prev = node
    return node

# Example
head = None
for x in [3,2,1]:
    head = insert_begin(head, x)
print_dll(head)  
