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


def is_transformable(A, B):
    sorted_rows_A = sorted(tuple(sorted(row)) for row in A)
    sorted_rows_B = sorted(tuple(sorted(row)) for row in B)
    sorted_cols_A = sorted(tuple(sorted(col)) for col in zip(*A))
    sorted_cols_B = sorted(tuple(sorted(col)) for col in zip(*B))

    return sorted_rows_A == sorted_rows_B and sorted_cols_A == sorted_cols_B


def min_swaps_to_match(A, B):
    # Check for rows
    row_swaps = sum([1 for a, b in zip(A, B) if a != b])

    # Check for columns
    col_swaps = sum([1 for a, b in zip(zip(*A), zip(*B)) if a != b])

    return min(row_swaps, col_swaps)


H, W = map(int, input().split())
A = [LI() for _ in range(H)]
B = [LI() for _ in range(H)]

if not is_transformable(A, B):
    print(-1)
else:
    print(min_swaps_to_match(A, B))
