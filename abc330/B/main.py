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


def find_X(N, L, R, A):
    result = []
    for i in range(N):
        if A[i] < L:
            result.append(L)
        elif A[i] > R:
            result.append(R)
        else:
            result.append(A[i])
    return result


n, l, r = MI()
A = LI()

result = find_X(n, l, r, A)
print(*result)
