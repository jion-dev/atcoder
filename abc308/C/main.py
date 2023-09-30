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
index_prob = collections.defaultdict()
for i in range(N):
    a, b = MI()
    index_prob[i+1] = a / (a+b)

index_prob = sorted(index_prob.items(), key = lambda item : item[1], reverse=True)

ans = []
for k, _ in index_prob:
    ans.append(k)

print(*ans)
