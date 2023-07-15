#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

from itertools import combinations

def count_team_combinations(N, T, pairs):
    team_combinations = 0
    valid_teams = set(combinations(range(N), T))

    for pair in pairs:
        a, b = pair
        invalid_teams = set(combinations([a-1, b-1], T-1))
        valid_teams -= invalid_teams

    team_combinations = len(valid_teams)
    return team_combinations

# 入力の読み込み
N, T, M = map(int, input().split())
pairs = []

for _ in range(M):
    pair = tuple(map(int, input().split()))
    pairs.append(pair)

# チーム分けの方法の数を計算
result = count_team_combinations(N, T, pairs)

# 結果の出力
print(result)
