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
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())


def count_triplets(N, grid):
    row_counts = [0]*N
    col_counts = [0]*N

    for i in range(N):
        for j in range(N):
            if grid[i][j] == 'o':
                row_counts[i] += 1
                col_counts[j] += 1

    count = 0
    for i in range(N):
        for j in range(N):
            if grid[i][j] == 'o':
                count += (row_counts[i] - 1) * (col_counts[j] - 1)

    return count


N = I()
grid = [S() for _ in range(N)]

print(count_triplets(N, grid))
