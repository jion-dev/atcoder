#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

N, M, P = MI()

count = 0
can_see_day = M
while can_see_day <= N:
    count+=1
    can_see_day = M+P*count

print(count)
