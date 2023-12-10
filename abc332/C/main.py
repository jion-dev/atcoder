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


N, M = MI()
S = St()

need = 0
muji = M
logo = 0
for c in S:
    i = int(c)
    if i == 0:
        muji = M
        logo = need
    elif i == 1:
        if muji > 0:
            muji -= 1
        else:
            if logo == 0:
                need += 1
            else:
                logo -= 1
    else:
        if logo == 0:
            need += 1
        else:
            logo -= 1

print(need)
