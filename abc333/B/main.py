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


S = St()
T = St()

S1 = S[0]
S2 = S[1]
T1 = T[0]
T2 = T[1]

# 正五角形の頂点をリストで定義
vertices = ['A', 'B', 'C', 'D', 'E']

# 各頂点から隣接する2つの頂点へのマッピング
adjacent = {
    'A': ['B', 'E'],
    'B': ['A', 'C'],
    'C': ['B', 'D'],
    'D': ['C', 'E'],
    'E': ['D', 'A']
}

# 与えられた2点が隣接しているかを判定する関数


def is_adjacent(v1, v2):
    return v2 in adjacent[v1]


# S1-S2 と T1-T2 の線分がどちらも辺か対角線かを判定
is_S1_S2_edge = is_adjacent(S1, S2)
is_T1_T2_edge = is_adjacent(T1, T2)

# 両方の線分が辺か、両方が対角線の場合には等しい（Yes）と判定
print("Yes" if is_S1_S2_edge == is_T1_T2_edge else "No")
