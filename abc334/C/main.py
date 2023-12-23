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
def St(): return input()
def MS(): return input().split()
def LS(): return list(input().split())


def min_weirdness_sum(N, K, A):
    # 靴下の数をNとして初期化
    socks = [0] * (N + 1)

    # 色iの靴下の数を記録
    for a in A:
        socks[a] += 1

    # dpテーブルを初期化
    dp = [float('inf')] * (N + 1)
    dp[0] = 0

    # dpを更新
    for i in range(1, N + 1):
        for j in range(1, min(i, K) + 1):
            dp[i] = min(dp[i], dp[i - j] + abs(socks[i] - j))

    return dp[N]


N, K = MI()
A = LI()

# 結果を出力
result = min_weirdness_sum(N, K, A)
print(result)
