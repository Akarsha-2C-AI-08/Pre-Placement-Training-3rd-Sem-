class DNode:
    def __init__(self, data):
        self.data, self.prev, self.next = data, None, None

def print_dll(head):
    cur = head
    while cur:
        print(cur.data, end=" ")
        cur = cur.next
    print()

def delete_node(head, key):
    cur = head
    while cur:
        if cur.data == key:
            if cur.prev: cur.prev.next = cur.next
            if cur.next: cur.next.prev = cur.prev
            if cur == head: head = cur.next
            break
        cur = cur.next
    return head

# Example
head = DNode(1); head.next = DNode(2); head.next.prev = head; head.next.next = DNode(3); head.next.next.prev = head.next
head = delete_node(head, 2)
print_dll(head)   
