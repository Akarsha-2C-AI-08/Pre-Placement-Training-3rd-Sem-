class DNode:
    def __init__(self, data):
        self.data, self.prev, self.next = data, None, None

def print_dll(head):
    cur = head
    while cur:
        print(cur.data, end=" ")
        cur = cur.next
    print()

def reverse_dll(head):
    cur = head
    prev = None
    while cur:
        cur.prev, cur.next = cur.next, cur.prev
        prev = cur
        cur = cur.prev
    return prev

# Example
head = DNode(1); head.next = DNode(2); head.next.prev = head; head.next.next = DNode(3); head.next.next.prev = head.next
head = reverse_dll(head)
print_dll(head)   
