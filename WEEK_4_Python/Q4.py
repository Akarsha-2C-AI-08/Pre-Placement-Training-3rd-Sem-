class CNode:
    def __init__(self, data):
        self.data, self.next = data, self

def print_cll(head, n):
    cur = head
    for _ in range(n):
        print(cur.data, end=" ")
        cur = cur.next
    print()

def insert_end(head, val):
    node = CNode(val)
    if not head: return node
    cur = head
    while cur.next != head:
        cur = cur.next
    cur.next = node
    node.next = head
    return head

# Example
head = None
for x in [1,2,3]:
    head = insert_end(head, x)
print_cll(head, 6)  
