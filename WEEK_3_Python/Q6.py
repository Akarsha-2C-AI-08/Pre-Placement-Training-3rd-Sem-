class Node:
    def __init__(self, data):
        self.data, self.next = data, None

def detect_loop(head):
    slow = fast = head
    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next
        if slow == fast: return True
    return False

# Example
head = Node(1); head.next = Node(2); head.next.next = Node(3)
head.next.next.next = head  
print("Loop detected" if detect_loop(head) else "No loop")
