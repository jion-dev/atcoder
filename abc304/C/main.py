#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

n, d = MI()
x_y = [LI() for _ in range(n)]

is_infected = [False for _ in range(n)]
is_infected[0] = True

for i in range(n):
    for j in range(n):
      if i == j:
          continue
      if not is_infected[i]:
          continue
      if is_infected[j]:
          continue
      dist = math.sqrt(pow(abs(x_y[i][0]-x_y[j][0]), 2)+pow(abs(x_y[i][1]-x_y[j][1]), 2))
      if dist <= d:
        is_infected[j] = True
for i in range(n):
    for j in range(n):
      if i == j:
          continue
      if not is_infected[i]:
          continue
      if is_infected[j]:
          continue
      dist = math.sqrt(pow(abs(x_y[i][0]-x_y[j][0]), 2)+pow(abs(x_y[i][1]-x_y[j][1]), 2))
      if dist <= d:
        is_infected[j] = True

for i in range(n):
    if is_infected[i]:
        print("Yes")
    else:
        print("No")
