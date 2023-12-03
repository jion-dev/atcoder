#! /usr/bin/env python
import bisect
import collections
import copy
import heapq
import itertools
import math
import string
import queue
import sys
def I(): return int(input())
def MI(): return map(int, input().split())
def LI(): return list(map(int, input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())


def solve_problem(N, A):
    M = 1000005
    indices = [[] for _ in range(M)]
    for i in range(N):
        indices[A[i]].append(i)
    ans = [0]*N
    now = 0
    for x in range(M-1, 0, -1):
        for i in indices[x]:
            ans[i] = now
        now += x*len(indices[x])
    print(*ans)


# 入力の読み込み
N = I()
A = LI()

# 問題を解く関数を呼び出す
solve_problem(N, A)
