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

if N <= 10**3 -1:
    print(N)
elif N <= 10**4 -1:
    print(math.floor(N / 10) * 10)
elif N <= 10**5 -1:
    print(math.floor(N / 100) * 100)
elif N <= 10**6 -1:
    print(math.floor(N / 1000) * 1000)
elif N <= 10**7 -1:
    print(math.floor(N / 10000) * 10000)
elif N <= 10**8 -1:
    print(math.floor(N / 100000) * 100000)
elif N <= 10**9 -1:
    print(math.floor(N / 1000000) * 1000000)
