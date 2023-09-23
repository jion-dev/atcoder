#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())
s = S()

target = 10
can = True
for c in s:
  if int(c) >= target:
    can = False
    break
  target = int(c)

print("Yes" if can else "No")
