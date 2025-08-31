class Node:
    def __init__(self, data):
        self.data, self.next = data, None

def nth_from_end(head, n):
    fast = slow = head
    for _ in range(n):
        if not fast: return None
        fast = fast.next
    while fast:
        slow = slow.next
        fast = fast.next
    return slow.data if slow else None

# Example
head = Node(1); head.next = Node(2); head.next.next = Node(3); head.next.next.next = Node(4)
print("2nd from end:", nth_from_end(head, 2))   
