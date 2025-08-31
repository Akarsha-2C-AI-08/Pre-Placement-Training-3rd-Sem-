class Node:
    def __init__(self, data):
        self.data, self.next, self.child = data, None, None

def flatten(head):
    if not head: return None
    cur = head
    stack = []
    while cur:
        if cur.child:
            if cur.next: stack.append(cur.next)
            cur.next = cur.child
            cur.child = None
        if not cur.next and stack:
            cur.next = stack.pop()
        cur = cur.next
    return head

def print_list(head):
    cur=head
    while cur:
        print(cur.data,end=" ")
        cur=cur.next
    print()

# Example
head = Node(1); head.next = Node(2); head.next.next = Node(3)
head.next.child = Node(7); head.next.child.next = Node(8)
flat = flatten(head)
print_list(flat)   
