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

ans = ""

for c in s:
    if c == "a" or c == "e" or c == "i" or c == "o" or c == "u":
        continue
    ans += c

print(ans)
