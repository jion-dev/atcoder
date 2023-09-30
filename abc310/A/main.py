#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

n, p, q = MI()
ds = LI()

min_sum = p
for i in range(n):
    d = ds[i]
    if d+q < min_sum:
        min_sum = d+q

print(min_sum)
