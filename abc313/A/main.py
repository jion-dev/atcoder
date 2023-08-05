#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

N = I()
Ps = LI()

max_p = max(Ps)

max_p_cnt = 0

for i in range(N):
    if Ps[i] == max_p:
        max_p_cnt+=1

x = 0
if max_p_cnt > 1 and max_p == Ps[0]:
  x = 1
elif max_p == Ps[0]:
  x = 0
else:
  x = max_p+1-Ps[0]


print(x)
