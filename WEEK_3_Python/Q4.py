class Node:
    def __init__(self, data):
        self.data, self.next = data, None

def search(head, key):
    cur = head
    while cur:
        if cur.data == key: return True
        cur = cur.next
    return False

# Example
head = Node(1); head.next = Node(2); head.next.next = Node(3)
print("Found" if search(head, 2) else "Not Found")   
