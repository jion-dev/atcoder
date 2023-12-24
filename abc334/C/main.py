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


N, K = MI()
A = LI()
cnt = [2]*N

for i in range(K):
    a = A[i]
    a -= 1
    cnt[a] -= 1

x = []
for i in range(N):
    for j in range(cnt[i]):
        x.append(i)

n = len(x)
if n % 2 == 0:
    ans = 0
    for i in range(n//2):
        ans += x[i*2+1]-x[i*2]
    print(ans)
else:
    now = 0
    for i in range(n//2):
        now += x[i*2+2]-x[i*2+1]
    ans = now
    for i in range(2, n, 2):
        now += x[i-1]-x[i-2]
        now -= x[i]-x[i-1]
        ans = min(ans, now)
    print(ans)
