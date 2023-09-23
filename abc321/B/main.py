#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

n, x = MI()
A = LI()
A.append(0)

while (A[-1] <= 100):
  b = A
  b = sorted(A)
  s = 0
  for i in range(1, n-1): s+=b[i]
  if s >= x:
    print(A[-1])
    exit(0)
  A[-1] += 1

print(-1)
