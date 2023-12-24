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


# answer
a, m, l, r = map(int, input().split())
l -= a
r -= a
print(r // m - (l - 1) // m)

# mine
# A, M, L, R = MI()
# def count_christmas_trees(A, M, L, R):
#     first_tree_after_L = A + ((L - A + M - 1) // M) * M

#     if first_tree_after_L > R:
#         print(0)
#         return

#     print((R - first_tree_after_L) // M + 1)


# count_christmas_trees(A, M, L, R)
