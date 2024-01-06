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


N = I()
combinations = []
for x in range(N + 1):
    for y in range(N + 1):
        for z in range(N + 1):
            if x + y + z <= N:
                combinations.append([x, y, z])
sorted_comb = sorted(combinations)

for c in combinations:
    print(*c)
