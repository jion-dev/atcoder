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

ans = ""
for i in range(N):
    ans += str(N)

print(ans)
