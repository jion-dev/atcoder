#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

def calc_avg(n, A):
    avg = sum(A)//n
    return avg

# 入力を受け取る
N = int(input())
A = list(map(int, input().split()))

avg = calc_avg(N, A)
less_avg = [i for i in A if i <= avg]
more_avg = [i for i in A if i >= avg]
less_count = 0
for i in range(len(less_avg)):
    p = less_avg[i]
    less_count += avg-p
more_count = 0
for i in range(len(more_avg)):
    p = more_avg[i]
    more_count += p-avg

ans = (less_count+more_count)//2
print(ans)
