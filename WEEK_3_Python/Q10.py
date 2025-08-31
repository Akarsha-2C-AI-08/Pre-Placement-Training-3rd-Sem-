class Node:
    def __init__(self, data):
        self.data, self.next = data, None

def print_list(head):
    cur = head
    while cur:
        print(cur.data, end=" ")
        cur = cur.next
    print()

# Example
head = Node(1); head.next = Node(2); head.next.next = Node(3)
print_list(head)   
