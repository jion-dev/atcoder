#! /usr/bin/env python
import bisect
import collections
import copy
import heapq
import itertools
import math
import string
import queue
import sys
def I(): return int(input())
def MI(): return map(int, input().split())
def LI(): return list(map(int, input().split()))
def St(): return input()
def MS(): return input().split()
def LS(): return list(input().split())


# N, Q = MI()
# qs = []
# prints = []
# directions = []
# # pos = [{i: 0} for i in range(1, N)]
# pos = collections.defaultdict(list)
# for i in range(1, N):
#     pos[i] = [i, 0]

# for _ in Q:
#     qt, qv = MS()
#     if (qt == "1"):
#         directions.append(qv)
#     else:
#         prints.append(qs)

# for d in directions:
#     if d == "R":

# 連結リストで求める
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


N, Q = MI()
queries = []
for _ in range(Q):
    qt, qv = MS()
    qt = int(qt)
    if qt == 2:
        qv = int(qv)
    queries.append((qt, qv))

dragon = LinkedList()
for i in range(1, N + 1):
    dragon.add_node((i, 0))

positions = [(i, 0) for i in range(1, N + 1)]
results = []

for query in queries:
    if query[0] == 1:  # Move head
        direction = query[1]
        # Move all parts to the position of the previous part
        for i in range(N - 1, 0, -1):
            positions[i] = positions[i - 1]

        # Update head position
        if direction == 'U':
            positions[0] = (positions[0][0], positions[0][1] + 1)
        elif direction == 'D':
            positions[0] = (positions[0][0], positions[0][1] - 1)
        elif direction == 'R':
            positions[0] = (positions[0][0] + 1, positions[0][1])
        elif direction == 'L':
            positions[0] = (positions[0][0] - 1, positions[0][1])
    else:  # Query part position
        part_index = query[1] - 1  # Adjusting index to zero-based
        results.append(positions[part_index])

for o in results:
    print(o[0], o[1])
