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


# 入力を受け取る
D = int(input())

x = int(math.sqrt(D))
y = x
while x * x + y * y < D:
    y += 1
while x * x + y * y > D:
    x -= 1
result = abs(x * x + y * y - D)
print(result)
