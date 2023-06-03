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

dic = collections.defaultdict(int)
min_age = 10**9+1
s_a = collections.deque()
for i in range(n):
    s, a = MS()
    s_a.append([s, int(a)])
    min_age = min(min_age, int(a))

ans_list = []
found_min_age = False
while s_a:
    item = s_a.popleft()
    if item[1] == min_age:
        found_min_age = True
        ans_list.append(item[0])
        continue
    if not found_min_age and min_age != item[1]:
        s_a.append(item)
    else:
        ans_list.append(item[0])

for person in ans_list:
    print(person)
