class Node:
    def __init__(self, data):
        self.data, self.next = data, None

def print_list(head):
    cur = head
    while cur:
        print(cur.data, end=" ")
        cur = cur.next
    print()

def add_lists(l1, l2):
    carry = 0
    dummy = Node(0)
    cur = dummy
    while l1 or l2 or carry:
        v1 = l1.data if l1 else 0
        v2 = l2.data if l2 else 0
        s = v1 + v2 + carry
        carry = s // 10
        cur.next = Node(s % 10)
        cur = cur.next
        l1 = l1.next if l1 else None
        l2 = l2.next if l2 else None
    return dummy.next

# Example: 243 + 564 = 807 (stored reverse order)
a = Node(2); a.next = Node(4); a.next.next = Node(3)
b = Node(5); b.next = Node(6); b.next.next = Node(4)
res = add_lists(a, b)
print_list(res)   
