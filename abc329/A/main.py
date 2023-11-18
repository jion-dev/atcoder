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

for i in range(len(s)):
  if i != len(s) - 1:
    print(s[i], end=' ')
  else:
    print(s[i])
