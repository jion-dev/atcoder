#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

pi = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679"

N = I()
pi_str = pi[2:]
ans = "3."
for i in pi_str:
    if N == 0:
        break
    ans += i
    N-=1

print(ans)
