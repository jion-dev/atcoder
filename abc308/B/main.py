#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())
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
C = LS()
D = LS()
P = LI()

sum = 0

for i in range(N):
    c = C[i]
    color_index = -1
    for j in range(M):
        d = D[j]
        if c == d:
            color_index = j
            break
    price = P[color_index+1] if color_index != -1 else P[0]
    sum += price

print(sum)
