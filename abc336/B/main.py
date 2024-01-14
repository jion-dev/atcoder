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
bin = bin(N)

cnt = 0
for i in range(len(bin)-1, -1, -1):
    if bin[i] == "1":
        break
    cnt += 1

print(cnt)
