class CNode:
    def __init__(self, data):
        self.data, self.next = data, None

def is_circular(head):
    if not head: return True
    cur = head.next
    while cur and cur != head:
        cur = cur.next
    return cur == head

# Example
head = CNode(1); head.next = CNode(2); head.next.next = head
print("Circular" if is_circular(head) else "Not circular")
