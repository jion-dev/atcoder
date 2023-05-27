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
s = S()
t = S()

can = True

for i in range(N):
    u = s[i]
    v = t[i]
    if u == "l" and v == "1" or u == "1" and v == "l":
        continue
    if u == "o" and v == "0" or u == "0" and v == "o":
        continue
    if u == v:
        continue
    else:
        can = False
        break

print("Yes" if can else "No")
