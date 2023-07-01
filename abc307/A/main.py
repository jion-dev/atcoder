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
A = LI()

ans_list = []
for i in range(n):
    sum = 0
    for j in range(7):
        sum += A[i*7+j]
    ans_list.append(sum)

print(*ans_list)
