#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

N, M = MI()

a_mn = [LI() for _ in range(M)]

pairs = collections.defaultdict(list)

for i in range(M):
    for j in range(N-1):
        left = a_mn[i][j]
        right = a_mn[i][j+1]
        if right not in pairs[left]:
          pairs[left].append(right)
        if left not in pairs[right]:
          pairs[right].append(left)

hate_pairs = collections.defaultdict(list)
for i in range (1, N+1):
  for j in range (1, N+1):
    if i == j:
      continue
    if j in pairs[i] or hate_pairs.get(j) != None and i in hate_pairs[j]:
      continue
    hate_pairs[i].append(j)


print(len(hate_pairs))
