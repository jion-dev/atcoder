class Node:
    def __init__(self, value, next_node=None):
        self.value = value
        self.next_node = next_node


class LinkedList:
    def __init__(self):
        self.head = None

    def add_node(self, value):
        if not self.head:
            self.head = Node(value)
        else:
            current = self.head
            while current.next_node:
                current = current.next_node
            current.next_node = Node(value)

    def get_node(self, position):
        current = self.head
        for _ in range(position - 1):
            if current:
                current = current.next_node
        return current.value if current else None

    def update_head(self, new_value):
        if self.head:
            old_head = self.head.value
            self.head.value = new_value
            return old_head
        return None
