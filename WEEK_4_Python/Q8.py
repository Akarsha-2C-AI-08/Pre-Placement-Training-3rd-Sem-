class Node:
    def __init__(self, data):
        self.data, self.next = data, None

def print_list(head):
    cur = head
    while cur:
        print(cur.data, end=" ")
        cur = cur.next
    print()

def pairwise_swap(head):
    cur = head
    while cur and cur.next:
        cur.data, cur.next.data = cur.next.data, cur.data
        cur = cur.next.next
    return head

# Example
head = Node(1); head.next = Node(2); head.next.next = Node(3); head.next.next.next = Node(4)
head = pairwise_swap(head)
print_list(head)   
