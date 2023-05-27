#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

n, m, h, k = MI()
s = S()
items = collections.defaultdict(list)
for _ in range(m):
  x, y = MI()
  items[x].append(y)

count = 0
x, y = 0, 0

for i in range(n):
    h -= 1
    if h < 0:
      break

    s_i = s[i]
    if s_i == "R":
      x+=1
    elif s_i == "L":
      x-=1
    elif s_i == "U":
      y+=1
    elif s_i == "D":
      y-=1

    if y in items[x] and h < k:
      h = k
    count+=1

print("Yes" if count == n else "No")
