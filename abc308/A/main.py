#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

s8 = LI()
can = True
pre = -1
for i in range(8):
    s = s8[i]
    if not (100 <= s <= 675):
        can = False
        break
    if not (s % 25 == 0):
        can = False
        break
    if s < pre:
        can = False
        break
    pre = s

print("Yes" if can else "No")
