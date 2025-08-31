class Node:
    def __init__(self, data):
        self.data, self.next = data, None

def print_list(head):
    cur = head
    while cur:
        print(cur.data, end=" ")
        cur = cur.next
    print()

def insert_at_begin(head, val):
    node = Node(val)
    node.next = head
    return node

# Example
head = None
for x in [3, 2, 1]:
    head = insert_at_begin(head, x)
print_list(head)   
