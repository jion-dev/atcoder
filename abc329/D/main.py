#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

from collections import defaultdict

# 入力を受け取る
N, M = map(int, input().split())
votes = list(map(int, input().split()))

# 各候補者の得票数を管理する辞書
vote_count = defaultdict(int)

# 最も得票数が多い候補者とその得票数を保持する変数
max_votes_candidate = None
max_votes = 0

# 各票を順に開票して当選者を更新し、結果を出力する
for i in range(M):
    candidate = votes[i]
    vote_count[candidate] += 1

    # 得票数が最も多い候補者を更新
    if vote_count[candidate] > max_votes or (vote_count[candidate] == max_votes and candidate < max_votes_candidate):
        max_votes_candidate = candidate
        max_votes = vote_count[candidate]

    # 結果を出力
    print(max_votes_candidate)
