class Node:
    def __init__(self, data):
        self.data, self.next = data, None

def print_list(head):
    cur = head
    while cur:
        print(cur.data, end=" ")
        cur = cur.next
    print()

def delete_node(head, key):
    if head and head.data == key:
        return head.next
    cur = head
    while cur and cur.next:
        if cur.next.data == key:
            cur.next = cur.next.next
            break
        cur = cur.next
    return head

# Example
head = Node(1); head.next = Node(2); head.next.next = Node(3)
head = delete_node(head, 2)
print_list(head)   
