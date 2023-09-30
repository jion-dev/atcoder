#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

N = int(input())
g=[[False for _ in range(100)]for _ in range(100)]

for k in range(N):
    a,b,c,d=MI()
    for i in range(a,b):
        for j in range(c,d):
            g[i][j]=True

ans = 0
for i in range(100):
    for j in range(100):
        if g[i][j]:
            ans+=1

print(ans)
