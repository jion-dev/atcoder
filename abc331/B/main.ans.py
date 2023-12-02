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


def min_cost_for_eggs(N, S, M, L):
    min_cost = float('inf')

    # 各サイズのパックの購入個数を全探索
    for i in range(N+1):
        for j in range(N+1):
            for k in range(N+1):
                # 実際に購入する卵の個数
                total_eggs = i * 6 + j * 8 + k * 12

                # 購入する卵の個数が N 以上であれば金額を計算
                if total_eggs >= N:
                    cost = i * S + j * M + k * L
                    min_cost = min(min_cost, cost)

    return min_cost


# 入力の読み込み
N, S, M, L = map(int, input().split())

# 最小の金額を計算して出力
result = min_cost_for_eggs(N, S, M, L)
print(result)
