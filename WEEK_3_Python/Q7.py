class Node:
    def __init__(self, data):
        self.data, self.next = data, None

def print_list(head):
    cur = head
    while cur:
        print(cur.data, end=" ")
        cur = cur.next
    print()

def remove_loop(head):
    slow = fast = head
    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next
        if slow == fast:
            slow = head
            while slow.next != fast.next:
                slow = slow.next
                fast = fast.next
            fast.next = None
            return head
    return head

# Example
head = Node(1); head.next = Node(2); head.next.next = Node(3)
head.next.next.next = head.next   # loop
head = remove_loop(head)
print_list(head)   # 1 2 3
