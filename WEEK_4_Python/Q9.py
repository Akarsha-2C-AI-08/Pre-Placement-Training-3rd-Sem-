class Node:
    def __init__(self, data):
        self.data, self.next = data, None

def get_length(head):
    l = 0
    while head:
        l += 1
        head = head.next
    return l

def intersection(head1, head2):
    l1, l2 = get_length(head1), get_length(head2)
    if l1 > l2:
        for _ in range(l1-l2): head1 = head1.next
    else:
        for _ in range(l2-l1): head2 = head2.next
    while head1 and head2:
        if head1 == head2: return head1.data
        head1, head2 = head1.next, head2.next
    return None

# Example
common = Node(30); common.next = Node(40)
a = Node(10); a.next = Node(20); a.next.next = common
b = Node(15); b.next = common
print("Intersection:", intersection(a,b))   
