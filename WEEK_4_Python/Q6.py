class CNode:
    def __init__(self, data):
        self.data, self.next = data, self

def print_cll(head, n):
    cur = head
    for _ in range(n):
        print(cur.data, end=" ")
        cur = cur.next
    print()

def sorted_insert(head, val):
    node = CNode(val)
    if not head: return node
    cur = head
    if val < head.data:
        while cur.next != head:
            cur = cur.next
        cur.next = node
        node.next = head
        return node
    else:
        while cur.next != head and cur.next.data < val:
            cur = cur.next
        node.next = cur.next
        cur.next = node
        return head

# Example
head = None
for x in [10,20,30]:
    head = sorted_insert(head, x)
head = sorted_insert(head, 25)
print_cll(head, 5)   
