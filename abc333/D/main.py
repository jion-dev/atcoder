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


def min_operations_to_remove_root(N, edges):
    # Creating an adjacency list for the tree
    adj_list = [[] for _ in range(N + 1)]
    for u, v in edges:
        adj_list[u].append(v)
        adj_list[v].append(u)

    # Function to count the descendants of each node
    def count_descendants(node, parent):
        count = 1  # Count the node itself
        for neighbor in adj_list[node]:
            if neighbor != parent:
                count += count_descendants(neighbor, node)
        descendants[node] = count
        return count

    # Array to store the count of descendants for each node
    descendants = [0] * (N + 1)
    count_descendants(1, -1)

    # Calculate operations
    operations = 0
    while descendants[1] > 0:
        operations += 1
        # Find the leaf with the maximum descendants
        max_descendants = 0
        max_leaf = -1
        for node in range(2, N + 1):  # Start from 2 to skip the root
            if descendants[node] > max_descendants and len(adj_list[node]) == 1:
                max_descendants = descendants[node]
                max_leaf = node

        # Remove the leaf and its descendants
        to_remove = max_leaf
        while to_remove != -1:
            descendants[to_remove] = 0
            parent = -1
            for neighbor in adj_list[to_remove]:
                if descendants[neighbor] > 0:
                    parent = neighbor
                    break
            to_remove = parent

    return operations


# Example usage
N = 6
edges = [
    (1, 2), (2, 3), (2, 4), (3, 5), (3, 6)
]
print(min_operations_to_remove_root(N, edges))  # Expected output: 1
