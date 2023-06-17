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
As = LI()

# {
#     1: [1,2,9],
#     2: [4,6,7],
#     3: [3,5,8]
# }
pos = collections.defaultdict(list)

for i in range(3*n):
    pos[As[i]].append(i+1)

f_dict = collections.defaultdict(int)
for i in range(n):
    f_dict[i+1] = pos[i+1][1]

sorted_f = sorted(f_dict.items(), key = lambda f : f[1])
ans = []
for i in range(n):
    ans.append(sorted_f[i][0])

print(*ans)
