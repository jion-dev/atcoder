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


N, L = MI()
ans = 0
A = LI()
for i in range(N):
    a = A[i]
    if a >= L:
        ans += 1

print(ans)
