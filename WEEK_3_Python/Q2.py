class Node:
    def __init__(self, data):
        self.data, self.next = data, None

def print_list(head):
    cur = head
    while cur:
        print(cur.data, end=" ")
        cur = cur.next
    print()

def insert_middle(head, val, pos):
    if pos == 0:
        node = Node(val); node.next = head; return node
    cur = head
    for _ in range(pos-1):
        if not cur: return head
        cur = cur.next
    node = Node(val)
    node.next = cur.next
    cur.next = node
    return head

# Example
head = Node(1); head.next = Node(2); head.next.next = Node(4)
head = insert_middle(head, 3, 2)
print_list(head)   
