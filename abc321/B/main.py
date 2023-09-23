#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

def calculate_score(N, X, A):
    min_s = min(A)
    max_s = max(A)
    sum_A = sum(A)
    sum_A_except_min_mum = sum_A - min_s-max_s
    if sum_A_except_min_mum > 100:
      total_s = X - sum_A_except_min_mum
      return total_s
    else:
        if max_s >= X:
          sum_A -= max_s
          return X - sum_A
        else:
          return -1

# 入力を受け取る
N, X = map(int, input().split())
A = list(map(int, input().split()))

# 最小スコアを計算して出力
result = calculate_score(N, X, A)
print(result)
