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
    # ソートされた数列を取得
    sorted_A = sorted([(a, i) for i, a in enumerate(A)], key=lambda x: x[0])

    # 各要素の個数を計算
    c = collections.Counter(A)

    # 答えを格納するリストを初期化
    result = [0] * N

    # 累積和を計算
    prefix_sum = [0] * (N + 1)
    for i in range(N):
        a, _ = sorted_A[i]
        prefix_sum[i+1] = prefix_sum[i] + a

    d = collections.defaultdict()

    # 各要素に対して問題を解く
    for i in range(N):
        # print(i)
        a, original_index = sorted_A[i]
        if a in d.keys():
            result[original_index] = d[a]
        else:
            item_count = c[a]

            # A[i] より大きな要素の和を計算
            current_sum = prefix_sum[N] - prefix_sum[i+item_count]
            d[a] = current_sum
            result[original_index] = current_sum
    # 答えを空白区切りで出力
    print(*result)


# 入力の読み込み
N = I()
A = LI()

# 問題を解く関数を呼び出す
solve_problem(N, A)
