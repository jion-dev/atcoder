#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

n = I()
s = S()

A, B, C = False, False, False
for i in range(n):
    c = s[i]
    if c == "A" and not A:
        A = True
    elif c == "B" and not B:
        B = True
    elif c == "C" and not C:
        C = True

    if A and B and C:
        print(i+1)
        break
