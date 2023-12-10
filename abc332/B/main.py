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


def pour_water(K, G, M):
    glass = 0
    cup = 0

    for i in range(K):
        if glass == G:
            glass = 0
        elif cup == 0:
            cup = M
        else:
            transfer = min(cup, G - glass)
            glass += transfer
            cup -= transfer

    return glass, cup


K, G, M = MI()
result = pour_water(K, G, M)
print(result[0], result[1])
