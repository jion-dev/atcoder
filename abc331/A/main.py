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


M, D = MI()
y, m, d = MI()

if m == M and d == D:
    y += 1
if d == D:
    d = 1
    if m == M:
        m = 1
    else:
        m += 1
else:
    d += 1
print(y, m, d)
