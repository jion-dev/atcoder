#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

def max_satisfaction(N, flavors):
    max_diff_satisfaction = 0
    max_same_satisfaction = 0

    max_s1 = 0
    max_f1 = 0
    for f, s in flavors:
        if max_s1 < s:
            max_s1 = s
            max_f1 = f

    max_s2_same_max_f1 = 0
    for f, s in flavors:
        if f == max_f1 and s != max_s1:
          if max_s2_same_max_f1 < s:
              max_s2_same_max_f1 = s
    max_same_satisfaction = max(max_s1 + max_s2_same_max_f1//2, max_s2_same_max_f1+max_s1//2)

    max_s2_diff_max_f1 = 0
    for f, s in flavors:
        if f == max_f1:
            continue
        if max_s2_diff_max_f1 < s:
            max_s2_diff_max_f1 = s
    max_diff_satisfaction = max_s1 + max_s2_diff_max_f1

    return max(max_diff_satisfaction, max_same_satisfaction)

# 入力を受け取る
N = int(input())
flavors = []
for _ in range(N):
    F, S = map(int, input().split())
    flavors.append((F, S))

# 最大の満足度を計算して出力
result = max_satisfaction(N, flavors)
print(result)
