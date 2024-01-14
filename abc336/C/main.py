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
digit_map = ['0', '2', '4', '6', '8']
base_5_representation = ''
N -= 1
if N == 0:
    print(0)
    exit()

while N > 0:
    N, remainder = divmod(N, 5)
    base_5_representation = digit_map[remainder] + base_5_representation

print(int(base_5_representation))
