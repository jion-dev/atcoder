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
Cs = []
As = []
for i in range(N):
    c = I()
    Cs.append(c)
    Ais = LI()
    As.append(Ais)
X = I()


d = collections.defaultdict(list)

for i in range(N):
    c = Cs[i]
    for j in range(c):
        if As[i][j] == X:
            d[i+1] = c

if len(d) == 0:
    print(0)
    exit()

min_v = min(d.values())

ans_list = []
for k, v in d.items():
    if v == min_v:
        ans_list.append(k)

print(len(ans_list))
print(*ans_list)
