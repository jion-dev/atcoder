#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

N, M = MI()

# 全ての可能な2人組の強さ関係を表すリストを作成
strength_relations = [[False] * N for _ in range(N)]

# 推移律を利用して強さ関係を更新
for _ in range(M):
    Ai, Bi = map(int, input().split())
    # 人Aiは人Biより強いという情報をTrueに更新
    strength_relations[Ai - 1][Bi - 1] = True

# 推移律を利用して強さ関係を更新
for k in range(N):
    for i in range(N):
        for j in range(N):
            strength_relations[i][j] = strength_relations[i][j] or (strength_relations[i][k] and strength_relations[k][j])

# 各プログラマーが何人よりも強いかを数える
counts = [sum(row) for row in strength_relations]

# 最強のプログラマーを特定する
max_strength = max(counts)
if max_strength == N - 1 and counts.count(max_strength) == 1:
    # 最強のプログラマーが1人だけ特定できる場合
    strongest_programmer = counts.index(max_strength) + 1
    print(strongest_programmer)
else:
    # 最強のプログラマーが複数いる場合または最強が1人でも全員に勝っていない場合
    print(-1)
